/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ListAutomatedReasoningPolicyBuildWorkflowsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAutomatedReasoningPolicyBuildWorkflowsResult::ListAutomatedReasoningPolicyBuildWorkflowsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAutomatedReasoningPolicyBuildWorkflowsResult& ListAutomatedReasoningPolicyBuildWorkflowsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("automatedReasoningPolicyBuildWorkflowSummaries"))
  {
    Aws::Utils::Array<JsonView> automatedReasoningPolicyBuildWorkflowSummariesJsonList = jsonValue.GetArray("automatedReasoningPolicyBuildWorkflowSummaries");
    for(unsigned automatedReasoningPolicyBuildWorkflowSummariesIndex = 0; automatedReasoningPolicyBuildWorkflowSummariesIndex < automatedReasoningPolicyBuildWorkflowSummariesJsonList.GetLength(); ++automatedReasoningPolicyBuildWorkflowSummariesIndex)
    {
      m_automatedReasoningPolicyBuildWorkflowSummaries.push_back(automatedReasoningPolicyBuildWorkflowSummariesJsonList[automatedReasoningPolicyBuildWorkflowSummariesIndex].AsObject());
    }
    m_automatedReasoningPolicyBuildWorkflowSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
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
