/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/DeleteApprovalRuleTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteApprovalRuleTemplateRequest::DeleteApprovalRuleTemplateRequest() : 
    m_approvalRuleTemplateNameHasBeenSet(false)
{
}

Aws::String DeleteApprovalRuleTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_approvalRuleTemplateNameHasBeenSet)
  {
   payload.WithString("approvalRuleTemplateName", m_approvalRuleTemplateName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteApprovalRuleTemplateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.DeleteApprovalRuleTemplate"));
  return headers;

}




