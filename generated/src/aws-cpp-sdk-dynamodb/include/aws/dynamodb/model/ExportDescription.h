/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ExportStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dynamodb/model/S3SseAlgorithm.h>
#include <aws/dynamodb/model/ExportFormat.h>
#include <aws/dynamodb/model/ExportType.h>
#include <aws/dynamodb/model/IncrementalExportSpecification.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents the properties of the exported table.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ExportDescription">AWS
   * API Reference</a></p>
   */
  class ExportDescription
  {
  public:
    AWS_DYNAMODB_API ExportDescription() = default;
    AWS_DYNAMODB_API ExportDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ExportDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table export.</p>
     */
    inline const Aws::String& GetExportArn() const { return m_exportArn; }
    inline bool ExportArnHasBeenSet() const { return m_exportArnHasBeenSet; }
    template<typename ExportArnT = Aws::String>
    void SetExportArn(ExportArnT&& value) { m_exportArnHasBeenSet = true; m_exportArn = std::forward<ExportArnT>(value); }
    template<typename ExportArnT = Aws::String>
    ExportDescription& WithExportArn(ExportArnT&& value) { SetExportArn(std::forward<ExportArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Export can be in one of the following states: IN_PROGRESS, COMPLETED, or
     * FAILED.</p>
     */
    inline ExportStatus GetExportStatus() const { return m_exportStatus; }
    inline bool ExportStatusHasBeenSet() const { return m_exportStatusHasBeenSet; }
    inline void SetExportStatus(ExportStatus value) { m_exportStatusHasBeenSet = true; m_exportStatus = value; }
    inline ExportDescription& WithExportStatus(ExportStatus value) { SetExportStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the export task began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ExportDescription& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the export task completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ExportDescription& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the manifest file for the export task.</p>
     */
    inline const Aws::String& GetExportManifest() const { return m_exportManifest; }
    inline bool ExportManifestHasBeenSet() const { return m_exportManifestHasBeenSet; }
    template<typename ExportManifestT = Aws::String>
    void SetExportManifest(ExportManifestT&& value) { m_exportManifestHasBeenSet = true; m_exportManifest = std::forward<ExportManifestT>(value); }
    template<typename ExportManifestT = Aws::String>
    ExportDescription& WithExportManifest(ExportManifestT&& value) { SetExportManifest(std::forward<ExportManifestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table that was exported.</p>
     */
    inline const Aws::String& GetTableArn() const { return m_tableArn; }
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }
    template<typename TableArnT = Aws::String>
    void SetTableArn(TableArnT&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::forward<TableArnT>(value); }
    template<typename TableArnT = Aws::String>
    ExportDescription& WithTableArn(TableArnT&& value) { SetTableArn(std::forward<TableArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique ID of the table that was exported.</p>
     */
    inline const Aws::String& GetTableId() const { return m_tableId; }
    inline bool TableIdHasBeenSet() const { return m_tableIdHasBeenSet; }
    template<typename TableIdT = Aws::String>
    void SetTableId(TableIdT&& value) { m_tableIdHasBeenSet = true; m_tableId = std::forward<TableIdT>(value); }
    template<typename TableIdT = Aws::String>
    ExportDescription& WithTableId(TableIdT&& value) { SetTableId(std::forward<TableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Point in time from which table data was exported.</p>
     */
    inline const Aws::Utils::DateTime& GetExportTime() const { return m_exportTime; }
    inline bool ExportTimeHasBeenSet() const { return m_exportTimeHasBeenSet; }
    template<typename ExportTimeT = Aws::Utils::DateTime>
    void SetExportTime(ExportTimeT&& value) { m_exportTimeHasBeenSet = true; m_exportTime = std::forward<ExportTimeT>(value); }
    template<typename ExportTimeT = Aws::Utils::DateTime>
    ExportDescription& WithExportTime(ExportTimeT&& value) { SetExportTime(std::forward<ExportTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client token that was provided for the export task. A client token makes
     * calls to <code>ExportTableToPointInTimeInput</code> idempotent, meaning that
     * multiple identical calls have the same effect as one single call.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    ExportDescription& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket containing the export.</p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    ExportDescription& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the bucket containing the
     * export.</p>
     */
    inline const Aws::String& GetS3BucketOwner() const { return m_s3BucketOwner; }
    inline bool S3BucketOwnerHasBeenSet() const { return m_s3BucketOwnerHasBeenSet; }
    template<typename S3BucketOwnerT = Aws::String>
    void SetS3BucketOwner(S3BucketOwnerT&& value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner = std::forward<S3BucketOwnerT>(value); }
    template<typename S3BucketOwnerT = Aws::String>
    ExportDescription& WithS3BucketOwner(S3BucketOwnerT&& value) { SetS3BucketOwner(std::forward<S3BucketOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket prefix used as the file name and path of the exported
     * snapshot.</p>
     */
    inline const Aws::String& GetS3Prefix() const { return m_s3Prefix; }
    inline bool S3PrefixHasBeenSet() const { return m_s3PrefixHasBeenSet; }
    template<typename S3PrefixT = Aws::String>
    void SetS3Prefix(S3PrefixT&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::forward<S3PrefixT>(value); }
    template<typename S3PrefixT = Aws::String>
    ExportDescription& WithS3Prefix(S3PrefixT&& value) { SetS3Prefix(std::forward<S3PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of encryption used on the bucket where export data is stored. Valid
     * values for <code>S3SseAlgorithm</code> are:</p> <ul> <li> <p>
     * <code>AES256</code> - server-side encryption with Amazon S3 managed keys</p>
     * </li> <li> <p> <code>KMS</code> - server-side encryption with KMS managed
     * keys</p> </li> </ul>
     */
    inline S3SseAlgorithm GetS3SseAlgorithm() const { return m_s3SseAlgorithm; }
    inline bool S3SseAlgorithmHasBeenSet() const { return m_s3SseAlgorithmHasBeenSet; }
    inline void SetS3SseAlgorithm(S3SseAlgorithm value) { m_s3SseAlgorithmHasBeenSet = true; m_s3SseAlgorithm = value; }
    inline ExportDescription& WithS3SseAlgorithm(S3SseAlgorithm value) { SetS3SseAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS managed key used to encrypt the S3 bucket where export data
     * is stored (if applicable).</p>
     */
    inline const Aws::String& GetS3SseKmsKeyId() const { return m_s3SseKmsKeyId; }
    inline bool S3SseKmsKeyIdHasBeenSet() const { return m_s3SseKmsKeyIdHasBeenSet; }
    template<typename S3SseKmsKeyIdT = Aws::String>
    void SetS3SseKmsKeyId(S3SseKmsKeyIdT&& value) { m_s3SseKmsKeyIdHasBeenSet = true; m_s3SseKmsKeyId = std::forward<S3SseKmsKeyIdT>(value); }
    template<typename S3SseKmsKeyIdT = Aws::String>
    ExportDescription& WithS3SseKmsKeyId(S3SseKmsKeyIdT&& value) { SetS3SseKmsKeyId(std::forward<S3SseKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status code for the result of the failed export.</p>
     */
    inline const Aws::String& GetFailureCode() const { return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    template<typename FailureCodeT = Aws::String>
    void SetFailureCode(FailureCodeT&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::forward<FailureCodeT>(value); }
    template<typename FailureCodeT = Aws::String>
    ExportDescription& WithFailureCode(FailureCodeT&& value) { SetFailureCode(std::forward<FailureCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Export failure reason description.</p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    ExportDescription& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the exported data. Valid values for <code>ExportFormat</code>
     * are <code>DYNAMODB_JSON</code> or <code>ION</code>.</p>
     */
    inline ExportFormat GetExportFormat() const { return m_exportFormat; }
    inline bool ExportFormatHasBeenSet() const { return m_exportFormatHasBeenSet; }
    inline void SetExportFormat(ExportFormat value) { m_exportFormatHasBeenSet = true; m_exportFormat = value; }
    inline ExportDescription& WithExportFormat(ExportFormat value) { SetExportFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The billable size of the table export.</p>
     */
    inline long long GetBilledSizeBytes() const { return m_billedSizeBytes; }
    inline bool BilledSizeBytesHasBeenSet() const { return m_billedSizeBytesHasBeenSet; }
    inline void SetBilledSizeBytes(long long value) { m_billedSizeBytesHasBeenSet = true; m_billedSizeBytes = value; }
    inline ExportDescription& WithBilledSizeBytes(long long value) { SetBilledSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of items exported.</p>
     */
    inline long long GetItemCount() const { return m_itemCount; }
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }
    inline void SetItemCount(long long value) { m_itemCountHasBeenSet = true; m_itemCount = value; }
    inline ExportDescription& WithItemCount(long long value) { SetItemCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of export that was performed. Valid values are
     * <code>FULL_EXPORT</code> or <code>INCREMENTAL_EXPORT</code>.</p>
     */
    inline ExportType GetExportType() const { return m_exportType; }
    inline bool ExportTypeHasBeenSet() const { return m_exportTypeHasBeenSet; }
    inline void SetExportType(ExportType value) { m_exportTypeHasBeenSet = true; m_exportType = value; }
    inline ExportDescription& WithExportType(ExportType value) { SetExportType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional object containing the parameters specific to an incremental
     * export.</p>
     */
    inline const IncrementalExportSpecification& GetIncrementalExportSpecification() const { return m_incrementalExportSpecification; }
    inline bool IncrementalExportSpecificationHasBeenSet() const { return m_incrementalExportSpecificationHasBeenSet; }
    template<typename IncrementalExportSpecificationT = IncrementalExportSpecification>
    void SetIncrementalExportSpecification(IncrementalExportSpecificationT&& value) { m_incrementalExportSpecificationHasBeenSet = true; m_incrementalExportSpecification = std::forward<IncrementalExportSpecificationT>(value); }
    template<typename IncrementalExportSpecificationT = IncrementalExportSpecification>
    ExportDescription& WithIncrementalExportSpecification(IncrementalExportSpecificationT&& value) { SetIncrementalExportSpecification(std::forward<IncrementalExportSpecificationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_exportArn;
    bool m_exportArnHasBeenSet = false;

    ExportStatus m_exportStatus{ExportStatus::NOT_SET};
    bool m_exportStatusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_exportManifest;
    bool m_exportManifestHasBeenSet = false;

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet = false;

    Aws::String m_tableId;
    bool m_tableIdHasBeenSet = false;

    Aws::Utils::DateTime m_exportTime{};
    bool m_exportTimeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3BucketOwner;
    bool m_s3BucketOwnerHasBeenSet = false;

    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet = false;

    S3SseAlgorithm m_s3SseAlgorithm{S3SseAlgorithm::NOT_SET};
    bool m_s3SseAlgorithmHasBeenSet = false;

    Aws::String m_s3SseKmsKeyId;
    bool m_s3SseKmsKeyIdHasBeenSet = false;

    Aws::String m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    ExportFormat m_exportFormat{ExportFormat::NOT_SET};
    bool m_exportFormatHasBeenSet = false;

    long long m_billedSizeBytes{0};
    bool m_billedSizeBytesHasBeenSet = false;

    long long m_itemCount{0};
    bool m_itemCountHasBeenSet = false;

    ExportType m_exportType{ExportType::NOT_SET};
    bool m_exportTypeHasBeenSet = false;

    IncrementalExportSpecification m_incrementalExportSpecification;
    bool m_incrementalExportSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
