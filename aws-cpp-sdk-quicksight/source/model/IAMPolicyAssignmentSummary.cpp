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

#include <aws/quicksight/model/IAMPolicyAssignmentSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

IAMPolicyAssignmentSummary::IAMPolicyAssignmentSummary() : 
    m_assignmentNameHasBeenSet(false),
    m_assignmentStatus(AssignmentStatus::NOT_SET),
    m_assignmentStatusHasBeenSet(false)
{
}

IAMPolicyAssignmentSummary::IAMPolicyAssignmentSummary(JsonView jsonValue) : 
    m_assignmentNameHasBeenSet(false),
    m_assignmentStatus(AssignmentStatus::NOT_SET),
    m_assignmentStatusHasBeenSet(false)
{
  *this = jsonValue;
}

IAMPolicyAssignmentSummary& IAMPolicyAssignmentSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssignmentName"))
  {
    m_assignmentName = jsonValue.GetString("AssignmentName");

    m_assignmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssignmentStatus"))
  {
    m_assignmentStatus = AssignmentStatusMapper::GetAssignmentStatusForName(jsonValue.GetString("AssignmentStatus"));

    m_assignmentStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue IAMPolicyAssignmentSummary::Jsonize() const
{
  JsonValue payload;

  if(m_assignmentNameHasBeenSet)
  {
   payload.WithString("AssignmentName", m_assignmentName);

  }

  if(m_assignmentStatusHasBeenSet)
  {
   payload.WithString("AssignmentStatus", AssignmentStatusMapper::GetNameForAssignmentStatus(m_assignmentStatus));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
