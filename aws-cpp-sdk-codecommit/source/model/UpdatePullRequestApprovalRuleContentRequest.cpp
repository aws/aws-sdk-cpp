/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/UpdatePullRequestApprovalRuleContentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePullRequestApprovalRuleContentRequest::UpdatePullRequestApprovalRuleContentRequest() : 
    m_pullRequestIdHasBeenSet(false),
    m_approvalRuleNameHasBeenSet(false),
    m_existingRuleContentSha256HasBeenSet(false),
    m_newRuleContentHasBeenSet(false)
{
}

Aws::String UpdatePullRequestApprovalRuleContentRequest::SerializePayload() const
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

  if(m_existingRuleContentSha256HasBeenSet)
  {
   payload.WithString("existingRuleContentSha256", m_existingRuleContentSha256);

  }

  if(m_newRuleContentHasBeenSet)
  {
   payload.WithString("newRuleContent", m_newRuleContent);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePullRequestApprovalRuleContentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.UpdatePullRequestApprovalRuleContent"));
  return headers;

}




