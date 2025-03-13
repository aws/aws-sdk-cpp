/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/CreateConnectorResult.h>
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

CreateConnectorResult::CreateConnectorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateConnectorResult& CreateConnectorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("connectorArn"))
  {
    m_connectorArn = jsonValue.GetString("connectorArn");
    m_connectorArnHasBeenSet = true;
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
