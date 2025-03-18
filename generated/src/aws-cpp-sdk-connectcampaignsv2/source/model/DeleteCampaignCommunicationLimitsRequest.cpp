/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/DeleteCampaignCommunicationLimitsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConnectCampaignsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DeleteCampaignCommunicationLimitsRequest::SerializePayload() const
{
  return {};
}

void DeleteCampaignCommunicationLimitsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_configHasBeenSet)
    {
      ss << CommunicationLimitsConfigTypeMapper::GetNameForCommunicationLimitsConfigType(m_config);
      uri.AddQueryStringParameter("config", ss.str());
      ss.str("");
    }

}



