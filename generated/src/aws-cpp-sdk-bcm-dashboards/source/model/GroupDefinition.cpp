/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/GroupDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMDashboards
{
namespace Model
{

GroupDefinition::GroupDefinition(JsonView jsonValue)
{
  *this = jsonValue;
}

GroupDefinition& GroupDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = GroupDefinitionTypeMapper::GetGroupDefinitionTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue GroupDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", GroupDefinitionTypeMapper::GetNameForGroupDefinitionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
