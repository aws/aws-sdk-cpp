/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetStageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetStageResult::GetStageResult() : 
    m_cacheClusterEnabled(false),
    m_cacheClusterSize(CacheClusterSize::NOT_SET),
    m_cacheClusterStatus(CacheClusterStatus::NOT_SET),
    m_tracingEnabled(false)
{
}

GetStageResult::GetStageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_cacheClusterEnabled(false),
    m_cacheClusterSize(CacheClusterSize::NOT_SET),
    m_cacheClusterStatus(CacheClusterStatus::NOT_SET),
    m_tracingEnabled(false)
{
  *this = result;
}

GetStageResult& GetStageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("deploymentId"))
  {
    m_deploymentId = jsonValue.GetString("deploymentId");

  }

  if(jsonValue.ValueExists("clientCertificateId"))
  {
    m_clientCertificateId = jsonValue.GetString("clientCertificateId");

  }

  if(jsonValue.ValueExists("stageName"))
  {
    m_stageName = jsonValue.GetString("stageName");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("cacheClusterEnabled"))
  {
    m_cacheClusterEnabled = jsonValue.GetBool("cacheClusterEnabled");

  }

  if(jsonValue.ValueExists("cacheClusterSize"))
  {
    m_cacheClusterSize = CacheClusterSizeMapper::GetCacheClusterSizeForName(jsonValue.GetString("cacheClusterSize"));

  }

  if(jsonValue.ValueExists("cacheClusterStatus"))
  {
    m_cacheClusterStatus = CacheClusterStatusMapper::GetCacheClusterStatusForName(jsonValue.GetString("cacheClusterStatus"));

  }

  if(jsonValue.ValueExists("methodSettings"))
  {
    Aws::Map<Aws::String, JsonView> methodSettingsJsonMap = jsonValue.GetObject("methodSettings").GetAllObjects();
    for(auto& methodSettingsItem : methodSettingsJsonMap)
    {
      m_methodSettings[methodSettingsItem.first] = methodSettingsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("variables"))
  {
    Aws::Map<Aws::String, JsonView> variablesJsonMap = jsonValue.GetObject("variables").GetAllObjects();
    for(auto& variablesItem : variablesJsonMap)
    {
      m_variables[variablesItem.first] = variablesItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("documentationVersion"))
  {
    m_documentationVersion = jsonValue.GetString("documentationVersion");

  }

  if(jsonValue.ValueExists("accessLogSettings"))
  {
    m_accessLogSettings = jsonValue.GetObject("accessLogSettings");

  }

  if(jsonValue.ValueExists("canarySettings"))
  {
    m_canarySettings = jsonValue.GetObject("canarySettings");

  }

  if(jsonValue.ValueExists("tracingEnabled"))
  {
    m_tracingEnabled = jsonValue.GetBool("tracingEnabled");

  }

  if(jsonValue.ValueExists("webAclArn"))
  {
    m_webAclArn = jsonValue.GetString("webAclArn");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");

  }

  if(jsonValue.ValueExists("lastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetDouble("lastUpdatedDate");

  }



  return *this;
}
