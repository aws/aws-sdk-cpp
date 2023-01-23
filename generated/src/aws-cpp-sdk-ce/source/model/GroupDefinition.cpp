/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/GroupDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

GroupDefinition::GroupDefinition() : 
    m_type(GroupDefinitionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_keyHasBeenSet(false)
{
}

GroupDefinition::GroupDefinition(JsonView jsonValue) : 
    m_type(GroupDefinitionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_keyHasBeenSet(false)
{
  *this = jsonValue;
}

GroupDefinition& GroupDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = GroupDefinitionTypeMapper::GetGroupDefinitionTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Key"))
  {
    m_key = jsonValue.GetString("Key");

    m_keyHasBeenSet = true;
  }

  return *this;
}

JsonValue GroupDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", GroupDefinitionTypeMapper::GetNameForGroupDefinitionType(m_type));
  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("Key", m_key);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
