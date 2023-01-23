/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/Stage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

Stage::Stage() : 
    m_deploymentIdHasBeenSet(false),
    m_clientCertificateIdHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_cacheClusterEnabled(false),
    m_cacheClusterEnabledHasBeenSet(false),
    m_cacheClusterSize(CacheClusterSize::NOT_SET),
    m_cacheClusterSizeHasBeenSet(false),
    m_cacheClusterStatus(CacheClusterStatus::NOT_SET),
    m_cacheClusterStatusHasBeenSet(false),
    m_methodSettingsHasBeenSet(false),
    m_variablesHasBeenSet(false),
    m_documentationVersionHasBeenSet(false),
    m_accessLogSettingsHasBeenSet(false),
    m_canarySettingsHasBeenSet(false),
    m_tracingEnabled(false),
    m_tracingEnabledHasBeenSet(false),
    m_webAclArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false)
{
}

Stage::Stage(JsonView jsonValue) : 
    m_deploymentIdHasBeenSet(false),
    m_clientCertificateIdHasBeenSet(false),
    m_stageNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_cacheClusterEnabled(false),
    m_cacheClusterEnabledHasBeenSet(false),
    m_cacheClusterSize(CacheClusterSize::NOT_SET),
    m_cacheClusterSizeHasBeenSet(false),
    m_cacheClusterStatus(CacheClusterStatus::NOT_SET),
    m_cacheClusterStatusHasBeenSet(false),
    m_methodSettingsHasBeenSet(false),
    m_variablesHasBeenSet(false),
    m_documentationVersionHasBeenSet(false),
    m_accessLogSettingsHasBeenSet(false),
    m_canarySettingsHasBeenSet(false),
    m_tracingEnabled(false),
    m_tracingEnabledHasBeenSet(false),
    m_webAclArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false)
{
  *this = jsonValue;
}

Stage& Stage::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue Stage::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

  }

  if(m_clientCertificateIdHasBeenSet)
  {
   payload.WithString("clientCertificateId", m_clientCertificateId);

  }

  if(m_stageNameHasBeenSet)
  {
   payload.WithString("stageName", m_stageName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_cacheClusterEnabledHasBeenSet)
  {
   payload.WithBool("cacheClusterEnabled", m_cacheClusterEnabled);

  }

  if(m_cacheClusterSizeHasBeenSet)
  {
   payload.WithString("cacheClusterSize", CacheClusterSizeMapper::GetNameForCacheClusterSize(m_cacheClusterSize));
  }

  if(m_cacheClusterStatusHasBeenSet)
  {
   payload.WithString("cacheClusterStatus", CacheClusterStatusMapper::GetNameForCacheClusterStatus(m_cacheClusterStatus));
  }

  if(m_methodSettingsHasBeenSet)
  {
   JsonValue methodSettingsJsonMap;
   for(auto& methodSettingsItem : m_methodSettings)
   {
     methodSettingsJsonMap.WithObject(methodSettingsItem.first, methodSettingsItem.second.Jsonize());
   }
   payload.WithObject("methodSettings", std::move(methodSettingsJsonMap));

  }

  if(m_variablesHasBeenSet)
  {
   JsonValue variablesJsonMap;
   for(auto& variablesItem : m_variables)
   {
     variablesJsonMap.WithString(variablesItem.first, variablesItem.second);
   }
   payload.WithObject("variables", std::move(variablesJsonMap));

  }

  if(m_documentationVersionHasBeenSet)
  {
   payload.WithString("documentationVersion", m_documentationVersion);

  }

  if(m_accessLogSettingsHasBeenSet)
  {
   payload.WithObject("accessLogSettings", m_accessLogSettings.Jsonize());

  }

  if(m_canarySettingsHasBeenSet)
  {
   payload.WithObject("canarySettings", m_canarySettings.Jsonize());

  }

  if(m_tracingEnabledHasBeenSet)
  {
   payload.WithBool("tracingEnabled", m_tracingEnabled);

  }

  if(m_webAclArnHasBeenSet)
  {
   payload.WithString("webAclArn", m_webAclArn);

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

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("createdDate", m_createdDate.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDate", m_lastUpdatedDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws
