/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ImportTableDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

ImportTableDescription::ImportTableDescription() : 
    m_importArnHasBeenSet(false),
    m_importStatus(ImportStatus::NOT_SET),
    m_importStatusHasBeenSet(false),
    m_tableArnHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_s3BucketSourceHasBeenSet(false),
    m_errorCount(0),
    m_errorCountHasBeenSet(false),
    m_cloudWatchLogGroupArnHasBeenSet(false),
    m_inputFormat(InputFormat::NOT_SET),
    m_inputFormatHasBeenSet(false),
    m_inputFormatOptionsHasBeenSet(false),
    m_inputCompressionType(InputCompressionType::NOT_SET),
    m_inputCompressionTypeHasBeenSet(false),
    m_tableCreationParametersHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_processedSizeBytes(0),
    m_processedSizeBytesHasBeenSet(false),
    m_processedItemCount(0),
    m_processedItemCountHasBeenSet(false),
    m_importedItemCount(0),
    m_importedItemCountHasBeenSet(false),
    m_failureCodeHasBeenSet(false),
    m_failureMessageHasBeenSet(false)
{
}

ImportTableDescription::ImportTableDescription(JsonView jsonValue) : 
    m_importArnHasBeenSet(false),
    m_importStatus(ImportStatus::NOT_SET),
    m_importStatusHasBeenSet(false),
    m_tableArnHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_s3BucketSourceHasBeenSet(false),
    m_errorCount(0),
    m_errorCountHasBeenSet(false),
    m_cloudWatchLogGroupArnHasBeenSet(false),
    m_inputFormat(InputFormat::NOT_SET),
    m_inputFormatHasBeenSet(false),
    m_inputFormatOptionsHasBeenSet(false),
    m_inputCompressionType(InputCompressionType::NOT_SET),
    m_inputCompressionTypeHasBeenSet(false),
    m_tableCreationParametersHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_processedSizeBytes(0),
    m_processedSizeBytesHasBeenSet(false),
    m_processedItemCount(0),
    m_processedItemCountHasBeenSet(false),
    m_importedItemCount(0),
    m_importedItemCountHasBeenSet(false),
    m_failureCodeHasBeenSet(false),
    m_failureMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ImportTableDescription& ImportTableDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ImportArn"))
  {
    m_importArn = jsonValue.GetString("ImportArn");

    m_importArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportStatus"))
  {
    m_importStatus = ImportStatusMapper::GetImportStatusForName(jsonValue.GetString("ImportStatus"));

    m_importStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableArn"))
  {
    m_tableArn = jsonValue.GetString("TableArn");

    m_tableArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableId"))
  {
    m_tableId = jsonValue.GetString("TableId");

    m_tableIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientToken"))
  {
    m_clientToken = jsonValue.GetString("ClientToken");

    m_clientTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3BucketSource"))
  {
    m_s3BucketSource = jsonValue.GetObject("S3BucketSource");

    m_s3BucketSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCount"))
  {
    m_errorCount = jsonValue.GetInt64("ErrorCount");

    m_errorCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudWatchLogGroupArn"))
  {
    m_cloudWatchLogGroupArn = jsonValue.GetString("CloudWatchLogGroupArn");

    m_cloudWatchLogGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputFormat"))
  {
    m_inputFormat = InputFormatMapper::GetInputFormatForName(jsonValue.GetString("InputFormat"));

    m_inputFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputFormatOptions"))
  {
    m_inputFormatOptions = jsonValue.GetObject("InputFormatOptions");

    m_inputFormatOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputCompressionType"))
  {
    m_inputCompressionType = InputCompressionTypeMapper::GetInputCompressionTypeForName(jsonValue.GetString("InputCompressionType"));

    m_inputCompressionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableCreationParameters"))
  {
    m_tableCreationParameters = jsonValue.GetObject("TableCreationParameters");

    m_tableCreationParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessedSizeBytes"))
  {
    m_processedSizeBytes = jsonValue.GetInt64("ProcessedSizeBytes");

    m_processedSizeBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessedItemCount"))
  {
    m_processedItemCount = jsonValue.GetInt64("ProcessedItemCount");

    m_processedItemCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportedItemCount"))
  {
    m_importedItemCount = jsonValue.GetInt64("ImportedItemCount");

    m_importedItemCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureCode"))
  {
    m_failureCode = jsonValue.GetString("FailureCode");

    m_failureCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureMessage"))
  {
    m_failureMessage = jsonValue.GetString("FailureMessage");

    m_failureMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportTableDescription::Jsonize() const
{
  JsonValue payload;

  if(m_importArnHasBeenSet)
  {
   payload.WithString("ImportArn", m_importArn);

  }

  if(m_importStatusHasBeenSet)
  {
   payload.WithString("ImportStatus", ImportStatusMapper::GetNameForImportStatus(m_importStatus));
  }

  if(m_tableArnHasBeenSet)
  {
   payload.WithString("TableArn", m_tableArn);

  }

  if(m_tableIdHasBeenSet)
  {
   payload.WithString("TableId", m_tableId);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_s3BucketSourceHasBeenSet)
  {
   payload.WithObject("S3BucketSource", m_s3BucketSource.Jsonize());

  }

  if(m_errorCountHasBeenSet)
  {
   payload.WithInt64("ErrorCount", m_errorCount);

  }

  if(m_cloudWatchLogGroupArnHasBeenSet)
  {
   payload.WithString("CloudWatchLogGroupArn", m_cloudWatchLogGroupArn);

  }

  if(m_inputFormatHasBeenSet)
  {
   payload.WithString("InputFormat", InputFormatMapper::GetNameForInputFormat(m_inputFormat));
  }

  if(m_inputFormatOptionsHasBeenSet)
  {
   payload.WithObject("InputFormatOptions", m_inputFormatOptions.Jsonize());

  }

  if(m_inputCompressionTypeHasBeenSet)
  {
   payload.WithString("InputCompressionType", InputCompressionTypeMapper::GetNameForInputCompressionType(m_inputCompressionType));
  }

  if(m_tableCreationParametersHasBeenSet)
  {
   payload.WithObject("TableCreationParameters", m_tableCreationParameters.Jsonize());

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_processedSizeBytesHasBeenSet)
  {
   payload.WithInt64("ProcessedSizeBytes", m_processedSizeBytes);

  }

  if(m_processedItemCountHasBeenSet)
  {
   payload.WithInt64("ProcessedItemCount", m_processedItemCount);

  }

  if(m_importedItemCountHasBeenSet)
  {
   payload.WithInt64("ImportedItemCount", m_importedItemCount);

  }

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("FailureCode", m_failureCode);

  }

  if(m_failureMessageHasBeenSet)
  {
   payload.WithString("FailureMessage", m_failureMessage);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
