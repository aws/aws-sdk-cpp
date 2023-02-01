/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/ListGeofenceCollectionsResponseEntry.h>
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

ListGeofenceCollectionsResponseEntry::ListGeofenceCollectionsResponseEntry() : 
    m_collectionNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

ListGeofenceCollectionsResponseEntry::ListGeofenceCollectionsResponseEntry(JsonView jsonValue) : 
    m_collectionNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ListGeofenceCollectionsResponseEntry& ListGeofenceCollectionsResponseEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CollectionName"))
  {
    m_collectionName = jsonValue.GetString("CollectionName");

    m_collectionNameHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("UpdateTime"))
  {
    m_updateTime = jsonValue.GetString("UpdateTime");

    m_updateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ListGeofenceCollectionsResponseEntry::Jsonize() const
{
  JsonValue payload;

  if(m_collectionNameHasBeenSet)
  {
   payload.WithString("CollectionName", m_collectionName);

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithString("CreateTime", m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

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
