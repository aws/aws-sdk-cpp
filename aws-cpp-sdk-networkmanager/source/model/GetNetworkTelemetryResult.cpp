/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/GetNetworkTelemetryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetNetworkTelemetryResult::GetNetworkTelemetryResult()
{
}

GetNetworkTelemetryResult::GetNetworkTelemetryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetNetworkTelemetryResult& GetNetworkTelemetryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NetworkTelemetry"))
  {
    Aws::Utils::Array<JsonView> networkTelemetryJsonList = jsonValue.GetArray("NetworkTelemetry");
    for(unsigned networkTelemetryIndex = 0; networkTelemetryIndex < networkTelemetryJsonList.GetLength(); ++networkTelemetryIndex)
    {
      m_networkTelemetry.push_back(networkTelemetryJsonList[networkTelemetryIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
