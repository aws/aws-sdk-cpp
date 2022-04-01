/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DisassociateLexBotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DisassociateLexBotRequest::DisassociateLexBotRequest() : 
    m_instanceIdHasBeenSet(false),
    m_botNameHasBeenSet(false),
    m_lexRegionHasBeenSet(false)
{
}

Aws::String DisassociateLexBotRequest::SerializePayload() const
{
  return {};
}

void DisassociateLexBotRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_botNameHasBeenSet)
    {
      ss << m_botName;
      uri.AddQueryStringParameter("botName", ss.str());
      ss.str("");
    }

    if(m_lexRegionHasBeenSet)
    {
      ss << m_lexRegion;
      uri.AddQueryStringParameter("lexRegion", ss.str());
      ss.str("");
    }

}



