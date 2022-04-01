/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/UpdateStageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateStageResult::UpdateStageResult() : 
    m_apiGatewayManaged(false),
    m_autoDeploy(false)
{
}

UpdateStageResult::UpdateStageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_apiGatewayManaged(false),
    m_autoDeploy(false)
{
  *this = result;
}

UpdateStageResult& UpdateStageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("accessLogSettings"))
  {
    m_accessLogSettings = jsonValue.GetObject("accessLogSettings");

  }

  if(jsonValue.ValueExists("apiGatewayManaged"))
  {
    m_apiGatewayManaged = jsonValue.GetBool("apiGatewayManaged");

  }

  if(jsonValue.ValueExists("autoDeploy"))
  {
    m_autoDeploy = jsonValue.GetBool("autoDeploy");

  }

  if(jsonValue.ValueExists("clientCertificateId"))
  {
    m_clientCertificateId = jsonValue.GetString("clientCertificateId");

  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetString("createdDate");

  }

  if(jsonValue.ValueExists("defaultRouteSettings"))
  {
    m_defaultRouteSettings = jsonValue.GetObject("defaultRouteSettings");

  }

  if(jsonValue.ValueExists("deploymentId"))
  {
    m_deploymentId = jsonValue.GetString("deploymentId");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("lastDeploymentStatusMessage"))
  {
    m_lastDeploymentStatusMessage = jsonValue.GetString("lastDeploymentStatusMessage");

  }

  if(jsonValue.ValueExists("lastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetString("lastUpdatedDate");

  }

  if(jsonValue.ValueExists("routeSettings"))
  {
    Aws::Map<Aws::String, JsonView> routeSettingsJsonMap = jsonValue.GetObject("routeSettings").GetAllObjects();
    for(auto& routeSettingsItem : routeSettingsJsonMap)
    {
      m_routeSettings[routeSettingsItem.first] = routeSettingsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("stageName"))
  {
    m_stageName = jsonValue.GetString("stageName");

  }

  if(jsonValue.ValueExists("stageVariables"))
  {
    Aws::Map<Aws::String, JsonView> stageVariablesJsonMap = jsonValue.GetObject("stageVariables").GetAllObjects();
    for(auto& stageVariablesItem : stageVariablesJsonMap)
    {
      m_stageVariables[stageVariablesItem.first] = stageVariablesItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
