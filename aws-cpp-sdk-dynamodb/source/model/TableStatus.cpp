/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dynamodb/model/TableStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int CREATING_HASH = HashingUtils::HashString("CREATING");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int DELETING_HASH = HashingUtils::HashString("DELETING");
static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");

namespace Aws
{
namespace DynamoDB
{
namespace Model
{
namespace TableStatusMapper
{
TableStatus GetTableStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == CREATING_HASH)
  {
    return TableStatus::CREATING;
  }
  else if (hashCode == UPDATING_HASH)
  {
    return TableStatus::UPDATING;
  }
  else if (hashCode == DELETING_HASH)
  {
    return TableStatus::DELETING;
  }
  else if (hashCode == ACTIVE_HASH)
  {
    return TableStatus::ACTIVE;
  }

  return TableStatus::NOT_SET;
}

Aws::String GetNameForTableStatus(TableStatus value)
{
  switch(value)
  {
  case TableStatus::CREATING:
    return "CREATING";
  case TableStatus::UPDATING:
    return "UPDATING";
  case TableStatus::DELETING:
    return "DELETING";
  case TableStatus::ACTIVE:
    return "ACTIVE";
  default:
    return "";
  }
}

} // namespace TableStatusMapper
} // namespace Model
} // namespace DynamoDB
} // namespace Aws
