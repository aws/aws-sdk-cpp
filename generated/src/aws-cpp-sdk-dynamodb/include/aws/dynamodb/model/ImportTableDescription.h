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
    AWS_DYNAMODB_API ImportTableDescription() = default;
    AWS_DYNAMODB_API ImportTableDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ImportTableDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Number (ARN) corresponding to the import request. </p>
     */
    inline const Aws::String& GetImportArn() const { return m_importArn; }
    inline bool ImportArnHasBeenSet() const { return m_importArnHasBeenSet; }
    template<typename ImportArnT = Aws::String>
    void SetImportArn(ImportArnT&& value) { m_importArnHasBeenSet = true; m_importArn = std::forward<ImportArnT>(value); }
    template<typename ImportArnT = Aws::String>
    ImportTableDescription& WithImportArn(ImportArnT&& value) { SetImportArn(std::forward<ImportArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the import. </p>
     */
    inline ImportStatus GetImportStatus() const { return m_importStatus; }
    inline bool ImportStatusHasBeenSet() const { return m_importStatusHasBeenSet; }
    inline void SetImportStatus(ImportStatus value) { m_importStatusHasBeenSet = true; m_importStatus = value; }
    inline ImportTableDescription& WithImportStatus(ImportStatus value) { SetImportStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Number (ARN) of the table being imported into. </p>
     */
    inline const Aws::String& GetTableArn() const { return m_tableArn; }
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }
    template<typename TableArnT = Aws::String>
    void SetTableArn(TableArnT&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::forward<TableArnT>(value); }
    template<typename TableArnT = Aws::String>
    ImportTableDescription& WithTableArn(TableArnT&& value) { SetTableArn(std::forward<TableArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The table id corresponding to the table created by import table process.
     * </p>
     */
    inline const Aws::String& GetTableId() const { return m_tableId; }
    inline bool TableIdHasBeenSet() const { return m_tableIdHasBeenSet; }
    template<typename TableIdT = Aws::String>
    void SetTableId(TableIdT&& value) { m_tableIdHasBeenSet = true; m_tableId = std::forward<TableIdT>(value); }
    template<typename TableIdT = Aws::String>
    ImportTableDescription& WithTableId(TableIdT&& value) { SetTableId(std::forward<TableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The client token that was provided for the import task. Reusing the client
     * token on retry makes a call to <code>ImportTable</code> idempotent. </p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    ImportTableDescription& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Values for the S3 bucket the source file is imported from. Includes bucket
     * name (required), key prefix (optional) and bucket account owner ID (optional).
     * </p>
     */
    inline const S3BucketSource& GetS3BucketSource() const { return m_s3BucketSource; }
    inline bool S3BucketSourceHasBeenSet() const { return m_s3BucketSourceHasBeenSet; }
    template<typename S3BucketSourceT = S3BucketSource>
    void SetS3BucketSource(S3BucketSourceT&& value) { m_s3BucketSourceHasBeenSet = true; m_s3BucketSource = std::forward<S3BucketSourceT>(value); }
    template<typename S3BucketSourceT = S3BucketSource>
    ImportTableDescription& WithS3BucketSource(S3BucketSourceT&& value) { SetS3BucketSource(std::forward<S3BucketSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of errors occurred on importing the source file into the target
     * table. </p>
     */
    inline long long GetErrorCount() const { return m_errorCount; }
    inline bool ErrorCountHasBeenSet() const { return m_errorCountHasBeenSet; }
    inline void SetErrorCount(long long value) { m_errorCountHasBeenSet = true; m_errorCount = value; }
    inline ImportTableDescription& WithErrorCount(long long value) { SetErrorCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Number (ARN) of the Cloudwatch Log Group associated with
     * the target table. </p>
     */
    inline const Aws::String& GetCloudWatchLogGroupArn() const { return m_cloudWatchLogGroupArn; }
    inline bool CloudWatchLogGroupArnHasBeenSet() const { return m_cloudWatchLogGroupArnHasBeenSet; }
    template<typename CloudWatchLogGroupArnT = Aws::String>
    void SetCloudWatchLogGroupArn(CloudWatchLogGroupArnT&& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = std::forward<CloudWatchLogGroupArnT>(value); }
    template<typename CloudWatchLogGroupArnT = Aws::String>
    ImportTableDescription& WithCloudWatchLogGroupArn(CloudWatchLogGroupArnT&& value) { SetCloudWatchLogGroupArn(std::forward<CloudWatchLogGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The format of the source data going into the target table. </p>
     */
    inline InputFormat GetInputFormat() const { return m_inputFormat; }
    inline bool InputFormatHasBeenSet() const { return m_inputFormatHasBeenSet; }
    inline void SetInputFormat(InputFormat value) { m_inputFormatHasBeenSet = true; m_inputFormat = value; }
    inline ImportTableDescription& WithInputFormat(InputFormat value) { SetInputFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The format options for the data that was imported into the target table.
     * There is one value, CsvOption. </p>
     */
    inline const InputFormatOptions& GetInputFormatOptions() const { return m_inputFormatOptions; }
    inline bool InputFormatOptionsHasBeenSet() const { return m_inputFormatOptionsHasBeenSet; }
    template<typename InputFormatOptionsT = InputFormatOptions>
    void SetInputFormatOptions(InputFormatOptionsT&& value) { m_inputFormatOptionsHasBeenSet = true; m_inputFormatOptions = std::forward<InputFormatOptionsT>(value); }
    template<typename InputFormatOptionsT = InputFormatOptions>
    ImportTableDescription& WithInputFormatOptions(InputFormatOptionsT&& value) { SetInputFormatOptions(std::forward<InputFormatOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The compression options for the data that has been imported into the target
     * table. The values are NONE, GZIP, or ZSTD. </p>
     */
    inline InputCompressionType GetInputCompressionType() const { return m_inputCompressionType; }
    inline bool InputCompressionTypeHasBeenSet() const { return m_inputCompressionTypeHasBeenSet; }
    inline void SetInputCompressionType(InputCompressionType value) { m_inputCompressionTypeHasBeenSet = true; m_inputCompressionType = value; }
    inline ImportTableDescription& WithInputCompressionType(InputCompressionType value) { SetInputCompressionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The parameters for the new table that is being imported into. </p>
     */
    inline const TableCreationParameters& GetTableCreationParameters() const { return m_tableCreationParameters; }
    inline bool TableCreationParametersHasBeenSet() const { return m_tableCreationParametersHasBeenSet; }
    template<typename TableCreationParametersT = TableCreationParameters>
    void SetTableCreationParameters(TableCreationParametersT&& value) { m_tableCreationParametersHasBeenSet = true; m_tableCreationParameters = std::forward<TableCreationParametersT>(value); }
    template<typename TableCreationParametersT = TableCreationParameters>
    ImportTableDescription& WithTableCreationParameters(TableCreationParametersT&& value) { SetTableCreationParameters(std::forward<TableCreationParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time when this import task started. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ImportTableDescription& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time at which the creation of the table associated with this import task
     * completed. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ImportTableDescription& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total size of data processed from the source file, in Bytes. </p>
     */
    inline long long GetProcessedSizeBytes() const { return m_processedSizeBytes; }
    inline bool ProcessedSizeBytesHasBeenSet() const { return m_processedSizeBytesHasBeenSet; }
    inline void SetProcessedSizeBytes(long long value) { m_processedSizeBytesHasBeenSet = true; m_processedSizeBytes = value; }
    inline ImportTableDescription& WithProcessedSizeBytes(long long value) { SetProcessedSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The total number of items processed from the source file. </p>
     */
    inline long long GetProcessedItemCount() const { return m_processedItemCount; }
    inline bool ProcessedItemCountHasBeenSet() const { return m_processedItemCountHasBeenSet; }
    inline void SetProcessedItemCount(long long value) { m_processedItemCountHasBeenSet = true; m_processedItemCount = value; }
    inline ImportTableDescription& WithProcessedItemCount(long long value) { SetProcessedItemCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of items successfully imported into the new table. </p>
     */
    inline long long GetImportedItemCount() const { return m_importedItemCount; }
    inline bool ImportedItemCountHasBeenSet() const { return m_importedItemCountHasBeenSet; }
    inline void SetImportedItemCount(long long value) { m_importedItemCountHasBeenSet = true; m_importedItemCount = value; }
    inline ImportTableDescription& WithImportedItemCount(long long value) { SetImportedItemCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error code corresponding to the failure that the import job ran into
     * during execution. </p>
     */
    inline const Aws::String& GetFailureCode() const { return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    template<typename FailureCodeT = Aws::String>
    void SetFailureCode(FailureCodeT&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::forward<FailureCodeT>(value); }
    template<typename FailureCodeT = Aws::String>
    ImportTableDescription& WithFailureCode(FailureCodeT&& value) { SetFailureCode(std::forward<FailureCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error message corresponding to the failure that the import job ran into
     * during execution. </p>
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    ImportTableDescription& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_importArn;
    bool m_importArnHasBeenSet = false;

    ImportStatus m_importStatus{ImportStatus::NOT_SET};
    bool m_importStatusHasBeenSet = false;

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet = false;

    Aws::String m_tableId;
    bool m_tableIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    S3BucketSource m_s3BucketSource;
    bool m_s3BucketSourceHasBeenSet = false;

    long long m_errorCount{0};
    bool m_errorCountHasBeenSet = false;

    Aws::String m_cloudWatchLogGroupArn;
    bool m_cloudWatchLogGroupArnHasBeenSet = false;

    InputFormat m_inputFormat{InputFormat::NOT_SET};
    bool m_inputFormatHasBeenSet = false;

    InputFormatOptions m_inputFormatOptions;
    bool m_inputFormatOptionsHasBeenSet = false;

    InputCompressionType m_inputCompressionType{InputCompressionType::NOT_SET};
    bool m_inputCompressionTypeHasBeenSet = false;

    TableCreationParameters m_tableCreationParameters;
    bool m_tableCreationParametersHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    long long m_processedSizeBytes{0};
    bool m_processedSizeBytesHasBeenSet = false;

    long long m_processedItemCount{0};
    bool m_processedItemCountHasBeenSet = false;

    long long m_importedItemCount{0};
    bool m_importedItemCountHasBeenSet = false;

    Aws::String m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
