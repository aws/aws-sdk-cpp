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
    m_loggingConfigurationIdentifierHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_messageReviewHandlerUriHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListRoomsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_loggingConfigurationIdentifierHasBeenSet)
  {
   payload.WithString("loggingConfigurationIdentifier", m_loggingConfigurationIdentifier);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_messageReviewHandlerUriHasBeenSet)
  {
   payload.WithString("messageReviewHandlerUri", m_messageReviewHandlerUri);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




