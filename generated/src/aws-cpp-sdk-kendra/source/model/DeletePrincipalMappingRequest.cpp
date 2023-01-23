/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DeletePrincipalMappingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeletePrincipalMappingRequest::DeletePrincipalMappingRequest() : 
    m_indexIdHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_orderingId(0),
    m_orderingIdHasBeenSet(false)
{
}

Aws::String DeletePrincipalMappingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_indexIdHasBeenSet)
  {
   payload.WithString("IndexId", m_indexId);

  }

  if(m_dataSourceIdHasBeenSet)
  {
   payload.WithString("DataSourceId", m_dataSourceId);

  }

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("GroupId", m_groupId);

  }

  if(m_orderingIdHasBeenSet)
  {
   payload.WithInt64("OrderingId", m_orderingId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeletePrincipalMappingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.DeletePrincipalMapping"));
  return headers;

}




