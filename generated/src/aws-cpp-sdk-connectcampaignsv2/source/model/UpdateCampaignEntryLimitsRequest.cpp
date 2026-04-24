/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/UpdateCampaignEntryLimitsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCampaignsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateCampaignEntryLimitsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_entryLimitsConfigHasBeenSet) {
    payload.WithObject("entryLimitsConfig", m_entryLimitsConfig.Jsonize());
  }

  return payload.View().WriteReadable();
}
