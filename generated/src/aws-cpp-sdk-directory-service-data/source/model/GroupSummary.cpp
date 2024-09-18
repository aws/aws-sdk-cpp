/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/model/GroupSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryServiceData
{
namespace Model
{

GroupSummary::GroupSummary() : 
    m_groupScope(GroupScope::NOT_SET),
    m_groupScopeHasBeenSet(false),
    m_groupType(GroupType::NOT_SET),
    m_groupTypeHasBeenSet(false),
    m_sAMAccountNameHasBeenSet(false),
    m_sIDHasBeenSet(false)
{
}

GroupSummary::GroupSummary(JsonView jsonValue)
  : GroupSummary()
{
  *this = jsonValue;
}

GroupSummary& GroupSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupScope"))
  {
    m_groupScope = GroupScopeMapper::GetGroupScopeForName(jsonValue.GetString("GroupScope"));

    m_groupScopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupType"))
  {
    m_groupType = GroupTypeMapper::GetGroupTypeForName(jsonValue.GetString("GroupType"));

    m_groupTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SAMAccountName"))
  {
    m_sAMAccountName = jsonValue.GetString("SAMAccountName");

    m_sAMAccountNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SID"))
  {
    m_sID = jsonValue.GetString("SID");

    m_sIDHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupSummary::Jsonize() const
{
  JsonValue payload;

  if(m_groupScopeHasBeenSet)
  {
   payload.WithString("GroupScope", GroupScopeMapper::GetNameForGroupScope(m_groupScope));
  }

  if(m_groupTypeHasBeenSet)
  {
   payload.WithString("GroupType", GroupTypeMapper::GetNameForGroupType(m_groupType));
  }

  if(m_sAMAccountNameHasBeenSet)
  {
   payload.WithString("SAMAccountName", m_sAMAccountName);

  }

  if(m_sIDHasBeenSet)
  {
   payload.WithString("SID", m_sID);

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
