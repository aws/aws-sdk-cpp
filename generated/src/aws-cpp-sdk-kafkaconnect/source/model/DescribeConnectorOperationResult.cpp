/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/DescribeConnectorOperationResult.h>
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

DescribeConnectorOperationResult::DescribeConnectorOperationResult() : 
    m_connectorOperationState(ConnectorOperationState::NOT_SET),
    m_connectorOperationType(ConnectorOperationType::NOT_SET)
{
}

DescribeConnectorOperationResult::DescribeConnectorOperationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DescribeConnectorOperationResult()
{
  *this = result;
}

DescribeConnectorOperationResult& DescribeConnectorOperationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("connectorArn"))
  {
    m_connectorArn = jsonValue.GetString("connectorArn");

  }

  if(jsonValue.ValueExists("connectorOperationArn"))
  {
    m_connectorOperationArn = jsonValue.GetString("connectorOperationArn");

  }

  if(jsonValue.ValueExists("connectorOperationState"))
  {
    m_connectorOperationState = ConnectorOperationStateMapper::GetConnectorOperationStateForName(jsonValue.GetString("connectorOperationState"));

  }

  if(jsonValue.ValueExists("connectorOperationType"))
  {
    m_connectorOperationType = ConnectorOperationTypeMapper::GetConnectorOperationTypeForName(jsonValue.GetString("connectorOperationType"));

  }

  if(jsonValue.ValueExists("operationSteps"))
  {
    Aws::Utils::Array<JsonView> operationStepsJsonList = jsonValue.GetArray("operationSteps");
    for(unsigned operationStepsIndex = 0; operationStepsIndex < operationStepsJsonList.GetLength(); ++operationStepsIndex)
    {
      m_operationSteps.push_back(operationStepsJsonList[operationStepsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("originWorkerSetting"))
  {
    m_originWorkerSetting = jsonValue.GetObject("originWorkerSetting");

  }

  if(jsonValue.ValueExists("originConnectorConfiguration"))
  {
    Aws::Map<Aws::String, JsonView> originConnectorConfigurationJsonMap = jsonValue.GetObject("originConnectorConfiguration").GetAllObjects();
    for(auto& originConnectorConfigurationItem : originConnectorConfigurationJsonMap)
    {
      m_originConnectorConfiguration[originConnectorConfigurationItem.first] = originConnectorConfigurationItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("targetWorkerSetting"))
  {
    m_targetWorkerSetting = jsonValue.GetObject("targetWorkerSetting");

  }

  if(jsonValue.ValueExists("targetConnectorConfiguration"))
  {
    Aws::Map<Aws::String, JsonView> targetConnectorConfigurationJsonMap = jsonValue.GetObject("targetConnectorConfiguration").GetAllObjects();
    for(auto& targetConnectorConfigurationItem : targetConnectorConfigurationJsonMap)
    {
      m_targetConnectorConfiguration[targetConnectorConfigurationItem.first] = targetConnectorConfigurationItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("errorInfo"))
  {
    m_errorInfo = jsonValue.GetObject("errorInfo");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
