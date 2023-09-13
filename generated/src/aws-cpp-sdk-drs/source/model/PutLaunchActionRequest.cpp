/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/PutLaunchActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutLaunchActionRequest::PutLaunchActionRequest() : 
    m_actionCodeHasBeenSet(false),
    m_actionIdHasBeenSet(false),
    m_actionVersionHasBeenSet(false),
    m_active(false),
    m_activeHasBeenSet(false),
    m_category(LaunchActionCategory::NOT_SET),
    m_categoryHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_optional(false),
    m_optionalHasBeenSet(false),
    m_order(0),
    m_orderHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

Aws::String PutLaunchActionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionCodeHasBeenSet)
  {
   payload.WithString("actionCode", m_actionCode);

  }

  if(m_actionIdHasBeenSet)
  {
   payload.WithString("actionId", m_actionId);

  }

  if(m_actionVersionHasBeenSet)
  {
   payload.WithString("actionVersion", m_actionVersion);

  }

  if(m_activeHasBeenSet)
  {
   payload.WithBool("active", m_active);

  }

  if(m_categoryHasBeenSet)
  {
   payload.WithString("category", LaunchActionCategoryMapper::GetNameForLaunchActionCategory(m_category));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_optionalHasBeenSet)
  {
   payload.WithBool("optional", m_optional);

  }

  if(m_orderHasBeenSet)
  {
   payload.WithInteger("order", m_order);

  }

  if(m_parametersHasBeenSet)
  {
   JsonValue parametersJsonMap;
   for(auto& parametersItem : m_parameters)
   {
     parametersJsonMap.WithObject(parametersItem.first, parametersItem.second.Jsonize());
   }
   payload.WithObject("parameters", std::move(parametersJsonMap));

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

  }

  return payload.View().WriteReadable();
}




