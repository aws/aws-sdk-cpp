/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/ListChannelsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListChannelsRequest::ListChannelsRequest() : 
    m_filterByNameHasBeenSet(false),
    m_filterByPlaybackRestrictionPolicyArnHasBeenSet(false),
    m_filterByRecordingConfigurationArnHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListChannelsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filterByNameHasBeenSet)
  {
   payload.WithString("filterByName", m_filterByName);

  }

  if(m_filterByPlaybackRestrictionPolicyArnHasBeenSet)
  {
   payload.WithString("filterByPlaybackRestrictionPolicyArn", m_filterByPlaybackRestrictionPolicyArn);

  }

  if(m_filterByRecordingConfigurationArnHasBeenSet)
  {
   payload.WithString("filterByRecordingConfigurationArn", m_filterByRecordingConfigurationArn);

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




