/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsecuretunneling/model/ListTunnelsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSecureTunneling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTunnelsResult::ListTunnelsResult()
{
}

ListTunnelsResult::ListTunnelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTunnelsResult& ListTunnelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("tunnelSummaries"))
  {
    Aws::Utils::Array<JsonView> tunnelSummariesJsonList = jsonValue.GetArray("tunnelSummaries");
    for(unsigned tunnelSummariesIndex = 0; tunnelSummariesIndex < tunnelSummariesJsonList.GetLength(); ++tunnelSummariesIndex)
    {
      m_tunnelSummaries.push_back(tunnelSummariesJsonList[tunnelSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
