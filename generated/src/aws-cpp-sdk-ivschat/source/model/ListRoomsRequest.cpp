/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivschat/model/ListRoomsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ivschat::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListRoomsRequest::ListRoomsRequest() : 
    m_nameHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_messageReviewHandlerUriHasBeenSet(false),
    m_loggingConfigurationIdentifierHasBeenSet(false)
{
}

Aws::String ListRoomsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_messageReviewHandlerUriHasBeenSet)
  {
   payload.WithString("messageReviewHandlerUri", m_messageReviewHandlerUri);

  }

  if(m_loggingConfigurationIdentifierHasBeenSet)
  {
   payload.WithString("loggingConfigurationIdentifier", m_loggingConfigurationIdentifier);

  }

  return payload.View().WriteReadable();
}




