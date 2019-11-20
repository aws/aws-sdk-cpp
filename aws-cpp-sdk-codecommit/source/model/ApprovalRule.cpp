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

#include <aws/codecommit/model/ApprovalRule.h>
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

ApprovalRule::ApprovalRule() : 
    m_approvalRuleIdHasBeenSet(false),
    m_approvalRuleNameHasBeenSet(false),
    m_approvalRuleContentHasBeenSet(false),
    m_ruleContentSha256HasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastModifiedUserHasBeenSet(false),
    m_originApprovalRuleTemplateHasBeenSet(false)
{
}

ApprovalRule::ApprovalRule(JsonView jsonValue) : 
    m_approvalRuleIdHasBeenSet(false),
    m_approvalRuleNameHasBeenSet(false),
    m_approvalRuleContentHasBeenSet(false),
    m_ruleContentSha256HasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastModifiedUserHasBeenSet(false),
    m_originApprovalRuleTemplateHasBeenSet(false)
{
  *this = jsonValue;
}

ApprovalRule& ApprovalRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("approvalRuleId"))
  {
    m_approvalRuleId = jsonValue.GetString("approvalRuleId");

    m_approvalRuleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("approvalRuleName"))
  {
    m_approvalRuleName = jsonValue.GetString("approvalRuleName");

    m_approvalRuleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("approvalRuleContent"))
  {
    m_approvalRuleContent = jsonValue.GetString("approvalRuleContent");

    m_approvalRuleContentHasBeenSet = true;
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

  if(jsonValue.ValueExists("originApprovalRuleTemplate"))
  {
    m_originApprovalRuleTemplate = jsonValue.GetObject("originApprovalRuleTemplate");

    m_originApprovalRuleTemplateHasBeenSet = true;
  }

  return *this;
}

JsonValue ApprovalRule::Jsonize() const
{
  JsonValue payload;

  if(m_approvalRuleIdHasBeenSet)
  {
   payload.WithString("approvalRuleId", m_approvalRuleId);

  }

  if(m_approvalRuleNameHasBeenSet)
  {
   payload.WithString("approvalRuleName", m_approvalRuleName);

  }

  if(m_approvalRuleContentHasBeenSet)
  {
   payload.WithString("approvalRuleContent", m_approvalRuleContent);

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

  if(m_originApprovalRuleTemplateHasBeenSet)
  {
   payload.WithObject("originApprovalRuleTemplate", m_originApprovalRuleTemplate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
