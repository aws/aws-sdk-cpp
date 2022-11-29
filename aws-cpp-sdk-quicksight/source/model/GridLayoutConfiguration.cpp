/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GridLayoutConfiguration.h>
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

GridLayoutConfiguration::GridLayoutConfiguration() : 
    m_elementsHasBeenSet(false),
    m_canvasSizeOptionsHasBeenSet(false)
{
}

GridLayoutConfiguration::GridLayoutConfiguration(JsonView jsonValue) : 
    m_elementsHasBeenSet(false),
    m_canvasSizeOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

GridLayoutConfiguration& GridLayoutConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Elements"))
  {
    Aws::Utils::Array<JsonView> elementsJsonList = jsonValue.GetArray("Elements");
    for(unsigned elementsIndex = 0; elementsIndex < elementsJsonList.GetLength(); ++elementsIndex)
    {
      m_elements.push_back(elementsJsonList[elementsIndex].AsObject());
    }
    m_elementsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CanvasSizeOptions"))
  {
    m_canvasSizeOptions = jsonValue.GetObject("CanvasSizeOptions");

    m_canvasSizeOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue GridLayoutConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_elementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> elementsJsonList(m_elements.size());
   for(unsigned elementsIndex = 0; elementsIndex < elementsJsonList.GetLength(); ++elementsIndex)
   {
     elementsJsonList[elementsIndex].AsObject(m_elements[elementsIndex].Jsonize());
   }
   payload.WithArray("Elements", std::move(elementsJsonList));

  }

  if(m_canvasSizeOptionsHasBeenSet)
  {
   payload.WithObject("CanvasSizeOptions", m_canvasSizeOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
