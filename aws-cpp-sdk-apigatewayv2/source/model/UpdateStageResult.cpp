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

UpdateStageResult::UpdateStageResult()
{
}

UpdateStageResult::UpdateStageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
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
