/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/UpdateApprovalRuleTemplateDescriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateApprovalRuleTemplateDescriptionRequest::UpdateApprovalRuleTemplateDescriptionRequest() : 
    m_approvalRuleTemplateNameHasBeenSet(false),
    m_approvalRuleTemplateDescriptionHasBeenSet(false)
{
}

Aws::String UpdateApprovalRuleTemplateDescriptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_approvalRuleTemplateNameHasBeenSet)
  {
   payload.WithString("approvalRuleTemplateName", m_approvalRuleTemplateName);

  }

  if(m_approvalRuleTemplateDescriptionHasBeenSet)
  {
   payload.WithString("approvalRuleTemplateDescription", m_approvalRuleTemplateDescription);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateApprovalRuleTemplateDescriptionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.UpdateApprovalRuleTemplateDescription"));
  return headers;

}




