/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/DescribeReservedElasticsearchInstanceOfferingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeReservedElasticsearchInstanceOfferingsResult::DescribeReservedElasticsearchInstanceOfferingsResult()
{
}

DescribeReservedElasticsearchInstanceOfferingsResult::DescribeReservedElasticsearchInstanceOfferingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeReservedElasticsearchInstanceOfferingsResult& DescribeReservedElasticsearchInstanceOfferingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ReservedElasticsearchInstanceOfferings"))
  {
    Aws::Utils::Array<JsonView> reservedElasticsearchInstanceOfferingsJsonList = jsonValue.GetArray("ReservedElasticsearchInstanceOfferings");
    for(unsigned reservedElasticsearchInstanceOfferingsIndex = 0; reservedElasticsearchInstanceOfferingsIndex < reservedElasticsearchInstanceOfferingsJsonList.GetLength(); ++reservedElasticsearchInstanceOfferingsIndex)
    {
      m_reservedElasticsearchInstanceOfferings.push_back(reservedElasticsearchInstanceOfferingsJsonList[reservedElasticsearchInstanceOfferingsIndex].AsObject());
    }
  }



  return *this;
}
