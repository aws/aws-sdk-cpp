/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/NetworkResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

NetworkResource::NetworkResource() : 
    m_registeredGatewayArnHasBeenSet(false),
    m_coreNetworkIdHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_definitionTimestampHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

NetworkResource::NetworkResource(JsonView jsonValue) : 
    m_registeredGatewayArnHasBeenSet(false),
    m_coreNetworkIdHasBeenSet(false),
    m_awsRegionHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_definitionTimestampHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkResource& NetworkResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegisteredGatewayArn"))
  {
    m_registeredGatewayArn = jsonValue.GetString("RegisteredGatewayArn");

    m_registeredGatewayArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CoreNetworkId"))
  {
    m_coreNetworkId = jsonValue.GetString("CoreNetworkId");

    m_coreNetworkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsRegion"))
  {
    m_awsRegion = jsonValue.GetString("AwsRegion");

    m_awsRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Definition"))
  {
    m_definition = jsonValue.GetString("Definition");

    m_definitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefinitionTimestamp"))
  {
    m_definitionTimestamp = jsonValue.GetDouble("DefinitionTimestamp");

    m_definitionTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metadata"))
  {
    Aws::Map<Aws::String, JsonView> metadataJsonMap = jsonValue.GetObject("Metadata").GetAllObjects();
    for(auto& metadataItem : metadataJsonMap)
    {
      m_metadata[metadataItem.first] = metadataItem.second.AsString();
    }
    m_metadataHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkResource::Jsonize() const
{
  JsonValue payload;

  if(m_registeredGatewayArnHasBeenSet)
  {
   payload.WithString("RegisteredGatewayArn", m_registeredGatewayArn);

  }

  if(m_coreNetworkIdHasBeenSet)
  {
   payload.WithString("CoreNetworkId", m_coreNetworkId);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("AwsRegion", m_awsRegion);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_definitionHasBeenSet)
  {
   payload.WithString("Definition", m_definition);

  }

  if(m_definitionTimestampHasBeenSet)
  {
   payload.WithDouble("DefinitionTimestamp", m_definitionTimestamp.SecondsWithMSPrecision());
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_metadataHasBeenSet)
  {
   JsonValue metadataJsonMap;
   for(auto& metadataItem : m_metadata)
   {
     metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
   }
   payload.WithObject("Metadata", std::move(metadataJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
