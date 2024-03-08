/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/ListMicrosoftTeamsUserIdentitiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::chatbot::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListMicrosoftTeamsUserIdentitiesRequest::ListMicrosoftTeamsUserIdentitiesRequest() : 
    m_chatConfigurationArnHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListMicrosoftTeamsUserIdentitiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_chatConfigurationArnHasBeenSet)
  {
   payload.WithString("ChatConfigurationArn", m_chatConfigurationArn);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}




