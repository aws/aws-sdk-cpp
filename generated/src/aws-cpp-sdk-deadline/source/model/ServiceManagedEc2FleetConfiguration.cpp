/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/ServiceManagedEc2FleetConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

ServiceManagedEc2FleetConfiguration::ServiceManagedEc2FleetConfiguration() : 
    m_instanceCapabilitiesHasBeenSet(false),
    m_instanceMarketOptionsHasBeenSet(false)
{
}

ServiceManagedEc2FleetConfiguration::ServiceManagedEc2FleetConfiguration(JsonView jsonValue) : 
    m_instanceCapabilitiesHasBeenSet(false),
    m_instanceMarketOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceManagedEc2FleetConfiguration& ServiceManagedEc2FleetConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instanceCapabilities"))
  {
    m_instanceCapabilities = jsonValue.GetObject("instanceCapabilities");

    m_instanceCapabilitiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceMarketOptions"))
  {
    m_instanceMarketOptions = jsonValue.GetObject("instanceMarketOptions");

    m_instanceMarketOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceManagedEc2FleetConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_instanceCapabilitiesHasBeenSet)
  {
   payload.WithObject("instanceCapabilities", m_instanceCapabilities.Jsonize());

  }

  if(m_instanceMarketOptionsHasBeenSet)
  {
   payload.WithObject("instanceMarketOptions", m_instanceMarketOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
