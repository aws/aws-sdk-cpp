/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/servicecatalog/model/SearchProductsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchProductsResult::SearchProductsResult()
{
}

SearchProductsResult::SearchProductsResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SearchProductsResult& SearchProductsResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("ProductViewSummaries"))
  {
    Array<JsonValue> productViewSummariesJsonList = jsonValue.GetArray("ProductViewSummaries");
    for(unsigned productViewSummariesIndex = 0; productViewSummariesIndex < productViewSummariesJsonList.GetLength(); ++productViewSummariesIndex)
    {
      m_productViewSummaries.push_back(productViewSummariesJsonList[productViewSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ProductViewAggregations"))
  {
    Aws::Map<Aws::String, JsonValue> productViewAggregationsJsonMap = jsonValue.GetObject("ProductViewAggregations").GetAllObjects();
    for(auto& productViewAggregationsItem : productViewAggregationsJsonMap)
    {
      Array<JsonValue> productViewAggregationValuesJsonList = productViewAggregationsItem.second.AsArray();
      Aws::Vector<ProductViewAggregationValue> productViewAggregationValuesList((size_t)productViewAggregationValuesJsonList.GetLength());
      for(unsigned productViewAggregationValuesIndex = 0; productViewAggregationValuesIndex < productViewAggregationValuesJsonList.GetLength(); ++productViewAggregationValuesIndex)
      {
        productViewAggregationValuesList.push_back(productViewAggregationValuesJsonList[productViewAggregationValuesIndex].AsObject());
      }
      m_productViewAggregations[productViewAggregationsItem.first] = std::move(productViewAggregationValuesList);
    }
  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }



  return *this;
}
