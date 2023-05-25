/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/ApprovalRuleOverriddenEventMetadata.h>
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

ApprovalRuleOverriddenEventMetadata::ApprovalRuleOverriddenEventMetadata() : 
    m_revisionIdHasBeenSet(false),
    m_overrideStatus(OverrideStatus::NOT_SET),
    m_overrideStatusHasBeenSet(false)
{
}

ApprovalRuleOverriddenEventMetadata::ApprovalRuleOverriddenEventMetadata(JsonView jsonValue) : 
    m_revisionIdHasBeenSet(false),
    m_overrideStatus(OverrideStatus::NOT_SET),
    m_overrideStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ApprovalRuleOverriddenEventMetadata& ApprovalRuleOverriddenEventMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("revisionId"))
  {
    m_revisionId = jsonValue.GetString("revisionId");

    m_revisionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("overrideStatus"))
  {
    m_overrideStatus = OverrideStatusMapper::GetOverrideStatusForName(jsonValue.GetString("overrideStatus"));

    m_overrideStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ApprovalRuleOverriddenEventMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_revisionIdHasBeenSet)
  {
   payload.WithString("revisionId", m_revisionId);

  }

  if(m_overrideStatusHasBeenSet)
  {
   payload.WithString("overrideStatus", OverrideStatusMapper::GetNameForOverrideStatus(m_overrideStatus));
  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
