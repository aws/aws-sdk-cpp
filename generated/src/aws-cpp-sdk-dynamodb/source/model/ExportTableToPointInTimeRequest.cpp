/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ExportTableToPointInTimeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ExportTableToPointInTimeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tableArnHasBeenSet)
  {
   payload.WithString("TableArn", m_tableArn);

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

  if(m_exportFormatHasBeenSet)
  {
   payload.WithString("ExportFormat", ExportFormatMapper::GetNameForExportFormat(m_exportFormat));
  }

  if(m_exportTypeHasBeenSet)
  {
   payload.WithString("ExportType", ExportTypeMapper::GetNameForExportType(m_exportType));
  }

  if(m_incrementalExportSpecificationHasBeenSet)
  {
   payload.WithObject("IncrementalExportSpecification", m_incrementalExportSpecification.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ExportTableToPointInTimeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.ExportTableToPointInTime"));
  return headers;

}



ExportTableToPointInTimeRequest::EndpointParameters ExportTableToPointInTimeRequest::GetEndpointContextParams() const
{
    EndpointParameters parameters;
    // Operation context parameters
    if (TableArnHasBeenSet()) {
        parameters.emplace_back(Aws::String("ResourceArn"), this->GetTableArn(), Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
    }
    return parameters;
}


