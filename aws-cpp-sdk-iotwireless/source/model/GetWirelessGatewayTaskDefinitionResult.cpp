/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetWirelessGatewayTaskDefinitionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWirelessGatewayTaskDefinitionResult::GetWirelessGatewayTaskDefinitionResult() : 
    m_autoCreateTasks(false)
{
}

GetWirelessGatewayTaskDefinitionResult::GetWirelessGatewayTaskDefinitionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_autoCreateTasks(false)
{
  *this = result;
}

GetWirelessGatewayTaskDefinitionResult& GetWirelessGatewayTaskDefinitionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AutoCreateTasks"))
  {
    m_autoCreateTasks = jsonValue.GetBool("AutoCreateTasks");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Update"))
  {
    m_update = jsonValue.GetObject("Update");

  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }



  return *this;
}
