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
#include <aws/clouddirectory/model/FacetAttributeUpdate.h>
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

FacetAttributeUpdate::FacetAttributeUpdate() : 
    m_attributeHasBeenSet(false),
    m_action(UpdateActionType::NOT_SET),
    m_actionHasBeenSet(false)
{
}

FacetAttributeUpdate::FacetAttributeUpdate(const JsonValue& jsonValue) : 
    m_attributeHasBeenSet(false),
    m_action(UpdateActionType::NOT_SET),
    m_actionHasBeenSet(false)
{
  *this = jsonValue;
}

FacetAttributeUpdate& FacetAttributeUpdate::operator =(const JsonValue& jsonValue)
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

JsonValue FacetAttributeUpdate::Jsonize() const
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