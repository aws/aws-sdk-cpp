﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/DescribeConnectorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Appflow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConnectorsResult::DescribeConnectorsResult()
{
}

DescribeConnectorsResult::DescribeConnectorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeConnectorsResult& DescribeConnectorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("connectorConfigurations"))
  {
    Aws::Map<Aws::String, JsonView> connectorConfigurationsJsonMap = jsonValue.GetObject("connectorConfigurations").GetAllObjects();
    for(auto& connectorConfigurationsItem : connectorConfigurationsJsonMap)
    {
      m_connectorConfigurations[ConnectorTypeMapper::GetConnectorTypeForName(connectorConfigurationsItem.first)] = connectorConfigurationsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("connectors"))
  {
    Array<JsonView> connectorsJsonList = jsonValue.GetArray("connectors");
    for(unsigned connectorsIndex = 0; connectorsIndex < connectorsJsonList.GetLength(); ++connectorsIndex)
    {
      m_connectors.push_back(connectorsJsonList[connectorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
