/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateResult.h>
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

RetrieveAndGenerateResult::RetrieveAndGenerateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RetrieveAndGenerateResult& RetrieveAndGenerateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("output"))
  {
    m_output = jsonValue.GetObject("output");
    m_outputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("citations"))
  {
    Aws::Utils::Array<JsonView> citationsJsonList = jsonValue.GetArray("citations");
    for(unsigned citationsIndex = 0; citationsIndex < citationsJsonList.GetLength(); ++citationsIndex)
    {
      m_citations.push_back(citationsJsonList[citationsIndex].AsObject());
    }
    m_citationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("guardrailAction"))
  {
    m_guardrailAction = GuadrailActionMapper::GetGuadrailActionForName(jsonValue.GetString("guardrailAction"));
    m_guardrailActionHasBeenSet = true;
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
