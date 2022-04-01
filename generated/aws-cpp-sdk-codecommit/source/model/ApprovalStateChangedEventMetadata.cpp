/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/ApprovalStateChangedEventMetadata.h>
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

ApprovalStateChangedEventMetadata::ApprovalStateChangedEventMetadata() : 
    m_revisionIdHasBeenSet(false),
    m_approvalStatus(ApprovalState::NOT_SET),
    m_approvalStatusHasBeenSet(false)
{
}

ApprovalStateChangedEventMetadata::ApprovalStateChangedEventMetadata(JsonView jsonValue) : 
    m_revisionIdHasBeenSet(false),
    m_approvalStatus(ApprovalState::NOT_SET),
    m_approvalStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ApprovalStateChangedEventMetadata& ApprovalStateChangedEventMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("revisionId"))
  {
    m_revisionId = jsonValue.GetString("revisionId");

    m_revisionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("approvalStatus"))
  {
    m_approvalStatus = ApprovalStateMapper::GetApprovalStateForName(jsonValue.GetString("approvalStatus"));

    m_approvalStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ApprovalStateChangedEventMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_revisionIdHasBeenSet)
  {
   payload.WithString("revisionId", m_revisionId);

  }

  if(m_approvalStatusHasBeenSet)
  {
   payload.WithString("approvalStatus", ApprovalStateMapper::GetNameForApprovalState(m_approvalStatus));
  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
