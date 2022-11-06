/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/ListEndpointsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEndpointsResult::ListEndpointsResult()
{
}

ListEndpointsResult::ListEndpointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEndpointsResult& ListEndpointsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Endpoints"))
  {
    Aws::Utils::Array<JsonView> endpointsJsonList = jsonValue.GetArray("Endpoints");
    for(unsigned endpointsIndex = 0; endpointsIndex < endpointsJsonList.GetLength(); ++endpointsIndex)
    {
      m_endpoints.push_back(endpointsJsonList[endpointsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
