/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/DescribeGlobalTableSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeGlobalTableSettingsRequest::DescribeGlobalTableSettingsRequest() : 
    m_globalTableNameHasBeenSet(false)
{
}

Aws::String DescribeGlobalTableSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_globalTableNameHasBeenSet)
  {
   payload.WithString("GlobalTableName", m_globalTableName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeGlobalTableSettingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.DescribeGlobalTableSettings"));
  return headers;

}




