/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/CreateSessionResult.h>
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

CreateSessionResult::CreateSessionResult() : 
    m_sessionStatus(SessionStatus::NOT_SET)
{
}

CreateSessionResult::CreateSessionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : CreateSessionResult()
{
  *this = result;
}

CreateSessionResult& CreateSessionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("sessionArn"))
  {
    m_sessionArn = jsonValue.GetString("sessionArn");

  }

  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");

  }

  if(jsonValue.ValueExists("sessionStatus"))
  {
    m_sessionStatus = SessionStatusMapper::GetSessionStatusForName(jsonValue.GetString("sessionStatus"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
