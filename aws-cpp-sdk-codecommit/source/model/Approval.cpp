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
