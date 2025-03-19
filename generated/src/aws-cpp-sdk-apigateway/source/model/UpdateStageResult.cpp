/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/UpdateStageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateStageResult::UpdateStageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateStageResult& UpdateStageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("deploymentId"))
  {
    m_deploymentId = jsonValue.GetString("deploymentId");
    m_deploymentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clientCertificateId"))
  {
    m_clientCertificateId = jsonValue.GetString("clientCertificateId");
    m_clientCertificateIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stageName"))
  {
    m_stageName = jsonValue.GetString("stageName");
    m_stageNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cacheClusterEnabled"))
  {
    m_cacheClusterEnabled = jsonValue.GetBool("cacheClusterEnabled");
    m_cacheClusterEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cacheClusterSize"))
  {
    m_cacheClusterSize = CacheClusterSizeMapper::GetCacheClusterSizeForName(jsonValue.GetString("cacheClusterSize"));
    m_cacheClusterSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cacheClusterStatus"))
  {
    m_cacheClusterStatus = CacheClusterStatusMapper::GetCacheClusterStatusForName(jsonValue.GetString("cacheClusterStatus"));
    m_cacheClusterStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("methodSettings"))
  {
    Aws::Map<Aws::String, JsonView> methodSettingsJsonMap = jsonValue.GetObject("methodSettings").GetAllObjects();
    for(auto& methodSettingsItem : methodSettingsJsonMap)
    {
      m_methodSettings[methodSettingsItem.first] = methodSettingsItem.second.AsObject();
    }
    m_methodSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("variables"))
  {
    Aws::Map<Aws::String, JsonView> variablesJsonMap = jsonValue.GetObject("variables").GetAllObjects();
    for(auto& variablesItem : variablesJsonMap)
    {
      m_variables[variablesItem.first] = variablesItem.second.AsString();
    }
    m_variablesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("documentationVersion"))
  {
    m_documentationVersion = jsonValue.GetString("documentationVersion");
    m_documentationVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accessLogSettings"))
  {
    m_accessLogSettings = jsonValue.GetObject("accessLogSettings");
    m_accessLogSettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("canarySettings"))
  {
    m_canarySettings = jsonValue.GetObject("canarySettings");
    m_canarySettingsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tracingEnabled"))
  {
    m_tracingEnabled = jsonValue.GetBool("tracingEnabled");
    m_tracingEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("webAclArn"))
  {
    m_webAclArn = jsonValue.GetString("webAclArn");
    m_webAclArnHasBeenSet = true;
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
  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");
    m_createdDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetDouble("lastUpdatedDate");
    m_lastUpdatedDateHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
