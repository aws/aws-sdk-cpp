/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/ListIngestConfigurationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ivsrealtime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListIngestConfigurationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filterByStageArnHasBeenSet)
  {
   payload.WithString("filterByStageArn", m_filterByStageArn);

  }

  if(m_filterByStateHasBeenSet)
  {
   payload.WithString("filterByState", IngestConfigurationStateMapper::GetNameForIngestConfigurationState(m_filterByState));
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




