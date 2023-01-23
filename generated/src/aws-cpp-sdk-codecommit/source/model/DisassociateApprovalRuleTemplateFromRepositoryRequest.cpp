/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/DisassociateApprovalRuleTemplateFromRepositoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateApprovalRuleTemplateFromRepositoryRequest::DisassociateApprovalRuleTemplateFromRepositoryRequest() : 
    m_approvalRuleTemplateNameHasBeenSet(false),
    m_repositoryNameHasBeenSet(false)
{
}

Aws::String DisassociateApprovalRuleTemplateFromRepositoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_approvalRuleTemplateNameHasBeenSet)
  {
   payload.WithString("approvalRuleTemplateName", m_approvalRuleTemplateName);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateApprovalRuleTemplateFromRepositoryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.DisassociateApprovalRuleTemplateFromRepository"));
  return headers;

}




