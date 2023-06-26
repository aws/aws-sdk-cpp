/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ListImageScanFindingAggregationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListImageScanFindingAggregationsResult::ListImageScanFindingAggregationsResult()
{
}

ListImageScanFindingAggregationsResult::ListImageScanFindingAggregationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListImageScanFindingAggregationsResult& ListImageScanFindingAggregationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");

  }

  if(jsonValue.ValueExists("aggregationType"))
  {
    m_aggregationType = jsonValue.GetString("aggregationType");

  }

  if(jsonValue.ValueExists("responses"))
  {
    Aws::Utils::Array<JsonView> responsesJsonList = jsonValue.GetArray("responses");
    for(unsigned responsesIndex = 0; responsesIndex < responsesJsonList.GetLength(); ++responsesIndex)
    {
      m_responses.push_back(responsesJsonList[responsesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
