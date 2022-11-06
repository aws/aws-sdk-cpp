/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize-runtime/model/GetRecommendationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PersonalizeRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRecommendationsResult::GetRecommendationsResult()
{
}

GetRecommendationsResult::GetRecommendationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRecommendationsResult& GetRecommendationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("itemList"))
  {
    Aws::Utils::Array<JsonView> itemListJsonList = jsonValue.GetArray("itemList");
    for(unsigned itemListIndex = 0; itemListIndex < itemListJsonList.GetLength(); ++itemListIndex)
    {
      m_itemList.push_back(itemListJsonList[itemListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("recommendationId"))
  {
    m_recommendationId = jsonValue.GetString("recommendationId");

  }



  return *this;
}
