/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ListFindingAggregationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFindingAggregationsResult::ListFindingAggregationsResult() : 
    m_aggregationType(AggregationType::NOT_SET)
{
}

ListFindingAggregationsResult::ListFindingAggregationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_aggregationType(AggregationType::NOT_SET)
{
  *this = result;
}

ListFindingAggregationsResult& ListFindingAggregationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("aggregationType"))
  {
    m_aggregationType = AggregationTypeMapper::GetAggregationTypeForName(jsonValue.GetString("aggregationType"));

  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("responses"))
  {
    Aws::Utils::Array<JsonView> responsesJsonList = jsonValue.GetArray("responses");
    for(unsigned responsesIndex = 0; responsesIndex < responsesJsonList.GetLength(); ++responsesIndex)
    {
      m_responses.push_back(responsesJsonList[responsesIndex].AsObject());
    }
  }



  return *this;
}
