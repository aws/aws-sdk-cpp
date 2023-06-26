/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/PathFormat.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

PathFormat::PathFormat() : 
    m_objectPrefixesHasBeenSet(false)
{
}

PathFormat::PathFormat(JsonView jsonValue) : 
    m_objectPrefixesHasBeenSet(false)
{
  *this = jsonValue;
}

PathFormat& PathFormat::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("objectPrefixes"))
  {
    Aws::Utils::Array<JsonView> objectPrefixesJsonList = jsonValue.GetArray("objectPrefixes");
    for(unsigned objectPrefixesIndex = 0; objectPrefixesIndex < objectPrefixesJsonList.GetLength(); ++objectPrefixesIndex)
    {
      m_objectPrefixes.push_back(objectPrefixesJsonList[objectPrefixesIndex].AsString());
    }
    m_objectPrefixesHasBeenSet = true;
  }

  return *this;
}

JsonValue PathFormat::Jsonize() const
{
  JsonValue payload;

  if(m_objectPrefixesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> objectPrefixesJsonList(m_objectPrefixes.size());
   for(unsigned objectPrefixesIndex = 0; objectPrefixesIndex < objectPrefixesJsonList.GetLength(); ++objectPrefixesIndex)
   {
     objectPrefixesJsonList[objectPrefixesIndex].AsString(m_objectPrefixes[objectPrefixesIndex]);
   }
   payload.WithArray("objectPrefixes", std::move(objectPrefixesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
