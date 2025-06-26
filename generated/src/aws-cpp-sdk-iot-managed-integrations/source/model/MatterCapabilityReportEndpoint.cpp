/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/MatterCapabilityReportEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

MatterCapabilityReportEndpoint::MatterCapabilityReportEndpoint(JsonView jsonValue)
{
  *this = jsonValue;
}

MatterCapabilityReportEndpoint& MatterCapabilityReportEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deviceTypes"))
  {
    Aws::Utils::Array<JsonView> deviceTypesJsonList = jsonValue.GetArray("deviceTypes");
    for(unsigned deviceTypesIndex = 0; deviceTypesIndex < deviceTypesJsonList.GetLength(); ++deviceTypesIndex)
    {
      m_deviceTypes.push_back(deviceTypesJsonList[deviceTypesIndex].AsString());
    }
    m_deviceTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusters"))
  {
    Aws::Utils::Array<JsonView> clustersJsonList = jsonValue.GetArray("clusters");
    for(unsigned clustersIndex = 0; clustersIndex < clustersJsonList.GetLength(); ++clustersIndex)
    {
      m_clusters.push_back(clustersJsonList[clustersIndex].AsObject());
    }
    m_clustersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parts"))
  {
    Aws::Utils::Array<JsonView> partsJsonList = jsonValue.GetArray("parts");
    for(unsigned partsIndex = 0; partsIndex < partsJsonList.GetLength(); ++partsIndex)
    {
      m_parts.push_back(partsJsonList[partsIndex].AsString());
    }
    m_partsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("semanticTags"))
  {
    Aws::Utils::Array<JsonView> semanticTagsJsonList = jsonValue.GetArray("semanticTags");
    for(unsigned semanticTagsIndex = 0; semanticTagsIndex < semanticTagsJsonList.GetLength(); ++semanticTagsIndex)
    {
      m_semanticTags.push_back(semanticTagsJsonList[semanticTagsIndex].AsString());
    }
    m_semanticTagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clientClusters"))
  {
    Aws::Utils::Array<JsonView> clientClustersJsonList = jsonValue.GetArray("clientClusters");
    for(unsigned clientClustersIndex = 0; clientClustersIndex < clientClustersJsonList.GetLength(); ++clientClustersIndex)
    {
      m_clientClusters.push_back(clientClustersJsonList[clientClustersIndex].AsString());
    }
    m_clientClustersHasBeenSet = true;
  }
  return *this;
}

JsonValue MatterCapabilityReportEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_deviceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deviceTypesJsonList(m_deviceTypes.size());
   for(unsigned deviceTypesIndex = 0; deviceTypesIndex < deviceTypesJsonList.GetLength(); ++deviceTypesIndex)
   {
     deviceTypesJsonList[deviceTypesIndex].AsString(m_deviceTypes[deviceTypesIndex]);
   }
   payload.WithArray("deviceTypes", std::move(deviceTypesJsonList));

  }

  if(m_clustersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clustersJsonList(m_clusters.size());
   for(unsigned clustersIndex = 0; clustersIndex < clustersJsonList.GetLength(); ++clustersIndex)
   {
     clustersJsonList[clustersIndex].AsObject(m_clusters[clustersIndex].Jsonize());
   }
   payload.WithArray("clusters", std::move(clustersJsonList));

  }

  if(m_partsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partsJsonList(m_parts.size());
   for(unsigned partsIndex = 0; partsIndex < partsJsonList.GetLength(); ++partsIndex)
   {
     partsJsonList[partsIndex].AsString(m_parts[partsIndex]);
   }
   payload.WithArray("parts", std::move(partsJsonList));

  }

  if(m_semanticTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> semanticTagsJsonList(m_semanticTags.size());
   for(unsigned semanticTagsIndex = 0; semanticTagsIndex < semanticTagsJsonList.GetLength(); ++semanticTagsIndex)
   {
     semanticTagsJsonList[semanticTagsIndex].AsString(m_semanticTags[semanticTagsIndex]);
   }
   payload.WithArray("semanticTags", std::move(semanticTagsJsonList));

  }

  if(m_clientClustersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clientClustersJsonList(m_clientClusters.size());
   for(unsigned clientClustersIndex = 0; clientClustersIndex < clientClustersJsonList.GetLength(); ++clientClustersIndex)
   {
     clientClustersJsonList[clientClustersIndex].AsString(m_clientClusters[clientClustersIndex]);
   }
   payload.WithArray("clientClusters", std::move(clientClustersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
