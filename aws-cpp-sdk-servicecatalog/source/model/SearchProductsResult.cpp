﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/SearchProductsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchProductsResult::SearchProductsResult()
{
}

SearchProductsResult::SearchProductsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SearchProductsResult& SearchProductsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProductViewSummaries"))
  {
    Array<JsonView> productViewSummariesJsonList = jsonValue.GetArray("ProductViewSummaries");
    for(unsigned productViewSummariesIndex = 0; productViewSummariesIndex < productViewSummariesJsonList.GetLength(); ++productViewSummariesIndex)
    {
      m_productViewSummaries.push_back(productViewSummariesJsonList[productViewSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ProductViewAggregations"))
  {
    Aws::Map<Aws::String, JsonView> productViewAggregationsJsonMap = jsonValue.GetObject("ProductViewAggregations").GetAllObjects();
    for(auto& productViewAggregationsItem : productViewAggregationsJsonMap)
    {
      Array<JsonView> productViewAggregationValuesJsonList = productViewAggregationsItem.second.AsArray();
      Aws::Vector<ProductViewAggregationValue> productViewAggregationValuesList;
      productViewAggregationValuesList.reserve((size_t)productViewAggregationValuesJsonList.GetLength());
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
