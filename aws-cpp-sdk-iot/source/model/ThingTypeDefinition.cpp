/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_thingTypeArnHasBeenSet(false),
    m_thingTypePropertiesHasBeenSet(false),
    m_thingTypeMetadataHasBeenSet(false)
{
}

ThingTypeDefinition::ThingTypeDefinition(JsonView jsonValue) : 
    m_thingTypeNameHasBeenSet(false),
    m_thingTypeArnHasBeenSet(false),
    m_thingTypePropertiesHasBeenSet(false),
    m_thingTypeMetadataHasBeenSet(false)
{
  *this = jsonValue;
}

ThingTypeDefinition& ThingTypeDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("thingTypeName"))
  {
    m_thingTypeName = jsonValue.GetString("thingTypeName");

    m_thingTypeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thingTypeArn"))
  {
    m_thingTypeArn = jsonValue.GetString("thingTypeArn");

    m_thingTypeArnHasBeenSet = true;
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

  if(m_thingTypeArnHasBeenSet)
  {
   payload.WithString("thingTypeArn", m_thingTypeArn);

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
