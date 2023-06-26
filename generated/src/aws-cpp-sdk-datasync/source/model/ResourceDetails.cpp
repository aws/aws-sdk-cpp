/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/ResourceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

ResourceDetails::ResourceDetails() : 
    m_netAppONTAPSVMsHasBeenSet(false),
    m_netAppONTAPVolumesHasBeenSet(false),
    m_netAppONTAPClustersHasBeenSet(false)
{
}

ResourceDetails::ResourceDetails(JsonView jsonValue) : 
    m_netAppONTAPSVMsHasBeenSet(false),
    m_netAppONTAPVolumesHasBeenSet(false),
    m_netAppONTAPClustersHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDetails& ResourceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NetAppONTAPSVMs"))
  {
    Aws::Utils::Array<JsonView> netAppONTAPSVMsJsonList = jsonValue.GetArray("NetAppONTAPSVMs");
    for(unsigned netAppONTAPSVMsIndex = 0; netAppONTAPSVMsIndex < netAppONTAPSVMsJsonList.GetLength(); ++netAppONTAPSVMsIndex)
    {
      m_netAppONTAPSVMs.push_back(netAppONTAPSVMsJsonList[netAppONTAPSVMsIndex].AsObject());
    }
    m_netAppONTAPSVMsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetAppONTAPVolumes"))
  {
    Aws::Utils::Array<JsonView> netAppONTAPVolumesJsonList = jsonValue.GetArray("NetAppONTAPVolumes");
    for(unsigned netAppONTAPVolumesIndex = 0; netAppONTAPVolumesIndex < netAppONTAPVolumesJsonList.GetLength(); ++netAppONTAPVolumesIndex)
    {
      m_netAppONTAPVolumes.push_back(netAppONTAPVolumesJsonList[netAppONTAPVolumesIndex].AsObject());
    }
    m_netAppONTAPVolumesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetAppONTAPClusters"))
  {
    Aws::Utils::Array<JsonView> netAppONTAPClustersJsonList = jsonValue.GetArray("NetAppONTAPClusters");
    for(unsigned netAppONTAPClustersIndex = 0; netAppONTAPClustersIndex < netAppONTAPClustersJsonList.GetLength(); ++netAppONTAPClustersIndex)
    {
      m_netAppONTAPClusters.push_back(netAppONTAPClustersJsonList[netAppONTAPClustersIndex].AsObject());
    }
    m_netAppONTAPClustersHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_netAppONTAPSVMsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> netAppONTAPSVMsJsonList(m_netAppONTAPSVMs.size());
   for(unsigned netAppONTAPSVMsIndex = 0; netAppONTAPSVMsIndex < netAppONTAPSVMsJsonList.GetLength(); ++netAppONTAPSVMsIndex)
   {
     netAppONTAPSVMsJsonList[netAppONTAPSVMsIndex].AsObject(m_netAppONTAPSVMs[netAppONTAPSVMsIndex].Jsonize());
   }
   payload.WithArray("NetAppONTAPSVMs", std::move(netAppONTAPSVMsJsonList));

  }

  if(m_netAppONTAPVolumesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> netAppONTAPVolumesJsonList(m_netAppONTAPVolumes.size());
   for(unsigned netAppONTAPVolumesIndex = 0; netAppONTAPVolumesIndex < netAppONTAPVolumesJsonList.GetLength(); ++netAppONTAPVolumesIndex)
   {
     netAppONTAPVolumesJsonList[netAppONTAPVolumesIndex].AsObject(m_netAppONTAPVolumes[netAppONTAPVolumesIndex].Jsonize());
   }
   payload.WithArray("NetAppONTAPVolumes", std::move(netAppONTAPVolumesJsonList));

  }

  if(m_netAppONTAPClustersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> netAppONTAPClustersJsonList(m_netAppONTAPClusters.size());
   for(unsigned netAppONTAPClustersIndex = 0; netAppONTAPClustersIndex < netAppONTAPClustersJsonList.GetLength(); ++netAppONTAPClustersIndex)
   {
     netAppONTAPClustersJsonList[netAppONTAPClustersIndex].AsObject(m_netAppONTAPClusters[netAppONTAPClustersIndex].Jsonize());
   }
   payload.WithArray("NetAppONTAPClusters", std::move(netAppONTAPClustersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
