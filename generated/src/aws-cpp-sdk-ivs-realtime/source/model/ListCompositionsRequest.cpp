/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/ListCompositionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ivsrealtime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListCompositionsRequest::ListCompositionsRequest() : 
    m_filterByEncoderConfigurationArnHasBeenSet(false),
    m_filterByStageArnHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListCompositionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filterByEncoderConfigurationArnHasBeenSet)
  {
   payload.WithString("filterByEncoderConfigurationArn", m_filterByEncoderConfigurationArn);

  }

  if(m_filterByStageArnHasBeenSet)
  {
   payload.WithString("filterByStageArn", m_filterByStageArn);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




