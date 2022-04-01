/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/GroupedResourceCount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

GroupedResourceCount::GroupedResourceCount() : 
    m_groupNameHasBeenSet(false),
    m_resourceCount(0),
    m_resourceCountHasBeenSet(false)
{
}

GroupedResourceCount::GroupedResourceCount(JsonView jsonValue) : 
    m_groupNameHasBeenSet(false),
    m_resourceCount(0),
    m_resourceCountHasBeenSet(false)
{
  *this = jsonValue;
}

GroupedResourceCount& GroupedResourceCount::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GroupName"))
  {
    m_groupName = jsonValue.GetString("GroupName");

    m_groupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceCount"))
  {
    m_resourceCount = jsonValue.GetInt64("ResourceCount");

    m_resourceCountHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupedResourceCount::Jsonize() const
{
  JsonValue payload;

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  if(m_resourceCountHasBeenSet)
  {
   payload.WithInt64("ResourceCount", m_resourceCount);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
