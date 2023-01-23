/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/Cluster.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

Cluster::Cluster() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_resourcesVpcConfigHasBeenSet(false),
    m_kubernetesNetworkConfigHasBeenSet(false),
    m_loggingHasBeenSet(false),
    m_identityHasBeenSet(false),
    m_status(ClusterStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_certificateAuthorityHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_encryptionConfigHasBeenSet(false),
    m_connectorConfigHasBeenSet(false),
    m_idHasBeenSet(false),
    m_healthHasBeenSet(false),
    m_outpostConfigHasBeenSet(false)
{
}

Cluster::Cluster(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_resourcesVpcConfigHasBeenSet(false),
    m_kubernetesNetworkConfigHasBeenSet(false),
    m_loggingHasBeenSet(false),
    m_identityHasBeenSet(false),
    m_status(ClusterStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_certificateAuthorityHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_encryptionConfigHasBeenSet(false),
    m_connectorConfigHasBeenSet(false),
    m_idHasBeenSet(false),
    m_healthHasBeenSet(false),
    m_outpostConfigHasBeenSet(false)
{
  *this = jsonValue;
}

Cluster& Cluster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourcesVpcConfig"))
  {
    m_resourcesVpcConfig = jsonValue.GetObject("resourcesVpcConfig");

    m_resourcesVpcConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kubernetesNetworkConfig"))
  {
    m_kubernetesNetworkConfig = jsonValue.GetObject("kubernetesNetworkConfig");

    m_kubernetesNetworkConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logging"))
  {
    m_logging = jsonValue.GetObject("logging");

    m_loggingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("identity"))
  {
    m_identity = jsonValue.GetObject("identity");

    m_identityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ClusterStatusMapper::GetClusterStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificateAuthority"))
  {
    m_certificateAuthority = jsonValue.GetObject("certificateAuthority");

    m_certificateAuthorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientRequestToken"))
  {
    m_clientRequestToken = jsonValue.GetString("clientRequestToken");

    m_clientRequestTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platformVersion"))
  {
    m_platformVersion = jsonValue.GetString("platformVersion");

    m_platformVersionHasBeenSet = true;
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

  if(jsonValue.ValueExists("encryptionConfig"))
  {
    Aws::Utils::Array<JsonView> encryptionConfigJsonList = jsonValue.GetArray("encryptionConfig");
    for(unsigned encryptionConfigIndex = 0; encryptionConfigIndex < encryptionConfigJsonList.GetLength(); ++encryptionConfigIndex)
    {
      m_encryptionConfig.push_back(encryptionConfigJsonList[encryptionConfigIndex].AsObject());
    }
    m_encryptionConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectorConfig"))
  {
    m_connectorConfig = jsonValue.GetObject("connectorConfig");

    m_connectorConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("health"))
  {
    m_health = jsonValue.GetObject("health");

    m_healthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outpostConfig"))
  {
    m_outpostConfig = jsonValue.GetObject("outpostConfig");

    m_outpostConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue Cluster::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithString("endpoint", m_endpoint);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_resourcesVpcConfigHasBeenSet)
  {
   payload.WithObject("resourcesVpcConfig", m_resourcesVpcConfig.Jsonize());

  }

  if(m_kubernetesNetworkConfigHasBeenSet)
  {
   payload.WithObject("kubernetesNetworkConfig", m_kubernetesNetworkConfig.Jsonize());

  }

  if(m_loggingHasBeenSet)
  {
   payload.WithObject("logging", m_logging.Jsonize());

  }

  if(m_identityHasBeenSet)
  {
   payload.WithObject("identity", m_identity.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ClusterStatusMapper::GetNameForClusterStatus(m_status));
  }

  if(m_certificateAuthorityHasBeenSet)
  {
   payload.WithObject("certificateAuthority", m_certificateAuthority.Jsonize());

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("clientRequestToken", m_clientRequestToken);

  }

  if(m_platformVersionHasBeenSet)
  {
   payload.WithString("platformVersion", m_platformVersion);

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

  if(m_encryptionConfigHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> encryptionConfigJsonList(m_encryptionConfig.size());
   for(unsigned encryptionConfigIndex = 0; encryptionConfigIndex < encryptionConfigJsonList.GetLength(); ++encryptionConfigIndex)
   {
     encryptionConfigJsonList[encryptionConfigIndex].AsObject(m_encryptionConfig[encryptionConfigIndex].Jsonize());
   }
   payload.WithArray("encryptionConfig", std::move(encryptionConfigJsonList));

  }

  if(m_connectorConfigHasBeenSet)
  {
   payload.WithObject("connectorConfig", m_connectorConfig.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_healthHasBeenSet)
  {
   payload.WithObject("health", m_health.Jsonize());

  }

  if(m_outpostConfigHasBeenSet)
  {
   payload.WithObject("outpostConfig", m_outpostConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
