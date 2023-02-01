/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/DescribeFindingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFindingsResult::DescribeFindingsResult()
{
}

DescribeFindingsResult::DescribeFindingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFindingsResult& DescribeFindingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("findings"))
  {
    Aws::Utils::Array<JsonView> findingsJsonList = jsonValue.GetArray("findings");
    for(unsigned findingsIndex = 0; findingsIndex < findingsJsonList.GetLength(); ++findingsIndex)
    {
      m_findings.push_back(findingsJsonList[findingsIndex].AsObject());
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
