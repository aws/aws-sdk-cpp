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
   * <p>Request to create a launch template for a fast-launch enabled Windows
   * AMI.</p>  <p>Note - You can specify either the
   * <code>LaunchTemplateName</code> or the <code>LaunchTemplateId</code>, but not
   * both.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/FastLaunchLaunchTemplateSpecificationRequest">AWS
   * API Reference</a></p>
   */
  class FastLaunchLaunchTemplateSpecificationRequest
  {
  public:
    AWS_EC2_API FastLaunchLaunchTemplateSpecificationRequest();
    AWS_EC2_API FastLaunchLaunchTemplateSpecificationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API FastLaunchLaunchTemplateSpecificationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const{ return m_launchTemplateId; }

    /**
     * <p>The ID of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline bool LaunchTemplateIdHasBeenSet() const { return m_launchTemplateIdHasBeenSet; }

    /**
     * <p>The ID of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline void SetLaunchTemplateId(const Aws::String& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = value; }

    /**
     * <p>The ID of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline void SetLaunchTemplateId(Aws::String&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::move(value); }

    /**
     * <p>The ID of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline void SetLaunchTemplateId(const char* value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId.assign(value); }

    /**
     * <p>The ID of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline FastLaunchLaunchTemplateSpecificationRequest& WithLaunchTemplateId(const Aws::String& value) { SetLaunchTemplateId(value); return *this;}

    /**
     * <p>The ID of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline FastLaunchLaunchTemplateSpecificationRequest& WithLaunchTemplateId(Aws::String&& value) { SetLaunchTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline FastLaunchLaunchTemplateSpecificationRequest& WithLaunchTemplateId(const char* value) { SetLaunchTemplateId(value); return *this;}


    /**
     * <p>The name of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const{ return m_launchTemplateName; }

    /**
     * <p>The name of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }

    /**
     * <p>The name of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline void SetLaunchTemplateName(const Aws::String& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = value; }

    /**
     * <p>The name of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline void SetLaunchTemplateName(Aws::String&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::move(value); }

    /**
     * <p>The name of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline void SetLaunchTemplateName(const char* value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName.assign(value); }

    /**
     * <p>The name of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline FastLaunchLaunchTemplateSpecificationRequest& WithLaunchTemplateName(const Aws::String& value) { SetLaunchTemplateName(value); return *this;}

    /**
     * <p>The name of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline FastLaunchLaunchTemplateSpecificationRequest& WithLaunchTemplateName(Aws::String&& value) { SetLaunchTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline FastLaunchLaunchTemplateSpecificationRequest& WithLaunchTemplateName(const char* value) { SetLaunchTemplateName(value); return *this;}


    /**
     * <p>The version of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline FastLaunchLaunchTemplateSpecificationRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline FastLaunchLaunchTemplateSpecificationRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline FastLaunchLaunchTemplateSpecificationRequest& WithVersion(const char* value) { SetVersion(value); return *this;}

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
