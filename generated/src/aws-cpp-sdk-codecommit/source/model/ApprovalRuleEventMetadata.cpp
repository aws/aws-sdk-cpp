/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/ApprovalRuleEventMetadata.h>
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

ApprovalRuleEventMetadata::ApprovalRuleEventMetadata() : 
    m_approvalRuleNameHasBeenSet(false),
    m_approvalRuleIdHasBeenSet(false),
    m_approvalRuleContentHasBeenSet(false)
{
}

ApprovalRuleEventMetadata::ApprovalRuleEventMetadata(JsonView jsonValue) : 
    m_approvalRuleNameHasBeenSet(false),
    m_approvalRuleIdHasBeenSet(false),
    m_approvalRuleContentHasBeenSet(false)
{
  *this = jsonValue;
}

ApprovalRuleEventMetadata& ApprovalRuleEventMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("approvalRuleName"))
  {
    m_approvalRuleName = jsonValue.GetString("approvalRuleName");

    m_approvalRuleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("approvalRuleId"))
  {
    m_approvalRuleId = jsonValue.GetString("approvalRuleId");

    m_approvalRuleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("approvalRuleContent"))
  {
    m_approvalRuleContent = jsonValue.GetString("approvalRuleContent");

    m_approvalRuleContentHasBeenSet = true;
  }

  return *this;
}

JsonValue ApprovalRuleEventMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_approvalRuleNameHasBeenSet)
  {
   payload.WithString("approvalRuleName", m_approvalRuleName);

  }

  if(m_approvalRuleIdHasBeenSet)
  {
   payload.WithString("approvalRuleId", m_approvalRuleId);

  }

  if(m_approvalRuleContentHasBeenSet)
  {
   payload.WithString("approvalRuleContent", m_approvalRuleContent);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
