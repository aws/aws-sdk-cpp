/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/ResourcePath.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

ResourcePath::ResourcePath() : 
    m_componentsHasBeenSet(false)
{
}

ResourcePath::ResourcePath(JsonView jsonValue) : 
    m_componentsHasBeenSet(false)
{
  *this = jsonValue;
}

ResourcePath& ResourcePath::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Components"))
  {
    Aws::Utils::Array<JsonView> componentsJsonList = jsonValue.GetArray("Components");
    for(unsigned componentsIndex = 0; componentsIndex < componentsJsonList.GetLength(); ++componentsIndex)
    {
      m_components.push_back(componentsJsonList[componentsIndex].AsObject());
    }
    m_componentsHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourcePath::Jsonize() const
{
  JsonValue payload;

  if(m_componentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> componentsJsonList(m_components.size());
   for(unsigned componentsIndex = 0; componentsIndex < componentsJsonList.GetLength(); ++componentsIndex)
   {
     componentsJsonList[componentsIndex].AsObject(m_components[componentsIndex].Jsonize());
   }
   payload.WithArray("Components", std::move(componentsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
