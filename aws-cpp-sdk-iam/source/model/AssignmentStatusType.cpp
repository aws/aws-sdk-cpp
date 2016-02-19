/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/model/AssignmentStatusType.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int Assigned_HASH = HashingUtils::HashString("Assigned");
static const int Unassigned_HASH = HashingUtils::HashString("Unassigned");
static const int Any_HASH = HashingUtils::HashString("Any");

namespace Aws
{
namespace IAM
{
namespace Model
{
namespace AssignmentStatusTypeMapper
{
AssignmentStatusType GetAssignmentStatusTypeForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == Assigned_HASH)
  {
    return AssignmentStatusType::Assigned;
  }
  else if (hashCode == Unassigned_HASH)
  {
    return AssignmentStatusType::Unassigned;
  }
  else if (hashCode == Any_HASH)
  {
    return AssignmentStatusType::Any;
  }

  return AssignmentStatusType::NOT_SET;
}

Aws::String GetNameForAssignmentStatusType(AssignmentStatusType value)
{
  switch(value)
  {
  case AssignmentStatusType::Assigned:
    return "Assigned";
  case AssignmentStatusType::Unassigned:
    return "Unassigned";
  case AssignmentStatusType::Any:
    return "Any";
  default:
    return "";
  }
}

} // namespace AssignmentStatusTypeMapper
} // namespace Model
} // namespace IAM
} // namespace Aws
