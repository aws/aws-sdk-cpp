/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>An object that represents a launch template to use in place of the default
   * launch template. You must specify either the launch template ID or launch
   * template name in the request, but not both.</p> <p>If security groups are
   * specified using both the <code>securityGroupIds</code> parameter of
   * <code>CreateComputeEnvironment</code> and the launch template, the values in the
   * <code>securityGroupIds</code> parameter of <code>CreateComputeEnvironment</code>
   * will be used.</p> <p>You can define up to ten (10) overrides for each compute
   * environment.</p>  <p>This object isn't applicable to jobs that are running
   * on Fargate resources.</p>   <p>To unset all override templates for
   * a compute environment, you can pass an empty array to the <a
   * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_UpdateComputeEnvironment.html">UpdateComputeEnvironment.overrides</a>
   * parameter, or not include the <code>overrides</code> parameter when submitting
   * the <code>UpdateComputeEnvironment</code> API operation.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/LaunchTemplateSpecificationOverride">AWS
   * API Reference</a></p>
   */
  class LaunchTemplateSpecificationOverride
  {
  public:
    AWS_BATCH_API LaunchTemplateSpecificationOverride();
    AWS_BATCH_API LaunchTemplateSpecificationOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API LaunchTemplateSpecificationOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the launch template.</p> <p> <b>Note:</b> If you specify the
     * <code>launchTemplateId</code> you can't specify the
     * <code>launchTemplateName</code> as well.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const{ return m_launchTemplateId; }
    inline bool LaunchTemplateIdHasBeenSet() const { return m_launchTemplateIdHasBeenSet; }
    inline void SetLaunchTemplateId(const Aws::String& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = value; }
    inline void SetLaunchTemplateId(Aws::String&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::move(value); }
    inline void SetLaunchTemplateId(const char* value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId.assign(value); }
    inline LaunchTemplateSpecificationOverride& WithLaunchTemplateId(const Aws::String& value) { SetLaunchTemplateId(value); return *this;}
    inline LaunchTemplateSpecificationOverride& WithLaunchTemplateId(Aws::String&& value) { SetLaunchTemplateId(std::move(value)); return *this;}
    inline LaunchTemplateSpecificationOverride& WithLaunchTemplateId(const char* value) { SetLaunchTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the launch template.</p> <p> <b>Note:</b> If you specify the
     * <code>launchTemplateName</code> you can't specify the
     * <code>launchTemplateId</code> as well.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const{ return m_launchTemplateName; }
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }
    inline void SetLaunchTemplateName(const Aws::String& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = value; }
    inline void SetLaunchTemplateName(Aws::String&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::move(value); }
    inline void SetLaunchTemplateName(const char* value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName.assign(value); }
    inline LaunchTemplateSpecificationOverride& WithLaunchTemplateName(const Aws::String& value) { SetLaunchTemplateName(value); return *this;}
    inline LaunchTemplateSpecificationOverride& WithLaunchTemplateName(Aws::String&& value) { SetLaunchTemplateName(std::move(value)); return *this;}
    inline LaunchTemplateSpecificationOverride& WithLaunchTemplateName(const char* value) { SetLaunchTemplateName(value); return *this;}
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
    inline LaunchTemplateSpecificationOverride& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline LaunchTemplateSpecificationOverride& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline LaunchTemplateSpecificationOverride& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type or family that this this override launch template should be
     * applied to.</p> <p>This parameter is required when defining a launch template
     * override.</p> <p>Information included in this parameter must meet the following
     * requirements:</p> <ul> <li> <p>Must be a valid Amazon EC2 instance type or
     * family.</p> </li> <li> <p> <code>optimal</code> isn't allowed.</p> </li> <li>
     * <p> <code>targetInstanceTypes</code> can target only instance types and families
     * that are included within the <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_ComputeResource.html#Batch-Type-ComputeResource-instanceTypes">
     * <code>ComputeResource.instanceTypes</code> </a> set.
     * <code>targetInstanceTypes</code> doesn't need to include all of the instances
     * from the <code>instanceType</code> set, but at least a subset. For example, if
     * <code>ComputeResource.instanceTypes</code> includes <code>[m5, g5]</code>,
     * <code>targetInstanceTypes</code> can include <code>[m5.2xlarge]</code> and
     * <code>[m5.large]</code> but not <code>[c5.large]</code>.</p> </li> <li> <p>
     * <code>targetInstanceTypes</code> included within the same launch template
     * override or across launch template overrides can't overlap for the same compute
     * environment. For example, you can't define one launch template override to
     * target an instance family and another define an instance type within this same
     * family.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetTargetInstanceTypes() const{ return m_targetInstanceTypes; }
    inline bool TargetInstanceTypesHasBeenSet() const { return m_targetInstanceTypesHasBeenSet; }
    inline void SetTargetInstanceTypes(const Aws::Vector<Aws::String>& value) { m_targetInstanceTypesHasBeenSet = true; m_targetInstanceTypes = value; }
    inline void SetTargetInstanceTypes(Aws::Vector<Aws::String>&& value) { m_targetInstanceTypesHasBeenSet = true; m_targetInstanceTypes = std::move(value); }
    inline LaunchTemplateSpecificationOverride& WithTargetInstanceTypes(const Aws::Vector<Aws::String>& value) { SetTargetInstanceTypes(value); return *this;}
    inline LaunchTemplateSpecificationOverride& WithTargetInstanceTypes(Aws::Vector<Aws::String>&& value) { SetTargetInstanceTypes(std::move(value)); return *this;}
    inline LaunchTemplateSpecificationOverride& AddTargetInstanceTypes(const Aws::String& value) { m_targetInstanceTypesHasBeenSet = true; m_targetInstanceTypes.push_back(value); return *this; }
    inline LaunchTemplateSpecificationOverride& AddTargetInstanceTypes(Aws::String&& value) { m_targetInstanceTypesHasBeenSet = true; m_targetInstanceTypes.push_back(std::move(value)); return *this; }
    inline LaunchTemplateSpecificationOverride& AddTargetInstanceTypes(const char* value) { m_targetInstanceTypesHasBeenSet = true; m_targetInstanceTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_launchTemplateId;
    bool m_launchTemplateIdHasBeenSet = false;

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetInstanceTypes;
    bool m_targetInstanceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
