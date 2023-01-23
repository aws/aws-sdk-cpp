/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/PutPrincipalMappingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutPrincipalMappingRequest::PutPrincipalMappingRequest() : 
    m_indexIdHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupMembersHasBeenSet(false),
    m_orderingId(0),
    m_orderingIdHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

Aws::String PutPrincipalMappingRequest::SerializePayload() const
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

  if(m_groupMembersHasBeenSet)
  {
   payload.WithObject("GroupMembers", m_groupMembers.Jsonize());

  }

  if(m_orderingIdHasBeenSet)
  {
   payload.WithInt64("OrderingId", m_orderingId);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutPrincipalMappingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.PutPrincipalMapping"));
  return headers;

}




