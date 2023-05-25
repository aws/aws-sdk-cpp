/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ImportStatus.h>
#include <aws/dynamodb/model/S3BucketSource.h>
#include <aws/dynamodb/model/InputFormat.h>
#include <aws/dynamodb/model/InputFormatOptions.h>
#include <aws/dynamodb/model/InputCompressionType.h>
#include <aws/dynamodb/model/TableCreationParameters.h>
#include <aws/core/utils/DateTime.h>
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
   * <p> Represents the properties of the table being imported into. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ImportTableDescription">AWS
   * API Reference</a></p>
   */
  class ImportTableDescription
  {
  public:
    AWS_DYNAMODB_API ImportTableDescription();
    AWS_DYNAMODB_API ImportTableDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ImportTableDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Number (ARN) corresponding to the import request. </p>
     */
    inline const Aws::String& GetImportArn() const{ return m_importArn; }

    /**
     * <p> The Amazon Resource Number (ARN) corresponding to the import request. </p>
     */
    inline bool ImportArnHasBeenSet() const { return m_importArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Number (ARN) corresponding to the import request. </p>
     */
    inline void SetImportArn(const Aws::String& value) { m_importArnHasBeenSet = true; m_importArn = value; }

    /**
     * <p> The Amazon Resource Number (ARN) corresponding to the import request. </p>
     */
    inline void SetImportArn(Aws::String&& value) { m_importArnHasBeenSet = true; m_importArn = std::move(value); }

    /**
     * <p> The Amazon Resource Number (ARN) corresponding to the import request. </p>
     */
    inline void SetImportArn(const char* value) { m_importArnHasBeenSet = true; m_importArn.assign(value); }

    /**
     * <p> The Amazon Resource Number (ARN) corresponding to the import request. </p>
     */
    inline ImportTableDescription& WithImportArn(const Aws::String& value) { SetImportArn(value); return *this;}

    /**
     * <p> The Amazon Resource Number (ARN) corresponding to the import request. </p>
     */
    inline ImportTableDescription& WithImportArn(Aws::String&& value) { SetImportArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Number (ARN) corresponding to the import request. </p>
     */
    inline ImportTableDescription& WithImportArn(const char* value) { SetImportArn(value); return *this;}


    /**
     * <p> The status of the import. </p>
     */
    inline const ImportStatus& GetImportStatus() const{ return m_importStatus; }

    /**
     * <p> The status of the import. </p>
     */
    inline bool ImportStatusHasBeenSet() const { return m_importStatusHasBeenSet; }

    /**
     * <p> The status of the import. </p>
     */
    inline void SetImportStatus(const ImportStatus& value) { m_importStatusHasBeenSet = true; m_importStatus = value; }

    /**
     * <p> The status of the import. </p>
     */
    inline void SetImportStatus(ImportStatus&& value) { m_importStatusHasBeenSet = true; m_importStatus = std::move(value); }

    /**
     * <p> The status of the import. </p>
     */
    inline ImportTableDescription& WithImportStatus(const ImportStatus& value) { SetImportStatus(value); return *this;}

    /**
     * <p> The status of the import. </p>
     */
    inline ImportTableDescription& WithImportStatus(ImportStatus&& value) { SetImportStatus(std::move(value)); return *this;}


    /**
     * <p> The Amazon Resource Number (ARN) of the table being imported into. </p>
     */
    inline const Aws::String& GetTableArn() const{ return m_tableArn; }

    /**
     * <p> The Amazon Resource Number (ARN) of the table being imported into. </p>
     */
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Number (ARN) of the table being imported into. </p>
     */
    inline void SetTableArn(const Aws::String& value) { m_tableArnHasBeenSet = true; m_tableArn = value; }

    /**
     * <p> The Amazon Resource Number (ARN) of the table being imported into. </p>
     */
    inline void SetTableArn(Aws::String&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::move(value); }

    /**
     * <p> The Amazon Resource Number (ARN) of the table being imported into. </p>
     */
    inline void SetTableArn(const char* value) { m_tableArnHasBeenSet = true; m_tableArn.assign(value); }

    /**
     * <p> The Amazon Resource Number (ARN) of the table being imported into. </p>
     */
    inline ImportTableDescription& WithTableArn(const Aws::String& value) { SetTableArn(value); return *this;}

    /**
     * <p> The Amazon Resource Number (ARN) of the table being imported into. </p>
     */
    inline ImportTableDescription& WithTableArn(Aws::String&& value) { SetTableArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Number (ARN) of the table being imported into. </p>
     */
    inline ImportTableDescription& WithTableArn(const char* value) { SetTableArn(value); return *this;}


    /**
     * <p> The table id corresponding to the table created by import table process.
     * </p>
     */
    inline const Aws::String& GetTableId() const{ return m_tableId; }

    /**
     * <p> The table id corresponding to the table created by import table process.
     * </p>
     */
    inline bool TableIdHasBeenSet() const { return m_tableIdHasBeenSet; }

    /**
     * <p> The table id corresponding to the table created by import table process.
     * </p>
     */
    inline void SetTableId(const Aws::String& value) { m_tableIdHasBeenSet = true; m_tableId = value; }

    /**
     * <p> The table id corresponding to the table created by import table process.
     * </p>
     */
    inline void SetTableId(Aws::String&& value) { m_tableIdHasBeenSet = true; m_tableId = std::move(value); }

    /**
     * <p> The table id corresponding to the table created by import table process.
     * </p>
     */
    inline void SetTableId(const char* value) { m_tableIdHasBeenSet = true; m_tableId.assign(value); }

    /**
     * <p> The table id corresponding to the table created by import table process.
     * </p>
     */
    inline ImportTableDescription& WithTableId(const Aws::String& value) { SetTableId(value); return *this;}

    /**
     * <p> The table id corresponding to the table created by import table process.
     * </p>
     */
    inline ImportTableDescription& WithTableId(Aws::String&& value) { SetTableId(std::move(value)); return *this;}

    /**
     * <p> The table id corresponding to the table created by import table process.
     * </p>
     */
    inline ImportTableDescription& WithTableId(const char* value) { SetTableId(value); return *this;}


    /**
     * <p> The client token that was provided for the import task. Reusing the client
     * token on retry makes a call to <code>ImportTable</code> idempotent. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p> The client token that was provided for the import task. Reusing the client
     * token on retry makes a call to <code>ImportTable</code> idempotent. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p> The client token that was provided for the import task. Reusing the client
     * token on retry makes a call to <code>ImportTable</code> idempotent. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p> The client token that was provided for the import task. Reusing the client
     * token on retry makes a call to <code>ImportTable</code> idempotent. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p> The client token that was provided for the import task. Reusing the client
     * token on retry makes a call to <code>ImportTable</code> idempotent. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p> The client token that was provided for the import task. Reusing the client
     * token on retry makes a call to <code>ImportTable</code> idempotent. </p>
     */
    inline ImportTableDescription& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p> The client token that was provided for the import task. Reusing the client
     * token on retry makes a call to <code>ImportTable</code> idempotent. </p>
     */
    inline ImportTableDescription& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p> The client token that was provided for the import task. Reusing the client
     * token on retry makes a call to <code>ImportTable</code> idempotent. </p>
     */
    inline ImportTableDescription& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p> Values for the S3 bucket the source file is imported from. Includes bucket
     * name (required), key prefix (optional) and bucket account owner ID (optional).
     * </p>
     */
    inline const S3BucketSource& GetS3BucketSource() const{ return m_s3BucketSource; }

    /**
     * <p> Values for the S3 bucket the source file is imported from. Includes bucket
     * name (required), key prefix (optional) and bucket account owner ID (optional).
     * </p>
     */
    inline bool S3BucketSourceHasBeenSet() const { return m_s3BucketSourceHasBeenSet; }

    /**
     * <p> Values for the S3 bucket the source file is imported from. Includes bucket
     * name (required), key prefix (optional) and bucket account owner ID (optional).
     * </p>
     */
    inline void SetS3BucketSource(const S3BucketSource& value) { m_s3BucketSourceHasBeenSet = true; m_s3BucketSource = value; }

    /**
     * <p> Values for the S3 bucket the source file is imported from. Includes bucket
     * name (required), key prefix (optional) and bucket account owner ID (optional).
     * </p>
     */
    inline void SetS3BucketSource(S3BucketSource&& value) { m_s3BucketSourceHasBeenSet = true; m_s3BucketSource = std::move(value); }

    /**
     * <p> Values for the S3 bucket the source file is imported from. Includes bucket
     * name (required), key prefix (optional) and bucket account owner ID (optional).
     * </p>
     */
    inline ImportTableDescription& WithS3BucketSource(const S3BucketSource& value) { SetS3BucketSource(value); return *this;}

    /**
     * <p> Values for the S3 bucket the source file is imported from. Includes bucket
     * name (required), key prefix (optional) and bucket account owner ID (optional).
     * </p>
     */
    inline ImportTableDescription& WithS3BucketSource(S3BucketSource&& value) { SetS3BucketSource(std::move(value)); return *this;}


    /**
     * <p> The number of errors occurred on importing the source file into the target
     * table. </p>
     */
    inline long long GetErrorCount() const{ return m_errorCount; }

    /**
     * <p> The number of errors occurred on importing the source file into the target
     * table. </p>
     */
    inline bool ErrorCountHasBeenSet() const { return m_errorCountHasBeenSet; }

    /**
     * <p> The number of errors occurred on importing the source file into the target
     * table. </p>
     */
    inline void SetErrorCount(long long value) { m_errorCountHasBeenSet = true; m_errorCount = value; }

    /**
     * <p> The number of errors occurred on importing the source file into the target
     * table. </p>
     */
    inline ImportTableDescription& WithErrorCount(long long value) { SetErrorCount(value); return *this;}


    /**
     * <p> The Amazon Resource Number (ARN) of the Cloudwatch Log Group associated with
     * the target table. </p>
     */
    inline const Aws::String& GetCloudWatchLogGroupArn() const{ return m_cloudWatchLogGroupArn; }

    /**
     * <p> The Amazon Resource Number (ARN) of the Cloudwatch Log Group associated with
     * the target table. </p>
     */
    inline bool CloudWatchLogGroupArnHasBeenSet() const { return m_cloudWatchLogGroupArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Number (ARN) of the Cloudwatch Log Group associated with
     * the target table. </p>
     */
    inline void SetCloudWatchLogGroupArn(const Aws::String& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = value; }

    /**
     * <p> The Amazon Resource Number (ARN) of the Cloudwatch Log Group associated with
     * the target table. </p>
     */
    inline void SetCloudWatchLogGroupArn(Aws::String&& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = std::move(value); }

    /**
     * <p> The Amazon Resource Number (ARN) of the Cloudwatch Log Group associated with
     * the target table. </p>
     */
    inline void SetCloudWatchLogGroupArn(const char* value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn.assign(value); }

    /**
     * <p> The Amazon Resource Number (ARN) of the Cloudwatch Log Group associated with
     * the target table. </p>
     */
    inline ImportTableDescription& WithCloudWatchLogGroupArn(const Aws::String& value) { SetCloudWatchLogGroupArn(value); return *this;}

    /**
     * <p> The Amazon Resource Number (ARN) of the Cloudwatch Log Group associated with
     * the target table. </p>
     */
    inline ImportTableDescription& WithCloudWatchLogGroupArn(Aws::String&& value) { SetCloudWatchLogGroupArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Number (ARN) of the Cloudwatch Log Group associated with
     * the target table. </p>
     */
    inline ImportTableDescription& WithCloudWatchLogGroupArn(const char* value) { SetCloudWatchLogGroupArn(value); return *this;}


    /**
     * <p> The format of the source data going into the target table. </p>
     */
    inline const InputFormat& GetInputFormat() const{ return m_inputFormat; }

    /**
     * <p> The format of the source data going into the target table. </p>
     */
    inline bool InputFormatHasBeenSet() const { return m_inputFormatHasBeenSet; }

    /**
     * <p> The format of the source data going into the target table. </p>
     */
    inline void SetInputFormat(const InputFormat& value) { m_inputFormatHasBeenSet = true; m_inputFormat = value; }

    /**
     * <p> The format of the source data going into the target table. </p>
     */
    inline void SetInputFormat(InputFormat&& value) { m_inputFormatHasBeenSet = true; m_inputFormat = std::move(value); }

    /**
     * <p> The format of the source data going into the target table. </p>
     */
    inline ImportTableDescription& WithInputFormat(const InputFormat& value) { SetInputFormat(value); return *this;}

    /**
     * <p> The format of the source data going into the target table. </p>
     */
    inline ImportTableDescription& WithInputFormat(InputFormat&& value) { SetInputFormat(std::move(value)); return *this;}


    /**
     * <p> The format options for the data that was imported into the target table.
     * There is one value, CsvOption. </p>
     */
    inline const InputFormatOptions& GetInputFormatOptions() const{ return m_inputFormatOptions; }

    /**
     * <p> The format options for the data that was imported into the target table.
     * There is one value, CsvOption. </p>
     */
    inline bool InputFormatOptionsHasBeenSet() const { return m_inputFormatOptionsHasBeenSet; }

    /**
     * <p> The format options for the data that was imported into the target table.
     * There is one value, CsvOption. </p>
     */
    inline void SetInputFormatOptions(const InputFormatOptions& value) { m_inputFormatOptionsHasBeenSet = true; m_inputFormatOptions = value; }

    /**
     * <p> The format options for the data that was imported into the target table.
     * There is one value, CsvOption. </p>
     */
    inline void SetInputFormatOptions(InputFormatOptions&& value) { m_inputFormatOptionsHasBeenSet = true; m_inputFormatOptions = std::move(value); }

    /**
     * <p> The format options for the data that was imported into the target table.
     * There is one value, CsvOption. </p>
     */
    inline ImportTableDescription& WithInputFormatOptions(const InputFormatOptions& value) { SetInputFormatOptions(value); return *this;}

    /**
     * <p> The format options for the data that was imported into the target table.
     * There is one value, CsvOption. </p>
     */
    inline ImportTableDescription& WithInputFormatOptions(InputFormatOptions&& value) { SetInputFormatOptions(std::move(value)); return *this;}


    /**
     * <p> The compression options for the data that has been imported into the target
     * table. The values are NONE, GZIP, or ZSTD. </p>
     */
    inline const InputCompressionType& GetInputCompressionType() const{ return m_inputCompressionType; }

    /**
     * <p> The compression options for the data that has been imported into the target
     * table. The values are NONE, GZIP, or ZSTD. </p>
     */
    inline bool InputCompressionTypeHasBeenSet() const { return m_inputCompressionTypeHasBeenSet; }

    /**
     * <p> The compression options for the data that has been imported into the target
     * table. The values are NONE, GZIP, or ZSTD. </p>
     */
    inline void SetInputCompressionType(const InputCompressionType& value) { m_inputCompressionTypeHasBeenSet = true; m_inputCompressionType = value; }

    /**
     * <p> The compression options for the data that has been imported into the target
     * table. The values are NONE, GZIP, or ZSTD. </p>
     */
    inline void SetInputCompressionType(InputCompressionType&& value) { m_inputCompressionTypeHasBeenSet = true; m_inputCompressionType = std::move(value); }

    /**
     * <p> The compression options for the data that has been imported into the target
     * table. The values are NONE, GZIP, or ZSTD. </p>
     */
    inline ImportTableDescription& WithInputCompressionType(const InputCompressionType& value) { SetInputCompressionType(value); return *this;}

    /**
     * <p> The compression options for the data that has been imported into the target
     * table. The values are NONE, GZIP, or ZSTD. </p>
     */
    inline ImportTableDescription& WithInputCompressionType(InputCompressionType&& value) { SetInputCompressionType(std::move(value)); return *this;}


    /**
     * <p> The parameters for the new table that is being imported into. </p>
     */
    inline const TableCreationParameters& GetTableCreationParameters() const{ return m_tableCreationParameters; }

    /**
     * <p> The parameters for the new table that is being imported into. </p>
     */
    inline bool TableCreationParametersHasBeenSet() const { return m_tableCreationParametersHasBeenSet; }

    /**
     * <p> The parameters for the new table that is being imported into. </p>
     */
    inline void SetTableCreationParameters(const TableCreationParameters& value) { m_tableCreationParametersHasBeenSet = true; m_tableCreationParameters = value; }

    /**
     * <p> The parameters for the new table that is being imported into. </p>
     */
    inline void SetTableCreationParameters(TableCreationParameters&& value) { m_tableCreationParametersHasBeenSet = true; m_tableCreationParameters = std::move(value); }

    /**
     * <p> The parameters for the new table that is being imported into. </p>
     */
    inline ImportTableDescription& WithTableCreationParameters(const TableCreationParameters& value) { SetTableCreationParameters(value); return *this;}

    /**
     * <p> The parameters for the new table that is being imported into. </p>
     */
    inline ImportTableDescription& WithTableCreationParameters(TableCreationParameters&& value) { SetTableCreationParameters(std::move(value)); return *this;}


    /**
     * <p> The time when this import task started. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> The time when this import task started. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> The time when this import task started. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> The time when this import task started. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> The time when this import task started. </p>
     */
    inline ImportTableDescription& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> The time when this import task started. </p>
     */
    inline ImportTableDescription& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p> The time at which the creation of the table associated with this import task
     * completed. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p> The time at which the creation of the table associated with this import task
     * completed. </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p> The time at which the creation of the table associated with this import task
     * completed. </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p> The time at which the creation of the table associated with this import task
     * completed. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p> The time at which the creation of the table associated with this import task
     * completed. </p>
     */
    inline ImportTableDescription& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p> The time at which the creation of the table associated with this import task
     * completed. </p>
     */
    inline ImportTableDescription& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p> The total size of data processed from the source file, in Bytes. </p>
     */
    inline long long GetProcessedSizeBytes() const{ return m_processedSizeBytes; }

    /**
     * <p> The total size of data processed from the source file, in Bytes. </p>
     */
    inline bool ProcessedSizeBytesHasBeenSet() const { return m_processedSizeBytesHasBeenSet; }

    /**
     * <p> The total size of data processed from the source file, in Bytes. </p>
     */
    inline void SetProcessedSizeBytes(long long value) { m_processedSizeBytesHasBeenSet = true; m_processedSizeBytes = value; }

    /**
     * <p> The total size of data processed from the source file, in Bytes. </p>
     */
    inline ImportTableDescription& WithProcessedSizeBytes(long long value) { SetProcessedSizeBytes(value); return *this;}


    /**
     * <p> The total number of items processed from the source file. </p>
     */
    inline long long GetProcessedItemCount() const{ return m_processedItemCount; }

    /**
     * <p> The total number of items processed from the source file. </p>
     */
    inline bool ProcessedItemCountHasBeenSet() const { return m_processedItemCountHasBeenSet; }

    /**
     * <p> The total number of items processed from the source file. </p>
     */
    inline void SetProcessedItemCount(long long value) { m_processedItemCountHasBeenSet = true; m_processedItemCount = value; }

    /**
     * <p> The total number of items processed from the source file. </p>
     */
    inline ImportTableDescription& WithProcessedItemCount(long long value) { SetProcessedItemCount(value); return *this;}


    /**
     * <p> The number of items successfully imported into the new table. </p>
     */
    inline long long GetImportedItemCount() const{ return m_importedItemCount; }

    /**
     * <p> The number of items successfully imported into the new table. </p>
     */
    inline bool ImportedItemCountHasBeenSet() const { return m_importedItemCountHasBeenSet; }

    /**
     * <p> The number of items successfully imported into the new table. </p>
     */
    inline void SetImportedItemCount(long long value) { m_importedItemCountHasBeenSet = true; m_importedItemCount = value; }

    /**
     * <p> The number of items successfully imported into the new table. </p>
     */
    inline ImportTableDescription& WithImportedItemCount(long long value) { SetImportedItemCount(value); return *this;}


    /**
     * <p> The error code corresponding to the failure that the import job ran into
     * during execution. </p>
     */
    inline const Aws::String& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p> The error code corresponding to the failure that the import job ran into
     * during execution. </p>
     */
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }

    /**
     * <p> The error code corresponding to the failure that the import job ran into
     * during execution. </p>
     */
    inline void SetFailureCode(const Aws::String& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }

    /**
     * <p> The error code corresponding to the failure that the import job ran into
     * during execution. </p>
     */
    inline void SetFailureCode(Aws::String&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }

    /**
     * <p> The error code corresponding to the failure that the import job ran into
     * during execution. </p>
     */
    inline void SetFailureCode(const char* value) { m_failureCodeHasBeenSet = true; m_failureCode.assign(value); }

    /**
     * <p> The error code corresponding to the failure that the import job ran into
     * during execution. </p>
     */
    inline ImportTableDescription& WithFailureCode(const Aws::String& value) { SetFailureCode(value); return *this;}

    /**
     * <p> The error code corresponding to the failure that the import job ran into
     * during execution. </p>
     */
    inline ImportTableDescription& WithFailureCode(Aws::String&& value) { SetFailureCode(std::move(value)); return *this;}

    /**
     * <p> The error code corresponding to the failure that the import job ran into
     * during execution. </p>
     */
    inline ImportTableDescription& WithFailureCode(const char* value) { SetFailureCode(value); return *this;}


    /**
     * <p> The error message corresponding to the failure that the import job ran into
     * during execution. </p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }

    /**
     * <p> The error message corresponding to the failure that the import job ran into
     * during execution. </p>
     */
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }

    /**
     * <p> The error message corresponding to the failure that the import job ran into
     * during execution. </p>
     */
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }

    /**
     * <p> The error message corresponding to the failure that the import job ran into
     * during execution. </p>
     */
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::move(value); }

    /**
     * <p> The error message corresponding to the failure that the import job ran into
     * during execution. </p>
     */
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }

    /**
     * <p> The error message corresponding to the failure that the import job ran into
     * during execution. </p>
     */
    inline ImportTableDescription& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}

    /**
     * <p> The error message corresponding to the failure that the import job ran into
     * during execution. </p>
     */
    inline ImportTableDescription& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}

    /**
     * <p> The error message corresponding to the failure that the import job ran into
     * during execution. </p>
     */
    inline ImportTableDescription& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}

  private:

    Aws::String m_importArn;
    bool m_importArnHasBeenSet = false;

    ImportStatus m_importStatus;
    bool m_importStatusHasBeenSet = false;

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet = false;

    Aws::String m_tableId;
    bool m_tableIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    S3BucketSource m_s3BucketSource;
    bool m_s3BucketSourceHasBeenSet = false;

    long long m_errorCount;
    bool m_errorCountHasBeenSet = false;

    Aws::String m_cloudWatchLogGroupArn;
    bool m_cloudWatchLogGroupArnHasBeenSet = false;

    InputFormat m_inputFormat;
    bool m_inputFormatHasBeenSet = false;

    InputFormatOptions m_inputFormatOptions;
    bool m_inputFormatOptionsHasBeenSet = false;

    InputCompressionType m_inputCompressionType;
    bool m_inputCompressionTypeHasBeenSet = false;

    TableCreationParameters m_tableCreationParameters;
    bool m_tableCreationParametersHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    long long m_processedSizeBytes;
    bool m_processedSizeBytesHasBeenSet = false;

    long long m_processedItemCount;
    bool m_processedItemCountHasBeenSet = false;

    long long m_importedItemCount;
    bool m_importedItemCountHasBeenSet = false;

    Aws::String m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
