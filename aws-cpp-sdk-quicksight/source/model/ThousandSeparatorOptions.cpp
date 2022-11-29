/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ThousandSeparatorOptions.h>
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

ThousandSeparatorOptions::ThousandSeparatorOptions() : 
    m_symbol(NumericSeparatorSymbol::NOT_SET),
    m_symbolHasBeenSet(false),
    m_visibility(Visibility::NOT_SET),
    m_visibilityHasBeenSet(false)
{
}

ThousandSeparatorOptions::ThousandSeparatorOptions(JsonView jsonValue) : 
    m_symbol(NumericSeparatorSymbol::NOT_SET),
    m_symbolHasBeenSet(false),
    m_visibility(Visibility::NOT_SET),
    m_visibilityHasBeenSet(false)
{
  *this = jsonValue;
}

ThousandSeparatorOptions& ThousandSeparatorOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Symbol"))
  {
    m_symbol = NumericSeparatorSymbolMapper::GetNumericSeparatorSymbolForName(jsonValue.GetString("Symbol"));

    m_symbolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = VisibilityMapper::GetVisibilityForName(jsonValue.GetString("Visibility"));

    m_visibilityHasBeenSet = true;
  }

  return *this;
}

JsonValue ThousandSeparatorOptions::Jsonize() const
{
  JsonValue payload;

  if(m_symbolHasBeenSet)
  {
   payload.WithString("Symbol", NumericSeparatorSymbolMapper::GetNameForNumericSeparatorSymbol(m_symbol));
  }

  if(m_visibilityHasBeenSet)
  {
   payload.WithString("Visibility", VisibilityMapper::GetNameForVisibility(m_visibility));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
