/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/UpdateCampaignRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCampaignRequest::UpdateCampaignRequest() : 
    m_applicationIdHasBeenSet(false),
    m_campaignIdHasBeenSet(false),
    m_writeCampaignRequestHasBeenSet(false)
{
}

Aws::String UpdateCampaignRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_writeCampaignRequestHasBeenSet)
  {
   payload = m_writeCampaignRequest.Jsonize();
  }

  return payload.View().WriteReadable();
}




