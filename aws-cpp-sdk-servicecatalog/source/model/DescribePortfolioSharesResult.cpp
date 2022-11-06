/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/DescribePortfolioSharesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePortfolioSharesResult::DescribePortfolioSharesResult()
{
}

DescribePortfolioSharesResult::DescribePortfolioSharesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePortfolioSharesResult& DescribePortfolioSharesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }

  if(jsonValue.ValueExists("PortfolioShareDetails"))
  {
    Aws::Utils::Array<JsonView> portfolioShareDetailsJsonList = jsonValue.GetArray("PortfolioShareDetails");
    for(unsigned portfolioShareDetailsIndex = 0; portfolioShareDetailsIndex < portfolioShareDetailsJsonList.GetLength(); ++portfolioShareDetailsIndex)
    {
      m_portfolioShareDetails.push_back(portfolioShareDetailsJsonList[portfolioShareDetailsIndex].AsObject());
    }
  }



  return *this;
}
