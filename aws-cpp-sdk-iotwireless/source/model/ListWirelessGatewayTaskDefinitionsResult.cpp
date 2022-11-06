/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ListWirelessGatewayTaskDefinitionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWirelessGatewayTaskDefinitionsResult::ListWirelessGatewayTaskDefinitionsResult()
{
}

ListWirelessGatewayTaskDefinitionsResult::ListWirelessGatewayTaskDefinitionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWirelessGatewayTaskDefinitionsResult& ListWirelessGatewayTaskDefinitionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("TaskDefinitions"))
  {
    Aws::Utils::Array<JsonView> taskDefinitionsJsonList = jsonValue.GetArray("TaskDefinitions");
    for(unsigned taskDefinitionsIndex = 0; taskDefinitionsIndex < taskDefinitionsJsonList.GetLength(); ++taskDefinitionsIndex)
    {
      m_taskDefinitions.push_back(taskDefinitionsJsonList[taskDefinitionsIndex].AsObject());
    }
  }



  return *this;
}
