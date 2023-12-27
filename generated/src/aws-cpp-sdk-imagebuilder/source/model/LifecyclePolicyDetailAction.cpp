/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LifecyclePolicyDetailAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

LifecyclePolicyDetailAction::LifecyclePolicyDetailAction() : 
    m_type(LifecyclePolicyDetailActionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_includeResourcesHasBeenSet(false)
{
}

LifecyclePolicyDetailAction::LifecyclePolicyDetailAction(JsonView jsonValue) : 
    m_type(LifecyclePolicyDetailActionType::NOT_SET),
    m_typeHasBeenSet(false),
    m_includeResourcesHasBeenSet(false)
{
  *this = jsonValue;
}

LifecyclePolicyDetailAction& LifecyclePolicyDetailAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = LifecyclePolicyDetailActionTypeMapper::GetLifecyclePolicyDetailActionTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includeResources"))
  {
    m_includeResources = jsonValue.GetObject("includeResources");

    m_includeResourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue LifecyclePolicyDetailAction::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", LifecyclePolicyDetailActionTypeMapper::GetNameForLifecyclePolicyDetailActionType(m_type));
  }

  if(m_includeResourcesHasBeenSet)
  {
   payload.WithObject("includeResources", m_includeResources.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
