/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/Cell.h>
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

Cell::Cell() : 
    m_formulaHasBeenSet(false),
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false),
    m_rawValueHasBeenSet(false),
    m_formattedValueHasBeenSet(false),
    m_formattedValuesHasBeenSet(false)
{
}

Cell::Cell(JsonView jsonValue) : 
    m_formulaHasBeenSet(false),
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false),
    m_rawValueHasBeenSet(false),
    m_formattedValueHasBeenSet(false),
    m_formattedValuesHasBeenSet(false)
{
  *this = jsonValue;
}

Cell& Cell::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("formula"))
  {
    m_formula = jsonValue.GetString("formula");

    m_formulaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("format"))
  {
    m_format = FormatMapper::GetFormatForName(jsonValue.GetString("format"));

    m_formatHasBeenSet = true;
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

  if(jsonValue.ValueExists("formattedValues"))
  {
    Aws::Utils::Array<JsonView> formattedValuesJsonList = jsonValue.GetArray("formattedValues");
    for(unsigned formattedValuesIndex = 0; formattedValuesIndex < formattedValuesJsonList.GetLength(); ++formattedValuesIndex)
    {
      m_formattedValues.push_back(formattedValuesJsonList[formattedValuesIndex].AsString());
    }
    m_formattedValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue Cell::Jsonize() const
{
  JsonValue payload;

  if(m_formulaHasBeenSet)
  {
   payload.WithString("formula", m_formula);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", FormatMapper::GetNameForFormat(m_format));
  }

  if(m_rawValueHasBeenSet)
  {
   payload.WithString("rawValue", m_rawValue);

  }

  if(m_formattedValueHasBeenSet)
  {
   payload.WithString("formattedValue", m_formattedValue);

  }

  if(m_formattedValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> formattedValuesJsonList(m_formattedValues.size());
   for(unsigned formattedValuesIndex = 0; formattedValuesIndex < formattedValuesJsonList.GetLength(); ++formattedValuesIndex)
   {
     formattedValuesJsonList[formattedValuesIndex].AsString(m_formattedValues[formattedValuesIndex]);
   }
   payload.WithArray("formattedValues", std::move(formattedValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Honeycode
} // namespace Aws
