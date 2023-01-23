/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/ListTrackersResponseEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

ListTrackersResponseEntry::ListTrackersResponseEntry() : 
    m_createTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_trackerNameHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

ListTrackersResponseEntry::ListTrackersResponseEntry(JsonView jsonValue) : 
    m_createTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_trackerNameHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ListTrackersResponseEntry& ListTrackersResponseEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetString("CreateTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrackerName"))
  {
    m_trackerName = jsonValue.GetString("TrackerName");

    m_trackerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateTime"))
  {
    m_updateTime = jsonValue.GetString("UpdateTime");

    m_updateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ListTrackersResponseEntry::Jsonize() const
{
  JsonValue payload;

  if(m_createTimeHasBeenSet)
  {
   payload.WithString("CreateTime", m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_trackerNameHasBeenSet)
  {
   payload.WithString("TrackerName", m_trackerName);

  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithString("UpdateTime", m_updateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
