/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ListWirelessGatewaysResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWirelessGatewaysResult::ListWirelessGatewaysResult()
{
}

ListWirelessGatewaysResult::ListWirelessGatewaysResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWirelessGatewaysResult& ListWirelessGatewaysResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("WirelessGatewayList"))
  {
    Aws::Utils::Array<JsonView> wirelessGatewayListJsonList = jsonValue.GetArray("WirelessGatewayList");
    for(unsigned wirelessGatewayListIndex = 0; wirelessGatewayListIndex < wirelessGatewayListJsonList.GetLength(); ++wirelessGatewayListIndex)
    {
      m_wirelessGatewayList.push_back(wirelessGatewayListJsonList[wirelessGatewayListIndex].AsObject());
    }
  }



  return *this;
}
