/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/DescribeConnectorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KafkaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConnectorResult::DescribeConnectorResult() : 
    m_connectorState(ConnectorState::NOT_SET)
{
}

DescribeConnectorResult::DescribeConnectorResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_connectorState(ConnectorState::NOT_SET)
{
  *this = result;
}

DescribeConnectorResult& DescribeConnectorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("capacity"))
  {
    m_capacity = jsonValue.GetObject("capacity");

  }

  if(jsonValue.ValueExists("connectorArn"))
  {
    m_connectorArn = jsonValue.GetString("connectorArn");

  }

  if(jsonValue.ValueExists("connectorConfiguration"))
  {
    Aws::Map<Aws::String, JsonView> connectorConfigurationJsonMap = jsonValue.GetObject("connectorConfiguration").GetAllObjects();
    for(auto& connectorConfigurationItem : connectorConfigurationJsonMap)
    {
      m_connectorConfiguration[connectorConfigurationItem.first] = connectorConfigurationItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("connectorDescription"))
  {
    m_connectorDescription = jsonValue.GetString("connectorDescription");

  }

  if(jsonValue.ValueExists("connectorName"))
  {
    m_connectorName = jsonValue.GetString("connectorName");

  }

  if(jsonValue.ValueExists("connectorState"))
  {
    m_connectorState = ConnectorStateMapper::GetConnectorStateForName(jsonValue.GetString("connectorState"));

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("currentVersion"))
  {
    m_currentVersion = jsonValue.GetString("currentVersion");

  }

  if(jsonValue.ValueExists("kafkaCluster"))
  {
    m_kafkaCluster = jsonValue.GetObject("kafkaCluster");

  }

  if(jsonValue.ValueExists("kafkaClusterClientAuthentication"))
  {
    m_kafkaClusterClientAuthentication = jsonValue.GetObject("kafkaClusterClientAuthentication");

  }

  if(jsonValue.ValueExists("kafkaClusterEncryptionInTransit"))
  {
    m_kafkaClusterEncryptionInTransit = jsonValue.GetObject("kafkaClusterEncryptionInTransit");

  }

  if(jsonValue.ValueExists("kafkaConnectVersion"))
  {
    m_kafkaConnectVersion = jsonValue.GetString("kafkaConnectVersion");

  }

  if(jsonValue.ValueExists("logDelivery"))
  {
    m_logDelivery = jsonValue.GetObject("logDelivery");

  }

  if(jsonValue.ValueExists("plugins"))
  {
    Aws::Utils::Array<JsonView> pluginsJsonList = jsonValue.GetArray("plugins");
    for(unsigned pluginsIndex = 0; pluginsIndex < pluginsJsonList.GetLength(); ++pluginsIndex)
    {
      m_plugins.push_back(pluginsJsonList[pluginsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("serviceExecutionRoleArn"))
  {
    m_serviceExecutionRoleArn = jsonValue.GetString("serviceExecutionRoleArn");

  }

  if(jsonValue.ValueExists("stateDescription"))
  {
    m_stateDescription = jsonValue.GetObject("stateDescription");

  }

  if(jsonValue.ValueExists("workerConfiguration"))
  {
    m_workerConfiguration = jsonValue.GetObject("workerConfiguration");

  }



  return *this;
}
