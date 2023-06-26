/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-roborunner/model/VendorProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTRoboRunner
{
namespace Model
{

VendorProperties::VendorProperties() : 
    m_vendorWorkerIdHasBeenSet(false),
    m_vendorWorkerIpAddressHasBeenSet(false),
    m_vendorAdditionalTransientPropertiesHasBeenSet(false),
    m_vendorAdditionalFixedPropertiesHasBeenSet(false)
{
}

VendorProperties::VendorProperties(JsonView jsonValue) : 
    m_vendorWorkerIdHasBeenSet(false),
    m_vendorWorkerIpAddressHasBeenSet(false),
    m_vendorAdditionalTransientPropertiesHasBeenSet(false),
    m_vendorAdditionalFixedPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

VendorProperties& VendorProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vendorWorkerId"))
  {
    m_vendorWorkerId = jsonValue.GetString("vendorWorkerId");

    m_vendorWorkerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vendorWorkerIpAddress"))
  {
    m_vendorWorkerIpAddress = jsonValue.GetString("vendorWorkerIpAddress");

    m_vendorWorkerIpAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vendorAdditionalTransientProperties"))
  {
    m_vendorAdditionalTransientProperties = jsonValue.GetString("vendorAdditionalTransientProperties");

    m_vendorAdditionalTransientPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vendorAdditionalFixedProperties"))
  {
    m_vendorAdditionalFixedProperties = jsonValue.GetString("vendorAdditionalFixedProperties");

    m_vendorAdditionalFixedPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue VendorProperties::Jsonize() const
{
  JsonValue payload;

  if(m_vendorWorkerIdHasBeenSet)
  {
   payload.WithString("vendorWorkerId", m_vendorWorkerId);

  }

  if(m_vendorWorkerIpAddressHasBeenSet)
  {
   payload.WithString("vendorWorkerIpAddress", m_vendorWorkerIpAddress);

  }

  if(m_vendorAdditionalTransientPropertiesHasBeenSet)
  {
   payload.WithString("vendorAdditionalTransientProperties", m_vendorAdditionalTransientProperties);

  }

  if(m_vendorAdditionalFixedPropertiesHasBeenSet)
  {
   payload.WithString("vendorAdditionalFixedProperties", m_vendorAdditionalFixedProperties);

  }

  return payload;
}

} // namespace Model
} // namespace IoTRoboRunner
} // namespace Aws
