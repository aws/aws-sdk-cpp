/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/DataItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Honeycode
{
namespace Model
{

DataItem::DataItem() : 
    m_overrideFormat(Format::NOT_SET),
    m_overrideFormatHasBeenSet(false),
    m_rawValueHasBeenSet(false),
    m_formattedValueHasBeenSet(false)
{
}

DataItem::DataItem(JsonView jsonValue) : 
    m_overrideFormat(Format::NOT_SET),
    m_overrideFormatHasBeenSet(false),
    m_rawValueHasBeenSet(false),
    m_formattedValueHasBeenSet(false)
{
  *this = jsonValue;
}

DataItem& DataItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("overrideFormat"))
  {
    m_overrideFormat = FormatMapper::GetFormatForName(jsonValue.GetString("overrideFormat"));

    m_overrideFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rawValue"))
  {
    m_rawValue = jsonValue.GetString("rawValue");

    m_rawValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("formattedValue"))
  {
    m_formattedValue = jsonValue.GetString("formattedValue");

    m_formattedValueHasBeenSet = true;
  }

  return *this;
}

JsonValue DataItem::Jsonize() const
{
  JsonValue payload;

  if(m_overrideFormatHasBeenSet)
  {
   payload.WithString("overrideFormat", FormatMapper::GetNameForFormat(m_overrideFormat));
  }

  if(m_rawValueHasBeenSet)
  {
   payload.WithString("rawValue", m_rawValue);

  }

  if(m_formattedValueHasBeenSet)
  {
   payload.WithString("formattedValue", m_formattedValue);

  }

  return payload;
}

} // namespace Model
} // namespace Honeycode
} // namespace Aws
