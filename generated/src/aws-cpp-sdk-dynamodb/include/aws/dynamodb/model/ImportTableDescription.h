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


    ///@{
    /**
     * <p> The Amazon Resource Number (ARN) corresponding to the import request. </p>
     */
    inline const Aws::String& GetImportArn() const{ return m_importArn; }
    inline bool ImportArnHasBeenSet() const { return m_importArnHasBeenSet; }
    inline void SetImportArn(const Aws::String& value) { m_importArnHasBeenSet = true; m_importArn = value; }
    inline void SetImportArn(Aws::String&& value) { m_importArnHasBeenSet = true; m_importArn = std::move(value); }
    inline void SetImportArn(const char* value) { m_importArnHasBeenSet = true; m_importArn.assign(value); }
    inline ImportTableDescription& WithImportArn(const Aws::String& value) { SetImportArn(value); return *this;}
    inline ImportTableDescription& WithImportArn(Aws::String&& value) { SetImportArn(std::move(value)); return *this;}
    inline ImportTableDescription& WithImportArn(const char* value) { SetImportArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the import. </p>
     */
    inline const ImportStatus& GetImportStatus() const{ return m_importStatus; }
    inline bool ImportStatusHasBeenSet() const { return m_importStatusHasBeenSet; }
    inline void SetImportStatus(const ImportStatus& value) { m_importStatusHasBeenSet = true; m_importStatus = value; }
    inline void SetImportStatus(ImportStatus&& value) { m_importStatusHasBeenSet = true; m_importStatus = std::move(value); }
    inline ImportTableDescription& WithImportStatus(const ImportStatus& value) { SetImportStatus(value); return *this;}
    inline ImportTableDescription& WithImportStatus(ImportStatus&& value) { SetImportStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Number (ARN) of the table being imported into. </p>
     */
    inline const Aws::String& GetTableArn() const{ return m_tableArn; }
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }
    inline void SetTableArn(const Aws::String& value) { m_tableArnHasBeenSet = true; m_tableArn = value; }
    inline void SetTableArn(Aws::String&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::move(value); }
    inline void SetTableArn(const char* value) { m_tableArnHasBeenSet = true; m_tableArn.assign(value); }
    inline ImportTableDescription& WithTableArn(const Aws::String& value) { SetTableArn(value); return *this;}
    inline ImportTableDescription& WithTableArn(Aws::String&& value) { SetTableArn(std::move(value)); return *this;}
    inline ImportTableDescription& WithTableArn(const char* value) { SetTableArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The table id corresponding to the table created by import table process.
     * </p>
     */
    inline const Aws::String& GetTableId() const{ return m_tableId; }
    inline bool TableIdHasBeenSet() const { return m_tableIdHasBeenSet; }
    inline void SetTableId(const Aws::String& value) { m_tableIdHasBeenSet = true; m_tableId = value; }
    inline void SetTableId(Aws::String&& value) { m_tableIdHasBeenSet = true; m_tableId = std::move(value); }
    inline void SetTableId(const char* value) { m_tableIdHasBeenSet = true; m_tableId.assign(value); }
    inline ImportTableDescription& WithTableId(const Aws::String& value) { SetTableId(value); return *this;}
    inline ImportTableDescription& WithTableId(Aws::String&& value) { SetTableId(std::move(value)); return *this;}
    inline ImportTableDescription& WithTableId(const char* value) { SetTableId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The client token that was provided for the import task. Reusing the client
     * token on retry makes a call to <code>ImportTable</code> idempotent. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline ImportTableDescription& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline ImportTableDescription& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline ImportTableDescription& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Values for the S3 bucket the source file is imported from. Includes bucket
     * name (required), key prefix (optional) and bucket account owner ID (optional).
     * </p>
     */
    inline const S3BucketSource& GetS3BucketSource() const{ return m_s3BucketSource; }
    inline bool S3BucketSourceHasBeenSet() const { return m_s3BucketSourceHasBeenSet; }
    inline void SetS3BucketSource(const S3BucketSource& value) { m_s3BucketSourceHasBeenSet = true; m_s3BucketSource = value; }
    inline void SetS3BucketSource(S3BucketSource&& value) { m_s3BucketSourceHasBeenSet = true; m_s3BucketSource = std::move(value); }
    inline ImportTableDescription& WithS3BucketSource(const S3BucketSource& value) { SetS3BucketSource(value); return *this;}
    inline ImportTableDescription& WithS3BucketSource(S3BucketSource&& value) { SetS3BucketSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of errors occurred on importing the source file into the target
     * table. </p>
     */
    inline long long GetErrorCount() const{ return m_errorCount; }
    inline bool ErrorCountHasBeenSet() const { return m_errorCountHasBeenSet; }
    inline void SetErrorCount(long long value) { m_errorCountHasBeenSet = true; m_errorCount = value; }
    inline ImportTableDescription& WithErrorCount(long long value) { SetErrorCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Number (ARN) of the Cloudwatch Log Group associated with
     * the target table. </p>
     */
    inline const Aws::String& GetCloudWatchLogGroupArn() const{ return m_cloudWatchLogGroupArn; }
    inline bool CloudWatchLogGroupArnHasBeenSet() const { return m_cloudWatchLogGroupArnHasBeenSet; }
    inline void SetCloudWatchLogGroupArn(const Aws::String& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = value; }
    inline void SetCloudWatchLogGroupArn(Aws::String&& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = std::move(value); }
    inline void SetCloudWatchLogGroupArn(const char* value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn.assign(value); }
    inline ImportTableDescription& WithCloudWatchLogGroupArn(const Aws::String& value) { SetCloudWatchLogGroupArn(value); return *this;}
    inline ImportTableDescription& WithCloudWatchLogGroupArn(Aws::String&& value) { SetCloudWatchLogGroupArn(std::move(value)); return *this;}
    inline ImportTableDescription& WithCloudWatchLogGroupArn(const char* value) { SetCloudWatchLogGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The format of the source data going into the target table. </p>
     */
    inline const InputFormat& GetInputFormat() const{ return m_inputFormat; }
    inline bool InputFormatHasBeenSet() const { return m_inputFormatHasBeenSet; }
    inline void SetInputFormat(const InputFormat& value) { m_inputFormatHasBeenSet = true; m_inputFormat = value; }
    inline void SetInputFormat(InputFormat&& value) { m_inputFormatHasBeenSet = true; m_inputFormat = std::move(value); }
    inline ImportTableDescription& WithInputFormat(const InputFormat& value) { SetInputFormat(value); return *this;}
    inline ImportTableDescription& WithInputFormat(InputFormat&& value) { SetInputFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The format options for the data that was imported into the target table.
     * There is one value, CsvOption. </p>
     */
    inline const InputFormatOptions& GetInputFormatOptions() const{ return m_inputFormatOptions; }
    inline bool InputFormatOptionsHasBeenSet() const { return m_inputFormatOptionsHasBeenSet; }
    inline void SetInputFormatOptions(const InputFormatOptions& value) { m_inputFormatOptionsHasBeenSet = true; m_inputFormatOptions = value; }
    inline void SetInputFormatOptions(InputFormatOptions&& value) { m_inputFormatOptionsHasBeenSet = true; m_inputFormatOptions = std::move(value); }
    inline ImportTableDescription& WithInputFormatOptions(const InputFormatOptions& value) { SetInputFormatOptions(value); return *this;}
    inline ImportTableDescription& WithInputFormatOptions(InputFormatOptions&& value) { SetInputFormatOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The compression options for the data that has been imported into the target
     * table. The values are NONE, GZIP, or ZSTD. </p>
     */
    inline const InputCompressionType& GetInputCompressionType() const{ return m_inputCompressionType; }
    inline bool InputCompressionTypeHasBeenSet() const { return m_inputCompressionTypeHasBeenSet; }
    inline void SetInputCompressionType(const InputCompressionType& value) { m_inputCompressionTypeHasBeenSet = true; m_inputCompressionType = value; }
    inline void SetInputCompressionType(InputCompressionType&& value) { m_inputCompressionTypeHasBeenSet = true; m_inputCompressionType = std::move(value); }
    inline ImportTableDescription& WithInputCompressionType(const InputCompressionType& value) { SetInputCompressionType(value); return *this;}
    inline ImportTableDescription& WithInputCompressionType(InputCompressionType&& value) { SetInputCompressionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The parameters for the new table that is being imported into. </p>
     */
    inline const TableCreationParameters& GetTableCreationParameters() const{ return m_tableCreationParameters; }
    inline bool TableCreationParametersHasBeenSet() const { return m_tableCreationParametersHasBeenSet; }
    inline void SetTableCreationParameters(const TableCreationParameters& value) { m_tableCreationParametersHasBeenSet = true; m_tableCreationParameters = value; }
    inline void SetTableCreationParameters(TableCreationParameters&& value) { m_tableCreationParametersHasBeenSet = true; m_tableCreationParameters = std::move(value); }
    inline ImportTableDescription& WithTableCreationParameters(const TableCreationParameters& value) { SetTableCreationParameters(value); return *this;}
    inline ImportTableDescription& WithTableCreationParameters(TableCreationParameters&& value) { SetTableCreationParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when this import task started. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ImportTableDescription& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ImportTableDescription& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time at which the creation of the table associated with this import task
     * completed. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ImportTableDescription& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ImportTableDescription& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total size of data processed from the source file, in Bytes. </p>
     */
    inline long long GetProcessedSizeBytes() const{ return m_processedSizeBytes; }
    inline bool ProcessedSizeBytesHasBeenSet() const { return m_processedSizeBytesHasBeenSet; }
    inline void SetProcessedSizeBytes(long long value) { m_processedSizeBytesHasBeenSet = true; m_processedSizeBytes = value; }
    inline ImportTableDescription& WithProcessedSizeBytes(long long value) { SetProcessedSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total number of items processed from the source file. </p>
     */
    inline long long GetProcessedItemCount() const{ return m_processedItemCount; }
    inline bool ProcessedItemCountHasBeenSet() const { return m_processedItemCountHasBeenSet; }
    inline void SetProcessedItemCount(long long value) { m_processedItemCountHasBeenSet = true; m_processedItemCount = value; }
    inline ImportTableDescription& WithProcessedItemCount(long long value) { SetProcessedItemCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of items successfully imported into the new table. </p>
     */
    inline long long GetImportedItemCount() const{ return m_importedItemCount; }
    inline bool ImportedItemCountHasBeenSet() const { return m_importedItemCountHasBeenSet; }
    inline void SetImportedItemCount(long long value) { m_importedItemCountHasBeenSet = true; m_importedItemCount = value; }
    inline ImportTableDescription& WithImportedItemCount(long long value) { SetImportedItemCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error code corresponding to the failure that the import job ran into
     * during execution. </p>
     */
    inline const Aws::String& GetFailureCode() const{ return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    inline void SetFailureCode(const Aws::String& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }
    inline void SetFailureCode(Aws::String&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }
    inline void SetFailureCode(const char* value) { m_failureCodeHasBeenSet = true; m_failureCode.assign(value); }
    inline ImportTableDescription& WithFailureCode(const Aws::String& value) { SetFailureCode(value); return *this;}
    inline ImportTableDescription& WithFailureCode(Aws::String&& value) { SetFailureCode(std::move(value)); return *this;}
    inline ImportTableDescription& WithFailureCode(const char* value) { SetFailureCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error message corresponding to the failure that the import job ran into
     * during execution. </p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::move(value); }
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }
    inline ImportTableDescription& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}
    inline ImportTableDescription& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}
    inline ImportTableDescription& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}
    ///@}
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
