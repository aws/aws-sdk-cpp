/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElasticsearchDomainElasticsearchClusterConfigDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsElasticsearchDomainElasticsearchClusterConfigDetails::AwsElasticsearchDomainElasticsearchClusterConfigDetails() : 
    m_dedicatedMasterCount(0),
    m_dedicatedMasterCountHasBeenSet(false),
    m_dedicatedMasterEnabled(false),
    m_dedicatedMasterEnabledHasBeenSet(false),
    m_dedicatedMasterTypeHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_zoneAwarenessConfigHasBeenSet(false),
    m_zoneAwarenessEnabled(false),
    m_zoneAwarenessEnabledHasBeenSet(false)
{
}

AwsElasticsearchDomainElasticsearchClusterConfigDetails::AwsElasticsearchDomainElasticsearchClusterConfigDetails(JsonView jsonValue) : 
    m_dedicatedMasterCount(0),
    m_dedicatedMasterCountHasBeenSet(false),
    m_dedicatedMasterEnabled(false),
    m_dedicatedMasterEnabledHasBeenSet(false),
    m_dedicatedMasterTypeHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_zoneAwarenessConfigHasBeenSet(false),
    m_zoneAwarenessEnabled(false),
    m_zoneAwarenessEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

AwsElasticsearchDomainElasticsearchClusterConfigDetails& AwsElasticsearchDomainElasticsearchClusterConfigDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DedicatedMasterCount"))
  {
    m_dedicatedMasterCount = jsonValue.GetInteger("DedicatedMasterCount");

    m_dedicatedMasterCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DedicatedMasterEnabled"))
  {
    m_dedicatedMasterEnabled = jsonValue.GetBool("DedicatedMasterEnabled");

    m_dedicatedMasterEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DedicatedMasterType"))
  {
    m_dedicatedMasterType = jsonValue.GetString("DedicatedMasterType");

    m_dedicatedMasterTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");

    m_instanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ZoneAwarenessConfig"))
  {
    m_zoneAwarenessConfig = jsonValue.GetObject("ZoneAwarenessConfig");

    m_zoneAwarenessConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ZoneAwarenessEnabled"))
  {
    m_zoneAwarenessEnabled = jsonValue.GetBool("ZoneAwarenessEnabled");

    m_zoneAwarenessEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsElasticsearchDomainElasticsearchClusterConfigDetails::Jsonize() const
{
  JsonValue payload;

  if(m_dedicatedMasterCountHasBeenSet)
  {
   payload.WithInteger("DedicatedMasterCount", m_dedicatedMasterCount);

  }

  if(m_dedicatedMasterEnabledHasBeenSet)
  {
   payload.WithBool("DedicatedMasterEnabled", m_dedicatedMasterEnabled);

  }

  if(m_dedicatedMasterTypeHasBeenSet)
  {
   payload.WithString("DedicatedMasterType", m_dedicatedMasterType);

  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_zoneAwarenessConfigHasBeenSet)
  {
   payload.WithObject("ZoneAwarenessConfig", m_zoneAwarenessConfig.Jsonize());

  }

  if(m_zoneAwarenessEnabledHasBeenSet)
  {
   payload.WithBool("ZoneAwarenessEnabled", m_zoneAwarenessEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
