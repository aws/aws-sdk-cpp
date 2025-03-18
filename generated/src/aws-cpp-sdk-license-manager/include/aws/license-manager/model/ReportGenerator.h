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
    AWS_LICENSEMANAGER_API ReportGenerator() = default;
    AWS_LICENSEMANAGER_API ReportGenerator(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API ReportGenerator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the report generator.</p>
     */
    inline const Aws::String& GetReportGeneratorName() const { return m_reportGeneratorName; }
    inline bool ReportGeneratorNameHasBeenSet() const { return m_reportGeneratorNameHasBeenSet; }
    template<typename ReportGeneratorNameT = Aws::String>
    void SetReportGeneratorName(ReportGeneratorNameT&& value) { m_reportGeneratorNameHasBeenSet = true; m_reportGeneratorName = std::forward<ReportGeneratorNameT>(value); }
    template<typename ReportGeneratorNameT = Aws::String>
    ReportGenerator& WithReportGeneratorName(ReportGeneratorNameT&& value) { SetReportGeneratorName(std::forward<ReportGeneratorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of reports that are generated.</p>
     */
    inline const Aws::Vector<ReportType>& GetReportType() const { return m_reportType; }
    inline bool ReportTypeHasBeenSet() const { return m_reportTypeHasBeenSet; }
    template<typename ReportTypeT = Aws::Vector<ReportType>>
    void SetReportType(ReportTypeT&& value) { m_reportTypeHasBeenSet = true; m_reportType = std::forward<ReportTypeT>(value); }
    template<typename ReportTypeT = Aws::Vector<ReportType>>
    ReportGenerator& WithReportType(ReportTypeT&& value) { SetReportType(std::forward<ReportTypeT>(value)); return *this;}
    inline ReportGenerator& AddReportType(ReportType value) { m_reportTypeHasBeenSet = true; m_reportType.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>License configuration type for this generator.</p>
     */
    inline const ReportContext& GetReportContext() const { return m_reportContext; }
    inline bool ReportContextHasBeenSet() const { return m_reportContextHasBeenSet; }
    template<typename ReportContextT = ReportContext>
    void SetReportContext(ReportContextT&& value) { m_reportContextHasBeenSet = true; m_reportContext = std::forward<ReportContextT>(value); }
    template<typename ReportContextT = ReportContext>
    ReportGenerator& WithReportContext(ReportContextT&& value) { SetReportContext(std::forward<ReportContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about how frequently reports are generated.</p>
     */
    inline const ReportFrequency& GetReportFrequency() const { return m_reportFrequency; }
    inline bool ReportFrequencyHasBeenSet() const { return m_reportFrequencyHasBeenSet; }
    template<typename ReportFrequencyT = ReportFrequency>
    void SetReportFrequency(ReportFrequencyT&& value) { m_reportFrequencyHasBeenSet = true; m_reportFrequency = std::forward<ReportFrequencyT>(value); }
    template<typename ReportFrequencyT = ReportFrequency>
    ReportGenerator& WithReportFrequency(ReportFrequencyT&& value) { SetReportFrequency(std::forward<ReportFrequencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the report generator.</p>
     */
    inline const Aws::String& GetLicenseManagerReportGeneratorArn() const { return m_licenseManagerReportGeneratorArn; }
    inline bool LicenseManagerReportGeneratorArnHasBeenSet() const { return m_licenseManagerReportGeneratorArnHasBeenSet; }
    template<typename LicenseManagerReportGeneratorArnT = Aws::String>
    void SetLicenseManagerReportGeneratorArn(LicenseManagerReportGeneratorArnT&& value) { m_licenseManagerReportGeneratorArnHasBeenSet = true; m_licenseManagerReportGeneratorArn = std::forward<LicenseManagerReportGeneratorArnT>(value); }
    template<typename LicenseManagerReportGeneratorArnT = Aws::String>
    ReportGenerator& WithLicenseManagerReportGeneratorArn(LicenseManagerReportGeneratorArnT&& value) { SetLicenseManagerReportGeneratorArn(std::forward<LicenseManagerReportGeneratorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the last report generation attempt.</p>
     */
    inline const Aws::String& GetLastRunStatus() const { return m_lastRunStatus; }
    inline bool LastRunStatusHasBeenSet() const { return m_lastRunStatusHasBeenSet; }
    template<typename LastRunStatusT = Aws::String>
    void SetLastRunStatus(LastRunStatusT&& value) { m_lastRunStatusHasBeenSet = true; m_lastRunStatus = std::forward<LastRunStatusT>(value); }
    template<typename LastRunStatusT = Aws::String>
    ReportGenerator& WithLastRunStatus(LastRunStatusT&& value) { SetLastRunStatus(std::forward<LastRunStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Failure message for the last report generation attempt.</p>
     */
    inline const Aws::String& GetLastRunFailureReason() const { return m_lastRunFailureReason; }
    inline bool LastRunFailureReasonHasBeenSet() const { return m_lastRunFailureReasonHasBeenSet; }
    template<typename LastRunFailureReasonT = Aws::String>
    void SetLastRunFailureReason(LastRunFailureReasonT&& value) { m_lastRunFailureReasonHasBeenSet = true; m_lastRunFailureReason = std::forward<LastRunFailureReasonT>(value); }
    template<typename LastRunFailureReasonT = Aws::String>
    ReportGenerator& WithLastRunFailureReason(LastRunFailureReasonT&& value) { SetLastRunFailureReason(std::forward<LastRunFailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time the last report was generated at.</p>
     */
    inline const Aws::String& GetLastReportGenerationTime() const { return m_lastReportGenerationTime; }
    inline bool LastReportGenerationTimeHasBeenSet() const { return m_lastReportGenerationTimeHasBeenSet; }
    template<typename LastReportGenerationTimeT = Aws::String>
    void SetLastReportGenerationTime(LastReportGenerationTimeT&& value) { m_lastReportGenerationTimeHasBeenSet = true; m_lastReportGenerationTime = std::forward<LastReportGenerationTimeT>(value); }
    template<typename LastReportGenerationTimeT = Aws::String>
    ReportGenerator& WithLastReportGenerationTime(LastReportGenerationTimeT&& value) { SetLastReportGenerationTime(std::forward<LastReportGenerationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID used to create the report generator.</p>
     */
    inline const Aws::String& GetReportCreatorAccount() const { return m_reportCreatorAccount; }
    inline bool ReportCreatorAccountHasBeenSet() const { return m_reportCreatorAccountHasBeenSet; }
    template<typename ReportCreatorAccountT = Aws::String>
    void SetReportCreatorAccount(ReportCreatorAccountT&& value) { m_reportCreatorAccountHasBeenSet = true; m_reportCreatorAccount = std::forward<ReportCreatorAccountT>(value); }
    template<typename ReportCreatorAccountT = Aws::String>
    ReportGenerator& WithReportCreatorAccount(ReportCreatorAccountT&& value) { SetReportCreatorAccount(std::forward<ReportCreatorAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the report generator.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ReportGenerator& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the S3 bucket that report generator reports are published to.</p>
     */
    inline const S3Location& GetS3Location() const { return m_s3Location; }
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
    template<typename S3LocationT = S3Location>
    void SetS3Location(S3LocationT&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::forward<S3LocationT>(value); }
    template<typename S3LocationT = S3Location>
    ReportGenerator& WithS3Location(S3LocationT&& value) { SetS3Location(std::forward<S3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time the report was created.</p>
     */
    inline const Aws::String& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::String>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::String>
    ReportGenerator& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags associated with the report generator.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ReportGenerator& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ReportGenerator& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
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
