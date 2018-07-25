/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
