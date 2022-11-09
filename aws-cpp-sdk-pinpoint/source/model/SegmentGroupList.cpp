/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/SegmentGroupList.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

SegmentGroupList::SegmentGroupList() : 
    m_groupsHasBeenSet(false),
    m_include(Include::NOT_SET),
    m_includeHasBeenSet(false)
{
}

SegmentGroupList::SegmentGroupList(JsonView jsonValue) : 
    m_groupsHasBeenSet(false),
    m_include(Include::NOT_SET),
    m_includeHasBeenSet(false)
{
  *this = jsonValue;
}

SegmentGroupList& SegmentGroupList::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Groups"))
  {
    Aws::Utils::Array<JsonView> groupsJsonList = jsonValue.GetArray("Groups");
    for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
    {
      m_groups.push_back(groupsJsonList[groupsIndex].AsObject());
    }
    m_groupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Include"))
  {
    m_include = IncludeMapper::GetIncludeForName(jsonValue.GetString("Include"));

    m_includeHasBeenSet = true;
  }

  return *this;
}

JsonValue SegmentGroupList::Jsonize() const
{
  JsonValue payload;

  if(m_groupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> groupsJsonList(m_groups.size());
   for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
   {
     groupsJsonList[groupsIndex].AsObject(m_groups[groupsIndex].Jsonize());
   }
   payload.WithArray("Groups", std::move(groupsJsonList));

  }

  if(m_includeHasBeenSet)
  {
   payload.WithString("Include", IncludeMapper::GetNameForInclude(m_include));
  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
