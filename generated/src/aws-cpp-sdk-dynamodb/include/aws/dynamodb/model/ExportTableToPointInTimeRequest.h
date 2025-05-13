/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dynamodb/model/S3SseAlgorithm.h>
#include <aws/dynamodb/model/ExportFormat.h>
#include <aws/dynamodb/model/ExportType.h>
#include <aws/dynamodb/model/IncrementalExportSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class ExportTableToPointInTimeRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API ExportTableToPointInTimeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportTableToPointInTime"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with the table to export.</p>
     */
    inline const Aws::String& GetTableArn() const { return m_tableArn; }
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }
    template<typename TableArnT = Aws::String>
    void SetTableArn(TableArnT&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::forward<TableArnT>(value); }
    template<typename TableArnT = Aws::String>
    ExportTableToPointInTimeRequest& WithTableArn(TableArnT&& value) { SetTableArn(std::forward<TableArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time in the past from which to export table data, counted in seconds from the
     * start of the Unix epoch. The table export will be a snapshot of the table's
     * state at this point in time.</p>
     */
    inline const Aws::Utils::DateTime& GetExportTime() const { return m_exportTime; }
    inline bool ExportTimeHasBeenSet() const { return m_exportTimeHasBeenSet; }
    template<typename ExportTimeT = Aws::Utils::DateTime>
    void SetExportTime(ExportTimeT&& value) { m_exportTimeHasBeenSet = true; m_exportTime = std::forward<ExportTimeT>(value); }
    template<typename ExportTimeT = Aws::Utils::DateTime>
    ExportTableToPointInTimeRequest& WithExportTime(ExportTimeT&& value) { SetExportTime(std::forward<ExportTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Providing a <code>ClientToken</code> makes the call to
     * <code>ExportTableToPointInTimeInput</code> idempotent, meaning that multiple
     * identical calls have the same effect as one single call.</p> <p>A client token
     * is valid for 8 hours after the first request that uses it is completed. After 8
     * hours, any request with the same client token is treated as a new request. Do
     * not resubmit the same request with the same client token for more than 8 hours,
     * or the result might not be idempotent.</p> <p>If you submit a request with the
     * same client token but a change in other parameters within the 8-hour idempotency
     * window, DynamoDB returns an <code>ImportConflictException</code>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    ExportTableToPointInTimeRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket to export the snapshot to.</p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    ExportTableToPointInTimeRequest& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the bucket the export
     * will be stored in.</p>  <p>S3BucketOwner is a required parameter when
     * exporting to a S3 bucket in another account.</p> 
     */
    inline const Aws::String& GetS3BucketOwner() const { return m_s3BucketOwner; }
    inline bool S3BucketOwnerHasBeenSet() const { return m_s3BucketOwnerHasBeenSet; }
    template<typename S3BucketOwnerT = Aws::String>
    void SetS3BucketOwner(S3BucketOwnerT&& value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner = std::forward<S3BucketOwnerT>(value); }
    template<typename S3BucketOwnerT = Aws::String>
    ExportTableToPointInTimeRequest& WithS3BucketOwner(S3BucketOwnerT&& value) { SetS3BucketOwner(std::forward<S3BucketOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket prefix to use as the file name and path of the exported
     * snapshot.</p>
     */
    inline const Aws::String& GetS3Prefix() const { return m_s3Prefix; }
    inline bool S3PrefixHasBeenSet() const { return m_s3PrefixHasBeenSet; }
    template<typename S3PrefixT = Aws::String>
    void SetS3Prefix(S3PrefixT&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::forward<S3PrefixT>(value); }
    template<typename S3PrefixT = Aws::String>
    ExportTableToPointInTimeRequest& WithS3Prefix(S3PrefixT&& value) { SetS3Prefix(std::forward<S3PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of encryption used on the bucket where export data will be stored. Valid
     * values for <code>S3SseAlgorithm</code> are:</p> <ul> <li> <p>
     * <code>AES256</code> - server-side encryption with Amazon S3 managed keys</p>
     * </li> <li> <p> <code>KMS</code> - server-side encryption with KMS managed
     * keys</p> </li> </ul>
     */
    inline S3SseAlgorithm GetS3SseAlgorithm() const { return m_s3SseAlgorithm; }
    inline bool S3SseAlgorithmHasBeenSet() const { return m_s3SseAlgorithmHasBeenSet; }
    inline void SetS3SseAlgorithm(S3SseAlgorithm value) { m_s3SseAlgorithmHasBeenSet = true; m_s3SseAlgorithm = value; }
    inline ExportTableToPointInTimeRequest& WithS3SseAlgorithm(S3SseAlgorithm value) { SetS3SseAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS managed key used to encrypt the S3 bucket where export data
     * will be stored (if applicable).</p>
     */
    inline const Aws::String& GetS3SseKmsKeyId() const { return m_s3SseKmsKeyId; }
    inline bool S3SseKmsKeyIdHasBeenSet() const { return m_s3SseKmsKeyIdHasBeenSet; }
    template<typename S3SseKmsKeyIdT = Aws::String>
    void SetS3SseKmsKeyId(S3SseKmsKeyIdT&& value) { m_s3SseKmsKeyIdHasBeenSet = true; m_s3SseKmsKeyId = std::forward<S3SseKmsKeyIdT>(value); }
    template<typename S3SseKmsKeyIdT = Aws::String>
    ExportTableToPointInTimeRequest& WithS3SseKmsKeyId(S3SseKmsKeyIdT&& value) { SetS3SseKmsKeyId(std::forward<S3SseKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format for the exported data. Valid values for <code>ExportFormat</code>
     * are <code>DYNAMODB_JSON</code> or <code>ION</code>.</p>
     */
    inline ExportFormat GetExportFormat() const { return m_exportFormat; }
    inline bool ExportFormatHasBeenSet() const { return m_exportFormatHasBeenSet; }
    inline void SetExportFormat(ExportFormat value) { m_exportFormatHasBeenSet = true; m_exportFormat = value; }
    inline ExportTableToPointInTimeRequest& WithExportFormat(ExportFormat value) { SetExportFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Choice of whether to execute as a full export or incremental export. Valid
     * values are FULL_EXPORT or INCREMENTAL_EXPORT. The default value is FULL_EXPORT.
     * If INCREMENTAL_EXPORT is provided, the IncrementalExportSpecification must also
     * be used.</p>
     */
    inline ExportType GetExportType() const { return m_exportType; }
    inline bool ExportTypeHasBeenSet() const { return m_exportTypeHasBeenSet; }
    inline void SetExportType(ExportType value) { m_exportTypeHasBeenSet = true; m_exportType = value; }
    inline ExportTableToPointInTimeRequest& WithExportType(ExportType value) { SetExportType(value); return *this;}
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
    ExportTableToPointInTimeRequest& WithIncrementalExportSpecification(IncrementalExportSpecificationT&& value) { SetIncrementalExportSpecification(std::forward<IncrementalExportSpecificationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet = false;

    Aws::Utils::DateTime m_exportTime{};
    bool m_exportTimeHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

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

    ExportFormat m_exportFormat{ExportFormat::NOT_SET};
    bool m_exportFormatHasBeenSet = false;

    ExportType m_exportType{ExportType::NOT_SET};
    bool m_exportTypeHasBeenSet = false;

    IncrementalExportSpecification m_incrementalExportSpecification;
    bool m_incrementalExportSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
