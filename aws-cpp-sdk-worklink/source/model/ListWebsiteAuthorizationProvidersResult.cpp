/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/ListWebsiteAuthorizationProvidersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkLink::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWebsiteAuthorizationProvidersResult::ListWebsiteAuthorizationProvidersResult()
{
}

ListWebsiteAuthorizationProvidersResult::ListWebsiteAuthorizationProvidersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWebsiteAuthorizationProvidersResult& ListWebsiteAuthorizationProvidersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WebsiteAuthorizationProviders"))
  {
    Array<JsonView> websiteAuthorizationProvidersJsonList = jsonValue.GetArray("WebsiteAuthorizationProviders");
    for(unsigned websiteAuthorizationProvidersIndex = 0; websiteAuthorizationProvidersIndex < websiteAuthorizationProvidersJsonList.GetLength(); ++websiteAuthorizationProvidersIndex)
    {
      m_websiteAuthorizationProviders.push_back(websiteAuthorizationProvidersJsonList[websiteAuthorizationProvidersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
