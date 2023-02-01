/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/DescribeRulesPackagesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeRulesPackagesResult::DescribeRulesPackagesResult()
{
}

DescribeRulesPackagesResult::DescribeRulesPackagesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeRulesPackagesResult& DescribeRulesPackagesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("rulesPackages"))
  {
    Aws::Utils::Array<JsonView> rulesPackagesJsonList = jsonValue.GetArray("rulesPackages");
    for(unsigned rulesPackagesIndex = 0; rulesPackagesIndex < rulesPackagesJsonList.GetLength(); ++rulesPackagesIndex)
    {
      m_rulesPackages.push_back(rulesPackagesJsonList[rulesPackagesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("failedItems"))
  {
    Aws::Map<Aws::String, JsonView> failedItemsJsonMap = jsonValue.GetObject("failedItems").GetAllObjects();
    for(auto& failedItemsItem : failedItemsJsonMap)
    {
      m_failedItems[failedItemsItem.first] = failedItemsItem.second.AsObject();
    }
  }



  return *this;
}
