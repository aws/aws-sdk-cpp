/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/ListProductSubscriptionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LicenseManagerUserSubscriptions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListProductSubscriptionsResult::ListProductSubscriptionsResult()
{
}

ListProductSubscriptionsResult::ListProductSubscriptionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListProductSubscriptionsResult& ListProductSubscriptionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ProductUserSummaries"))
  {
    Aws::Utils::Array<JsonView> productUserSummariesJsonList = jsonValue.GetArray("ProductUserSummaries");
    for(unsigned productUserSummariesIndex = 0; productUserSummariesIndex < productUserSummariesJsonList.GetLength(); ++productUserSummariesIndex)
    {
      m_productUserSummaries.push_back(productUserSummariesJsonList[productUserSummariesIndex].AsObject());
    }
  }



  return *this;
}
