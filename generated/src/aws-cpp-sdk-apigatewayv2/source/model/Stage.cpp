/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/Stage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

Stage::Stage() : 
    m_accessLogSettingsHasBeenSet(false),
    m_apiGatewayManaged(false),
    m_apiGatewayManagedHasBeenSet(false),
    m_autoDeploy(false),
    m_autoDeployHasBeenSet(false),
    m_clientCertificateIdHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_defaultRouteSettingsHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lastDeploymentStatusMessageHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false),
    m_routeSettingsHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_stageVariablesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Stage::Stage(JsonView jsonValue) : 
    m_accessLogSettingsHasBeenSet(false),
    m_apiGatewayManaged(false),
    m_apiGatewayManagedHasBeenSet(false),
    m_autoDeploy(false),
    m_autoDeployHasBeenSet(false),
    m_clientCertificateIdHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_defaultRouteSettingsHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_lastDeploymentStatusMessageHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false),
    m_routeSettingsHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_stageVariablesHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Stage& Stage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessLogSettings"))
  {
    m_accessLogSettings = jsonValue.GetObject("accessLogSettings");

    m_accessLogSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiGatewayManaged"))
  {
    m_apiGatewayManaged = jsonValue.GetBool("apiGatewayManaged");

    m_apiGatewayManagedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoDeploy"))
  {
    m_autoDeploy = jsonValue.GetBool("autoDeploy");

    m_autoDeployHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientCertificateId"))
  {
    m_clientCertificateId = jsonValue.GetString("clientCertificateId");

    m_clientCertificateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetString("createdDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultRouteSettings"))
  {
    m_defaultRouteSettings = jsonValue.GetObject("defaultRouteSettings");

    m_defaultRouteSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentId"))
  {
    m_deploymentId = jsonValue.GetString("deploymentId");

    m_deploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastDeploymentStatusMessage"))
  {
    m_lastDeploymentStatusMessage = jsonValue.GetString("lastDeploymentStatusMessage");

    m_lastDeploymentStatusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetString("lastUpdatedDate");

    m_lastUpdatedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("routeSettings"))
  {
    Aws::Map<Aws::String, JsonView> routeSettingsJsonMap = jsonValue.GetObject("routeSettings").GetAllObjects();
    for(auto& routeSettingsItem : routeSettingsJsonMap)
    {
      m_routeSettings[routeSettingsItem.first] = routeSettingsItem.second.AsObject();
    }
    m_routeSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stageName"))
  {
    m_stageName = jsonValue.GetString("stageName");

    m_stageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stageVariables"))
  {
    Aws::Map<Aws::String, JsonView> stageVariablesJsonMap = jsonValue.GetObject("stageVariables").GetAllObjects();
    for(auto& stageVariablesItem : stageVariablesJsonMap)
    {
      m_stageVariables[stageVariablesItem.first] = stageVariablesItem.second.AsString();
    }
    m_stageVariablesHasBeenSet = true;
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

JsonValue Stage::Jsonize() const
{
  JsonValue payload;

  if(m_accessLogSettingsHasBeenSet)
  {
   payload.WithObject("accessLogSettings", m_accessLogSettings.Jsonize());

  }

  if(m_apiGatewayManagedHasBeenSet)
  {
   payload.WithBool("apiGatewayManaged", m_apiGatewayManaged);

  }

  if(m_autoDeployHasBeenSet)
  {
   payload.WithBool("autoDeploy", m_autoDeploy);

  }

  if(m_clientCertificateIdHasBeenSet)
  {
   payload.WithString("clientCertificateId", m_clientCertificateId);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithString("createdDate", m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_defaultRouteSettingsHasBeenSet)
  {
   payload.WithObject("defaultRouteSettings", m_defaultRouteSettings.Jsonize());

  }

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_lastDeploymentStatusMessageHasBeenSet)
  {
   payload.WithString("lastDeploymentStatusMessage", m_lastDeploymentStatusMessage);

  }

  if(m_lastUpdatedDateHasBeenSet)
  {
   payload.WithString("lastUpdatedDate", m_lastUpdatedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_routeSettingsHasBeenSet)
  {
   JsonValue routeSettingsJsonMap;
   for(auto& routeSettingsItem : m_routeSettings)
   {
     routeSettingsJsonMap.WithObject(routeSettingsItem.first, routeSettingsItem.second.Jsonize());
   }
   payload.WithObject("routeSettings", std::move(routeSettingsJsonMap));

  }

  if(m_stageNameHasBeenSet)
  {
   payload.WithString("stageName", m_stageName);

  }

  if(m_stageVariablesHasBeenSet)
  {
   JsonValue stageVariablesJsonMap;
   for(auto& stageVariablesItem : m_stageVariables)
   {
     stageVariablesJsonMap.WithString(stageVariablesItem.first, stageVariablesItem.second);
   }
   payload.WithObject("stageVariables", std::move(stageVariablesJsonMap));

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
} // namespace ApiGatewayV2
} // namespace Aws
