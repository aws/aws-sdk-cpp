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




