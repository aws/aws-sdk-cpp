/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-data/model/ListNamedShadowsForThingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTDataPlane::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListNamedShadowsForThingResult::ListNamedShadowsForThingResult() : 
    m_timestamp(0)
{
}

ListNamedShadowsForThingResult::ListNamedShadowsForThingResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_timestamp(0)
{
  *this = result;
}

ListNamedShadowsForThingResult& ListNamedShadowsForThingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("results"))
  {
    Aws::Utils::Array<JsonView> resultsJsonList = jsonValue.GetArray("results");
    for(unsigned resultsIndex = 0; resultsIndex < resultsJsonList.GetLength(); ++resultsIndex)
    {
      m_results.push_back(resultsJsonList[resultsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetInt64("timestamp");

  }



  return *this;
}
