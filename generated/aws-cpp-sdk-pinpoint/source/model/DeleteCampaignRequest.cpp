/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/DeleteCampaignRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteCampaignRequest::DeleteCampaignRequest() : 
    m_applicationIdHasBeenSet(false),
    m_campaignIdHasBeenSet(false)
{
}

Aws::String DeleteCampaignRequest::SerializePayload() const
{
  return {};
}




