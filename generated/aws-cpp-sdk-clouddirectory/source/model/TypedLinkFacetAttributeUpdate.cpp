/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/TypedLinkFacetAttributeUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

TypedLinkFacetAttributeUpdate::TypedLinkFacetAttributeUpdate() : 
    m_attributeHasBeenSet(false),
    m_action(UpdateActionType::NOT_SET),
    m_actionHasBeenSet(false)
{
}

TypedLinkFacetAttributeUpdate::TypedLinkFacetAttributeUpdate(JsonView jsonValue) : 
    m_attributeHasBeenSet(false),
    m_action(UpdateActionType::NOT_SET),
    m_actionHasBeenSet(false)
{
  *this = jsonValue;
}

TypedLinkFacetAttributeUpdate& TypedLinkFacetAttributeUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attribute"))
  {
    m_attribute = jsonValue.GetObject("Attribute");

    m_attributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Action"))
  {
    m_action = UpdateActionTypeMapper::GetUpdateActionTypeForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  return *this;
}

JsonValue TypedLinkFacetAttributeUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_attributeHasBeenSet)
  {
   payload.WithObject("Attribute", m_attribute.Jsonize());

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", UpdateActionTypeMapper::GetNameForUpdateActionType(m_action));
  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
