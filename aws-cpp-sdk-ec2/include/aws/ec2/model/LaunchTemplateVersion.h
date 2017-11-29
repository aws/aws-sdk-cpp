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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/ResponseLaunchTemplateData.h>
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
   * <p>Describes a launch template version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/LaunchTemplateVersion">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API LaunchTemplateVersion
  {
  public:
    LaunchTemplateVersion();
    LaunchTemplateVersion(const Aws::Utils::Xml::XmlNode& xmlNode);
    LaunchTemplateVersion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the launch template.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const{ return m_launchTemplateId; }

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
    inline LaunchTemplateVersion& WithLaunchTemplateId(const Aws::String& value) { SetLaunchTemplateId(value); return *this;}

    /**
     * <p>The ID of the launch template.</p>
     */
    inline LaunchTemplateVersion& WithLaunchTemplateId(Aws::String&& value) { SetLaunchTemplateId(std::move(value)); return *this;}

    /**
     * <p>The ID of the launch template.</p>
     */
    inline LaunchTemplateVersion& WithLaunchTemplateId(const char* value) { SetLaunchTemplateId(value); return *this;}


    /**
     * <p>The name of the launch template.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const{ return m_launchTemplateName; }

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
    inline LaunchTemplateVersion& WithLaunchTemplateName(const Aws::String& value) { SetLaunchTemplateName(value); return *this;}

    /**
     * <p>The name of the launch template.</p>
     */
    inline LaunchTemplateVersion& WithLaunchTemplateName(Aws::String&& value) { SetLaunchTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the launch template.</p>
     */
    inline LaunchTemplateVersion& WithLaunchTemplateName(const char* value) { SetLaunchTemplateName(value); return *this;}


    /**
     * <p>The version number.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }

    /**
     * <p>The version number.</p>
     */
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }

    /**
     * <p>The version number.</p>
     */
    inline LaunchTemplateVersion& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}


    /**
     * <p>The description for the version.</p>
     */
    inline const Aws::String& GetVersionDescription() const{ return m_versionDescription; }

    /**
     * <p>The description for the version.</p>
     */
    inline void SetVersionDescription(const Aws::String& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = value; }

    /**
     * <p>The description for the version.</p>
     */
    inline void SetVersionDescription(Aws::String&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::move(value); }

    /**
     * <p>The description for the version.</p>
     */
    inline void SetVersionDescription(const char* value) { m_versionDescriptionHasBeenSet = true; m_versionDescription.assign(value); }

    /**
     * <p>The description for the version.</p>
     */
    inline LaunchTemplateVersion& WithVersionDescription(const Aws::String& value) { SetVersionDescription(value); return *this;}

    /**
     * <p>The description for the version.</p>
     */
    inline LaunchTemplateVersion& WithVersionDescription(Aws::String&& value) { SetVersionDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the version.</p>
     */
    inline LaunchTemplateVersion& WithVersionDescription(const char* value) { SetVersionDescription(value); return *this;}


    /**
     * <p>The time the version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time the version was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time the version was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time the version was created.</p>
     */
    inline LaunchTemplateVersion& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time the version was created.</p>
     */
    inline LaunchTemplateVersion& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The principal that created the version.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The principal that created the version.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The principal that created the version.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The principal that created the version.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The principal that created the version.</p>
     */
    inline LaunchTemplateVersion& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The principal that created the version.</p>
     */
    inline LaunchTemplateVersion& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The principal that created the version.</p>
     */
    inline LaunchTemplateVersion& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>Indicates whether the version is the default version.</p>
     */
    inline bool GetDefaultVersion() const{ return m_defaultVersion; }

    /**
     * <p>Indicates whether the version is the default version.</p>
     */
    inline void SetDefaultVersion(bool value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = value; }

    /**
     * <p>Indicates whether the version is the default version.</p>
     */
    inline LaunchTemplateVersion& WithDefaultVersion(bool value) { SetDefaultVersion(value); return *this;}


    /**
     * <p>Information about the launch template.</p>
     */
    inline const ResponseLaunchTemplateData& GetLaunchTemplateData() const{ return m_launchTemplateData; }

    /**
     * <p>Information about the launch template.</p>
     */
    inline void SetLaunchTemplateData(const ResponseLaunchTemplateData& value) { m_launchTemplateDataHasBeenSet = true; m_launchTemplateData = value; }

    /**
     * <p>Information about the launch template.</p>
     */
    inline void SetLaunchTemplateData(ResponseLaunchTemplateData&& value) { m_launchTemplateDataHasBeenSet = true; m_launchTemplateData = std::move(value); }

    /**
     * <p>Information about the launch template.</p>
     */
    inline LaunchTemplateVersion& WithLaunchTemplateData(const ResponseLaunchTemplateData& value) { SetLaunchTemplateData(value); return *this;}

    /**
     * <p>Information about the launch template.</p>
     */
    inline LaunchTemplateVersion& WithLaunchTemplateData(ResponseLaunchTemplateData&& value) { SetLaunchTemplateData(std::move(value)); return *this;}

  private:

    Aws::String m_launchTemplateId;
    bool m_launchTemplateIdHasBeenSet;

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet;

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet;

    bool m_defaultVersion;
    bool m_defaultVersionHasBeenSet;

    ResponseLaunchTemplateData m_launchTemplateData;
    bool m_launchTemplateDataHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
