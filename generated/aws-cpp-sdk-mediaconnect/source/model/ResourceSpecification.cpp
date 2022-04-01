/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/ResourceSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

ResourceSpecification::ResourceSpecification() : 
    m_reservedBitrate(0),
    m_reservedBitrateHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false)
{
}

ResourceSpecification::ResourceSpecification(JsonView jsonValue) : 
    m_reservedBitrate(0),
    m_reservedBitrateHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceSpecification& ResourceSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("reservedBitrate"))
  {
    m_reservedBitrate = jsonValue.GetInteger("reservedBitrate");

    m_reservedBitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_reservedBitrateHasBeenSet)
  {
   payload.WithInteger("reservedBitrate", m_reservedBitrate);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
