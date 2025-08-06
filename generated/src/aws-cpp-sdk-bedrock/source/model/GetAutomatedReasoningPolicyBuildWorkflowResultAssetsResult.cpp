/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GetAutomatedReasoningPolicyBuildWorkflowResultAssetsResult.h>
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

GetAutomatedReasoningPolicyBuildWorkflowResultAssetsResult::GetAutomatedReasoningPolicyBuildWorkflowResultAssetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAutomatedReasoningPolicyBuildWorkflowResultAssetsResult& GetAutomatedReasoningPolicyBuildWorkflowResultAssetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("policyArn"))
  {
    m_policyArn = jsonValue.GetString("policyArn");
    m_policyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("buildWorkflowId"))
  {
    m_buildWorkflowId = jsonValue.GetString("buildWorkflowId");
    m_buildWorkflowIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("buildWorkflowAssets"))
  {
    m_buildWorkflowAssets = jsonValue.GetObject("buildWorkflowAssets");
    m_buildWorkflowAssetsHasBeenSet = true;
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
