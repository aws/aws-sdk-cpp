/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/ResourceMetrics.h>
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

ResourceMetrics::ResourceMetrics() : 
    m_timestampHasBeenSet(false),
    m_p95MetricsHasBeenSet(false),
    m_capacityHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceType(DiscoveryResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false)
{
}

ResourceMetrics::ResourceMetrics(JsonView jsonValue) : 
    m_timestampHasBeenSet(false),
    m_p95MetricsHasBeenSet(false),
    m_capacityHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceType(DiscoveryResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceMetrics& ResourceMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("P95Metrics"))
  {
    m_p95Metrics = jsonValue.GetObject("P95Metrics");

    m_p95MetricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Capacity"))
  {
    m_capacity = jsonValue.GetObject("Capacity");

    m_capacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = DiscoveryResourceTypeMapper::GetDiscoveryResourceTypeForName(jsonValue.GetString("ResourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("Timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_p95MetricsHasBeenSet)
  {
   payload.WithObject("P95Metrics", m_p95Metrics.Jsonize());

  }

  if(m_capacityHasBeenSet)
  {
   payload.WithObject("Capacity", m_capacity.Jsonize());

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", DiscoveryResourceTypeMapper::GetNameForDiscoveryResourceType(m_resourceType));
  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
