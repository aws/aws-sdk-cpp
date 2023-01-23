/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/UpdateApprovalRuleTemplateContentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateApprovalRuleTemplateContentRequest::UpdateApprovalRuleTemplateContentRequest() : 
    m_approvalRuleTemplateNameHasBeenSet(false),
    m_newRuleContentHasBeenSet(false),
    m_existingRuleContentSha256HasBeenSet(false)
{
}

Aws::String UpdateApprovalRuleTemplateContentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_approvalRuleTemplateNameHasBeenSet)
  {
   payload.WithString("approvalRuleTemplateName", m_approvalRuleTemplateName);

  }

  if(m_newRuleContentHasBeenSet)
  {
   payload.WithString("newRuleContent", m_newRuleContent);

  }

  if(m_existingRuleContentSha256HasBeenSet)
  {
   payload.WithString("existingRuleContentSha256", m_existingRuleContentSha256);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateApprovalRuleTemplateContentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.UpdateApprovalRuleTemplateContent"));
  return headers;

}




