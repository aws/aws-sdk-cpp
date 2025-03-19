/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/CountryHighlights.h>
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

CountryHighlights::CountryHighlights(JsonView jsonValue)
{
  *this = jsonValue;
}

CountryHighlights& CountryHighlights::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    Aws::Utils::Array<JsonView> codeJsonList = jsonValue.GetArray("Code");
    for(unsigned codeIndex = 0; codeIndex < codeJsonList.GetLength(); ++codeIndex)
    {
      m_code.push_back(codeJsonList[codeIndex].AsObject());
    }
    m_codeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    Aws::Utils::Array<JsonView> nameJsonList = jsonValue.GetArray("Name");
    for(unsigned nameIndex = 0; nameIndex < nameJsonList.GetLength(); ++nameIndex)
    {
      m_name.push_back(nameJsonList[nameIndex].AsObject());
    }
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue CountryHighlights::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> codeJsonList(m_code.size());
   for(unsigned codeIndex = 0; codeIndex < codeJsonList.GetLength(); ++codeIndex)
   {
     codeJsonList[codeIndex].AsObject(m_code[codeIndex].Jsonize());
   }
   payload.WithArray("Code", std::move(codeJsonList));

  }

  if(m_nameHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nameJsonList(m_name.size());
   for(unsigned nameIndex = 0; nameIndex < nameJsonList.GetLength(); ++nameIndex)
   {
     nameJsonList[nameIndex].AsObject(m_name[nameIndex].Jsonize());
   }
   payload.WithArray("Name", std::move(nameJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
