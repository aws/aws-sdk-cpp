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
#include <aws/apigateway/model/CreateStageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateStageResult::CreateStageResult() : 
    m_cacheClusterEnabled(false),
    m_cacheClusterSize(CacheClusterSize::NOT_SET),
    m_cacheClusterStatus(CacheClusterStatus::NOT_SET)
{
}

CreateStageResult::CreateStageResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_cacheClusterEnabled(false),
    m_cacheClusterSize(CacheClusterSize::NOT_SET),
    m_cacheClusterStatus(CacheClusterStatus::NOT_SET)
{
  *this = result;
}

CreateStageResult& CreateStageResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
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
    Aws::Map<Aws::String, JsonValue> methodSettingsJsonMap = jsonValue.GetObject("methodSettings").GetAllObjects();
    for(auto& methodSettingsItem : methodSettingsJsonMap)
    {
      m_methodSettings[methodSettingsItem.first] = methodSettingsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("variables"))
  {
    Aws::Map<Aws::String, JsonValue> variablesJsonMap = jsonValue.GetObject("variables").GetAllObjects();
    for(auto& variablesItem : variablesJsonMap)
    {
      m_variables[variablesItem.first] = variablesItem.second.AsString();
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
