/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxDataviewActiveVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

KxDataviewActiveVersion::KxDataviewActiveVersion() : 
    m_changesetIdHasBeenSet(false),
    m_segmentConfigurationsHasBeenSet(false),
    m_attachedClustersHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_versionIdHasBeenSet(false)
{
}

KxDataviewActiveVersion::KxDataviewActiveVersion(JsonView jsonValue) : 
    m_changesetIdHasBeenSet(false),
    m_segmentConfigurationsHasBeenSet(false),
    m_attachedClustersHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_versionIdHasBeenSet(false)
{
  *this = jsonValue;
}

KxDataviewActiveVersion& KxDataviewActiveVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("changesetId"))
  {
    m_changesetId = jsonValue.GetString("changesetId");

    m_changesetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentConfigurations"))
  {
    Aws::Utils::Array<JsonView> segmentConfigurationsJsonList = jsonValue.GetArray("segmentConfigurations");
    for(unsigned segmentConfigurationsIndex = 0; segmentConfigurationsIndex < segmentConfigurationsJsonList.GetLength(); ++segmentConfigurationsIndex)
    {
      m_segmentConfigurations.push_back(segmentConfigurationsJsonList[segmentConfigurationsIndex].AsObject());
    }
    m_segmentConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attachedClusters"))
  {
    Aws::Utils::Array<JsonView> attachedClustersJsonList = jsonValue.GetArray("attachedClusters");
    for(unsigned attachedClustersIndex = 0; attachedClustersIndex < attachedClustersJsonList.GetLength(); ++attachedClustersIndex)
    {
      m_attachedClusters.push_back(attachedClustersJsonList[attachedClustersIndex].AsString());
    }
    m_attachedClustersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("createdTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versionId"))
  {
    m_versionId = jsonValue.GetString("versionId");

    m_versionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue KxDataviewActiveVersion::Jsonize() const
{
  JsonValue payload;

  if(m_changesetIdHasBeenSet)
  {
   payload.WithString("changesetId", m_changesetId);

  }

  if(m_segmentConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> segmentConfigurationsJsonList(m_segmentConfigurations.size());
   for(unsigned segmentConfigurationsIndex = 0; segmentConfigurationsIndex < segmentConfigurationsJsonList.GetLength(); ++segmentConfigurationsIndex)
   {
     segmentConfigurationsJsonList[segmentConfigurationsIndex].AsObject(m_segmentConfigurations[segmentConfigurationsIndex].Jsonize());
   }
   payload.WithArray("segmentConfigurations", std::move(segmentConfigurationsJsonList));

  }

  if(m_attachedClustersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attachedClustersJsonList(m_attachedClusters.size());
   for(unsigned attachedClustersIndex = 0; attachedClustersIndex < attachedClustersJsonList.GetLength(); ++attachedClustersIndex)
   {
     attachedClustersJsonList[attachedClustersIndex].AsString(m_attachedClusters[attachedClustersIndex]);
   }
   payload.WithArray("attachedClusters", std::move(attachedClustersJsonList));

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("createdTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("versionId", m_versionId);

  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
