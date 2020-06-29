/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/ApprovalRuleTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

ApprovalRuleTemplate::ApprovalRuleTemplate() : 
    m_approvalRuleTemplateIdHasBeenSet(false),
    m_approvalRuleTemplateNameHasBeenSet(false),
    m_approvalRuleTemplateDescriptionHasBeenSet(false),
    m_approvalRuleTemplateContentHasBeenSet(false),
    m_ruleContentSha256HasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastModifiedUserHasBeenSet(false)
{
}

ApprovalRuleTemplate::ApprovalRuleTemplate(JsonView jsonValue) : 
    m_approvalRuleTemplateIdHasBeenSet(false),
    m_approvalRuleTemplateNameHasBeenSet(false),
    m_approvalRuleTemplateDescriptionHasBeenSet(false),
    m_approvalRuleTemplateContentHasBeenSet(false),
    m_ruleContentSha256HasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastModifiedUserHasBeenSet(false)
{
  *this = jsonValue;
}

ApprovalRuleTemplate& ApprovalRuleTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("approvalRuleTemplateId"))
  {
    m_approvalRuleTemplateId = jsonValue.GetString("approvalRuleTemplateId");

    m_approvalRuleTemplateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("approvalRuleTemplateName"))
  {
    m_approvalRuleTemplateName = jsonValue.GetString("approvalRuleTemplateName");

    m_approvalRuleTemplateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("approvalRuleTemplateDescription"))
  {
    m_approvalRuleTemplateDescription = jsonValue.GetString("approvalRuleTemplateDescription");

    m_approvalRuleTemplateDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("approvalRuleTemplateContent"))
  {
    m_approvalRuleTemplateContent = jsonValue.GetString("approvalRuleTemplateContent");

    m_approvalRuleTemplateContentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleContentSha256"))
  {
    m_ruleContentSha256 = jsonValue.GetString("ruleContentSha256");

    m_ruleContentSha256HasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("lastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedUser"))
  {
    m_lastModifiedUser = jsonValue.GetString("lastModifiedUser");

    m_lastModifiedUserHasBeenSet = true;
  }

  return *this;
}

JsonValue ApprovalRuleTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_approvalRuleTemplateIdHasBeenSet)
  {
   payload.WithString("approvalRuleTemplateId", m_approvalRuleTemplateId);

  }

  if(m_approvalRuleTemplateNameHasBeenSet)
  {
   payload.WithString("approvalRuleTemplateName", m_approvalRuleTemplateName);

  }

  if(m_approvalRuleTemplateDescriptionHasBeenSet)
  {
   payload.WithString("approvalRuleTemplateDescription", m_approvalRuleTemplateDescription);

  }

  if(m_approvalRuleTemplateContentHasBeenSet)
  {
   payload.WithString("approvalRuleTemplateContent", m_approvalRuleTemplateContent);

  }

  if(m_ruleContentSha256HasBeenSet)
  {
   payload.WithString("ruleContentSha256", m_ruleContentSha256);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("lastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_lastModifiedUserHasBeenSet)
  {
   payload.WithString("lastModifiedUser", m_lastModifiedUser);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
