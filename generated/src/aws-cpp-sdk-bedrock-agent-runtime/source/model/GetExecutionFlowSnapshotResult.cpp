/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/GetExecutionFlowSnapshotResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetExecutionFlowSnapshotResult::GetExecutionFlowSnapshotResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetExecutionFlowSnapshotResult& GetExecutionFlowSnapshotResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("flowIdentifier"))
  {
    m_flowIdentifier = jsonValue.GetString("flowIdentifier");
    m_flowIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("flowAliasIdentifier"))
  {
    m_flowAliasIdentifier = jsonValue.GetString("flowAliasIdentifier");
    m_flowAliasIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("flowVersion"))
  {
    m_flowVersion = jsonValue.GetString("flowVersion");
    m_flowVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("executionRoleArn");
    m_executionRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("definition"))
  {
    m_definition = jsonValue.GetString("definition");
    m_definitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customerEncryptionKeyArn"))
  {
    m_customerEncryptionKeyArn = jsonValue.GetString("customerEncryptionKeyArn");
    m_customerEncryptionKeyArnHasBeenSet = true;
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
