/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/GetApprovalRuleTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetApprovalRuleTemplateRequest::GetApprovalRuleTemplateRequest() : 
    m_approvalRuleTemplateNameHasBeenSet(false)
{
}

Aws::String GetApprovalRuleTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_approvalRuleTemplateNameHasBeenSet)
  {
   payload.WithString("approvalRuleTemplateName", m_approvalRuleTemplateName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetApprovalRuleTemplateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.GetApprovalRuleTemplate"));
  return headers;

}




