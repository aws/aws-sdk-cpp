/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/UpdateApprovalRuleTemplateNameRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateApprovalRuleTemplateNameRequest::UpdateApprovalRuleTemplateNameRequest() : 
    m_oldApprovalRuleTemplateNameHasBeenSet(false),
    m_newApprovalRuleTemplateNameHasBeenSet(false)
{
}

Aws::String UpdateApprovalRuleTemplateNameRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_oldApprovalRuleTemplateNameHasBeenSet)
  {
   payload.WithString("oldApprovalRuleTemplateName", m_oldApprovalRuleTemplateName);

  }

  if(m_newApprovalRuleTemplateNameHasBeenSet)
  {
   payload.WithString("newApprovalRuleTemplateName", m_newApprovalRuleTemplateName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateApprovalRuleTemplateNameRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.UpdateApprovalRuleTemplateName"));
  return headers;

}




