/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CreateCodeInterpreterResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateCodeInterpreterResult::CreateCodeInterpreterResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateCodeInterpreterResult& CreateCodeInterpreterResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("codeInterpreterId"))
  {
    m_codeInterpreterId = jsonValue.GetString("codeInterpreterId");
    m_codeInterpreterIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("codeInterpreterArn"))
  {
    m_codeInterpreterArn = jsonValue.GetString("codeInterpreterArn");
    m_codeInterpreterArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = CodeInterpreterStatusMapper::GetCodeInterpreterStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
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
