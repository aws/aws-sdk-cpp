/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FontWeight.h>
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

FontWeight::FontWeight() : 
    m_name(FontWeightName::NOT_SET),
    m_nameHasBeenSet(false)
{
}

FontWeight::FontWeight(JsonView jsonValue) : 
    m_name(FontWeightName::NOT_SET),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

FontWeight& FontWeight::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = FontWeightNameMapper::GetFontWeightNameForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue FontWeight::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", FontWeightNameMapper::GetNameForFontWeightName(m_name));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
