/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/LaunchConfigurationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

LaunchConfigurationTemplate::LaunchConfigurationTemplate() : 
    m_arnHasBeenSet(false),
    m_launchConfigurationTemplateIDHasBeenSet(false),
    m_postLaunchActionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

LaunchConfigurationTemplate::LaunchConfigurationTemplate(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_launchConfigurationTemplateIDHasBeenSet(false),
    m_postLaunchActionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchConfigurationTemplate& LaunchConfigurationTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchConfigurationTemplateID"))
  {
    m_launchConfigurationTemplateID = jsonValue.GetString("launchConfigurationTemplateID");

    m_launchConfigurationTemplateIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("postLaunchActions"))
  {
    m_postLaunchActions = jsonValue.GetObject("postLaunchActions");

    m_postLaunchActionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchConfigurationTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_launchConfigurationTemplateIDHasBeenSet)
  {
   payload.WithString("launchConfigurationTemplateID", m_launchConfigurationTemplateID);

  }

  if(m_postLaunchActionsHasBeenSet)
  {
   payload.WithObject("postLaunchActions", m_postLaunchActions.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
