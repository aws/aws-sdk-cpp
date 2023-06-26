/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ContainerServicePower.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

ContainerServicePower::ContainerServicePower() : 
    m_powerIdHasBeenSet(false),
    m_price(0.0),
    m_priceHasBeenSet(false),
    m_cpuCount(0.0),
    m_cpuCountHasBeenSet(false),
    m_ramSizeInGb(0.0),
    m_ramSizeInGbHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_isActive(false),
    m_isActiveHasBeenSet(false)
{
}

ContainerServicePower::ContainerServicePower(JsonView jsonValue) : 
    m_powerIdHasBeenSet(false),
    m_price(0.0),
    m_priceHasBeenSet(false),
    m_cpuCount(0.0),
    m_cpuCountHasBeenSet(false),
    m_ramSizeInGb(0.0),
    m_ramSizeInGbHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_isActive(false),
    m_isActiveHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerServicePower& ContainerServicePower::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("powerId"))
  {
    m_powerId = jsonValue.GetString("powerId");

    m_powerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("price"))
  {
    m_price = jsonValue.GetDouble("price");

    m_priceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cpuCount"))
  {
    m_cpuCount = jsonValue.GetDouble("cpuCount");

    m_cpuCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ramSizeInGb"))
  {
    m_ramSizeInGb = jsonValue.GetDouble("ramSizeInGb");

    m_ramSizeInGbHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isActive"))
  {
    m_isActive = jsonValue.GetBool("isActive");

    m_isActiveHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerServicePower::Jsonize() const
{
  JsonValue payload;

  if(m_powerIdHasBeenSet)
  {
   payload.WithString("powerId", m_powerId);

  }

  if(m_priceHasBeenSet)
  {
   payload.WithDouble("price", m_price);

  }

  if(m_cpuCountHasBeenSet)
  {
   payload.WithDouble("cpuCount", m_cpuCount);

  }

  if(m_ramSizeInGbHasBeenSet)
  {
   payload.WithDouble("ramSizeInGb", m_ramSizeInGb);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_isActiveHasBeenSet)
  {
   payload.WithBool("isActive", m_isActive);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
