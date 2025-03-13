/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/DeleteCampaignChannelSubtypeConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConnectCampaignsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DeleteCampaignChannelSubtypeConfigRequest::SerializePayload() const
{
  return {};
}

void DeleteCampaignChannelSubtypeConfigRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_channelSubtypeHasBeenSet)
    {
      ss << ChannelSubtypeMapper::GetNameForChannelSubtype(m_channelSubtype);
      uri.AddQueryStringParameter("channelSubtype", ss.str());
      ss.str("");
    }

}



