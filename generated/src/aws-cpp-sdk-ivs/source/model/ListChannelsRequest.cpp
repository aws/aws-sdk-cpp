/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ivs/model/ListChannelsRequest.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListChannelsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_filterByNameHasBeenSet) {
    payload.WithString("filterByName", m_filterByName);
  }

  if (m_filterByRecordingConfigurationArnHasBeenSet) {
    payload.WithString("filterByRecordingConfigurationArn", m_filterByRecordingConfigurationArn);
  }

  if (m_filterByPlaybackRestrictionPolicyArnHasBeenSet) {
    payload.WithString("filterByPlaybackRestrictionPolicyArn", m_filterByPlaybackRestrictionPolicyArn);
  }

  if (m_filterByAdConfigurationArnHasBeenSet) {
    payload.WithString("filterByAdConfigurationArn", m_filterByAdConfigurationArn);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  return payload.View().WriteReadable();
}
