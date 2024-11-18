/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/ResponseLaunchTemplateData.h>
#include <aws/ec2/model/OperatorResponse.h>
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
  class LaunchTemplateVersion
  {
  public:
    AWS_EC2_API LaunchTemplateVersion();
    AWS_EC2_API LaunchTemplateVersion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API LaunchTemplateVersion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the launch template.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const{ return m_launchTemplateId; }
    inline bool LaunchTemplateIdHasBeenSet() const { return m_launchTemplateIdHasBeenSet; }
    inline void SetLaunchTemplateId(const Aws::String& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = value; }
    inline void SetLaunchTemplateId(Aws::String&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::move(value); }
    inline void SetLaunchTemplateId(const char* value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId.assign(value); }
    inline LaunchTemplateVersion& WithLaunchTemplateId(const Aws::String& value) { SetLaunchTemplateId(value); return *this;}
    inline LaunchTemplateVersion& WithLaunchTemplateId(Aws::String&& value) { SetLaunchTemplateId(std::move(value)); return *this;}
    inline LaunchTemplateVersion& WithLaunchTemplateId(const char* value) { SetLaunchTemplateId(value); return *this;}
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
    inline LaunchTemplateVersion& WithLaunchTemplateName(const Aws::String& value) { SetLaunchTemplateName(value); return *this;}
    inline LaunchTemplateVersion& WithLaunchTemplateName(Aws::String&& value) { SetLaunchTemplateName(std::move(value)); return *this;}
    inline LaunchTemplateVersion& WithLaunchTemplateName(const char* value) { SetLaunchTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline LaunchTemplateVersion& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the version.</p>
     */
    inline const Aws::String& GetVersionDescription() const{ return m_versionDescription; }
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }
    inline void SetVersionDescription(const Aws::String& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = value; }
    inline void SetVersionDescription(Aws::String&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::move(value); }
    inline void SetVersionDescription(const char* value) { m_versionDescriptionHasBeenSet = true; m_versionDescription.assign(value); }
    inline LaunchTemplateVersion& WithVersionDescription(const Aws::String& value) { SetVersionDescription(value); return *this;}
    inline LaunchTemplateVersion& WithVersionDescription(Aws::String&& value) { SetVersionDescription(std::move(value)); return *this;}
    inline LaunchTemplateVersion& WithVersionDescription(const char* value) { SetVersionDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline LaunchTemplateVersion& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline LaunchTemplateVersion& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal that created the version.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline LaunchTemplateVersion& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline LaunchTemplateVersion& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline LaunchTemplateVersion& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the version is the default version.</p>
     */
    inline bool GetDefaultVersion() const{ return m_defaultVersion; }
    inline bool DefaultVersionHasBeenSet() const { return m_defaultVersionHasBeenSet; }
    inline void SetDefaultVersion(bool value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = value; }
    inline LaunchTemplateVersion& WithDefaultVersion(bool value) { SetDefaultVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the launch template.</p>
     */
    inline const ResponseLaunchTemplateData& GetLaunchTemplateData() const{ return m_launchTemplateData; }
    inline bool LaunchTemplateDataHasBeenSet() const { return m_launchTemplateDataHasBeenSet; }
    inline void SetLaunchTemplateData(const ResponseLaunchTemplateData& value) { m_launchTemplateDataHasBeenSet = true; m_launchTemplateData = value; }
    inline void SetLaunchTemplateData(ResponseLaunchTemplateData&& value) { m_launchTemplateDataHasBeenSet = true; m_launchTemplateData = std::move(value); }
    inline LaunchTemplateVersion& WithLaunchTemplateData(const ResponseLaunchTemplateData& value) { SetLaunchTemplateData(value); return *this;}
    inline LaunchTemplateVersion& WithLaunchTemplateData(ResponseLaunchTemplateData&& value) { SetLaunchTemplateData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity that manages the launch template.</p>
     */
    inline const OperatorResponse& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const OperatorResponse& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(OperatorResponse&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline LaunchTemplateVersion& WithOperator(const OperatorResponse& value) { SetOperator(value); return *this;}
    inline LaunchTemplateVersion& WithOperator(OperatorResponse&& value) { SetOperator(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_launchTemplateId;
    bool m_launchTemplateIdHasBeenSet = false;

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet = false;

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet = false;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    bool m_defaultVersion;
    bool m_defaultVersionHasBeenSet = false;

    ResponseLaunchTemplateData m_launchTemplateData;
    bool m_launchTemplateDataHasBeenSet = false;

    OperatorResponse m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
