/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/DescribeConnectorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::KafkaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConnectorResult::DescribeConnectorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeConnectorResult& DescribeConnectorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("capacity"))
  {
    m_capacity = jsonValue.GetObject("capacity");
    m_capacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectorArn"))
  {
    m_connectorArn = jsonValue.GetString("connectorArn");
    m_connectorArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectorConfiguration"))
  {
    Aws::Map<Aws::String, JsonView> connectorConfigurationJsonMap = jsonValue.GetObject("connectorConfiguration").GetAllObjects();
    for(auto& connectorConfigurationItem : connectorConfigurationJsonMap)
    {
      m_connectorConfiguration[connectorConfigurationItem.first] = connectorConfigurationItem.second.AsString();
    }
    m_connectorConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectorDescription"))
  {
    m_connectorDescription = jsonValue.GetString("connectorDescription");
    m_connectorDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectorName"))
  {
    m_connectorName = jsonValue.GetString("connectorName");
    m_connectorNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectorState"))
  {
    m_connectorState = ConnectorStateMapper::GetConnectorStateForName(jsonValue.GetString("connectorState"));
    m_connectorStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("currentVersion"))
  {
    m_currentVersion = jsonValue.GetString("currentVersion");
    m_currentVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kafkaCluster"))
  {
    m_kafkaCluster = jsonValue.GetObject("kafkaCluster");
    m_kafkaClusterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kafkaClusterClientAuthentication"))
  {
    m_kafkaClusterClientAuthentication = jsonValue.GetObject("kafkaClusterClientAuthentication");
    m_kafkaClusterClientAuthenticationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kafkaClusterEncryptionInTransit"))
  {
    m_kafkaClusterEncryptionInTransit = jsonValue.GetObject("kafkaClusterEncryptionInTransit");
    m_kafkaClusterEncryptionInTransitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kafkaConnectVersion"))
  {
    m_kafkaConnectVersion = jsonValue.GetString("kafkaConnectVersion");
    m_kafkaConnectVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logDelivery"))
  {
    m_logDelivery = jsonValue.GetObject("logDelivery");
    m_logDeliveryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("plugins"))
  {
    Aws::Utils::Array<JsonView> pluginsJsonList = jsonValue.GetArray("plugins");
    for(unsigned pluginsIndex = 0; pluginsIndex < pluginsJsonList.GetLength(); ++pluginsIndex)
    {
      m_plugins.push_back(pluginsJsonList[pluginsIndex].AsObject());
    }
    m_pluginsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceExecutionRoleArn"))
  {
    m_serviceExecutionRoleArn = jsonValue.GetString("serviceExecutionRoleArn");
    m_serviceExecutionRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workerConfiguration"))
  {
    m_workerConfiguration = jsonValue.GetObject("workerConfiguration");
    m_workerConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stateDescription"))
  {
    m_stateDescription = jsonValue.GetObject("stateDescription");
    m_stateDescriptionHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
