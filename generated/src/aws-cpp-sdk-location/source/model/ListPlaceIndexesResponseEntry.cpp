/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/ListPlaceIndexesResponseEntry.h>
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

ListPlaceIndexesResponseEntry::ListPlaceIndexesResponseEntry() : 
    m_createTimeHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

ListPlaceIndexesResponseEntry::ListPlaceIndexesResponseEntry(JsonView jsonValue) : 
    m_createTimeHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_indexNameHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ListPlaceIndexesResponseEntry& ListPlaceIndexesResponseEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetString("CreateTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetString("DataSource");

    m_dataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IndexName"))
  {
    m_indexName = jsonValue.GetString("IndexName");

    m_indexNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateTime"))
  {
    m_updateTime = jsonValue.GetString("UpdateTime");

    m_updateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ListPlaceIndexesResponseEntry::Jsonize() const
{
  JsonValue payload;

  if(m_createTimeHasBeenSet)
  {
   payload.WithString("CreateTime", m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithString("DataSource", m_dataSource);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_indexNameHasBeenSet)
  {
   payload.WithString("IndexName", m_indexName);

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
