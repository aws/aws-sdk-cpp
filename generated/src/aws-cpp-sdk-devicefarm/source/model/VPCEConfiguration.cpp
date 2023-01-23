/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/VPCEConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

VPCEConfiguration::VPCEConfiguration() : 
    m_arnHasBeenSet(false),
    m_vpceConfigurationNameHasBeenSet(false),
    m_vpceServiceNameHasBeenSet(false),
    m_serviceDnsNameHasBeenSet(false),
    m_vpceConfigurationDescriptionHasBeenSet(false)
{
}

VPCEConfiguration::VPCEConfiguration(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_vpceConfigurationNameHasBeenSet(false),
    m_vpceServiceNameHasBeenSet(false),
    m_serviceDnsNameHasBeenSet(false),
    m_vpceConfigurationDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

VPCEConfiguration& VPCEConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpceConfigurationName"))
  {
    m_vpceConfigurationName = jsonValue.GetString("vpceConfigurationName");

    m_vpceConfigurationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpceServiceName"))
  {
    m_vpceServiceName = jsonValue.GetString("vpceServiceName");

    m_vpceServiceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceDnsName"))
  {
    m_serviceDnsName = jsonValue.GetString("serviceDnsName");

    m_serviceDnsNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpceConfigurationDescription"))
  {
    m_vpceConfigurationDescription = jsonValue.GetString("vpceConfigurationDescription");

    m_vpceConfigurationDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue VPCEConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_vpceConfigurationNameHasBeenSet)
  {
   payload.WithString("vpceConfigurationName", m_vpceConfigurationName);

  }

  if(m_vpceServiceNameHasBeenSet)
  {
   payload.WithString("vpceServiceName", m_vpceServiceName);

  }

  if(m_serviceDnsNameHasBeenSet)
  {
   payload.WithString("serviceDnsName", m_serviceDnsName);

  }

  if(m_vpceConfigurationDescriptionHasBeenSet)
  {
   payload.WithString("vpceConfigurationDescription", m_vpceConfigurationDescription);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
