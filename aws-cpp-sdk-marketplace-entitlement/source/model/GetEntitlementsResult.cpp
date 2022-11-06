/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-entitlement/model/GetEntitlementsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MarketplaceEntitlementService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEntitlementsResult::GetEntitlementsResult()
{
}

GetEntitlementsResult::GetEntitlementsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEntitlementsResult& GetEntitlementsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Entitlements"))
  {
    Aws::Utils::Array<JsonView> entitlementsJsonList = jsonValue.GetArray("Entitlements");
    for(unsigned entitlementsIndex = 0; entitlementsIndex < entitlementsJsonList.GetLength(); ++entitlementsIndex)
    {
      m_entitlements.push_back(entitlementsJsonList[entitlementsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
