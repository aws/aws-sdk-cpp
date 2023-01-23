/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    /**
     * <p>The ID of the launch template.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const{ return m_launchTemplateId; }

    /**
     * <p>The ID of the launch template.</p>
     */
    inline bool LaunchTemplateIdHasBeenSet() const { return m_launchTemplateIdHasBeenSet; }

    /**
     * <p>The ID of the launch template.</p>
     */
    inline void SetLaunchTemplateId(const Aws::String& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = value; }

    /**
     * <p>The ID of the launch template.</p>
     */
    inline void SetLaunchTemplateId(Aws::String&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::move(value); }

    /**
     * <p>The ID of the launch template.</p>
     */
    inline void SetLaunchTemplateId(const char* value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId.assign(value); }

    /**
     * <p>The ID of the launch template.</p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateId(const Aws::String& value) { SetLaunchTemplateId(value); return *this;}

    /**
     * <p>The ID of the launch template.</p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateId(Aws::String&& value) { SetLaunchTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the launch template.</p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateId(const char* value) { SetLaunchTemplateId(value); return *this;}


    /**
     * <p>The name of the launch template.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const{ return m_launchTemplateName; }

    /**
     * <p>The name of the launch template.</p>
     */
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }

    /**
     * <p>The name of the launch template.</p>
     */
    inline void SetLaunchTemplateName(const Aws::String& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = value; }

    /**
     * <p>The name of the launch template.</p>
     */
    inline void SetLaunchTemplateName(Aws::String&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::move(value); }

    /**
     * <p>The name of the launch template.</p>
     */
    inline void SetLaunchTemplateName(const char* value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName.assign(value); }

    /**
     * <p>The name of the launch template.</p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateName(const Aws::String& value) { SetLaunchTemplateName(value); return *this;}

    /**
     * <p>The name of the launch template.</p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateName(Aws::String&& value) { SetLaunchTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the launch template.</p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateName(const char* value) { SetLaunchTemplateName(value); return *this;}


    /**
     * <p>The version number of the launch template, <code>$Latest</code>, or
     * <code>$Default</code>.</p> <p>If the value is <code>$Latest</code>, the latest
     * version of the launch template is used. If the value is <code>$Default</code>,
     * the default version of the launch template is used.</p>  <p>If the
     * AMI ID that's used in a compute environment is from the launch template, the AMI
     * isn't changed when the compute environment is updated. It's only changed if the
     * <code>updateToLatestImageVersion</code> parameter for the compute environment is
     * set to <code>true</code>. During an infrastructure update, if either
     * <code>$Latest</code> or <code>$Default</code> is specified, Batch re-evaluates
     * the launch template version, and it might use a different version of the launch
     * template. This is the case even if the launch template isn't specified in the
     * update. When updating a compute environment, changing the launch template
     * requires an infrastructure update of the compute environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p> 
     * <p>Default: <code>$Default</code>.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version number of the launch template, <code>$Latest</code>, or
     * <code>$Default</code>.</p> <p>If the value is <code>$Latest</code>, the latest
     * version of the launch template is used. If the value is <code>$Default</code>,
     * the default version of the launch template is used.</p>  <p>If the
     * AMI ID that's used in a compute environment is from the launch template, the AMI
     * isn't changed when the compute environment is updated. It's only changed if the
     * <code>updateToLatestImageVersion</code> parameter for the compute environment is
     * set to <code>true</code>. During an infrastructure update, if either
     * <code>$Latest</code> or <code>$Default</code> is specified, Batch re-evaluates
     * the launch template version, and it might use a different version of the launch
     * template. This is the case even if the launch template isn't specified in the
     * update. When updating a compute environment, changing the launch template
     * requires an infrastructure update of the compute environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p> 
     * <p>Default: <code>$Default</code>.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version number of the launch template, <code>$Latest</code>, or
     * <code>$Default</code>.</p> <p>If the value is <code>$Latest</code>, the latest
     * version of the launch template is used. If the value is <code>$Default</code>,
     * the default version of the launch template is used.</p>  <p>If the
     * AMI ID that's used in a compute environment is from the launch template, the AMI
     * isn't changed when the compute environment is updated. It's only changed if the
     * <code>updateToLatestImageVersion</code> parameter for the compute environment is
     * set to <code>true</code>. During an infrastructure update, if either
     * <code>$Latest</code> or <code>$Default</code> is specified, Batch re-evaluates
     * the launch template version, and it might use a different version of the launch
     * template. This is the case even if the launch template isn't specified in the
     * update. When updating a compute environment, changing the launch template
     * requires an infrastructure update of the compute environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p> 
     * <p>Default: <code>$Default</code>.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number of the launch template, <code>$Latest</code>, or
     * <code>$Default</code>.</p> <p>If the value is <code>$Latest</code>, the latest
     * version of the launch template is used. If the value is <code>$Default</code>,
     * the default version of the launch template is used.</p>  <p>If the
     * AMI ID that's used in a compute environment is from the launch template, the AMI
     * isn't changed when the compute environment is updated. It's only changed if the
     * <code>updateToLatestImageVersion</code> parameter for the compute environment is
     * set to <code>true</code>. During an infrastructure update, if either
     * <code>$Latest</code> or <code>$Default</code> is specified, Batch re-evaluates
     * the launch template version, and it might use a different version of the launch
     * template. This is the case even if the launch template isn't specified in the
     * update. When updating a compute environment, changing the launch template
     * requires an infrastructure update of the compute environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p> 
     * <p>Default: <code>$Default</code>.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version number of the launch template, <code>$Latest</code>, or
     * <code>$Default</code>.</p> <p>If the value is <code>$Latest</code>, the latest
     * version of the launch template is used. If the value is <code>$Default</code>,
     * the default version of the launch template is used.</p>  <p>If the
     * AMI ID that's used in a compute environment is from the launch template, the AMI
     * isn't changed when the compute environment is updated. It's only changed if the
     * <code>updateToLatestImageVersion</code> parameter for the compute environment is
     * set to <code>true</code>. During an infrastructure update, if either
     * <code>$Latest</code> or <code>$Default</code> is specified, Batch re-evaluates
     * the launch template version, and it might use a different version of the launch
     * template. This is the case even if the launch template isn't specified in the
     * update. When updating a compute environment, changing the launch template
     * requires an infrastructure update of the compute environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p> 
     * <p>Default: <code>$Default</code>.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version number of the launch template, <code>$Latest</code>, or
     * <code>$Default</code>.</p> <p>If the value is <code>$Latest</code>, the latest
     * version of the launch template is used. If the value is <code>$Default</code>,
     * the default version of the launch template is used.</p>  <p>If the
     * AMI ID that's used in a compute environment is from the launch template, the AMI
     * isn't changed when the compute environment is updated. It's only changed if the
     * <code>updateToLatestImageVersion</code> parameter for the compute environment is
     * set to <code>true</code>. During an infrastructure update, if either
     * <code>$Latest</code> or <code>$Default</code> is specified, Batch re-evaluates
     * the launch template version, and it might use a different version of the launch
     * template. This is the case even if the launch template isn't specified in the
     * update. When updating a compute environment, changing the launch template
     * requires an infrastructure update of the compute environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p> 
     * <p>Default: <code>$Default</code>.</p>
     */
    inline LaunchTemplateSpecification& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version number of the launch template, <code>$Latest</code>, or
     * <code>$Default</code>.</p> <p>If the value is <code>$Latest</code>, the latest
     * version of the launch template is used. If the value is <code>$Default</code>,
     * the default version of the launch template is used.</p>  <p>If the
     * AMI ID that's used in a compute environment is from the launch template, the AMI
     * isn't changed when the compute environment is updated. It's only changed if the
     * <code>updateToLatestImageVersion</code> parameter for the compute environment is
     * set to <code>true</code>. During an infrastructure update, if either
     * <code>$Latest</code> or <code>$Default</code> is specified, Batch re-evaluates
     * the launch template version, and it might use a different version of the launch
     * template. This is the case even if the launch template isn't specified in the
     * update. When updating a compute environment, changing the launch template
     * requires an infrastructure update of the compute environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p> 
     * <p>Default: <code>$Default</code>.</p>
     */
    inline LaunchTemplateSpecification& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the launch template, <code>$Latest</code>, or
     * <code>$Default</code>.</p> <p>If the value is <code>$Latest</code>, the latest
     * version of the launch template is used. If the value is <code>$Default</code>,
     * the default version of the launch template is used.</p>  <p>If the
     * AMI ID that's used in a compute environment is from the launch template, the AMI
     * isn't changed when the compute environment is updated. It's only changed if the
     * <code>updateToLatestImageVersion</code> parameter for the compute environment is
     * set to <code>true</code>. During an infrastructure update, if either
     * <code>$Latest</code> or <code>$Default</code> is specified, Batch re-evaluates
     * the launch template version, and it might use a different version of the launch
     * template. This is the case even if the launch template isn't specified in the
     * update. When updating a compute environment, changing the launch template
     * requires an infrastructure update of the compute environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p> 
     * <p>Default: <code>$Default</code>.</p>
     */
    inline LaunchTemplateSpecification& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_launchTemplateId;
    bool m_launchTemplateIdHasBeenSet = false;

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
