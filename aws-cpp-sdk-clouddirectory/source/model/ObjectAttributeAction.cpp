/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

ObjectAttributeAction::ObjectAttributeAction(const JsonValue& jsonValue) : 
    m_objectAttributeActionType(UpdateActionType::NOT_SET),
    m_objectAttributeActionTypeHasBeenSet(false),
    m_objectAttributeUpdateValueHasBeenSet(false)
{
  *this = jsonValue;
}

ObjectAttributeAction& ObjectAttributeAction::operator =(const JsonValue& jsonValue)
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