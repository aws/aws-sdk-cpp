/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/PathToObjectIdentifiers.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

PathToObjectIdentifiers::PathToObjectIdentifiers() : 
    m_pathHasBeenSet(false),
    m_objectIdentifiersHasBeenSet(false)
{
}

PathToObjectIdentifiers::PathToObjectIdentifiers(JsonView jsonValue) : 
    m_pathHasBeenSet(false),
    m_objectIdentifiersHasBeenSet(false)
{
  *this = jsonValue;
}

PathToObjectIdentifiers& PathToObjectIdentifiers::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectIdentifiers"))
  {
    Aws::Utils::Array<JsonView> objectIdentifiersJsonList = jsonValue.GetArray("ObjectIdentifiers");
    for(unsigned objectIdentifiersIndex = 0; objectIdentifiersIndex < objectIdentifiersJsonList.GetLength(); ++objectIdentifiersIndex)
    {
      m_objectIdentifiers.push_back(objectIdentifiersJsonList[objectIdentifiersIndex].AsString());
    }
    m_objectIdentifiersHasBeenSet = true;
  }

  return *this;
}

JsonValue PathToObjectIdentifiers::Jsonize() const
{
  JsonValue payload;

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_objectIdentifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> objectIdentifiersJsonList(m_objectIdentifiers.size());
   for(unsigned objectIdentifiersIndex = 0; objectIdentifiersIndex < objectIdentifiersJsonList.GetLength(); ++objectIdentifiersIndex)
   {
     objectIdentifiersJsonList[objectIdentifiersIndex].AsString(m_objectIdentifiers[objectIdentifiersIndex]);
   }
   payload.WithArray("ObjectIdentifiers", std::move(objectIdentifiersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
