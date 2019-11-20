/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/codecommit/model/UpdatePullRequestApprovalStateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePullRequestApprovalStateRequest::UpdatePullRequestApprovalStateRequest() : 
    m_pullRequestIdHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_approvalState(ApprovalState::NOT_SET),
    m_approvalStateHasBeenSet(false)
{
}

Aws::String UpdatePullRequestApprovalStateRequest::SerializePayload() const
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

  if(m_approvalStateHasBeenSet)
  {
   payload.WithString("approvalState", ApprovalStateMapper::GetNameForApprovalState(m_approvalState));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdatePullRequestApprovalStateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.UpdatePullRequestApprovalState"));
  return headers;

}




