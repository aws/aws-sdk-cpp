/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cur/CostandUsageReportService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cur/model/TimeUnit.h>
#include <aws/cur/model/ReportFormat.h>
#include <aws/cur/model/CompressionFormat.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cur/model/AWSRegion.h>
#include <aws/cur/model/ReportVersioning.h>
#include <aws/cur/model/ReportStatus.h>
#include <aws/cur/model/SchemaElement.h>
#include <aws/cur/model/AdditionalArtifact.h>
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
namespace CostandUsageReportService
{
namespace Model
{

  /**
   * <p>The definition of Amazon Web Services Cost and Usage Report. You can specify
   * the report name, time unit, report format, compression format, S3 bucket,
   * additional artifacts, and schema elements in the definition. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/ReportDefinition">AWS
   * API Reference</a></p>
   */
  class ReportDefinition
  {
  public:
    AWS_COSTANDUSAGEREPORTSERVICE_API ReportDefinition() = default;
    AWS_COSTANDUSAGEREPORTSERVICE_API ReportDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTANDUSAGEREPORTSERVICE_API ReportDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTANDUSAGEREPORTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetReportName() const { return m_reportName; }
    inline bool ReportNameHasBeenSet() const { return m_reportNameHasBeenSet; }
    template<typename ReportNameT = Aws::String>
    void SetReportName(ReportNameT&& value) { m_reportNameHasBeenSet = true; m_reportName = std::forward<ReportNameT>(value); }
    template<typename ReportNameT = Aws::String>
    ReportDefinition& WithReportName(ReportNameT&& value) { SetReportName(std::forward<ReportNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline TimeUnit GetTimeUnit() const { return m_timeUnit; }
    inline bool TimeUnitHasBeenSet() const { return m_timeUnitHasBeenSet; }
    inline void SetTimeUnit(TimeUnit value) { m_timeUnitHasBeenSet = true; m_timeUnit = value; }
    inline ReportDefinition& WithTimeUnit(TimeUnit value) { SetTimeUnit(value); return *this;}
    ///@}

    ///@{
    
    inline ReportFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(ReportFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline ReportDefinition& WithFormat(ReportFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    
    inline CompressionFormat GetCompression() const { return m_compression; }
    inline bool CompressionHasBeenSet() const { return m_compressionHasBeenSet; }
    inline void SetCompression(CompressionFormat value) { m_compressionHasBeenSet = true; m_compression = value; }
    inline ReportDefinition& WithCompression(CompressionFormat value) { SetCompression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of strings that indicate additional content that Amazon Web Services
     * includes in the report, such as individual resource IDs. </p>
     */
    inline const Aws::Vector<SchemaElement>& GetAdditionalSchemaElements() const { return m_additionalSchemaElements; }
    inline bool AdditionalSchemaElementsHasBeenSet() const { return m_additionalSchemaElementsHasBeenSet; }
    template<typename AdditionalSchemaElementsT = Aws::Vector<SchemaElement>>
    void SetAdditionalSchemaElements(AdditionalSchemaElementsT&& value) { m_additionalSchemaElementsHasBeenSet = true; m_additionalSchemaElements = std::forward<AdditionalSchemaElementsT>(value); }
    template<typename AdditionalSchemaElementsT = Aws::Vector<SchemaElement>>
    ReportDefinition& WithAdditionalSchemaElements(AdditionalSchemaElementsT&& value) { SetAdditionalSchemaElements(std::forward<AdditionalSchemaElementsT>(value)); return *this;}
    inline ReportDefinition& AddAdditionalSchemaElements(SchemaElement value) { m_additionalSchemaElementsHasBeenSet = true; m_additionalSchemaElements.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    ReportDefinition& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetS3Prefix() const { return m_s3Prefix; }
    inline bool S3PrefixHasBeenSet() const { return m_s3PrefixHasBeenSet; }
    template<typename S3PrefixT = Aws::String>
    void SetS3Prefix(S3PrefixT&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::forward<S3PrefixT>(value); }
    template<typename S3PrefixT = Aws::String>
    ReportDefinition& WithS3Prefix(S3PrefixT&& value) { SetS3Prefix(std::forward<S3PrefixT>(value)); return *this;}
    ///@}

    ///@{
    
    inline AWSRegion GetS3Region() const { return m_s3Region; }
    inline bool S3RegionHasBeenSet() const { return m_s3RegionHasBeenSet; }
    inline void SetS3Region(AWSRegion value) { m_s3RegionHasBeenSet = true; m_s3Region = value; }
    inline ReportDefinition& WithS3Region(AWSRegion value) { SetS3Region(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of manifests that you want Amazon Web Services to create for this
     * report.</p>
     */
    inline const Aws::Vector<AdditionalArtifact>& GetAdditionalArtifacts() const { return m_additionalArtifacts; }
    inline bool AdditionalArtifactsHasBeenSet() const { return m_additionalArtifactsHasBeenSet; }
    template<typename AdditionalArtifactsT = Aws::Vector<AdditionalArtifact>>
    void SetAdditionalArtifacts(AdditionalArtifactsT&& value) { m_additionalArtifactsHasBeenSet = true; m_additionalArtifacts = std::forward<AdditionalArtifactsT>(value); }
    template<typename AdditionalArtifactsT = Aws::Vector<AdditionalArtifact>>
    ReportDefinition& WithAdditionalArtifacts(AdditionalArtifactsT&& value) { SetAdditionalArtifacts(std::forward<AdditionalArtifactsT>(value)); return *this;}
    inline ReportDefinition& AddAdditionalArtifacts(AdditionalArtifact value) { m_additionalArtifactsHasBeenSet = true; m_additionalArtifacts.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether you want Amazon Web Services to update your reports after they have
     * been finalized if Amazon Web Services detects charges related to previous
     * months. These charges can include refunds, credits, or support fees.</p>
     */
    inline bool GetRefreshClosedReports() const { return m_refreshClosedReports; }
    inline bool RefreshClosedReportsHasBeenSet() const { return m_refreshClosedReportsHasBeenSet; }
    inline void SetRefreshClosedReports(bool value) { m_refreshClosedReportsHasBeenSet = true; m_refreshClosedReports = value; }
    inline ReportDefinition& WithRefreshClosedReports(bool value) { SetRefreshClosedReports(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether you want Amazon Web Services to overwrite the previous version of
     * each report or to deliver the report in addition to the previous versions.</p>
     */
    inline ReportVersioning GetReportVersioning() const { return m_reportVersioning; }
    inline bool ReportVersioningHasBeenSet() const { return m_reportVersioningHasBeenSet; }
    inline void SetReportVersioning(ReportVersioning value) { m_reportVersioningHasBeenSet = true; m_reportVersioning = value; }
    inline ReportDefinition& WithReportVersioning(ReportVersioning value) { SetReportVersioning(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon resource name of the billing view. The
     * <code>BillingViewArn</code> is needed to create Amazon Web Services Cost and
     * Usage Report for each billing group maintained in the Amazon Web Services
     * Billing Conductor service. The <code>BillingViewArn</code> for a billing group
     * can be constructed as:
     * <code>arn:aws:billing::payer-account-id:billingview/billing-group-primary-account-id</code>
     * </p>
     */
    inline const Aws::String& GetBillingViewArn() const { return m_billingViewArn; }
    inline bool BillingViewArnHasBeenSet() const { return m_billingViewArnHasBeenSet; }
    template<typename BillingViewArnT = Aws::String>
    void SetBillingViewArn(BillingViewArnT&& value) { m_billingViewArnHasBeenSet = true; m_billingViewArn = std::forward<BillingViewArnT>(value); }
    template<typename BillingViewArnT = Aws::String>
    ReportDefinition& WithBillingViewArn(BillingViewArnT&& value) { SetBillingViewArn(std::forward<BillingViewArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the report.</p>
     */
    inline const ReportStatus& GetReportStatus() const { return m_reportStatus; }
    inline bool ReportStatusHasBeenSet() const { return m_reportStatusHasBeenSet; }
    template<typename ReportStatusT = ReportStatus>
    void SetReportStatus(ReportStatusT&& value) { m_reportStatusHasBeenSet = true; m_reportStatus = std::forward<ReportStatusT>(value); }
    template<typename ReportStatusT = ReportStatus>
    ReportDefinition& WithReportStatus(ReportStatusT&& value) { SetReportStatus(std::forward<ReportStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reportName;
    bool m_reportNameHasBeenSet = false;

    TimeUnit m_timeUnit{TimeUnit::NOT_SET};
    bool m_timeUnitHasBeenSet = false;

    ReportFormat m_format{ReportFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    CompressionFormat m_compression{CompressionFormat::NOT_SET};
    bool m_compressionHasBeenSet = false;

    Aws::Vector<SchemaElement> m_additionalSchemaElements;
    bool m_additionalSchemaElementsHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet = false;

    AWSRegion m_s3Region{AWSRegion::NOT_SET};
    bool m_s3RegionHasBeenSet = false;

    Aws::Vector<AdditionalArtifact> m_additionalArtifacts;
    bool m_additionalArtifactsHasBeenSet = false;

    bool m_refreshClosedReports{false};
    bool m_refreshClosedReportsHasBeenSet = false;

    ReportVersioning m_reportVersioning{ReportVersioning::NOT_SET};
    bool m_reportVersioningHasBeenSet = false;

    Aws::String m_billingViewArn;
    bool m_billingViewArnHasBeenSet = false;

    ReportStatus m_reportStatus;
    bool m_reportStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CostandUsageReportService
} // namespace Aws
