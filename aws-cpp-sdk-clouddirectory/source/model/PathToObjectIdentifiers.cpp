/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

PathToObjectIdentifiers::PathToObjectIdentifiers(const JsonValue& jsonValue) : 
    m_pathHasBeenSet(false),
    m_objectIdentifiersHasBeenSet(false)
{
  *this = jsonValue;
}

PathToObjectIdentifiers& PathToObjectIdentifiers::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectIdentifiers"))
  {
    Array<JsonValue> objectIdentifiersJsonList = jsonValue.GetArray("ObjectIdentifiers");
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
   Array<JsonValue> objectIdentifiersJsonList(m_objectIdentifiers.size());
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