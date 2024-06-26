﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksPodProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

EksPodProperties::EksPodProperties() : 
    m_serviceAccountNameHasBeenSet(false),
    m_hostNetwork(false),
    m_hostNetworkHasBeenSet(false),
    m_dnsPolicyHasBeenSet(false),
    m_imagePullSecretsHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_initContainersHasBeenSet(false),
    m_volumesHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_shareProcessNamespace(false),
    m_shareProcessNamespaceHasBeenSet(false)
{
}

EksPodProperties::EksPodProperties(JsonView jsonValue)
  : EksPodProperties()
{
  *this = jsonValue;
}

EksPodProperties& EksPodProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceAccountName"))
  {
    m_serviceAccountName = jsonValue.GetString("serviceAccountName");

    m_serviceAccountNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostNetwork"))
  {
    m_hostNetwork = jsonValue.GetBool("hostNetwork");

    m_hostNetworkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dnsPolicy"))
  {
    m_dnsPolicy = jsonValue.GetString("dnsPolicy");

    m_dnsPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imagePullSecrets"))
  {
    Aws::Utils::Array<JsonView> imagePullSecretsJsonList = jsonValue.GetArray("imagePullSecrets");
    for(unsigned imagePullSecretsIndex = 0; imagePullSecretsIndex < imagePullSecretsJsonList.GetLength(); ++imagePullSecretsIndex)
    {
      m_imagePullSecrets.push_back(imagePullSecretsJsonList[imagePullSecretsIndex].AsObject());
    }
    m_imagePullSecretsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containers"))
  {
    Aws::Utils::Array<JsonView> containersJsonList = jsonValue.GetArray("containers");
    for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
    {
      m_containers.push_back(containersJsonList[containersIndex].AsObject());
    }
    m_containersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("initContainers"))
  {
    Aws::Utils::Array<JsonView> initContainersJsonList = jsonValue.GetArray("initContainers");
    for(unsigned initContainersIndex = 0; initContainersIndex < initContainersJsonList.GetLength(); ++initContainersIndex)
    {
      m_initContainers.push_back(initContainersJsonList[initContainersIndex].AsObject());
    }
    m_initContainersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumes"))
  {
    Aws::Utils::Array<JsonView> volumesJsonList = jsonValue.GetArray("volumes");
    for(unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex)
    {
      m_volumes.push_back(volumesJsonList[volumesIndex].AsObject());
    }
    m_volumesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");

    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shareProcessNamespace"))
  {
    m_shareProcessNamespace = jsonValue.GetBool("shareProcessNamespace");

    m_shareProcessNamespaceHasBeenSet = true;
  }

  return *this;
}

JsonValue EksPodProperties::Jsonize() const
{
  JsonValue payload;

  if(m_serviceAccountNameHasBeenSet)
  {
   payload.WithString("serviceAccountName", m_serviceAccountName);

  }

  if(m_hostNetworkHasBeenSet)
  {
   payload.WithBool("hostNetwork", m_hostNetwork);

  }

  if(m_dnsPolicyHasBeenSet)
  {
   payload.WithString("dnsPolicy", m_dnsPolicy);

  }

  if(m_imagePullSecretsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> imagePullSecretsJsonList(m_imagePullSecrets.size());
   for(unsigned imagePullSecretsIndex = 0; imagePullSecretsIndex < imagePullSecretsJsonList.GetLength(); ++imagePullSecretsIndex)
   {
     imagePullSecretsJsonList[imagePullSecretsIndex].AsObject(m_imagePullSecrets[imagePullSecretsIndex].Jsonize());
   }
   payload.WithArray("imagePullSecrets", std::move(imagePullSecretsJsonList));

  }

  if(m_containersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containersJsonList(m_containers.size());
   for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
   {
     containersJsonList[containersIndex].AsObject(m_containers[containersIndex].Jsonize());
   }
   payload.WithArray("containers", std::move(containersJsonList));

  }

  if(m_initContainersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> initContainersJsonList(m_initContainers.size());
   for(unsigned initContainersIndex = 0; initContainersIndex < initContainersJsonList.GetLength(); ++initContainersIndex)
   {
     initContainersJsonList[initContainersIndex].AsObject(m_initContainers[initContainersIndex].Jsonize());
   }
   payload.WithArray("initContainers", std::move(initContainersJsonList));

  }

  if(m_volumesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> volumesJsonList(m_volumes.size());
   for(unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex)
   {
     volumesJsonList[volumesIndex].AsObject(m_volumes[volumesIndex].Jsonize());
   }
   payload.WithArray("volumes", std::move(volumesJsonList));

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithObject("metadata", m_metadata.Jsonize());

  }

  if(m_shareProcessNamespaceHasBeenSet)
  {
   payload.WithBool("shareProcessNamespace", m_shareProcessNamespace);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
