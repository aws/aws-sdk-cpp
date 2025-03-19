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

Aws::String ListCompositionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filterByStageArnHasBeenSet)
  {
   payload.WithString("filterByStageArn", m_filterByStageArn);

  }

  if(m_filterByEncoderConfigurationArnHasBeenSet)
  {
   payload.WithString("filterByEncoderConfigurationArn", m_filterByEncoderConfigurationArn);

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




