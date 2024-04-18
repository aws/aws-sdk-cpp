/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/LocalIpDetails.h>
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

LocalIpDetails::LocalIpDetails() : 
    m_ipAddressV4HasBeenSet(false),
    m_ipAddressV6HasBeenSet(false)
{
}

LocalIpDetails::LocalIpDetails(JsonView jsonValue) : 
    m_ipAddressV4HasBeenSet(false),
    m_ipAddressV6HasBeenSet(false)
{
  *this = jsonValue;
}

LocalIpDetails& LocalIpDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ipAddressV4"))
  {
    m_ipAddressV4 = jsonValue.GetString("ipAddressV4");

    m_ipAddressV4HasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipAddressV6"))
  {
    m_ipAddressV6 = jsonValue.GetString("ipAddressV6");

    m_ipAddressV6HasBeenSet = true;
  }

  return *this;
}

JsonValue LocalIpDetails::Jsonize() const
{
  JsonValue payload;

  if(m_ipAddressV4HasBeenSet)
  {
   payload.WithString("ipAddressV4", m_ipAddressV4);

  }

  if(m_ipAddressV6HasBeenSet)
  {
   payload.WithString("ipAddressV6", m_ipAddressV6);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
