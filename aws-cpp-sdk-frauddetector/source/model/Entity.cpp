/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/Entity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

Entity::Entity() : 
    m_entityTypeHasBeenSet(false),
    m_entityIdHasBeenSet(false)
{
}

Entity::Entity(JsonView jsonValue) : 
    m_entityTypeHasBeenSet(false),
    m_entityIdHasBeenSet(false)
{
  *this = jsonValue;
}

Entity& Entity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entityType"))
  {
    m_entityType = jsonValue.GetString("entityType");

    m_entityTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entityId"))
  {
    m_entityId = jsonValue.GetString("entityId");

    m_entityIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Entity::Jsonize() const
{
  JsonValue payload;

  if(m_entityTypeHasBeenSet)
  {
   payload.WithString("entityType", m_entityType);

  }

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("entityId", m_entityId);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
