/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/DeletePullRequestApprovalRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeletePullRequestApprovalRuleRequest::DeletePullRequestApprovalRuleRequest() : 
    m_pullRequestIdHasBeenSet(false),
    m_approvalRuleNameHasBeenSet(false)
{
}

Aws::String DeletePullRequestApprovalRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pullRequestIdHasBeenSet)
  {
   payload.WithString("pullRequestId", m_pullRequestId);

  }

  if(m_approvalRuleNameHasBeenSet)
  {
   payload.WithString("approvalRuleName", m_approvalRuleName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeletePullRequestApprovalRuleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.DeletePullRequestApprovalRule"));
  return headers;

}




