/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/PrivateIpAddressDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

PrivateIpAddressDetails::PrivateIpAddressDetails() : 
    m_privateDnsNameHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false)
{
}

PrivateIpAddressDetails::PrivateIpAddressDetails(JsonView jsonValue) : 
    m_privateDnsNameHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false)
{
  *this = jsonValue;
}

PrivateIpAddressDetails& PrivateIpAddressDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("privateDnsName"))
  {
    m_privateDnsName = jsonValue.GetString("privateDnsName");

    m_privateDnsNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privateIpAddress"))
  {
    m_privateIpAddress = jsonValue.GetString("privateIpAddress");

    m_privateIpAddressHasBeenSet = true;
  }

  return *this;
}

JsonValue PrivateIpAddressDetails::Jsonize() const
{
  JsonValue payload;

  if(m_privateDnsNameHasBeenSet)
  {
   payload.WithString("privateDnsName", m_privateDnsName);

  }

  if(m_privateIpAddressHasBeenSet)
  {
   payload.WithString("privateIpAddress", m_privateIpAddress);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
