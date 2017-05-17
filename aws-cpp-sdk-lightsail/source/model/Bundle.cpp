/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/lightsail/model/Bundle.h>
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

Bundle::Bundle() : 
    m_price(0.0),
    m_priceHasBeenSet(false),
    m_cpuCount(0),
    m_cpuCountHasBeenSet(false),
    m_diskSizeInGb(0),
    m_diskSizeInGbHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_isActive(false),
    m_isActiveHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_power(0),
    m_powerHasBeenSet(false),
    m_ramSizeInGb(0.0),
    m_ramSizeInGbHasBeenSet(false),
    m_transferPerMonthInGb(0),
    m_transferPerMonthInGbHasBeenSet(false)
{
}

Bundle::Bundle(const JsonValue& jsonValue) : 
    m_price(0.0),
    m_priceHasBeenSet(false),
    m_cpuCount(0),
    m_cpuCountHasBeenSet(false),
    m_diskSizeInGb(0),
    m_diskSizeInGbHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_isActive(false),
    m_isActiveHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_power(0),
    m_powerHasBeenSet(false),
    m_ramSizeInGb(0.0),
    m_ramSizeInGbHasBeenSet(false),
    m_transferPerMonthInGb(0),
    m_transferPerMonthInGbHasBeenSet(false)
{
  *this = jsonValue;
}

Bundle& Bundle::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("price"))
  {
    m_price = jsonValue.GetDouble("price");

    m_priceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cpuCount"))
  {
    m_cpuCount = jsonValue.GetInteger("cpuCount");

    m_cpuCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("diskSizeInGb"))
  {
    m_diskSizeInGb = jsonValue.GetInteger("diskSizeInGb");

    m_diskSizeInGbHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bundleId"))
  {
    m_bundleId = jsonValue.GetString("bundleId");

    m_bundleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isActive"))
  {
    m_isActive = jsonValue.GetBool("isActive");

    m_isActiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("power"))
  {
    m_power = jsonValue.GetInteger("power");

    m_powerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ramSizeInGb"))
  {
    m_ramSizeInGb = jsonValue.GetDouble("ramSizeInGb");

    m_ramSizeInGbHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transferPerMonthInGb"))
  {
    m_transferPerMonthInGb = jsonValue.GetInteger("transferPerMonthInGb");

    m_transferPerMonthInGbHasBeenSet = true;
  }

  return *this;
}

JsonValue Bundle::Jsonize() const
{
  JsonValue payload;

  if(m_priceHasBeenSet)
  {
   payload.WithDouble("price", m_price);

  }

  if(m_cpuCountHasBeenSet)
  {
   payload.WithInteger("cpuCount", m_cpuCount);

  }

  if(m_diskSizeInGbHasBeenSet)
  {
   payload.WithInteger("diskSizeInGb", m_diskSizeInGb);

  }

  if(m_bundleIdHasBeenSet)
  {
   payload.WithString("bundleId", m_bundleId);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_isActiveHasBeenSet)
  {
   payload.WithBool("isActive", m_isActive);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_powerHasBeenSet)
  {
   payload.WithInteger("power", m_power);

  }

  if(m_ramSizeInGbHasBeenSet)
  {
   payload.WithDouble("ramSizeInGb", m_ramSizeInGb);

  }

  if(m_transferPerMonthInGbHasBeenSet)
  {
   payload.WithInteger("transferPerMonthInGb", m_transferPerMonthInGb);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws