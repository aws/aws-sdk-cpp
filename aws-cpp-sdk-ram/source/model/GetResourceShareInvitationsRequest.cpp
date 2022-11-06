/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/GetResourceShareInvitationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RAM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetResourceShareInvitationsRequest::GetResourceShareInvitationsRequest() : 
    m_resourceShareInvitationArnsHasBeenSet(false),
    m_resourceShareArnsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String GetResourceShareInvitationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceShareInvitationArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceShareInvitationArnsJsonList(m_resourceShareInvitationArns.size());
   for(unsigned resourceShareInvitationArnsIndex = 0; resourceShareInvitationArnsIndex < resourceShareInvitationArnsJsonList.GetLength(); ++resourceShareInvitationArnsIndex)
   {
     resourceShareInvitationArnsJsonList[resourceShareInvitationArnsIndex].AsString(m_resourceShareInvitationArns[resourceShareInvitationArnsIndex]);
   }
   payload.WithArray("resourceShareInvitationArns", std::move(resourceShareInvitationArnsJsonList));

  }

  if(m_resourceShareArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceShareArnsJsonList(m_resourceShareArns.size());
   for(unsigned resourceShareArnsIndex = 0; resourceShareArnsIndex < resourceShareArnsJsonList.GetLength(); ++resourceShareArnsIndex)
   {
     resourceShareArnsJsonList[resourceShareArnsIndex].AsString(m_resourceShareArns[resourceShareArnsIndex]);
   }
   payload.WithArray("resourceShareArns", std::move(resourceShareArnsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}




