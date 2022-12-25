/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/model/ReportContext.h>
#include <aws/license-manager/model/ReportFrequency.h>
#include <aws/license-manager/model/S3Location.h>
#include <aws/license-manager/model/ReportType.h>
#include <aws/license-manager/model/Tag.h>
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
namespace LicenseManager
{
namespace Model
{

  /**
   * <p>Describe the details of a report generator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ReportGenerator">AWS
   * API Reference</a></p>
   */
  class ReportGenerator
  {
  public:
    AWS_LICENSEMANAGER_API ReportGenerator();
    AWS_LICENSEMANAGER_API ReportGenerator(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API ReportGenerator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the report generator.</p>
     */
    inline const Aws::String& GetReportGeneratorName() const{ return m_reportGeneratorName; }

    /**
     * <p>Name of the report generator.</p>
     */
    inline bool ReportGeneratorNameHasBeenSet() const { return m_reportGeneratorNameHasBeenSet; }

    /**
     * <p>Name of the report generator.</p>
     */
    inline void SetReportGeneratorName(const Aws::String& value) { m_reportGeneratorNameHasBeenSet = true; m_reportGeneratorName = value; }

    /**
     * <p>Name of the report generator.</p>
     */
    inline void SetReportGeneratorName(Aws::String&& value) { m_reportGeneratorNameHasBeenSet = true; m_reportGeneratorName = std::move(value); }

    /**
     * <p>Name of the report generator.</p>
     */
    inline void SetReportGeneratorName(const char* value) { m_reportGeneratorNameHasBeenSet = true; m_reportGeneratorName.assign(value); }

    /**
     * <p>Name of the report generator.</p>
     */
    inline ReportGenerator& WithReportGeneratorName(const Aws::String& value) { SetReportGeneratorName(value); return *this;}

    /**
     * <p>Name of the report generator.</p>
     */
    inline ReportGenerator& WithReportGeneratorName(Aws::String&& value) { SetReportGeneratorName(std::move(value)); return *this;}

    /**
     * <p>Name of the report generator.</p>
     */
    inline ReportGenerator& WithReportGeneratorName(const char* value) { SetReportGeneratorName(value); return *this;}


    /**
     * <p>Type of reports that are generated.</p>
     */
    inline const Aws::Vector<ReportType>& GetReportType() const{ return m_reportType; }

    /**
     * <p>Type of reports that are generated.</p>
     */
    inline bool ReportTypeHasBeenSet() const { return m_reportTypeHasBeenSet; }

    /**
     * <p>Type of reports that are generated.</p>
     */
    inline void SetReportType(const Aws::Vector<ReportType>& value) { m_reportTypeHasBeenSet = true; m_reportType = value; }

    /**
     * <p>Type of reports that are generated.</p>
     */
    inline void SetReportType(Aws::Vector<ReportType>&& value) { m_reportTypeHasBeenSet = true; m_reportType = std::move(value); }

    /**
     * <p>Type of reports that are generated.</p>
     */
    inline ReportGenerator& WithReportType(const Aws::Vector<ReportType>& value) { SetReportType(value); return *this;}

    /**
     * <p>Type of reports that are generated.</p>
     */
    inline ReportGenerator& WithReportType(Aws::Vector<ReportType>&& value) { SetReportType(std::move(value)); return *this;}

    /**
     * <p>Type of reports that are generated.</p>
     */
    inline ReportGenerator& AddReportType(const ReportType& value) { m_reportTypeHasBeenSet = true; m_reportType.push_back(value); return *this; }

    /**
     * <p>Type of reports that are generated.</p>
     */
    inline ReportGenerator& AddReportType(ReportType&& value) { m_reportTypeHasBeenSet = true; m_reportType.push_back(std::move(value)); return *this; }


    /**
     * <p>License configuration type for this generator.</p>
     */
    inline const ReportContext& GetReportContext() const{ return m_reportContext; }

    /**
     * <p>License configuration type for this generator.</p>
     */
    inline bool ReportContextHasBeenSet() const { return m_reportContextHasBeenSet; }

    /**
     * <p>License configuration type for this generator.</p>
     */
    inline void SetReportContext(const ReportContext& value) { m_reportContextHasBeenSet = true; m_reportContext = value; }

    /**
     * <p>License configuration type for this generator.</p>
     */
    inline void SetReportContext(ReportContext&& value) { m_reportContextHasBeenSet = true; m_reportContext = std::move(value); }

    /**
     * <p>License configuration type for this generator.</p>
     */
    inline ReportGenerator& WithReportContext(const ReportContext& value) { SetReportContext(value); return *this;}

    /**
     * <p>License configuration type for this generator.</p>
     */
    inline ReportGenerator& WithReportContext(ReportContext&& value) { SetReportContext(std::move(value)); return *this;}


    /**
     * <p>Details about how frequently reports are generated.</p>
     */
    inline const ReportFrequency& GetReportFrequency() const{ return m_reportFrequency; }

    /**
     * <p>Details about how frequently reports are generated.</p>
     */
    inline bool ReportFrequencyHasBeenSet() const { return m_reportFrequencyHasBeenSet; }

    /**
     * <p>Details about how frequently reports are generated.</p>
     */
    inline void SetReportFrequency(const ReportFrequency& value) { m_reportFrequencyHasBeenSet = true; m_reportFrequency = value; }

    /**
     * <p>Details about how frequently reports are generated.</p>
     */
    inline void SetReportFrequency(ReportFrequency&& value) { m_reportFrequencyHasBeenSet = true; m_reportFrequency = std::move(value); }

    /**
     * <p>Details about how frequently reports are generated.</p>
     */
    inline ReportGenerator& WithReportFrequency(const ReportFrequency& value) { SetReportFrequency(value); return *this;}

    /**
     * <p>Details about how frequently reports are generated.</p>
     */
    inline ReportGenerator& WithReportFrequency(ReportFrequency&& value) { SetReportFrequency(std::move(value)); return *this;}


    /**
     * <p>Amazon Resource Name (ARN) of the report generator.</p>
     */
    inline const Aws::String& GetLicenseManagerReportGeneratorArn() const{ return m_licenseManagerReportGeneratorArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the report generator.</p>
     */
    inline bool LicenseManagerReportGeneratorArnHasBeenSet() const { return m_licenseManagerReportGeneratorArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the report generator.</p>
     */
    inline void SetLicenseManagerReportGeneratorArn(const Aws::String& value) { m_licenseManagerReportGeneratorArnHasBeenSet = true; m_licenseManagerReportGeneratorArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the report generator.</p>
     */
    inline void SetLicenseManagerReportGeneratorArn(Aws::String&& value) { m_licenseManagerReportGeneratorArnHasBeenSet = true; m_licenseManagerReportGeneratorArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the report generator.</p>
     */
    inline void SetLicenseManagerReportGeneratorArn(const char* value) { m_licenseManagerReportGeneratorArnHasBeenSet = true; m_licenseManagerReportGeneratorArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the report generator.</p>
     */
    inline ReportGenerator& WithLicenseManagerReportGeneratorArn(const Aws::String& value) { SetLicenseManagerReportGeneratorArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the report generator.</p>
     */
    inline ReportGenerator& WithLicenseManagerReportGeneratorArn(Aws::String&& value) { SetLicenseManagerReportGeneratorArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the report generator.</p>
     */
    inline ReportGenerator& WithLicenseManagerReportGeneratorArn(const char* value) { SetLicenseManagerReportGeneratorArn(value); return *this;}


    /**
     * <p>Status of the last report generation attempt.</p>
     */
    inline const Aws::String& GetLastRunStatus() const{ return m_lastRunStatus; }

    /**
     * <p>Status of the last report generation attempt.</p>
     */
    inline bool LastRunStatusHasBeenSet() const { return m_lastRunStatusHasBeenSet; }

    /**
     * <p>Status of the last report generation attempt.</p>
     */
    inline void SetLastRunStatus(const Aws::String& value) { m_lastRunStatusHasBeenSet = true; m_lastRunStatus = value; }

    /**
     * <p>Status of the last report generation attempt.</p>
     */
    inline void SetLastRunStatus(Aws::String&& value) { m_lastRunStatusHasBeenSet = true; m_lastRunStatus = std::move(value); }

    /**
     * <p>Status of the last report generation attempt.</p>
     */
    inline void SetLastRunStatus(const char* value) { m_lastRunStatusHasBeenSet = true; m_lastRunStatus.assign(value); }

    /**
     * <p>Status of the last report generation attempt.</p>
     */
    inline ReportGenerator& WithLastRunStatus(const Aws::String& value) { SetLastRunStatus(value); return *this;}

    /**
     * <p>Status of the last report generation attempt.</p>
     */
    inline ReportGenerator& WithLastRunStatus(Aws::String&& value) { SetLastRunStatus(std::move(value)); return *this;}

    /**
     * <p>Status of the last report generation attempt.</p>
     */
    inline ReportGenerator& WithLastRunStatus(const char* value) { SetLastRunStatus(value); return *this;}


    /**
     * <p>Failure message for the last report generation attempt.</p>
     */
    inline const Aws::String& GetLastRunFailureReason() const{ return m_lastRunFailureReason; }

    /**
     * <p>Failure message for the last report generation attempt.</p>
     */
    inline bool LastRunFailureReasonHasBeenSet() const { return m_lastRunFailureReasonHasBeenSet; }

    /**
     * <p>Failure message for the last report generation attempt.</p>
     */
    inline void SetLastRunFailureReason(const Aws::String& value) { m_lastRunFailureReasonHasBeenSet = true; m_lastRunFailureReason = value; }

    /**
     * <p>Failure message for the last report generation attempt.</p>
     */
    inline void SetLastRunFailureReason(Aws::String&& value) { m_lastRunFailureReasonHasBeenSet = true; m_lastRunFailureReason = std::move(value); }

    /**
     * <p>Failure message for the last report generation attempt.</p>
     */
    inline void SetLastRunFailureReason(const char* value) { m_lastRunFailureReasonHasBeenSet = true; m_lastRunFailureReason.assign(value); }

    /**
     * <p>Failure message for the last report generation attempt.</p>
     */
    inline ReportGenerator& WithLastRunFailureReason(const Aws::String& value) { SetLastRunFailureReason(value); return *this;}

    /**
     * <p>Failure message for the last report generation attempt.</p>
     */
    inline ReportGenerator& WithLastRunFailureReason(Aws::String&& value) { SetLastRunFailureReason(std::move(value)); return *this;}

    /**
     * <p>Failure message for the last report generation attempt.</p>
     */
    inline ReportGenerator& WithLastRunFailureReason(const char* value) { SetLastRunFailureReason(value); return *this;}


    /**
     * <p>Time the last report was generated at.</p>
     */
    inline const Aws::String& GetLastReportGenerationTime() const{ return m_lastReportGenerationTime; }

    /**
     * <p>Time the last report was generated at.</p>
     */
    inline bool LastReportGenerationTimeHasBeenSet() const { return m_lastReportGenerationTimeHasBeenSet; }

    /**
     * <p>Time the last report was generated at.</p>
     */
    inline void SetLastReportGenerationTime(const Aws::String& value) { m_lastReportGenerationTimeHasBeenSet = true; m_lastReportGenerationTime = value; }

    /**
     * <p>Time the last report was generated at.</p>
     */
    inline void SetLastReportGenerationTime(Aws::String&& value) { m_lastReportGenerationTimeHasBeenSet = true; m_lastReportGenerationTime = std::move(value); }

    /**
     * <p>Time the last report was generated at.</p>
     */
    inline void SetLastReportGenerationTime(const char* value) { m_lastReportGenerationTimeHasBeenSet = true; m_lastReportGenerationTime.assign(value); }

    /**
     * <p>Time the last report was generated at.</p>
     */
    inline ReportGenerator& WithLastReportGenerationTime(const Aws::String& value) { SetLastReportGenerationTime(value); return *this;}

    /**
     * <p>Time the last report was generated at.</p>
     */
    inline ReportGenerator& WithLastReportGenerationTime(Aws::String&& value) { SetLastReportGenerationTime(std::move(value)); return *this;}

    /**
     * <p>Time the last report was generated at.</p>
     */
    inline ReportGenerator& WithLastReportGenerationTime(const char* value) { SetLastReportGenerationTime(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID used to create the report generator.</p>
     */
    inline const Aws::String& GetReportCreatorAccount() const{ return m_reportCreatorAccount; }

    /**
     * <p>The Amazon Web Services account ID used to create the report generator.</p>
     */
    inline bool ReportCreatorAccountHasBeenSet() const { return m_reportCreatorAccountHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID used to create the report generator.</p>
     */
    inline void SetReportCreatorAccount(const Aws::String& value) { m_reportCreatorAccountHasBeenSet = true; m_reportCreatorAccount = value; }

    /**
     * <p>The Amazon Web Services account ID used to create the report generator.</p>
     */
    inline void SetReportCreatorAccount(Aws::String&& value) { m_reportCreatorAccountHasBeenSet = true; m_reportCreatorAccount = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID used to create the report generator.</p>
     */
    inline void SetReportCreatorAccount(const char* value) { m_reportCreatorAccountHasBeenSet = true; m_reportCreatorAccount.assign(value); }

    /**
     * <p>The Amazon Web Services account ID used to create the report generator.</p>
     */
    inline ReportGenerator& WithReportCreatorAccount(const Aws::String& value) { SetReportCreatorAccount(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID used to create the report generator.</p>
     */
    inline ReportGenerator& WithReportCreatorAccount(Aws::String&& value) { SetReportCreatorAccount(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID used to create the report generator.</p>
     */
    inline ReportGenerator& WithReportCreatorAccount(const char* value) { SetReportCreatorAccount(value); return *this;}


    /**
     * <p>Description of the report generator.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description of the report generator.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Description of the report generator.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description of the report generator.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Description of the report generator.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description of the report generator.</p>
     */
    inline ReportGenerator& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the report generator.</p>
     */
    inline ReportGenerator& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the report generator.</p>
     */
    inline ReportGenerator& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Details of the S3 bucket that report generator reports are published to.</p>
     */
    inline const S3Location& GetS3Location() const{ return m_s3Location; }

    /**
     * <p>Details of the S3 bucket that report generator reports are published to.</p>
     */
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }

    /**
     * <p>Details of the S3 bucket that report generator reports are published to.</p>
     */
    inline void SetS3Location(const S3Location& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }

    /**
     * <p>Details of the S3 bucket that report generator reports are published to.</p>
     */
    inline void SetS3Location(S3Location&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }

    /**
     * <p>Details of the S3 bucket that report generator reports are published to.</p>
     */
    inline ReportGenerator& WithS3Location(const S3Location& value) { SetS3Location(value); return *this;}

    /**
     * <p>Details of the S3 bucket that report generator reports are published to.</p>
     */
    inline ReportGenerator& WithS3Location(S3Location&& value) { SetS3Location(std::move(value)); return *this;}


    /**
     * <p>Time the report was created.</p>
     */
    inline const Aws::String& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>Time the report was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>Time the report was created.</p>
     */
    inline void SetCreateTime(const Aws::String& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>Time the report was created.</p>
     */
    inline void SetCreateTime(Aws::String&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>Time the report was created.</p>
     */
    inline void SetCreateTime(const char* value) { m_createTimeHasBeenSet = true; m_createTime.assign(value); }

    /**
     * <p>Time the report was created.</p>
     */
    inline ReportGenerator& WithCreateTime(const Aws::String& value) { SetCreateTime(value); return *this;}

    /**
     * <p>Time the report was created.</p>
     */
    inline ReportGenerator& WithCreateTime(Aws::String&& value) { SetCreateTime(std::move(value)); return *this;}

    /**
     * <p>Time the report was created.</p>
     */
    inline ReportGenerator& WithCreateTime(const char* value) { SetCreateTime(value); return *this;}


    /**
     * <p>Tags associated with the report generator.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags associated with the report generator.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags associated with the report generator.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags associated with the report generator.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags associated with the report generator.</p>
     */
    inline ReportGenerator& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags associated with the report generator.</p>
     */
    inline ReportGenerator& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags associated with the report generator.</p>
     */
    inline ReportGenerator& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags associated with the report generator.</p>
     */
    inline ReportGenerator& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_reportGeneratorName;
    bool m_reportGeneratorNameHasBeenSet = false;

    Aws::Vector<ReportType> m_reportType;
    bool m_reportTypeHasBeenSet = false;

    ReportContext m_reportContext;
    bool m_reportContextHasBeenSet = false;

    ReportFrequency m_reportFrequency;
    bool m_reportFrequencyHasBeenSet = false;

    Aws::String m_licenseManagerReportGeneratorArn;
    bool m_licenseManagerReportGeneratorArnHasBeenSet = false;

    Aws::String m_lastRunStatus;
    bool m_lastRunStatusHasBeenSet = false;

    Aws::String m_lastRunFailureReason;
    bool m_lastRunFailureReasonHasBeenSet = false;

    Aws::String m_lastReportGenerationTime;
    bool m_lastReportGenerationTimeHasBeenSet = false;

    Aws::String m_reportCreatorAccount;
    bool m_reportCreatorAccountHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    S3Location m_s3Location;
    bool m_s3LocationHasBeenSet = false;

    Aws::String m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
