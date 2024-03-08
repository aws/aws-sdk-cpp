/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/ListMicrosoftTeamsChannelConfigurationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::chatbot::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListMicrosoftTeamsChannelConfigurationsRequest::ListMicrosoftTeamsChannelConfigurationsRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_teamIdHasBeenSet(false)
{
}

Aws::String ListMicrosoftTeamsChannelConfigurationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_teamIdHasBeenSet)
  {
   payload.WithString("TeamId", m_teamId);

  }

  return payload.View().WriteReadable();
}




