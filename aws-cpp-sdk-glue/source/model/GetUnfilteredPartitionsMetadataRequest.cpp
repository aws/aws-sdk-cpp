/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetUnfilteredPartitionsMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetUnfilteredPartitionsMetadataRequest::GetUnfilteredPartitionsMetadataRequest() : 
    m_catalogIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_expressionHasBeenSet(false),
    m_auditContextHasBeenSet(false),
    m_supportedPermissionTypesHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_segmentHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String GetUnfilteredPartitionsMetadataRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_catalogIdHasBeenSet)
  {
   payload.WithString("CatalogId", m_catalogId);

  }

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("DatabaseName", m_databaseName);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_expressionHasBeenSet)
  {
   payload.WithString("Expression", m_expression);

  }

  if(m_auditContextHasBeenSet)
  {
   payload.WithObject("AuditContext", m_auditContext.Jsonize());

  }

  if(m_supportedPermissionTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedPermissionTypesJsonList(m_supportedPermissionTypes.size());
   for(unsigned supportedPermissionTypesIndex = 0; supportedPermissionTypesIndex < supportedPermissionTypesJsonList.GetLength(); ++supportedPermissionTypesIndex)
   {
     supportedPermissionTypesJsonList[supportedPermissionTypesIndex].AsString(PermissionTypeMapper::GetNameForPermissionType(m_supportedPermissionTypes[supportedPermissionTypesIndex]));
   }
   payload.WithArray("SupportedPermissionTypes", std::move(supportedPermissionTypesJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_segmentHasBeenSet)
  {
   payload.WithObject("Segment", m_segment.Jsonize());

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetUnfilteredPartitionsMetadataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.GetUnfilteredPartitionsMetadata"));
  return headers;

}




