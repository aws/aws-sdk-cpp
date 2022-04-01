﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about the launch template to use.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification
  {
  public:
    AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification();
    AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification(Aws::Utils::Json::JsonView jsonValue);
    AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the launch template. You must specify either
     * <code>LaunchTemplateId</code> or <code>LaunchTemplateName</code>.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const{ return m_launchTemplateId; }

    /**
     * <p>The identifier of the launch template. You must specify either
     * <code>LaunchTemplateId</code> or <code>LaunchTemplateName</code>.</p>
     */
    inline bool LaunchTemplateIdHasBeenSet() const { return m_launchTemplateIdHasBeenSet; }

    /**
     * <p>The identifier of the launch template. You must specify either
     * <code>LaunchTemplateId</code> or <code>LaunchTemplateName</code>.</p>
     */
    inline void SetLaunchTemplateId(const Aws::String& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = value; }

    /**
     * <p>The identifier of the launch template. You must specify either
     * <code>LaunchTemplateId</code> or <code>LaunchTemplateName</code>.</p>
     */
    inline void SetLaunchTemplateId(Aws::String&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::move(value); }

    /**
     * <p>The identifier of the launch template. You must specify either
     * <code>LaunchTemplateId</code> or <code>LaunchTemplateName</code>.</p>
     */
    inline void SetLaunchTemplateId(const char* value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId.assign(value); }

    /**
     * <p>The identifier of the launch template. You must specify either
     * <code>LaunchTemplateId</code> or <code>LaunchTemplateName</code>.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification& WithLaunchTemplateId(const Aws::String& value) { SetLaunchTemplateId(value); return *this;}

    /**
     * <p>The identifier of the launch template. You must specify either
     * <code>LaunchTemplateId</code> or <code>LaunchTemplateName</code>.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification& WithLaunchTemplateId(Aws::String&& value) { SetLaunchTemplateId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the launch template. You must specify either
     * <code>LaunchTemplateId</code> or <code>LaunchTemplateName</code>.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification& WithLaunchTemplateId(const char* value) { SetLaunchTemplateId(value); return *this;}


    /**
     * <p>The name of the launch template. You must specify either
     * <code>LaunchTemplateId</code> or <code>LaunchTemplateName</code>.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const{ return m_launchTemplateName; }

    /**
     * <p>The name of the launch template. You must specify either
     * <code>LaunchTemplateId</code> or <code>LaunchTemplateName</code>.</p>
     */
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }

    /**
     * <p>The name of the launch template. You must specify either
     * <code>LaunchTemplateId</code> or <code>LaunchTemplateName</code>.</p>
     */
    inline void SetLaunchTemplateName(const Aws::String& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = value; }

    /**
     * <p>The name of the launch template. You must specify either
     * <code>LaunchTemplateId</code> or <code>LaunchTemplateName</code>.</p>
     */
    inline void SetLaunchTemplateName(Aws::String&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::move(value); }

    /**
     * <p>The name of the launch template. You must specify either
     * <code>LaunchTemplateId</code> or <code>LaunchTemplateName</code>.</p>
     */
    inline void SetLaunchTemplateName(const char* value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName.assign(value); }

    /**
     * <p>The name of the launch template. You must specify either
     * <code>LaunchTemplateId</code> or <code>LaunchTemplateName</code>.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification& WithLaunchTemplateName(const Aws::String& value) { SetLaunchTemplateName(value); return *this;}

    /**
     * <p>The name of the launch template. You must specify either
     * <code>LaunchTemplateId</code> or <code>LaunchTemplateName</code>.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification& WithLaunchTemplateName(Aws::String&& value) { SetLaunchTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the launch template. You must specify either
     * <code>LaunchTemplateId</code> or <code>LaunchTemplateName</code>.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification& WithLaunchTemplateName(const char* value) { SetLaunchTemplateName(value); return *this;}


    /**
     * <p>Identifies the version of the launch template. You can specify a version
     * identifier, or use the values <code>$Latest</code> or <code>$Default</code>.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>Identifies the version of the launch template. You can specify a version
     * identifier, or use the values <code>$Latest</code> or <code>$Default</code>.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>Identifies the version of the launch template. You can specify a version
     * identifier, or use the values <code>$Latest</code> or <code>$Default</code>.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>Identifies the version of the launch template. You can specify a version
     * identifier, or use the values <code>$Latest</code> or <code>$Default</code>.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>Identifies the version of the launch template. You can specify a version
     * identifier, or use the values <code>$Latest</code> or <code>$Default</code>.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>Identifies the version of the launch template. You can specify a version
     * identifier, or use the values <code>$Latest</code> or <code>$Default</code>.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>Identifies the version of the launch template. You can specify a version
     * identifier, or use the values <code>$Latest</code> or <code>$Default</code>.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>Identifies the version of the launch template. You can specify a version
     * identifier, or use the values <code>$Latest</code> or <code>$Default</code>.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_launchTemplateId;
    bool m_launchTemplateIdHasBeenSet;

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
