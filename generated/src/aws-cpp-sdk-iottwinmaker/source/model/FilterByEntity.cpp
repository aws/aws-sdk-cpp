/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/FilterByEntity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

FilterByEntity::FilterByEntity() : 
    m_entityIdHasBeenSet(false)
{
}

FilterByEntity::FilterByEntity(JsonView jsonValue) : 
    m_entityIdHasBeenSet(false)
{
  *this = jsonValue;
}

FilterByEntity& FilterByEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entityId"))
  {
    m_entityId = jsonValue.GetString("entityId");

    m_entityIdHasBeenSet = true;
  }

  return *this;
}

JsonValue FilterByEntity::Jsonize() const
{
  JsonValue payload;

  if(m_entityIdHasBeenSet)
  {
   payload.WithString("entityId", m_entityId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
