/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/UpdateContinuousBackupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateContinuousBackupsRequest::UpdateContinuousBackupsRequest() : 
    m_tableNameHasBeenSet(false),
    m_pointInTimeRecoverySpecificationHasBeenSet(false)
{
}

Aws::String UpdateContinuousBackupsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_pointInTimeRecoverySpecificationHasBeenSet)
  {
   payload.WithObject("PointInTimeRecoverySpecification", m_pointInTimeRecoverySpecification.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateContinuousBackupsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.UpdateContinuousBackups"));
  return headers;

}




