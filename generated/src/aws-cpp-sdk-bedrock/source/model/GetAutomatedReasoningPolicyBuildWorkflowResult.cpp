/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GetAutomatedReasoningPolicyBuildWorkflowResult.h>
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

GetAutomatedReasoningPolicyBuildWorkflowResult::GetAutomatedReasoningPolicyBuildWorkflowResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAutomatedReasoningPolicyBuildWorkflowResult& GetAutomatedReasoningPolicyBuildWorkflowResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
  if(jsonValue.ValueExists("status"))
  {
    m_status = AutomatedReasoningPolicyBuildWorkflowStatusMapper::GetAutomatedReasoningPolicyBuildWorkflowStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("buildWorkflowType"))
  {
    m_buildWorkflowType = AutomatedReasoningPolicyBuildWorkflowTypeMapper::GetAutomatedReasoningPolicyBuildWorkflowTypeForName(jsonValue.GetString("buildWorkflowType"));
    m_buildWorkflowTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("documentName"))
  {
    m_documentName = jsonValue.GetString("documentName");
    m_documentNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("documentContentType"))
  {
    m_documentContentType = AutomatedReasoningPolicyBuildDocumentContentTypeMapper::GetAutomatedReasoningPolicyBuildDocumentContentTypeForName(jsonValue.GetString("documentContentType"));
    m_documentContentTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("documentDescription"))
  {
    m_documentDescription = jsonValue.GetString("documentDescription");
    m_documentDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
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
