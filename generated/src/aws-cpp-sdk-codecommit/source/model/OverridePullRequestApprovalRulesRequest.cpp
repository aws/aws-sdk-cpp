/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/OverridePullRequestApprovalRulesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

OverridePullRequestApprovalRulesRequest::OverridePullRequestApprovalRulesRequest() : 
    m_pullRequestIdHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_overrideStatus(OverrideStatus::NOT_SET),
    m_overrideStatusHasBeenSet(false)
{
}

Aws::String OverridePullRequestApprovalRulesRequest::SerializePayload() const
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

  if(m_overrideStatusHasBeenSet)
  {
   payload.WithString("overrideStatus", OverrideStatusMapper::GetNameForOverrideStatus(m_overrideStatus));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection OverridePullRequestApprovalRulesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.OverridePullRequestApprovalRules"));
  return headers;

}




