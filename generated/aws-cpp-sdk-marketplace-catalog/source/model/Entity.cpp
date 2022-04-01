/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/marketplace-catalog/model/Entity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MarketplaceCatalog
{
namespace Model
{

Entity::Entity() : 
    m_typeHasBeenSet(false),
    m_identifierHasBeenSet(false)
{
}

Entity::Entity(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_identifierHasBeenSet(false)
{
  *this = jsonValue;
}

Entity& Entity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Identifier"))
  {
    m_identifier = jsonValue.GetString("Identifier");

    m_identifierHasBeenSet = true;
  }

  return *this;
}

JsonValue Entity::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_identifierHasBeenSet)
  {
   payload.WithString("Identifier", m_identifier);

  }

  return payload;
}

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
