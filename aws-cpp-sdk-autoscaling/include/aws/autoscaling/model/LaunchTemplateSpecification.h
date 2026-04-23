/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes a launch template and the launch template version.</p> <p>The
   * launch template that is specified must be configured for use with an Auto
   * Scaling group. For more information, see <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/create-launch-template.html">Creating
   * a Launch Template for an Auto Scaling Group</a> in the <i>Amazon EC2 Auto
   * Scaling User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/LaunchTemplateSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API LaunchTemplateSpecification
  {
  public:
    LaunchTemplateSpecification();
    LaunchTemplateSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    LaunchTemplateSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the launch template. You must specify either a template ID or a
     * template name.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const{ return m_launchTemplateId; }

    /**
     * <p>The ID of the launch template. You must specify either a template ID or a
     * template name.</p>
     */
    inline bool LaunchTemplateIdHasBeenSet() const { return m_launchTemplateIdHasBeenSet; }

    /**
     * <p>The ID of the launch template. You must specify either a template ID or a
     * template name.</p>
     */
    inline void SetLaunchTemplateId(const Aws::String& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = value; }

    /**
     * <p>The ID of the launch template. You must specify either a template ID or a
     * template name.</p>
     */
    inline void SetLaunchTemplateId(Aws::String&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::move(value); }

    /**
     * <p>The ID of the launch template. You must specify either a template ID or a
     * template name.</p>
     */
    inline void SetLaunchTemplateId(const char* value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId.assign(value); }

    /**
     * <p>The ID of the launch template. You must specify either a template ID or a
     * template name.</p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateId(const Aws::String& value) { SetLaunchTemplateId(value); return *this;}

    /**
     * <p>The ID of the launch template. You must specify either a template ID or a
     * template name.</p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateId(Aws::String&& value) { SetLaunchTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the launch template. You must specify either a template ID or a
     * template name.</p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateId(const char* value) { SetLaunchTemplateId(value); return *this;}


    /**
     * <p>The name of the launch template. You must specify either a template name or a
     * template ID.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const{ return m_launchTemplateName; }

    /**
     * <p>The name of the launch template. You must specify either a template name or a
     * template ID.</p>
     */
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }

    /**
     * <p>The name of the launch template. You must specify either a template name or a
     * template ID.</p>
     */
    inline void SetLaunchTemplateName(const Aws::String& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = value; }

    /**
     * <p>The name of the launch template. You must specify either a template name or a
     * template ID.</p>
     */
    inline void SetLaunchTemplateName(Aws::String&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::move(value); }

    /**
     * <p>The name of the launch template. You must specify either a template name or a
     * template ID.</p>
     */
    inline void SetLaunchTemplateName(const char* value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName.assign(value); }

    /**
     * <p>The name of the launch template. You must specify either a template name or a
     * template ID.</p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateName(const Aws::String& value) { SetLaunchTemplateName(value); return *this;}

    /**
     * <p>The name of the launch template. You must specify either a template name or a
     * template ID.</p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateName(Aws::String&& value) { SetLaunchTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the launch template. You must specify either a template name or a
     * template ID.</p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateName(const char* value) { SetLaunchTemplateName(value); return *this;}


    /**
     * <p>The version number, <code>$Latest</code>, or <code>$Default</code>. If the
     * value is <code>$Latest</code>, Amazon EC2 Auto Scaling selects the latest
     * version of the launch template when launching instances. If the value is
     * <code>$Default</code>, Amazon EC2 Auto Scaling selects the default version of
     * the launch template when launching instances. The default value is
     * <code>$Default</code>.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version number, <code>$Latest</code>, or <code>$Default</code>. If the
     * value is <code>$Latest</code>, Amazon EC2 Auto Scaling selects the latest
     * version of the launch template when launching instances. If the value is
     * <code>$Default</code>, Amazon EC2 Auto Scaling selects the default version of
     * the launch template when launching instances. The default value is
     * <code>$Default</code>.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version number, <code>$Latest</code>, or <code>$Default</code>. If the
     * value is <code>$Latest</code>, Amazon EC2 Auto Scaling selects the latest
     * version of the launch template when launching instances. If the value is
     * <code>$Default</code>, Amazon EC2 Auto Scaling selects the default version of
     * the launch template when launching instances. The default value is
     * <code>$Default</code>.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number, <code>$Latest</code>, or <code>$Default</code>. If the
     * value is <code>$Latest</code>, Amazon EC2 Auto Scaling selects the latest
     * version of the launch template when launching instances. If the value is
     * <code>$Default</code>, Amazon EC2 Auto Scaling selects the default version of
     * the launch template when launching instances. The default value is
     * <code>$Default</code>.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version number, <code>$Latest</code>, or <code>$Default</code>. If the
     * value is <code>$Latest</code>, Amazon EC2 Auto Scaling selects the latest
     * version of the launch template when launching instances. If the value is
     * <code>$Default</code>, Amazon EC2 Auto Scaling selects the default version of
     * the launch template when launching instances. The default value is
     * <code>$Default</code>.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version number, <code>$Latest</code>, or <code>$Default</code>. If the
     * value is <code>$Latest</code>, Amazon EC2 Auto Scaling selects the latest
     * version of the launch template when launching instances. If the value is
     * <code>$Default</code>, Amazon EC2 Auto Scaling selects the default version of
     * the launch template when launching instances. The default value is
     * <code>$Default</code>.</p>
     */
    inline LaunchTemplateSpecification& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version number, <code>$Latest</code>, or <code>$Default</code>. If the
     * value is <code>$Latest</code>, Amazon EC2 Auto Scaling selects the latest
     * version of the launch template when launching instances. If the value is
     * <code>$Default</code>, Amazon EC2 Auto Scaling selects the default version of
     * the launch template when launching instances. The default value is
     * <code>$Default</code>.</p>
     */
    inline LaunchTemplateSpecification& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version number, <code>$Latest</code>, or <code>$Default</code>. If the
     * value is <code>$Latest</code>, Amazon EC2 Auto Scaling selects the latest
     * version of the launch template when launching instances. If the value is
     * <code>$Default</code>, Amazon EC2 Auto Scaling selects the default version of
     * the launch template when launching instances. The default value is
     * <code>$Default</code>.</p>
     */
    inline LaunchTemplateSpecification& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_launchTemplateId;
    bool m_launchTemplateIdHasBeenSet;

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
