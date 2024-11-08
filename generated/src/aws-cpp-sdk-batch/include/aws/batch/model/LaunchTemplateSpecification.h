/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/LaunchTemplateSpecificationOverride.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Batch
{
namespace Model
{

  /**
   * <p>An object that represents a launch template that's associated with a compute
   * resource. You must specify either the launch template ID or launch template name
   * in the request, but not both.</p> <p>If security groups are specified using both
   * the <code>securityGroupIds</code> parameter of
   * <code>CreateComputeEnvironment</code> and the launch template, the values in the
   * <code>securityGroupIds</code> parameter of <code>CreateComputeEnvironment</code>
   * will be used.</p>  <p>This object isn't applicable to jobs that are
   * running on Fargate resources.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/LaunchTemplateSpecification">AWS
   * API Reference</a></p>
   */
  class LaunchTemplateSpecification
  {
  public:
    AWS_BATCH_API LaunchTemplateSpecification();
    AWS_BATCH_API LaunchTemplateSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API LaunchTemplateSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the launch template.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const{ return m_launchTemplateId; }
    inline bool LaunchTemplateIdHasBeenSet() const { return m_launchTemplateIdHasBeenSet; }
    inline void SetLaunchTemplateId(const Aws::String& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = value; }
    inline void SetLaunchTemplateId(Aws::String&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::move(value); }
    inline void SetLaunchTemplateId(const char* value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId.assign(value); }
    inline LaunchTemplateSpecification& WithLaunchTemplateId(const Aws::String& value) { SetLaunchTemplateId(value); return *this;}
    inline LaunchTemplateSpecification& WithLaunchTemplateId(Aws::String&& value) { SetLaunchTemplateId(std::move(value)); return *this;}
    inline LaunchTemplateSpecification& WithLaunchTemplateId(const char* value) { SetLaunchTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the launch template.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const{ return m_launchTemplateName; }
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }
    inline void SetLaunchTemplateName(const Aws::String& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = value; }
    inline void SetLaunchTemplateName(Aws::String&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::move(value); }
    inline void SetLaunchTemplateName(const char* value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName.assign(value); }
    inline LaunchTemplateSpecification& WithLaunchTemplateName(const Aws::String& value) { SetLaunchTemplateName(value); return *this;}
    inline LaunchTemplateSpecification& WithLaunchTemplateName(Aws::String&& value) { SetLaunchTemplateName(std::move(value)); return *this;}
    inline LaunchTemplateSpecification& WithLaunchTemplateName(const char* value) { SetLaunchTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the launch template, <code>$Default</code>, or
     * <code>$Latest</code>.</p> <p>If the value is <code>$Default</code>, the default
     * version of the launch template is used. If the value is <code>$Latest</code>,
     * the latest version of the launch template is used. </p>  <p>If the
     * AMI ID that's used in a compute environment is from the launch template, the AMI
     * isn't changed when the compute environment is updated. It's only changed if the
     * <code>updateToLatestImageVersion</code> parameter for the compute environment is
     * set to <code>true</code>. During an infrastructure update, if either
     * <code>$Default</code> or <code>$Latest</code> is specified, Batch re-evaluates
     * the launch template version, and it might use a different version of the launch
     * template. This is the case even if the launch template isn't specified in the
     * update. When updating a compute environment, changing the launch template
     * requires an infrastructure update of the compute environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p> 
     * <p>Default: <code>$Default</code> </p> <p>Latest: <code>$Latest</code> </p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline LaunchTemplateSpecification& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline LaunchTemplateSpecification& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline LaunchTemplateSpecification& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A launch template to use in place of the default launch template. You must
     * specify either the launch template ID or launch template name in the request,
     * but not both.</p> <p>You can specify up to ten (10) launch template overrides
     * that are associated to unique instance types or families for each compute
     * environment.</p>  <p>To unset all override templates for a compute
     * environment, you can pass an empty array to the <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_UpdateComputeEnvironment.html">UpdateComputeEnvironment.overrides</a>
     * parameter, or not include the <code>overrides</code> parameter when submitting
     * the <code>UpdateComputeEnvironment</code> API operation.</p> 
     */
    inline const Aws::Vector<LaunchTemplateSpecificationOverride>& GetOverrides() const{ return m_overrides; }
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }
    inline void SetOverrides(const Aws::Vector<LaunchTemplateSpecificationOverride>& value) { m_overridesHasBeenSet = true; m_overrides = value; }
    inline void SetOverrides(Aws::Vector<LaunchTemplateSpecificationOverride>&& value) { m_overridesHasBeenSet = true; m_overrides = std::move(value); }
    inline LaunchTemplateSpecification& WithOverrides(const Aws::Vector<LaunchTemplateSpecificationOverride>& value) { SetOverrides(value); return *this;}
    inline LaunchTemplateSpecification& WithOverrides(Aws::Vector<LaunchTemplateSpecificationOverride>&& value) { SetOverrides(std::move(value)); return *this;}
    inline LaunchTemplateSpecification& AddOverrides(const LaunchTemplateSpecificationOverride& value) { m_overridesHasBeenSet = true; m_overrides.push_back(value); return *this; }
    inline LaunchTemplateSpecification& AddOverrides(LaunchTemplateSpecificationOverride&& value) { m_overridesHasBeenSet = true; m_overrides.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_launchTemplateId;
    bool m_launchTemplateIdHasBeenSet = false;

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Vector<LaunchTemplateSpecificationOverride> m_overrides;
    bool m_overridesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
