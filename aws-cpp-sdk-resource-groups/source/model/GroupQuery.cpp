/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/GroupQuery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

GroupQuery::GroupQuery() : 
    m_groupNameHasBeenSet(false),
    m_resourceQueryHasBeenSet(false)
{
}

GroupQuery::GroupQuery(JsonView jsonValue) : 
    m_groupNameHasBeenSet(false),
    m_resourceQueryHasBeenSet(false)
{
  *this = jsonValue;
}

GroupQuery& GroupQuery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupName"))
  {
    m_groupName = jsonValue.GetString("GroupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceQuery"))
  {
    m_resourceQuery = jsonValue.GetObject("ResourceQuery");

    m_resourceQueryHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupQuery::Jsonize() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_resourceQueryHasBeenSet)
  {
   payload.WithObject("ResourceQuery", m_resourceQuery.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
