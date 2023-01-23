/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/DescribeCampaignRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCampaigns::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeCampaignRequest::DescribeCampaignRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String DescribeCampaignRequest::SerializePayload() const
{
  return {};
}




