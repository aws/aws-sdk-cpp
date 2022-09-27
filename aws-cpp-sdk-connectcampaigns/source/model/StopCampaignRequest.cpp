/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/StopCampaignRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCampaigns::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopCampaignRequest::StopCampaignRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String StopCampaignRequest::SerializePayload() const
{
  return {};
}




