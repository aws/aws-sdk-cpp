﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ExportDescription.h>
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

ExportDescription::ExportDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

ExportDescription& ExportDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExportArn"))
  {
    m_exportArn = jsonValue.GetString("ExportArn");
    m_exportArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExportStatus"))
  {
    m_exportStatus = ExportStatusMapper::GetExportStatusForName(jsonValue.GetString("ExportStatus"));
    m_exportStatusHasBeenSet = true;
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
  if(jsonValue.ValueExists("ExportManifest"))
  {
    m_exportManifest = jsonValue.GetString("ExportManifest");
    m_exportManifestHasBeenSet = true;
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
  if(jsonValue.ValueExists("ExportTime"))
  {
    m_exportTime = jsonValue.GetDouble("ExportTime");
    m_exportTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ClientToken"))
  {
    m_clientToken = jsonValue.GetString("ClientToken");
    m_clientTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3Bucket"))
  {
    m_s3Bucket = jsonValue.GetString("S3Bucket");
    m_s3BucketHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3BucketOwner"))
  {
    m_s3BucketOwner = jsonValue.GetString("S3BucketOwner");
    m_s3BucketOwnerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3Prefix"))
  {
    m_s3Prefix = jsonValue.GetString("S3Prefix");
    m_s3PrefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3SseAlgorithm"))
  {
    m_s3SseAlgorithm = S3SseAlgorithmMapper::GetS3SseAlgorithmForName(jsonValue.GetString("S3SseAlgorithm"));
    m_s3SseAlgorithmHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3SseKmsKeyId"))
  {
    m_s3SseKmsKeyId = jsonValue.GetString("S3SseKmsKeyId");
    m_s3SseKmsKeyIdHasBeenSet = true;
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
  if(jsonValue.ValueExists("ExportFormat"))
  {
    m_exportFormat = ExportFormatMapper::GetExportFormatForName(jsonValue.GetString("ExportFormat"));
    m_exportFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BilledSizeBytes"))
  {
    m_billedSizeBytes = jsonValue.GetInt64("BilledSizeBytes");
    m_billedSizeBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ItemCount"))
  {
    m_itemCount = jsonValue.GetInt64("ItemCount");
    m_itemCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExportType"))
  {
    m_exportType = ExportTypeMapper::GetExportTypeForName(jsonValue.GetString("ExportType"));
    m_exportTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncrementalExportSpecification"))
  {
    m_incrementalExportSpecification = jsonValue.GetObject("IncrementalExportSpecification");
    m_incrementalExportSpecificationHasBeenSet = true;
  }
  return *this;
}

JsonValue ExportDescription::Jsonize() const
{
  JsonValue payload;

  if(m_exportArnHasBeenSet)
  {
   payload.WithString("ExportArn", m_exportArn);

  }

  if(m_exportStatusHasBeenSet)
  {
   payload.WithString("ExportStatus", ExportStatusMapper::GetNameForExportStatus(m_exportStatus));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_exportManifestHasBeenSet)
  {
   payload.WithString("ExportManifest", m_exportManifest);

  }

  if(m_tableArnHasBeenSet)
  {
   payload.WithString("TableArn", m_tableArn);

  }

  if(m_tableIdHasBeenSet)
  {
   payload.WithString("TableId", m_tableId);

  }

  if(m_exportTimeHasBeenSet)
  {
   payload.WithDouble("ExportTime", m_exportTime.SecondsWithMSPrecision());
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_s3BucketHasBeenSet)
  {
   payload.WithString("S3Bucket", m_s3Bucket);

  }

  if(m_s3BucketOwnerHasBeenSet)
  {
   payload.WithString("S3BucketOwner", m_s3BucketOwner);

  }

  if(m_s3PrefixHasBeenSet)
  {
   payload.WithString("S3Prefix", m_s3Prefix);

  }

  if(m_s3SseAlgorithmHasBeenSet)
  {
   payload.WithString("S3SseAlgorithm", S3SseAlgorithmMapper::GetNameForS3SseAlgorithm(m_s3SseAlgorithm));
  }

  if(m_s3SseKmsKeyIdHasBeenSet)
  {
   payload.WithString("S3SseKmsKeyId", m_s3SseKmsKeyId);

  }

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("FailureCode", m_failureCode);

  }

  if(m_failureMessageHasBeenSet)
  {
   payload.WithString("FailureMessage", m_failureMessage);

  }

  if(m_exportFormatHasBeenSet)
  {
   payload.WithString("ExportFormat", ExportFormatMapper::GetNameForExportFormat(m_exportFormat));
  }

  if(m_billedSizeBytesHasBeenSet)
  {
   payload.WithInt64("BilledSizeBytes", m_billedSizeBytes);

  }

  if(m_itemCountHasBeenSet)
  {
   payload.WithInt64("ItemCount", m_itemCount);

  }

  if(m_exportTypeHasBeenSet)
  {
   payload.WithString("ExportType", ExportTypeMapper::GetNameForExportType(m_exportType));
  }

  if(m_incrementalExportSpecificationHasBeenSet)
  {
   payload.WithObject("IncrementalExportSpecification", m_incrementalExportSpecification.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
