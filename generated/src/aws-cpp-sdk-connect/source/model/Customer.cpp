/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Customer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

Customer::Customer(JsonView jsonValue)
{
  *this = jsonValue;
}

Customer& Customer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceInfo"))
  {
    m_deviceInfo = jsonValue.GetObject("DeviceInfo");
    m_deviceInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Capabilities"))
  {
    m_capabilities = jsonValue.GetObject("Capabilities");
    m_capabilitiesHasBeenSet = true;
  }
  return *this;
}

JsonValue Customer::Jsonize() const
{
  JsonValue payload;

  if(m_deviceInfoHasBeenSet)
  {
   payload.WithObject("DeviceInfo", m_deviceInfo.Jsonize());

  }

  if(m_capabilitiesHasBeenSet)
  {
   payload.WithObject("Capabilities", m_capabilities.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
