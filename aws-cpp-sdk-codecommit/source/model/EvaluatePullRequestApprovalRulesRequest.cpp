/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/EvaluatePullRequestApprovalRulesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EvaluatePullRequestApprovalRulesRequest::EvaluatePullRequestApprovalRulesRequest() : 
    m_pullRequestIdHasBeenSet(false),
    m_revisionIdHasBeenSet(false)
{
}

Aws::String EvaluatePullRequestApprovalRulesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_pullRequestIdHasBeenSet)
  {
   payload.WithString("pullRequestId", m_pullRequestId);

  }

  if(m_revisionIdHasBeenSet)
  {
   payload.WithString("revisionId", m_revisionId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection EvaluatePullRequestApprovalRulesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.EvaluatePullRequestApprovalRules"));
  return headers;

}




