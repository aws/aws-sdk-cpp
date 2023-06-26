/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/AssociatedClientDevice.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

AssociatedClientDevice::AssociatedClientDevice() : 
    m_thingNameHasBeenSet(false),
    m_associationTimestampHasBeenSet(false)
{
}

AssociatedClientDevice::AssociatedClientDevice(JsonView jsonValue) : 
    m_thingNameHasBeenSet(false),
    m_associationTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

AssociatedClientDevice& AssociatedClientDevice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("thingName"))
  {
    m_thingName = jsonValue.GetString("thingName");

    m_thingNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associationTimestamp"))
  {
    m_associationTimestamp = jsonValue.GetDouble("associationTimestamp");

    m_associationTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociatedClientDevice::Jsonize() const
{
  JsonValue payload;

  if(m_thingNameHasBeenSet)
  {
   payload.WithString("thingName", m_thingName);

  }

  if(m_associationTimestampHasBeenSet)
  {
   payload.WithDouble("associationTimestamp", m_associationTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
