/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/MemberGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

MemberGroup::MemberGroup() : 
    m_groupIdHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false)
{
}

MemberGroup::MemberGroup(JsonView jsonValue) : 
    m_groupIdHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false)
{
  *this = jsonValue;
}

MemberGroup& MemberGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupId"))
  {
    m_groupId = jsonValue.GetString("GroupId");

    m_groupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSourceId"))
  {
    m_dataSourceId = jsonValue.GetString("DataSourceId");

    m_dataSourceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue MemberGroup::Jsonize() const
{
  JsonValue payload;

  if(m_groupIdHasBeenSet)
  {
   payload.WithString("GroupId", m_groupId);

  }

  if(m_dataSourceIdHasBeenSet)
  {
   payload.WithString("DataSourceId", m_dataSourceId);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
