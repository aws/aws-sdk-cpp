/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/SuggestAddressHighlights.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoPlaces
{
namespace Model
{

SuggestAddressHighlights::SuggestAddressHighlights(JsonView jsonValue)
{
  *this = jsonValue;
}

SuggestAddressHighlights& SuggestAddressHighlights::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Label"))
  {
    Aws::Utils::Array<JsonView> labelJsonList = jsonValue.GetArray("Label");
    for(unsigned labelIndex = 0; labelIndex < labelJsonList.GetLength(); ++labelIndex)
    {
      m_label.push_back(labelJsonList[labelIndex].AsObject());
    }
    m_labelHasBeenSet = true;
  }
  return *this;
}

JsonValue SuggestAddressHighlights::Jsonize() const
{
  JsonValue payload;

  if(m_labelHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> labelJsonList(m_label.size());
   for(unsigned labelIndex = 0; labelIndex < labelJsonList.GetLength(); ++labelIndex)
   {
     labelJsonList[labelIndex].AsObject(m_label[labelIndex].Jsonize());
   }
   payload.WithArray("Label", std::move(labelJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
