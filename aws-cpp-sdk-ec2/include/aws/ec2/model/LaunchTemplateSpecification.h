/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>The launch template to use. You must specify either the launch template ID or
   * launch template name in the request, but not both.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateSpecification">AWS
   * API Reference</a></p>
   */
  class LaunchTemplateSpecification
  {
  public:
    AWS_EC2_API LaunchTemplateSpecification();
    AWS_EC2_API LaunchTemplateSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplateSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the launch template.</p> <p>You must specify the
     * <code>LaunchTemplateId</code> or the <code>LaunchTemplateName</code>, but not
     * both.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const{ return m_launchTemplateId; }

    /**
     * <p>The ID of the launch template.</p> <p>You must specify the
     * <code>LaunchTemplateId</code> or the <code>LaunchTemplateName</code>, but not
     * both.</p>
     */
    inline bool LaunchTemplateIdHasBeenSet() const { return m_launchTemplateIdHasBeenSet; }

    /**
     * <p>The ID of the launch template.</p> <p>You must specify the
     * <code>LaunchTemplateId</code> or the <code>LaunchTemplateName</code>, but not
     * both.</p>
     */
    inline void SetLaunchTemplateId(const Aws::String& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = value; }

    /**
     * <p>The ID of the launch template.</p> <p>You must specify the
     * <code>LaunchTemplateId</code> or the <code>LaunchTemplateName</code>, but not
     * both.</p>
     */
    inline void SetLaunchTemplateId(Aws::String&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::move(value); }

    /**
     * <p>The ID of the launch template.</p> <p>You must specify the
     * <code>LaunchTemplateId</code> or the <code>LaunchTemplateName</code>, but not
     * both.</p>
     */
    inline void SetLaunchTemplateId(const char* value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId.assign(value); }

    /**
     * <p>The ID of the launch template.</p> <p>You must specify the
     * <code>LaunchTemplateId</code> or the <code>LaunchTemplateName</code>, but not
     * both.</p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateId(const Aws::String& value) { SetLaunchTemplateId(value); return *this;}

    /**
     * <p>The ID of the launch template.</p> <p>You must specify the
     * <code>LaunchTemplateId</code> or the <code>LaunchTemplateName</code>, but not
     * both.</p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateId(Aws::String&& value) { SetLaunchTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the launch template.</p> <p>You must specify the
     * <code>LaunchTemplateId</code> or the <code>LaunchTemplateName</code>, but not
     * both.</p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateId(const char* value) { SetLaunchTemplateId(value); return *this;}


    /**
     * <p>The name of the launch template.</p> <p>You must specify the
     * <code>LaunchTemplateName</code> or the <code>LaunchTemplateId</code>, but not
     * both.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const{ return m_launchTemplateName; }

    /**
     * <p>The name of the launch template.</p> <p>You must specify the
     * <code>LaunchTemplateName</code> or the <code>LaunchTemplateId</code>, but not
     * both.</p>
     */
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }

    /**
     * <p>The name of the launch template.</p> <p>You must specify the
     * <code>LaunchTemplateName</code> or the <code>LaunchTemplateId</code>, but not
     * both.</p>
     */
    inline void SetLaunchTemplateName(const Aws::String& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = value; }

    /**
     * <p>The name of the launch template.</p> <p>You must specify the
     * <code>LaunchTemplateName</code> or the <code>LaunchTemplateId</code>, but not
     * both.</p>
     */
    inline void SetLaunchTemplateName(Aws::String&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::move(value); }

    /**
     * <p>The name of the launch template.</p> <p>You must specify the
     * <code>LaunchTemplateName</code> or the <code>LaunchTemplateId</code>, but not
     * both.</p>
     */
    inline void SetLaunchTemplateName(const char* value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName.assign(value); }

    /**
     * <p>The name of the launch template.</p> <p>You must specify the
     * <code>LaunchTemplateName</code> or the <code>LaunchTemplateId</code>, but not
     * both.</p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateName(const Aws::String& value) { SetLaunchTemplateName(value); return *this;}

    /**
     * <p>The name of the launch template.</p> <p>You must specify the
     * <code>LaunchTemplateName</code> or the <code>LaunchTemplateId</code>, but not
     * both.</p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateName(Aws::String&& value) { SetLaunchTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the launch template.</p> <p>You must specify the
     * <code>LaunchTemplateName</code> or the <code>LaunchTemplateId</code>, but not
     * both.</p>
     */
    inline LaunchTemplateSpecification& WithLaunchTemplateName(const char* value) { SetLaunchTemplateName(value); return *this;}


    /**
     * <p>The launch template version number, <code>$Latest</code>, or
     * <code>$Default</code>.</p> <p>If the value is <code>$Latest</code>, Amazon EC2
     * uses the latest version of the launch template.</p> <p>If the value is
     * <code>$Default</code>, Amazon EC2 uses the default version of the launch
     * template.</p> <p>Default: The default version of the launch template.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The launch template version number, <code>$Latest</code>, or
     * <code>$Default</code>.</p> <p>If the value is <code>$Latest</code>, Amazon EC2
     * uses the latest version of the launch template.</p> <p>If the value is
     * <code>$Default</code>, Amazon EC2 uses the default version of the launch
     * template.</p> <p>Default: The default version of the launch template.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The launch template version number, <code>$Latest</code>, or
     * <code>$Default</code>.</p> <p>If the value is <code>$Latest</code>, Amazon EC2
     * uses the latest version of the launch template.</p> <p>If the value is
     * <code>$Default</code>, Amazon EC2 uses the default version of the launch
     * template.</p> <p>Default: The default version of the launch template.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The launch template version number, <code>$Latest</code>, or
     * <code>$Default</code>.</p> <p>If the value is <code>$Latest</code>, Amazon EC2
     * uses the latest version of the launch template.</p> <p>If the value is
     * <code>$Default</code>, Amazon EC2 uses the default version of the launch
     * template.</p> <p>Default: The default version of the launch template.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The launch template version number, <code>$Latest</code>, or
     * <code>$Default</code>.</p> <p>If the value is <code>$Latest</code>, Amazon EC2
     * uses the latest version of the launch template.</p> <p>If the value is
     * <code>$Default</code>, Amazon EC2 uses the default version of the launch
     * template.</p> <p>Default: The default version of the launch template.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The launch template version number, <code>$Latest</code>, or
     * <code>$Default</code>.</p> <p>If the value is <code>$Latest</code>, Amazon EC2
     * uses the latest version of the launch template.</p> <p>If the value is
     * <code>$Default</code>, Amazon EC2 uses the default version of the launch
     * template.</p> <p>Default: The default version of the launch template.</p>
     */
    inline LaunchTemplateSpecification& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The launch template version number, <code>$Latest</code>, or
     * <code>$Default</code>.</p> <p>If the value is <code>$Latest</code>, Amazon EC2
     * uses the latest version of the launch template.</p> <p>If the value is
     * <code>$Default</code>, Amazon EC2 uses the default version of the launch
     * template.</p> <p>Default: The default version of the launch template.</p>
     */
    inline LaunchTemplateSpecification& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The launch template version number, <code>$Latest</code>, or
     * <code>$Default</code>.</p> <p>If the value is <code>$Latest</code>, Amazon EC2
     * uses the latest version of the launch template.</p> <p>If the value is
     * <code>$Default</code>, Amazon EC2 uses the default version of the launch
     * template.</p> <p>Default: The default version of the launch template.</p>
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
} // namespace EC2
} // namespace Aws
