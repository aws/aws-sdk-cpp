/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Typography.h>
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

Typography::Typography() : 
    m_fontFamiliesHasBeenSet(false)
{
}

Typography::Typography(JsonView jsonValue) : 
    m_fontFamiliesHasBeenSet(false)
{
  *this = jsonValue;
}

Typography& Typography::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FontFamilies"))
  {
    Aws::Utils::Array<JsonView> fontFamiliesJsonList = jsonValue.GetArray("FontFamilies");
    for(unsigned fontFamiliesIndex = 0; fontFamiliesIndex < fontFamiliesJsonList.GetLength(); ++fontFamiliesIndex)
    {
      m_fontFamilies.push_back(fontFamiliesJsonList[fontFamiliesIndex].AsObject());
    }
    m_fontFamiliesHasBeenSet = true;
  }

  return *this;
}

JsonValue Typography::Jsonize() const
{
  JsonValue payload;

  if(m_fontFamiliesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fontFamiliesJsonList(m_fontFamilies.size());
   for(unsigned fontFamiliesIndex = 0; fontFamiliesIndex < fontFamiliesJsonList.GetLength(); ++fontFamiliesIndex)
   {
     fontFamiliesJsonList[fontFamiliesIndex].AsObject(m_fontFamilies[fontFamiliesIndex].Jsonize());
   }
   payload.WithArray("FontFamilies", std::move(fontFamiliesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
