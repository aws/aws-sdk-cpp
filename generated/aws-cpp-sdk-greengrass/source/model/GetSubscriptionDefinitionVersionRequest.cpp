/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/GetSubscriptionDefinitionVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetSubscriptionDefinitionVersionRequest::GetSubscriptionDefinitionVersionRequest() : 
    m_nextTokenHasBeenSet(false),
    m_subscriptionDefinitionIdHasBeenSet(false),
    m_subscriptionDefinitionVersionIdHasBeenSet(false)
{
}

Aws::String GetSubscriptionDefinitionVersionRequest::SerializePayload() const
{
  return {};
}

void GetSubscriptionDefinitionVersionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

}



