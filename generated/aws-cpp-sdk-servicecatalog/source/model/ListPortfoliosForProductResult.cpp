﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ListPortfoliosForProductResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPortfoliosForProductResult::ListPortfoliosForProductResult()
{
}

ListPortfoliosForProductResult::ListPortfoliosForProductResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPortfoliosForProductResult& ListPortfoliosForProductResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PortfolioDetails"))
  {
    Array<JsonView> portfolioDetailsJsonList = jsonValue.GetArray("PortfolioDetails");
    for(unsigned portfolioDetailsIndex = 0; portfolioDetailsIndex < portfolioDetailsJsonList.GetLength(); ++portfolioDetailsIndex)
    {
      m_portfolioDetails.push_back(portfolioDetailsJsonList[portfolioDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }



  return *this;
}
