/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ApplyGuardrailResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ApplyGuardrailResult::ApplyGuardrailResult() : 
    m_action(GuardrailAction::NOT_SET)
{
}

ApplyGuardrailResult::ApplyGuardrailResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : ApplyGuardrailResult()
{
  *this = result;
}

ApplyGuardrailResult& ApplyGuardrailResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("usage"))
  {
    m_usage = jsonValue.GetObject("usage");

  }

  if(jsonValue.ValueExists("action"))
  {
    m_action = GuardrailActionMapper::GetGuardrailActionForName(jsonValue.GetString("action"));

  }

  if(jsonValue.ValueExists("outputs"))
  {
    Aws::Utils::Array<JsonView> outputsJsonList = jsonValue.GetArray("outputs");
    for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
    {
      m_outputs.push_back(outputsJsonList[outputsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("assessments"))
  {
    Aws::Utils::Array<JsonView> assessmentsJsonList = jsonValue.GetArray("assessments");
    for(unsigned assessmentsIndex = 0; assessmentsIndex < assessmentsJsonList.GetLength(); ++assessmentsIndex)
    {
      m_assessments.push_back(assessmentsJsonList[assessmentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("guardrailCoverage"))
  {
    m_guardrailCoverage = jsonValue.GetObject("guardrailCoverage");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
