/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsOpenSearchServiceDomainClusterConfigDetails.h>
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

AwsOpenSearchServiceDomainClusterConfigDetails::AwsOpenSearchServiceDomainClusterConfigDetails() : 
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_warmEnabled(false),
    m_warmEnabledHasBeenSet(false),
    m_warmCount(0),
    m_warmCountHasBeenSet(false),
    m_dedicatedMasterEnabled(false),
    m_dedicatedMasterEnabledHasBeenSet(false),
    m_zoneAwarenessConfigHasBeenSet(false),
    m_dedicatedMasterCount(0),
    m_dedicatedMasterCountHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_warmTypeHasBeenSet(false),
    m_zoneAwarenessEnabled(false),
    m_zoneAwarenessEnabledHasBeenSet(false),
    m_dedicatedMasterTypeHasBeenSet(false)
{
}

AwsOpenSearchServiceDomainClusterConfigDetails::AwsOpenSearchServiceDomainClusterConfigDetails(JsonView jsonValue) : 
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_warmEnabled(false),
    m_warmEnabledHasBeenSet(false),
    m_warmCount(0),
    m_warmCountHasBeenSet(false),
    m_dedicatedMasterEnabled(false),
    m_dedicatedMasterEnabledHasBeenSet(false),
    m_zoneAwarenessConfigHasBeenSet(false),
    m_dedicatedMasterCount(0),
    m_dedicatedMasterCountHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_warmTypeHasBeenSet(false),
    m_zoneAwarenessEnabled(false),
    m_zoneAwarenessEnabledHasBeenSet(false),
    m_dedicatedMasterTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsOpenSearchServiceDomainClusterConfigDetails& AwsOpenSearchServiceDomainClusterConfigDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");

    m_instanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WarmEnabled"))
  {
    m_warmEnabled = jsonValue.GetBool("WarmEnabled");

    m_warmEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WarmCount"))
  {
    m_warmCount = jsonValue.GetInteger("WarmCount");

    m_warmCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DedicatedMasterEnabled"))
  {
    m_dedicatedMasterEnabled = jsonValue.GetBool("DedicatedMasterEnabled");

    m_dedicatedMasterEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ZoneAwarenessConfig"))
  {
    m_zoneAwarenessConfig = jsonValue.GetObject("ZoneAwarenessConfig");

    m_zoneAwarenessConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DedicatedMasterCount"))
  {
    m_dedicatedMasterCount = jsonValue.GetInteger("DedicatedMasterCount");

    m_dedicatedMasterCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WarmType"))
  {
    m_warmType = jsonValue.GetString("WarmType");

    m_warmTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ZoneAwarenessEnabled"))
  {
    m_zoneAwarenessEnabled = jsonValue.GetBool("ZoneAwarenessEnabled");

    m_zoneAwarenessEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DedicatedMasterType"))
  {
    m_dedicatedMasterType = jsonValue.GetString("DedicatedMasterType");

    m_dedicatedMasterTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsOpenSearchServiceDomainClusterConfigDetails::Jsonize() const
{
  JsonValue payload;

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  if(m_warmEnabledHasBeenSet)
  {
   payload.WithBool("WarmEnabled", m_warmEnabled);

  }

  if(m_warmCountHasBeenSet)
  {
   payload.WithInteger("WarmCount", m_warmCount);

  }

  if(m_dedicatedMasterEnabledHasBeenSet)
  {
   payload.WithBool("DedicatedMasterEnabled", m_dedicatedMasterEnabled);

  }

  if(m_zoneAwarenessConfigHasBeenSet)
  {
   payload.WithObject("ZoneAwarenessConfig", m_zoneAwarenessConfig.Jsonize());

  }

  if(m_dedicatedMasterCountHasBeenSet)
  {
   payload.WithInteger("DedicatedMasterCount", m_dedicatedMasterCount);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_warmTypeHasBeenSet)
  {
   payload.WithString("WarmType", m_warmType);

  }

  if(m_zoneAwarenessEnabledHasBeenSet)
  {
   payload.WithBool("ZoneAwarenessEnabled", m_zoneAwarenessEnabled);

  }

  if(m_dedicatedMasterTypeHasBeenSet)
  {
   payload.WithString("DedicatedMasterType", m_dedicatedMasterType);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
