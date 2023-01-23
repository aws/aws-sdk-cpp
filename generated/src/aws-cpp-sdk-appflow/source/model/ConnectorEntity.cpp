/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ConnectorEntity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

ConnectorEntity::ConnectorEntity() : 
    m_nameHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_hasNestedEntities(false),
    m_hasNestedEntitiesHasBeenSet(false)
{
}

ConnectorEntity::ConnectorEntity(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_hasNestedEntities(false),
    m_hasNestedEntitiesHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectorEntity& ConnectorEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("label"))
  {
    m_label = jsonValue.GetString("label");

    m_labelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hasNestedEntities"))
  {
    m_hasNestedEntities = jsonValue.GetBool("hasNestedEntities");

    m_hasNestedEntitiesHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectorEntity::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("label", m_label);

  }

  if(m_hasNestedEntitiesHasBeenSet)
  {
   payload.WithBool("hasNestedEntities", m_hasNestedEntities);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
