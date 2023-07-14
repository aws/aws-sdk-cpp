/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/Approval.h>
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

Approval::Approval() : 
    m_userArnHasBeenSet(false),
    m_approvalState(ApprovalState::NOT_SET),
    m_approvalStateHasBeenSet(false)
{
}

Approval::Approval(JsonView jsonValue) : 
    m_userArnHasBeenSet(false),
    m_approvalState(ApprovalState::NOT_SET),
    m_approvalStateHasBeenSet(false)
{
  *this = jsonValue;
}

Approval& Approval::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userArn"))
  {
    m_userArn = jsonValue.GetString("userArn");

    m_userArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("approvalState"))
  {
    m_approvalState = ApprovalStateMapper::GetApprovalStateForName(jsonValue.GetString("approvalState"));

    m_approvalStateHasBeenSet = true;
  }

  return *this;
}

JsonValue Approval::Jsonize() const
{
  JsonValue payload;

  if(m_userArnHasBeenSet)
  {
   payload.WithString("userArn", m_userArn);

  }

  if(m_approvalStateHasBeenSet)
  {
   payload.WithString("approvalState", ApprovalStateMapper::GetNameForApprovalState(m_approvalState));
  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
