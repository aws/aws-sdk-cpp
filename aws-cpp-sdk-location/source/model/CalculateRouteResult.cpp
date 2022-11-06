/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/CalculateRouteResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CalculateRouteResult::CalculateRouteResult()
{
}

CalculateRouteResult::CalculateRouteResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CalculateRouteResult& CalculateRouteResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Legs"))
  {
    Aws::Utils::Array<JsonView> legsJsonList = jsonValue.GetArray("Legs");
    for(unsigned legsIndex = 0; legsIndex < legsJsonList.GetLength(); ++legsIndex)
    {
      m_legs.push_back(legsJsonList[legsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Summary"))
  {
    m_summary = jsonValue.GetObject("Summary");

  }



  return *this;
}
