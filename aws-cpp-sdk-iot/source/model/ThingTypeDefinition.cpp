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
#include <aws/iot/model/ThingTypeDefinition.h>
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

ThingTypeDefinition::ThingTypeDefinition() : 
    m_thingTypeNameHasBeenSet(false),
    m_thingTypePropertiesHasBeenSet(false),
    m_thingTypeMetadataHasBeenSet(false)
{
}

ThingTypeDefinition::ThingTypeDefinition(const JsonValue& jsonValue) : 
    m_thingTypeNameHasBeenSet(false),
    m_thingTypePropertiesHasBeenSet(false),
    m_thingTypeMetadataHasBeenSet(false)
{
  *this = jsonValue;
}

ThingTypeDefinition& ThingTypeDefinition::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("thingTypeName"))
  {
    m_thingTypeName = jsonValue.GetString("thingTypeName");

    m_thingTypeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thingTypeProperties"))
  {
    m_thingTypeProperties = jsonValue.GetObject("thingTypeProperties");

    m_thingTypePropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thingTypeMetadata"))
  {
    m_thingTypeMetadata = jsonValue.GetObject("thingTypeMetadata");

    m_thingTypeMetadataHasBeenSet = true;
  }

  return *this;
}

JsonValue ThingTypeDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_thingTypeNameHasBeenSet)
  {
   payload.WithString("thingTypeName", m_thingTypeName);

  }

  if(m_thingTypePropertiesHasBeenSet)
  {
   payload.WithObject("thingTypeProperties", m_thingTypeProperties.Jsonize());

  }

  if(m_thingTypeMetadataHasBeenSet)
  {
   payload.WithObject("thingTypeMetadata", m_thingTypeMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws