/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ActionLocalIpDetails.h>
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

ActionLocalIpDetails::ActionLocalIpDetails() : 
    m_ipAddressV4HasBeenSet(false)
{
}

ActionLocalIpDetails::ActionLocalIpDetails(JsonView jsonValue) : 
    m_ipAddressV4HasBeenSet(false)
{
  *this = jsonValue;
}

ActionLocalIpDetails& ActionLocalIpDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IpAddressV4"))
  {
    m_ipAddressV4 = jsonValue.GetString("IpAddressV4");

    m_ipAddressV4HasBeenSet = true;
  }

  return *this;
}

JsonValue ActionLocalIpDetails::Jsonize() const
{
  JsonValue payload;

  if(m_ipAddressV4HasBeenSet)
  {
   payload.WithString("IpAddressV4", m_ipAddressV4);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
