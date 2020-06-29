/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/ObjectAttributeAction.h>
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

ObjectAttributeAction::ObjectAttributeAction() : 
    m_objectAttributeActionType(UpdateActionType::NOT_SET),
    m_objectAttributeActionTypeHasBeenSet(false),
    m_objectAttributeUpdateValueHasBeenSet(false)
{
}

ObjectAttributeAction::ObjectAttributeAction(JsonView jsonValue) : 
    m_objectAttributeActionType(UpdateActionType::NOT_SET),
    m_objectAttributeActionTypeHasBeenSet(false),
    m_objectAttributeUpdateValueHasBeenSet(false)
{
  *this = jsonValue;
}

ObjectAttributeAction& ObjectAttributeAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ObjectAttributeActionType"))
  {
    m_objectAttributeActionType = UpdateActionTypeMapper::GetUpdateActionTypeForName(jsonValue.GetString("ObjectAttributeActionType"));

    m_objectAttributeActionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectAttributeUpdateValue"))
  {
    m_objectAttributeUpdateValue = jsonValue.GetObject("ObjectAttributeUpdateValue");

    m_objectAttributeUpdateValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ObjectAttributeAction::Jsonize() const
{
  JsonValue payload;

  if(m_objectAttributeActionTypeHasBeenSet)
  {
   payload.WithString("ObjectAttributeActionType", UpdateActionTypeMapper::GetNameForUpdateActionType(m_objectAttributeActionType));
  }

  if(m_objectAttributeUpdateValueHasBeenSet)
  {
   payload.WithObject("ObjectAttributeUpdateValue", m_objectAttributeUpdateValue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
