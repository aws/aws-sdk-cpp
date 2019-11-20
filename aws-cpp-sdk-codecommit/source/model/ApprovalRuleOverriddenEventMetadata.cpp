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
