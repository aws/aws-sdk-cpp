/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/DetectedProfileObjectType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

DetectedProfileObjectType::DetectedProfileObjectType() : 
    m_sourceLastUpdatedTimestampFormatHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_keysHasBeenSet(false)
{
}

DetectedProfileObjectType::DetectedProfileObjectType(JsonView jsonValue) : 
    m_sourceLastUpdatedTimestampFormatHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_keysHasBeenSet(false)
{
  *this = jsonValue;
}

DetectedProfileObjectType& DetectedProfileObjectType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceLastUpdatedTimestampFormat"))
  {
    m_sourceLastUpdatedTimestampFormat = jsonValue.GetString("SourceLastUpdatedTimestampFormat");

    m_sourceLastUpdatedTimestampFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Fields"))
  {
    Aws::Map<Aws::String, JsonView> fieldsJsonMap = jsonValue.GetObject("Fields").GetAllObjects();
    for(auto& fieldsItem : fieldsJsonMap)
    {
      m_fields[fieldsItem.first] = fieldsItem.second.AsObject();
    }
    m_fieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Keys"))
  {
    Aws::Map<Aws::String, JsonView> keysJsonMap = jsonValue.GetObject("Keys").GetAllObjects();
    for(auto& keysItem : keysJsonMap)
    {
      Aws::Utils::Array<JsonView> objectTypeKeyListJsonList = keysItem.second.AsArray();
      Aws::Vector<ObjectTypeKey> objectTypeKeyListList;
      objectTypeKeyListList.reserve((size_t)objectTypeKeyListJsonList.GetLength());
      for(unsigned objectTypeKeyListIndex = 0; objectTypeKeyListIndex < objectTypeKeyListJsonList.GetLength(); ++objectTypeKeyListIndex)
      {
        objectTypeKeyListList.push_back(objectTypeKeyListJsonList[objectTypeKeyListIndex].AsObject());
      }
      m_keys[keysItem.first] = std::move(objectTypeKeyListList);
    }
    m_keysHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectedProfileObjectType::Jsonize() const
{
  JsonValue payload;

  if(m_sourceLastUpdatedTimestampFormatHasBeenSet)
  {
   payload.WithString("SourceLastUpdatedTimestampFormat", m_sourceLastUpdatedTimestampFormat);

  }

  if(m_fieldsHasBeenSet)
  {
   JsonValue fieldsJsonMap;
   for(auto& fieldsItem : m_fields)
   {
     fieldsJsonMap.WithObject(fieldsItem.first, fieldsItem.second.Jsonize());
   }
   payload.WithObject("Fields", std::move(fieldsJsonMap));

  }

  if(m_keysHasBeenSet)
  {
   JsonValue keysJsonMap;
   for(auto& keysItem : m_keys)
   {
     Aws::Utils::Array<JsonValue> objectTypeKeyListJsonList(keysItem.second.size());
     for(unsigned objectTypeKeyListIndex = 0; objectTypeKeyListIndex < objectTypeKeyListJsonList.GetLength(); ++objectTypeKeyListIndex)
     {
       objectTypeKeyListJsonList[objectTypeKeyListIndex].AsObject(keysItem.second[objectTypeKeyListIndex].Jsonize());
     }
     keysJsonMap.WithArray(keysItem.first, std::move(objectTypeKeyListJsonList));
   }
   payload.WithObject("Keys", std::move(keysJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
