/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/DescribeImportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeImportRequest::DescribeImportRequest() : 
    m_importArnHasBeenSet(false)
{
}

Aws::String DescribeImportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_importArnHasBeenSet)
  {
   payload.WithString("ImportArn", m_importArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeImportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.DescribeImport"));
  return headers;

}




