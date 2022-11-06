/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/IndexingFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

IndexingFilter::IndexingFilter() : 
    m_namedShadowNamesHasBeenSet(false)
{
}

IndexingFilter::IndexingFilter(JsonView jsonValue) : 
    m_namedShadowNamesHasBeenSet(false)
{
  *this = jsonValue;
}

IndexingFilter& IndexingFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("namedShadowNames"))
  {
    Aws::Utils::Array<JsonView> namedShadowNamesJsonList = jsonValue.GetArray("namedShadowNames");
    for(unsigned namedShadowNamesIndex = 0; namedShadowNamesIndex < namedShadowNamesJsonList.GetLength(); ++namedShadowNamesIndex)
    {
      m_namedShadowNames.push_back(namedShadowNamesJsonList[namedShadowNamesIndex].AsString());
    }
    m_namedShadowNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue IndexingFilter::Jsonize() const
{
  JsonValue payload;

  if(m_namedShadowNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> namedShadowNamesJsonList(m_namedShadowNames.size());
   for(unsigned namedShadowNamesIndex = 0; namedShadowNamesIndex < namedShadowNamesJsonList.GetLength(); ++namedShadowNamesIndex)
   {
     namedShadowNamesJsonList[namedShadowNamesIndex].AsString(m_namedShadowNames[namedShadowNamesIndex]);
   }
   payload.WithArray("namedShadowNames", std::move(namedShadowNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
