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

ApplyGuardrailResult::ApplyGuardrailResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ApplyGuardrailResult& ApplyGuardrailResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("usage"))
  {
    m_usage = jsonValue.GetObject("usage");
    m_usageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("action"))
  {
    m_action = GuardrailActionMapper::GetGuardrailActionForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actionReason"))
  {
    m_actionReason = jsonValue.GetString("actionReason");
    m_actionReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputs"))
  {
    Aws::Utils::Array<JsonView> outputsJsonList = jsonValue.GetArray("outputs");
    for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
    {
      m_outputs.push_back(outputsJsonList[outputsIndex].AsObject());
    }
    m_outputsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("assessments"))
  {
    Aws::Utils::Array<JsonView> assessmentsJsonList = jsonValue.GetArray("assessments");
    for(unsigned assessmentsIndex = 0; assessmentsIndex < assessmentsJsonList.GetLength(); ++assessmentsIndex)
    {
      m_assessments.push_back(assessmentsJsonList[assessmentsIndex].AsObject());
    }
    m_assessmentsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("guardrailCoverage"))
  {
    m_guardrailCoverage = jsonValue.GetObject("guardrailCoverage");
    m_guardrailCoverageHasBeenSet = true;
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
