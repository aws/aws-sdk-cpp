/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/PositionConfigurationItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

PositionConfigurationItem::PositionConfigurationItem() : 
    m_resourceIdentifierHasBeenSet(false),
    m_resourceType(PositionResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_solversHasBeenSet(false),
    m_destinationHasBeenSet(false)
{
}

PositionConfigurationItem::PositionConfigurationItem(JsonView jsonValue) : 
    m_resourceIdentifierHasBeenSet(false),
    m_resourceType(PositionResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_solversHasBeenSet(false),
    m_destinationHasBeenSet(false)
{
  *this = jsonValue;
}

PositionConfigurationItem& PositionConfigurationItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceIdentifier"))
  {
    m_resourceIdentifier = jsonValue.GetString("ResourceIdentifier");

    m_resourceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = PositionResourceTypeMapper::GetPositionResourceTypeForName(jsonValue.GetString("ResourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Solvers"))
  {
    m_solvers = jsonValue.GetObject("Solvers");

    m_solversHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Destination"))
  {
    m_destination = jsonValue.GetString("Destination");

    m_destinationHasBeenSet = true;
  }

  return *this;
}

JsonValue PositionConfigurationItem::Jsonize() const
{
  JsonValue payload;

  if(m_resourceIdentifierHasBeenSet)
  {
   payload.WithString("ResourceIdentifier", m_resourceIdentifier);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", PositionResourceTypeMapper::GetNameForPositionResourceType(m_resourceType));
  }

  if(m_solversHasBeenSet)
  {
   payload.WithObject("Solvers", m_solvers.Jsonize());

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("Destination", m_destination);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
