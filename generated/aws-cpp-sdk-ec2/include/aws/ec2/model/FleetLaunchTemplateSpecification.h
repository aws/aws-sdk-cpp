﻿/**
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
   * <p>Describes the Amazon EC2 launch template and the launch template version that
   * can be used by a Spot Fleet request to configure Amazon EC2 instances. For
   * information about launch templates, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html">Launching
   * an instance from a launch template</a> in the <i>Amazon EC2 User Guide for Linux
   * Instances</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FleetLaunchTemplateSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API FleetLaunchTemplateSpecification
  {
  public:
    FleetLaunchTemplateSpecification();
    FleetLaunchTemplateSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    FleetLaunchTemplateSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the launch template. If you specify the template ID, you can't
     * specify the template name.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const{ return m_launchTemplateId; }

    /**
     * <p>The ID of the launch template. If you specify the template ID, you can't
     * specify the template name.</p>
     */
    inline bool LaunchTemplateIdHasBeenSet() const { return m_launchTemplateIdHasBeenSet; }

    /**
     * <p>The ID of the launch template. If you specify the template ID, you can't
     * specify the template name.</p>
     */
    inline void SetLaunchTemplateId(const Aws::String& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = value; }

    /**
     * <p>The ID of the launch template. If you specify the template ID, you can't
     * specify the template name.</p>
     */
    inline void SetLaunchTemplateId(Aws::String&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::move(value); }

    /**
     * <p>The ID of the launch template. If you specify the template ID, you can't
     * specify the template name.</p>
     */
    inline void SetLaunchTemplateId(const char* value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId.assign(value); }

    /**
     * <p>The ID of the launch template. If you specify the template ID, you can't
     * specify the template name.</p>
     */
    inline FleetLaunchTemplateSpecification& WithLaunchTemplateId(const Aws::String& value) { SetLaunchTemplateId(value); return *this;}

    /**
     * <p>The ID of the launch template. If you specify the template ID, you can't
     * specify the template name.</p>
     */
    inline FleetLaunchTemplateSpecification& WithLaunchTemplateId(Aws::String&& value) { SetLaunchTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the launch template. If you specify the template ID, you can't
     * specify the template name.</p>
     */
    inline FleetLaunchTemplateSpecification& WithLaunchTemplateId(const char* value) { SetLaunchTemplateId(value); return *this;}


    /**
     * <p>The name of the launch template. If you specify the template name, you can't
     * specify the template ID.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const{ return m_launchTemplateName; }

    /**
     * <p>The name of the launch template. If you specify the template name, you can't
     * specify the template ID.</p>
     */
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }

    /**
     * <p>The name of the launch template. If you specify the template name, you can't
     * specify the template ID.</p>
     */
    inline void SetLaunchTemplateName(const Aws::String& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = value; }

    /**
     * <p>The name of the launch template. If you specify the template name, you can't
     * specify the template ID.</p>
     */
    inline void SetLaunchTemplateName(Aws::String&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::move(value); }

    /**
     * <p>The name of the launch template. If you specify the template name, you can't
     * specify the template ID.</p>
     */
    inline void SetLaunchTemplateName(const char* value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName.assign(value); }

    /**
     * <p>The name of the launch template. If you specify the template name, you can't
     * specify the template ID.</p>
     */
    inline FleetLaunchTemplateSpecification& WithLaunchTemplateName(const Aws::String& value) { SetLaunchTemplateName(value); return *this;}

    /**
     * <p>The name of the launch template. If you specify the template name, you can't
     * specify the template ID.</p>
     */
    inline FleetLaunchTemplateSpecification& WithLaunchTemplateName(Aws::String&& value) { SetLaunchTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the launch template. If you specify the template name, you can't
     * specify the template ID.</p>
     */
    inline FleetLaunchTemplateSpecification& WithLaunchTemplateName(const char* value) { SetLaunchTemplateName(value); return *this;}


    /**
     * <p>The launch template version number, <code>$Latest</code>, or
     * <code>$Default</code>. You must specify a value, otherwise the request
     * fails.</p> <p>If the value is <code>$Latest</code>, Amazon EC2 uses the latest
     * version of the launch template.</p> <p>If the value is <code>$Default</code>,
     * Amazon EC2 uses the default version of the launch template.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The launch template version number, <code>$Latest</code>, or
     * <code>$Default</code>. You must specify a value, otherwise the request
     * fails.</p> <p>If the value is <code>$Latest</code>, Amazon EC2 uses the latest
     * version of the launch template.</p> <p>If the value is <code>$Default</code>,
     * Amazon EC2 uses the default version of the launch template.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The launch template version number, <code>$Latest</code>, or
     * <code>$Default</code>. You must specify a value, otherwise the request
     * fails.</p> <p>If the value is <code>$Latest</code>, Amazon EC2 uses the latest
     * version of the launch template.</p> <p>If the value is <code>$Default</code>,
     * Amazon EC2 uses the default version of the launch template.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The launch template version number, <code>$Latest</code>, or
     * <code>$Default</code>. You must specify a value, otherwise the request
     * fails.</p> <p>If the value is <code>$Latest</code>, Amazon EC2 uses the latest
     * version of the launch template.</p> <p>If the value is <code>$Default</code>,
     * Amazon EC2 uses the default version of the launch template.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The launch template version number, <code>$Latest</code>, or
     * <code>$Default</code>. You must specify a value, otherwise the request
     * fails.</p> <p>If the value is <code>$Latest</code>, Amazon EC2 uses the latest
     * version of the launch template.</p> <p>If the value is <code>$Default</code>,
     * Amazon EC2 uses the default version of the launch template.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The launch template version number, <code>$Latest</code>, or
     * <code>$Default</code>. You must specify a value, otherwise the request
     * fails.</p> <p>If the value is <code>$Latest</code>, Amazon EC2 uses the latest
     * version of the launch template.</p> <p>If the value is <code>$Default</code>,
     * Amazon EC2 uses the default version of the launch template.</p>
     */
    inline FleetLaunchTemplateSpecification& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The launch template version number, <code>$Latest</code>, or
     * <code>$Default</code>. You must specify a value, otherwise the request
     * fails.</p> <p>If the value is <code>$Latest</code>, Amazon EC2 uses the latest
     * version of the launch template.</p> <p>If the value is <code>$Default</code>,
     * Amazon EC2 uses the default version of the launch template.</p>
     */
    inline FleetLaunchTemplateSpecification& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The launch template version number, <code>$Latest</code>, or
     * <code>$Default</code>. You must specify a value, otherwise the request
     * fails.</p> <p>If the value is <code>$Latest</code>, Amazon EC2 uses the latest
     * version of the launch template.</p> <p>If the value is <code>$Default</code>,
     * Amazon EC2 uses the default version of the launch template.</p>
     */
    inline FleetLaunchTemplateSpecification& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_launchTemplateId;
    bool m_launchTemplateIdHasBeenSet;

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
