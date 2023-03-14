/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/DeleteConnectorResult.h>
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

DeleteConnectorResult::DeleteConnectorResult() : 
    m_connectorState(ConnectorState::NOT_SET)
{
}

DeleteConnectorResult::DeleteConnectorResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_connectorState(ConnectorState::NOT_SET)
{
  *this = result;
}

DeleteConnectorResult& DeleteConnectorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("connectorArn"))
  {
    m_connectorArn = jsonValue.GetString("connectorArn");

  }

  if(jsonValue.ValueExists("connectorState"))
  {
    m_connectorState = ConnectorStateMapper::GetConnectorStateForName(jsonValue.GetString("connectorState"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
