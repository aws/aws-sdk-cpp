/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/LinkAttributeAction.h>
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

LinkAttributeAction::LinkAttributeAction() : 
    m_attributeActionType(UpdateActionType::NOT_SET),
    m_attributeActionTypeHasBeenSet(false),
    m_attributeUpdateValueHasBeenSet(false)
{
}

LinkAttributeAction::LinkAttributeAction(JsonView jsonValue) : 
    m_attributeActionType(UpdateActionType::NOT_SET),
    m_attributeActionTypeHasBeenSet(false),
    m_attributeUpdateValueHasBeenSet(false)
{
  *this = jsonValue;
}

LinkAttributeAction& LinkAttributeAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttributeActionType"))
  {
    m_attributeActionType = UpdateActionTypeMapper::GetUpdateActionTypeForName(jsonValue.GetString("AttributeActionType"));

    m_attributeActionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeUpdateValue"))
  {
    m_attributeUpdateValue = jsonValue.GetObject("AttributeUpdateValue");

    m_attributeUpdateValueHasBeenSet = true;
  }

  return *this;
}

JsonValue LinkAttributeAction::Jsonize() const
{
  JsonValue payload;

  if(m_attributeActionTypeHasBeenSet)
  {
   payload.WithString("AttributeActionType", UpdateActionTypeMapper::GetNameForUpdateActionType(m_attributeActionType));
  }

  if(m_attributeUpdateValueHasBeenSet)
  {
   payload.WithObject("AttributeUpdateValue", m_attributeUpdateValue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
