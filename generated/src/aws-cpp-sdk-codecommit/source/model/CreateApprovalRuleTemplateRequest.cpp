/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/CreateApprovalRuleTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateApprovalRuleTemplateRequest::CreateApprovalRuleTemplateRequest() : 
    m_approvalRuleTemplateNameHasBeenSet(false),
    m_approvalRuleTemplateContentHasBeenSet(false),
    m_approvalRuleTemplateDescriptionHasBeenSet(false)
{
}

Aws::String CreateApprovalRuleTemplateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_approvalRuleTemplateNameHasBeenSet)
  {
   payload.WithString("approvalRuleTemplateName", m_approvalRuleTemplateName);

  }

  if(m_approvalRuleTemplateContentHasBeenSet)
  {
   payload.WithString("approvalRuleTemplateContent", m_approvalRuleTemplateContent);

  }

  if(m_approvalRuleTemplateDescriptionHasBeenSet)
  {
   payload.WithString("approvalRuleTemplateDescription", m_approvalRuleTemplateDescription);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateApprovalRuleTemplateRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.CreateApprovalRuleTemplate"));
  return headers;

}




