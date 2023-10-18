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
    AWS_DYNAMODB_API ExportDescription();
    AWS_DYNAMODB_API ExportDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ExportDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the table export.</p>
     */
    inline const Aws::String& GetExportArn() const{ return m_exportArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the table export.</p>
     */
    inline bool ExportArnHasBeenSet() const { return m_exportArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the table export.</p>
     */
    inline void SetExportArn(const Aws::String& value) { m_exportArnHasBeenSet = true; m_exportArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the table export.</p>
     */
    inline void SetExportArn(Aws::String&& value) { m_exportArnHasBeenSet = true; m_exportArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the table export.</p>
     */
    inline void SetExportArn(const char* value) { m_exportArnHasBeenSet = true; m_exportArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the table export.</p>
     */
    inline ExportDescription& WithExportArn(const Aws::String& value) { SetExportArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the table export.</p>
     */
    inline ExportDescription& WithExportArn(Aws::String&& value) { SetExportArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the table export.</p>
     */
    inline ExportDescription& WithExportArn(const char* value) { SetExportArn(value); return *this;}


    /**
     * <p>Export can be in one of the following states: IN_PROGRESS, COMPLETED, or
     * FAILED.</p>
     */
    inline const ExportStatus& GetExportStatus() const{ return m_exportStatus; }

    /**
     * <p>Export can be in one of the following states: IN_PROGRESS, COMPLETED, or
     * FAILED.</p>
     */
    inline bool ExportStatusHasBeenSet() const { return m_exportStatusHasBeenSet; }

    /**
     * <p>Export can be in one of the following states: IN_PROGRESS, COMPLETED, or
     * FAILED.</p>
     */
    inline void SetExportStatus(const ExportStatus& value) { m_exportStatusHasBeenSet = true; m_exportStatus = value; }

    /**
     * <p>Export can be in one of the following states: IN_PROGRESS, COMPLETED, or
     * FAILED.</p>
     */
    inline void SetExportStatus(ExportStatus&& value) { m_exportStatusHasBeenSet = true; m_exportStatus = std::move(value); }

    /**
     * <p>Export can be in one of the following states: IN_PROGRESS, COMPLETED, or
     * FAILED.</p>
     */
    inline ExportDescription& WithExportStatus(const ExportStatus& value) { SetExportStatus(value); return *this;}

    /**
     * <p>Export can be in one of the following states: IN_PROGRESS, COMPLETED, or
     * FAILED.</p>
     */
    inline ExportDescription& WithExportStatus(ExportStatus&& value) { SetExportStatus(std::move(value)); return *this;}


    /**
     * <p>The time at which the export task began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time at which the export task began.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The time at which the export task began.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The time at which the export task began.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The time at which the export task began.</p>
     */
    inline ExportDescription& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time at which the export task began.</p>
     */
    inline ExportDescription& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the export task completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time at which the export task completed.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The time at which the export task completed.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The time at which the export task completed.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The time at which the export task completed.</p>
     */
    inline ExportDescription& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time at which the export task completed.</p>
     */
    inline ExportDescription& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The name of the manifest file for the export task.</p>
     */
    inline const Aws::String& GetExportManifest() const{ return m_exportManifest; }

    /**
     * <p>The name of the manifest file for the export task.</p>
     */
    inline bool ExportManifestHasBeenSet() const { return m_exportManifestHasBeenSet; }

    /**
     * <p>The name of the manifest file for the export task.</p>
     */
    inline void SetExportManifest(const Aws::String& value) { m_exportManifestHasBeenSet = true; m_exportManifest = value; }

    /**
     * <p>The name of the manifest file for the export task.</p>
     */
    inline void SetExportManifest(Aws::String&& value) { m_exportManifestHasBeenSet = true; m_exportManifest = std::move(value); }

    /**
     * <p>The name of the manifest file for the export task.</p>
     */
    inline void SetExportManifest(const char* value) { m_exportManifestHasBeenSet = true; m_exportManifest.assign(value); }

    /**
     * <p>The name of the manifest file for the export task.</p>
     */
    inline ExportDescription& WithExportManifest(const Aws::String& value) { SetExportManifest(value); return *this;}

    /**
     * <p>The name of the manifest file for the export task.</p>
     */
    inline ExportDescription& WithExportManifest(Aws::String&& value) { SetExportManifest(std::move(value)); return *this;}

    /**
     * <p>The name of the manifest file for the export task.</p>
     */
    inline ExportDescription& WithExportManifest(const char* value) { SetExportManifest(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the table that was exported.</p>
     */
    inline const Aws::String& GetTableArn() const{ return m_tableArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the table that was exported.</p>
     */
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the table that was exported.</p>
     */
    inline void SetTableArn(const Aws::String& value) { m_tableArnHasBeenSet = true; m_tableArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the table that was exported.</p>
     */
    inline void SetTableArn(Aws::String&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the table that was exported.</p>
     */
    inline void SetTableArn(const char* value) { m_tableArnHasBeenSet = true; m_tableArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the table that was exported.</p>
     */
    inline ExportDescription& WithTableArn(const Aws::String& value) { SetTableArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the table that was exported.</p>
     */
    inline ExportDescription& WithTableArn(Aws::String&& value) { SetTableArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the table that was exported.</p>
     */
    inline ExportDescription& WithTableArn(const char* value) { SetTableArn(value); return *this;}


    /**
     * <p>Unique ID of the table that was exported.</p>
     */
    inline const Aws::String& GetTableId() const{ return m_tableId; }

    /**
     * <p>Unique ID of the table that was exported.</p>
     */
    inline bool TableIdHasBeenSet() const { return m_tableIdHasBeenSet; }

    /**
     * <p>Unique ID of the table that was exported.</p>
     */
    inline void SetTableId(const Aws::String& value) { m_tableIdHasBeenSet = true; m_tableId = value; }

    /**
     * <p>Unique ID of the table that was exported.</p>
     */
    inline void SetTableId(Aws::String&& value) { m_tableIdHasBeenSet = true; m_tableId = std::move(value); }

    /**
     * <p>Unique ID of the table that was exported.</p>
     */
    inline void SetTableId(const char* value) { m_tableIdHasBeenSet = true; m_tableId.assign(value); }

    /**
     * <p>Unique ID of the table that was exported.</p>
     */
    inline ExportDescription& WithTableId(const Aws::String& value) { SetTableId(value); return *this;}

    /**
     * <p>Unique ID of the table that was exported.</p>
     */
    inline ExportDescription& WithTableId(Aws::String&& value) { SetTableId(std::move(value)); return *this;}

    /**
     * <p>Unique ID of the table that was exported.</p>
     */
    inline ExportDescription& WithTableId(const char* value) { SetTableId(value); return *this;}


    /**
     * <p>Point in time from which table data was exported.</p>
     */
    inline const Aws::Utils::DateTime& GetExportTime() const{ return m_exportTime; }

    /**
     * <p>Point in time from which table data was exported.</p>
     */
    inline bool ExportTimeHasBeenSet() const { return m_exportTimeHasBeenSet; }

    /**
     * <p>Point in time from which table data was exported.</p>
     */
    inline void SetExportTime(const Aws::Utils::DateTime& value) { m_exportTimeHasBeenSet = true; m_exportTime = value; }

    /**
     * <p>Point in time from which table data was exported.</p>
     */
    inline void SetExportTime(Aws::Utils::DateTime&& value) { m_exportTimeHasBeenSet = true; m_exportTime = std::move(value); }

    /**
     * <p>Point in time from which table data was exported.</p>
     */
    inline ExportDescription& WithExportTime(const Aws::Utils::DateTime& value) { SetExportTime(value); return *this;}

    /**
     * <p>Point in time from which table data was exported.</p>
     */
    inline ExportDescription& WithExportTime(Aws::Utils::DateTime&& value) { SetExportTime(std::move(value)); return *this;}


    /**
     * <p>The client token that was provided for the export task. A client token makes
     * calls to <code>ExportTableToPointInTimeInput</code> idempotent, meaning that
     * multiple identical calls have the same effect as one single call.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The client token that was provided for the export task. A client token makes
     * calls to <code>ExportTableToPointInTimeInput</code> idempotent, meaning that
     * multiple identical calls have the same effect as one single call.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The client token that was provided for the export task. A client token makes
     * calls to <code>ExportTableToPointInTimeInput</code> idempotent, meaning that
     * multiple identical calls have the same effect as one single call.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The client token that was provided for the export task. A client token makes
     * calls to <code>ExportTableToPointInTimeInput</code> idempotent, meaning that
     * multiple identical calls have the same effect as one single call.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The client token that was provided for the export task. A client token makes
     * calls to <code>ExportTableToPointInTimeInput</code> idempotent, meaning that
     * multiple identical calls have the same effect as one single call.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The client token that was provided for the export task. A client token makes
     * calls to <code>ExportTableToPointInTimeInput</code> idempotent, meaning that
     * multiple identical calls have the same effect as one single call.</p>
     */
    inline ExportDescription& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The client token that was provided for the export task. A client token makes
     * calls to <code>ExportTableToPointInTimeInput</code> idempotent, meaning that
     * multiple identical calls have the same effect as one single call.</p>
     */
    inline ExportDescription& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The client token that was provided for the export task. A client token makes
     * calls to <code>ExportTableToPointInTimeInput</code> idempotent, meaning that
     * multiple identical calls have the same effect as one single call.</p>
     */
    inline ExportDescription& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The name of the Amazon S3 bucket containing the export.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The name of the Amazon S3 bucket containing the export.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket containing the export.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The name of the Amazon S3 bucket containing the export.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket containing the export.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket containing the export.</p>
     */
    inline ExportDescription& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket containing the export.</p>
     */
    inline ExportDescription& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket containing the export.</p>
     */
    inline ExportDescription& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account that owns the bucket containing the
     * export.</p>
     */
    inline const Aws::String& GetS3BucketOwner() const{ return m_s3BucketOwner; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the bucket containing the
     * export.</p>
     */
    inline bool S3BucketOwnerHasBeenSet() const { return m_s3BucketOwnerHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the bucket containing the
     * export.</p>
     */
    inline void SetS3BucketOwner(const Aws::String& value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner = value; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the bucket containing the
     * export.</p>
     */
    inline void SetS3BucketOwner(Aws::String&& value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the bucket containing the
     * export.</p>
     */
    inline void SetS3BucketOwner(const char* value) { m_s3BucketOwnerHasBeenSet = true; m_s3BucketOwner.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the bucket containing the
     * export.</p>
     */
    inline ExportDescription& WithS3BucketOwner(const Aws::String& value) { SetS3BucketOwner(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the bucket containing the
     * export.</p>
     */
    inline ExportDescription& WithS3BucketOwner(Aws::String&& value) { SetS3BucketOwner(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the bucket containing the
     * export.</p>
     */
    inline ExportDescription& WithS3BucketOwner(const char* value) { SetS3BucketOwner(value); return *this;}


    /**
     * <p>The Amazon S3 bucket prefix used as the file name and path of the exported
     * snapshot.</p>
     */
    inline const Aws::String& GetS3Prefix() const{ return m_s3Prefix; }

    /**
     * <p>The Amazon S3 bucket prefix used as the file name and path of the exported
     * snapshot.</p>
     */
    inline bool S3PrefixHasBeenSet() const { return m_s3PrefixHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket prefix used as the file name and path of the exported
     * snapshot.</p>
     */
    inline void SetS3Prefix(const Aws::String& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = value; }

    /**
     * <p>The Amazon S3 bucket prefix used as the file name and path of the exported
     * snapshot.</p>
     */
    inline void SetS3Prefix(Aws::String&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::move(value); }

    /**
     * <p>The Amazon S3 bucket prefix used as the file name and path of the exported
     * snapshot.</p>
     */
    inline void SetS3Prefix(const char* value) { m_s3PrefixHasBeenSet = true; m_s3Prefix.assign(value); }

    /**
     * <p>The Amazon S3 bucket prefix used as the file name and path of the exported
     * snapshot.</p>
     */
    inline ExportDescription& WithS3Prefix(const Aws::String& value) { SetS3Prefix(value); return *this;}

    /**
     * <p>The Amazon S3 bucket prefix used as the file name and path of the exported
     * snapshot.</p>
     */
    inline ExportDescription& WithS3Prefix(Aws::String&& value) { SetS3Prefix(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket prefix used as the file name and path of the exported
     * snapshot.</p>
     */
    inline ExportDescription& WithS3Prefix(const char* value) { SetS3Prefix(value); return *this;}


    /**
     * <p>Type of encryption used on the bucket where export data is stored. Valid
     * values for <code>S3SseAlgorithm</code> are:</p> <ul> <li> <p>
     * <code>AES256</code> - server-side encryption with Amazon S3 managed keys</p>
     * </li> <li> <p> <code>KMS</code> - server-side encryption with KMS managed
     * keys</p> </li> </ul>
     */
    inline const S3SseAlgorithm& GetS3SseAlgorithm() const{ return m_s3SseAlgorithm; }

    /**
     * <p>Type of encryption used on the bucket where export data is stored. Valid
     * values for <code>S3SseAlgorithm</code> are:</p> <ul> <li> <p>
     * <code>AES256</code> - server-side encryption with Amazon S3 managed keys</p>
     * </li> <li> <p> <code>KMS</code> - server-side encryption with KMS managed
     * keys</p> </li> </ul>
     */
    inline bool S3SseAlgorithmHasBeenSet() const { return m_s3SseAlgorithmHasBeenSet; }

    /**
     * <p>Type of encryption used on the bucket where export data is stored. Valid
     * values for <code>S3SseAlgorithm</code> are:</p> <ul> <li> <p>
     * <code>AES256</code> - server-side encryption with Amazon S3 managed keys</p>
     * </li> <li> <p> <code>KMS</code> - server-side encryption with KMS managed
     * keys</p> </li> </ul>
     */
    inline void SetS3SseAlgorithm(const S3SseAlgorithm& value) { m_s3SseAlgorithmHasBeenSet = true; m_s3SseAlgorithm = value; }

    /**
     * <p>Type of encryption used on the bucket where export data is stored. Valid
     * values for <code>S3SseAlgorithm</code> are:</p> <ul> <li> <p>
     * <code>AES256</code> - server-side encryption with Amazon S3 managed keys</p>
     * </li> <li> <p> <code>KMS</code> - server-side encryption with KMS managed
     * keys</p> </li> </ul>
     */
    inline void SetS3SseAlgorithm(S3SseAlgorithm&& value) { m_s3SseAlgorithmHasBeenSet = true; m_s3SseAlgorithm = std::move(value); }

    /**
     * <p>Type of encryption used on the bucket where export data is stored. Valid
     * values for <code>S3SseAlgorithm</code> are:</p> <ul> <li> <p>
     * <code>AES256</code> - server-side encryption with Amazon S3 managed keys</p>
     * </li> <li> <p> <code>KMS</code> - server-side encryption with KMS managed
     * keys</p> </li> </ul>
     */
    inline ExportDescription& WithS3SseAlgorithm(const S3SseAlgorithm& value) { SetS3SseAlgorithm(value); return *this;}

    /**
     * <p>Type of encryption used on the bucket where export data is stored. Valid
     * values for <code>S3SseAlgorithm</code> are:</p> <ul> <li> <p>
     * <code>AES256</code> - server-side encryption with Amazon S3 managed keys</p>
     * </li> <li> <p> <code>KMS</code> - server-side encryption with KMS managed
     * keys</p> </li> </ul>
     */
    inline ExportDescription& WithS3SseAlgorithm(S3SseAlgorithm&& value) { SetS3SseAlgorithm(std::move(value)); return *this;}


    /**
     * <p>The ID of the KMS managed key used to encrypt the S3 bucket where export data
     * is stored (if applicable).</p>
     */
    inline const Aws::String& GetS3SseKmsKeyId() const{ return m_s3SseKmsKeyId; }

    /**
     * <p>The ID of the KMS managed key used to encrypt the S3 bucket where export data
     * is stored (if applicable).</p>
     */
    inline bool S3SseKmsKeyIdHasBeenSet() const { return m_s3SseKmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of the KMS managed key used to encrypt the S3 bucket where export data
     * is stored (if applicable).</p>
     */
    inline void SetS3SseKmsKeyId(const Aws::String& value) { m_s3SseKmsKeyIdHasBeenSet = true; m_s3SseKmsKeyId = value; }

    /**
     * <p>The ID of the KMS managed key used to encrypt the S3 bucket where export data
     * is stored (if applicable).</p>
     */
    inline void SetS3SseKmsKeyId(Aws::String&& value) { m_s3SseKmsKeyIdHasBeenSet = true; m_s3SseKmsKeyId = std::move(value); }

    /**
     * <p>The ID of the KMS managed key used to encrypt the S3 bucket where export data
     * is stored (if applicable).</p>
     */
    inline void SetS3SseKmsKeyId(const char* value) { m_s3SseKmsKeyIdHasBeenSet = true; m_s3SseKmsKeyId.assign(value); }

    /**
     * <p>The ID of the KMS managed key used to encrypt the S3 bucket where export data
     * is stored (if applicable).</p>
     */
    inline ExportDescription& WithS3SseKmsKeyId(const Aws::String& value) { SetS3SseKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the KMS managed key used to encrypt the S3 bucket where export data
     * is stored (if applicable).</p>
     */
    inline ExportDescription& WithS3SseKmsKeyId(Aws::String&& value) { SetS3SseKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the KMS managed key used to encrypt the S3 bucket where export data
     * is stored (if applicable).</p>
     */
    inline ExportDescription& WithS3SseKmsKeyId(const char* value) { SetS3SseKmsKeyId(value); return *this;}


    /**
     * <p>Status code for the result of the failed export.</p>
     */
    inline const Aws::String& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>Status code for the result of the failed export.</p>
     */
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }

    /**
     * <p>Status code for the result of the failed export.</p>
     */
    inline void SetFailureCode(const Aws::String& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }

    /**
     * <p>Status code for the result of the failed export.</p>
     */
    inline void SetFailureCode(Aws::String&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }

    /**
     * <p>Status code for the result of the failed export.</p>
     */
    inline void SetFailureCode(const char* value) { m_failureCodeHasBeenSet = true; m_failureCode.assign(value); }

    /**
     * <p>Status code for the result of the failed export.</p>
     */
    inline ExportDescription& WithFailureCode(const Aws::String& value) { SetFailureCode(value); return *this;}

    /**
     * <p>Status code for the result of the failed export.</p>
     */
    inline ExportDescription& WithFailureCode(Aws::String&& value) { SetFailureCode(std::move(value)); return *this;}

    /**
     * <p>Status code for the result of the failed export.</p>
     */
    inline ExportDescription& WithFailureCode(const char* value) { SetFailureCode(value); return *this;}


    /**
     * <p>Export failure reason description.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }

    /**
     * <p>Export failure reason description.</p>
     */
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }

    /**
     * <p>Export failure reason description.</p>
     */
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }

    /**
     * <p>Export failure reason description.</p>
     */
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::move(value); }

    /**
     * <p>Export failure reason description.</p>
     */
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }

    /**
     * <p>Export failure reason description.</p>
     */
    inline ExportDescription& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}

    /**
     * <p>Export failure reason description.</p>
     */
    inline ExportDescription& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}

    /**
     * <p>Export failure reason description.</p>
     */
    inline ExportDescription& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}


    /**
     * <p>The format of the exported data. Valid values for <code>ExportFormat</code>
     * are <code>DYNAMODB_JSON</code> or <code>ION</code>.</p>
     */
    inline const ExportFormat& GetExportFormat() const{ return m_exportFormat; }

    /**
     * <p>The format of the exported data. Valid values for <code>ExportFormat</code>
     * are <code>DYNAMODB_JSON</code> or <code>ION</code>.</p>
     */
    inline bool ExportFormatHasBeenSet() const { return m_exportFormatHasBeenSet; }

    /**
     * <p>The format of the exported data. Valid values for <code>ExportFormat</code>
     * are <code>DYNAMODB_JSON</code> or <code>ION</code>.</p>
     */
    inline void SetExportFormat(const ExportFormat& value) { m_exportFormatHasBeenSet = true; m_exportFormat = value; }

    /**
     * <p>The format of the exported data. Valid values for <code>ExportFormat</code>
     * are <code>DYNAMODB_JSON</code> or <code>ION</code>.</p>
     */
    inline void SetExportFormat(ExportFormat&& value) { m_exportFormatHasBeenSet = true; m_exportFormat = std::move(value); }

    /**
     * <p>The format of the exported data. Valid values for <code>ExportFormat</code>
     * are <code>DYNAMODB_JSON</code> or <code>ION</code>.</p>
     */
    inline ExportDescription& WithExportFormat(const ExportFormat& value) { SetExportFormat(value); return *this;}

    /**
     * <p>The format of the exported data. Valid values for <code>ExportFormat</code>
     * are <code>DYNAMODB_JSON</code> or <code>ION</code>.</p>
     */
    inline ExportDescription& WithExportFormat(ExportFormat&& value) { SetExportFormat(std::move(value)); return *this;}


    /**
     * <p>The billable size of the table export.</p>
     */
    inline long long GetBilledSizeBytes() const{ return m_billedSizeBytes; }

    /**
     * <p>The billable size of the table export.</p>
     */
    inline bool BilledSizeBytesHasBeenSet() const { return m_billedSizeBytesHasBeenSet; }

    /**
     * <p>The billable size of the table export.</p>
     */
    inline void SetBilledSizeBytes(long long value) { m_billedSizeBytesHasBeenSet = true; m_billedSizeBytes = value; }

    /**
     * <p>The billable size of the table export.</p>
     */
    inline ExportDescription& WithBilledSizeBytes(long long value) { SetBilledSizeBytes(value); return *this;}


    /**
     * <p>The number of items exported.</p>
     */
    inline long long GetItemCount() const{ return m_itemCount; }

    /**
     * <p>The number of items exported.</p>
     */
    inline bool ItemCountHasBeenSet() const { return m_itemCountHasBeenSet; }

    /**
     * <p>The number of items exported.</p>
     */
    inline void SetItemCount(long long value) { m_itemCountHasBeenSet = true; m_itemCount = value; }

    /**
     * <p>The number of items exported.</p>
     */
    inline ExportDescription& WithItemCount(long long value) { SetItemCount(value); return *this;}


    /**
     * <p>The type of export that was performed. Valid values are
     * <code>FULL_EXPORT</code> or <code>INCREMENTAL_EXPORT</code>.</p>
     */
    inline const ExportType& GetExportType() const{ return m_exportType; }

    /**
     * <p>The type of export that was performed. Valid values are
     * <code>FULL_EXPORT</code> or <code>INCREMENTAL_EXPORT</code>.</p>
     */
    inline bool ExportTypeHasBeenSet() const { return m_exportTypeHasBeenSet; }

    /**
     * <p>The type of export that was performed. Valid values are
     * <code>FULL_EXPORT</code> or <code>INCREMENTAL_EXPORT</code>.</p>
     */
    inline void SetExportType(const ExportType& value) { m_exportTypeHasBeenSet = true; m_exportType = value; }

    /**
     * <p>The type of export that was performed. Valid values are
     * <code>FULL_EXPORT</code> or <code>INCREMENTAL_EXPORT</code>.</p>
     */
    inline void SetExportType(ExportType&& value) { m_exportTypeHasBeenSet = true; m_exportType = std::move(value); }

    /**
     * <p>The type of export that was performed. Valid values are
     * <code>FULL_EXPORT</code> or <code>INCREMENTAL_EXPORT</code>.</p>
     */
    inline ExportDescription& WithExportType(const ExportType& value) { SetExportType(value); return *this;}

    /**
     * <p>The type of export that was performed. Valid values are
     * <code>FULL_EXPORT</code> or <code>INCREMENTAL_EXPORT</code>.</p>
     */
    inline ExportDescription& WithExportType(ExportType&& value) { SetExportType(std::move(value)); return *this;}


    /**
     * <p>Optional object containing the parameters specific to an incremental
     * export.</p>
     */
    inline const IncrementalExportSpecification& GetIncrementalExportSpecification() const{ return m_incrementalExportSpecification; }

    /**
     * <p>Optional object containing the parameters specific to an incremental
     * export.</p>
     */
    inline bool IncrementalExportSpecificationHasBeenSet() const { return m_incrementalExportSpecificationHasBeenSet; }

    /**
     * <p>Optional object containing the parameters specific to an incremental
     * export.</p>
     */
    inline void SetIncrementalExportSpecification(const IncrementalExportSpecification& value) { m_incrementalExportSpecificationHasBeenSet = true; m_incrementalExportSpecification = value; }

    /**
     * <p>Optional object containing the parameters specific to an incremental
     * export.</p>
     */
    inline void SetIncrementalExportSpecification(IncrementalExportSpecification&& value) { m_incrementalExportSpecificationHasBeenSet = true; m_incrementalExportSpecification = std::move(value); }

    /**
     * <p>Optional object containing the parameters specific to an incremental
     * export.</p>
     */
    inline ExportDescription& WithIncrementalExportSpecification(const IncrementalExportSpecification& value) { SetIncrementalExportSpecification(value); return *this;}

    /**
     * <p>Optional object containing the parameters specific to an incremental
     * export.</p>
     */
    inline ExportDescription& WithIncrementalExportSpecification(IncrementalExportSpecification&& value) { SetIncrementalExportSpecification(std::move(value)); return *this;}

  private:

    Aws::String m_exportArn;
    bool m_exportArnHasBeenSet = false;

    ExportStatus m_exportStatus;
    bool m_exportStatusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_exportManifest;
    bool m_exportManifestHasBeenSet = false;

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet = false;

    Aws::String m_tableId;
    bool m_tableIdHasBeenSet = false;

    Aws::Utils::DateTime m_exportTime;
    bool m_exportTimeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::String m_s3BucketOwner;
    bool m_s3BucketOwnerHasBeenSet = false;

    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet = false;

    S3SseAlgorithm m_s3SseAlgorithm;
    bool m_s3SseAlgorithmHasBeenSet = false;

    Aws::String m_s3SseKmsKeyId;
    bool m_s3SseKmsKeyIdHasBeenSet = false;

    Aws::String m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    ExportFormat m_exportFormat;
    bool m_exportFormatHasBeenSet = false;

    long long m_billedSizeBytes;
    bool m_billedSizeBytesHasBeenSet = false;

    long long m_itemCount;
    bool m_itemCountHasBeenSet = false;

    ExportType m_exportType;
    bool m_exportTypeHasBeenSet = false;

    IncrementalExportSpecification m_incrementalExportSpecification;
    bool m_incrementalExportSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
