/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RowAlternateColorOptions.h>
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

RowAlternateColorOptions::RowAlternateColorOptions() : 
    m_status(WidgetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_rowAlternateColorsHasBeenSet(false)
{
}

RowAlternateColorOptions::RowAlternateColorOptions(JsonView jsonValue) : 
    m_status(WidgetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_rowAlternateColorsHasBeenSet(false)
{
  *this = jsonValue;
}

RowAlternateColorOptions& RowAlternateColorOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = WidgetStatusMapper::GetWidgetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RowAlternateColors"))
  {
    Aws::Utils::Array<JsonView> rowAlternateColorsJsonList = jsonValue.GetArray("RowAlternateColors");
    for(unsigned rowAlternateColorsIndex = 0; rowAlternateColorsIndex < rowAlternateColorsJsonList.GetLength(); ++rowAlternateColorsIndex)
    {
      m_rowAlternateColors.push_back(rowAlternateColorsJsonList[rowAlternateColorsIndex].AsString());
    }
    m_rowAlternateColorsHasBeenSet = true;
  }

  return *this;
}

JsonValue RowAlternateColorOptions::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", WidgetStatusMapper::GetNameForWidgetStatus(m_status));
  }

  if(m_rowAlternateColorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rowAlternateColorsJsonList(m_rowAlternateColors.size());
   for(unsigned rowAlternateColorsIndex = 0; rowAlternateColorsIndex < rowAlternateColorsJsonList.GetLength(); ++rowAlternateColorsIndex)
   {
     rowAlternateColorsJsonList[rowAlternateColorsIndex].AsString(m_rowAlternateColors[rowAlternateColorsIndex]);
   }
   payload.WithArray("RowAlternateColors", std::move(rowAlternateColorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
