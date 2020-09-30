/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsApiGatewayV2StageDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsApiGatewayV2StageDetails::AwsApiGatewayV2StageDetails() : 
    m_createdDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultRouteSettingsHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false),
    m_routeSettingsHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_stageVariablesHasBeenSet(false),
    m_accessLogSettingsHasBeenSet(false),
    m_autoDeploy(false),
    m_autoDeployHasBeenSet(false),
    m_lastDeploymentStatusMessageHasBeenSet(false),
    m_apiGatewayManaged(false),
    m_apiGatewayManagedHasBeenSet(false)
{
}

AwsApiGatewayV2StageDetails::AwsApiGatewayV2StageDetails(JsonView jsonValue) : 
    m_createdDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultRouteSettingsHasBeenSet(false),
    m_deploymentIdHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false),
    m_routeSettingsHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_stageVariablesHasBeenSet(false),
    m_accessLogSettingsHasBeenSet(false),
    m_autoDeploy(false),
    m_autoDeployHasBeenSet(false),
    m_lastDeploymentStatusMessageHasBeenSet(false),
    m_apiGatewayManaged(false),
    m_apiGatewayManagedHasBeenSet(false)
{
  *this = jsonValue;
}

AwsApiGatewayV2StageDetails& AwsApiGatewayV2StageDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetString("CreatedDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultRouteSettings"))
  {
    m_defaultRouteSettings = jsonValue.GetObject("DefaultRouteSettings");

    m_defaultRouteSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentId"))
  {
    m_deploymentId = jsonValue.GetString("DeploymentId");

    m_deploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetString("LastUpdatedDate");

    m_lastUpdatedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RouteSettings"))
  {
    m_routeSettings = jsonValue.GetObject("RouteSettings");

    m_routeSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StageName"))
  {
    m_stageName = jsonValue.GetString("StageName");

    m_stageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StageVariables"))
  {
    Aws::Map<Aws::String, JsonView> stageVariablesJsonMap = jsonValue.GetObject("StageVariables").GetAllObjects();
    for(auto& stageVariablesItem : stageVariablesJsonMap)
    {
      m_stageVariables[stageVariablesItem.first] = stageVariablesItem.second.AsString();
    }
    m_stageVariablesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessLogSettings"))
  {
    m_accessLogSettings = jsonValue.GetObject("AccessLogSettings");

    m_accessLogSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoDeploy"))
  {
    m_autoDeploy = jsonValue.GetBool("AutoDeploy");

    m_autoDeployHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastDeploymentStatusMessage"))
  {
    m_lastDeploymentStatusMessage = jsonValue.GetString("LastDeploymentStatusMessage");

    m_lastDeploymentStatusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApiGatewayManaged"))
  {
    m_apiGatewayManaged = jsonValue.GetBool("ApiGatewayManaged");

    m_apiGatewayManagedHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsApiGatewayV2StageDetails::Jsonize() const
{
  JsonValue payload;

  if(m_createdDateHasBeenSet)
  {
   payload.WithString("CreatedDate", m_createdDate);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_defaultRouteSettingsHasBeenSet)
  {
   payload.WithObject("DefaultRouteSettings", m_defaultRouteSettings.Jsonize());

  }

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("DeploymentId", m_deploymentId);

  }

  if(m_lastUpdatedDateHasBeenSet)
  {
   payload.WithString("LastUpdatedDate", m_lastUpdatedDate);

  }

  if(m_routeSettingsHasBeenSet)
  {
   payload.WithObject("RouteSettings", m_routeSettings.Jsonize());

  }

  if(m_stageNameHasBeenSet)
  {
   payload.WithString("StageName", m_stageName);

  }

  if(m_stageVariablesHasBeenSet)
  {
   JsonValue stageVariablesJsonMap;
   for(auto& stageVariablesItem : m_stageVariables)
   {
     stageVariablesJsonMap.WithString(stageVariablesItem.first, stageVariablesItem.second);
   }
   payload.WithObject("StageVariables", std::move(stageVariablesJsonMap));

  }

  if(m_accessLogSettingsHasBeenSet)
  {
   payload.WithObject("AccessLogSettings", m_accessLogSettings.Jsonize());

  }

  if(m_autoDeployHasBeenSet)
  {
   payload.WithBool("AutoDeploy", m_autoDeploy);

  }

  if(m_lastDeploymentStatusMessageHasBeenSet)
  {
   payload.WithString("LastDeploymentStatusMessage", m_lastDeploymentStatusMessage);

  }

  if(m_apiGatewayManagedHasBeenSet)
  {
   payload.WithBool("ApiGatewayManaged", m_apiGatewayManaged);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
