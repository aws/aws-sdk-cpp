/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SeriesItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

SeriesItem::SeriesItem() : 
    m_fieldSeriesItemHasBeenSet(false),
    m_dataFieldSeriesItemHasBeenSet(false)
{
}

SeriesItem::SeriesItem(JsonView jsonValue) : 
    m_fieldSeriesItemHasBeenSet(false),
    m_dataFieldSeriesItemHasBeenSet(false)
{
  *this = jsonValue;
}

SeriesItem& SeriesItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldSeriesItem"))
  {
    m_fieldSeriesItem = jsonValue.GetObject("FieldSeriesItem");

    m_fieldSeriesItemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataFieldSeriesItem"))
  {
    m_dataFieldSeriesItem = jsonValue.GetObject("DataFieldSeriesItem");

    m_dataFieldSeriesItemHasBeenSet = true;
  }

  return *this;
}

JsonValue SeriesItem::Jsonize() const
{
  JsonValue payload;

  if(m_fieldSeriesItemHasBeenSet)
  {
   payload.WithObject("FieldSeriesItem", m_fieldSeriesItem.Jsonize());

  }

  if(m_dataFieldSeriesItemHasBeenSet)
  {
   payload.WithObject("DataFieldSeriesItem", m_dataFieldSeriesItem.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
