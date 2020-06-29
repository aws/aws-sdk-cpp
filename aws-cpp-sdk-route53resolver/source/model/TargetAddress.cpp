/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/TargetAddress.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

TargetAddress::TargetAddress() : 
    m_ipHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false)
{
}

TargetAddress::TargetAddress(JsonView jsonValue) : 
    m_ipHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false)
{
  *this = jsonValue;
}

TargetAddress& TargetAddress::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Ip"))
  {
    m_ip = jsonValue.GetString("Ip");

    m_ipHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  return *this;
}

JsonValue TargetAddress::Jsonize() const
{
  JsonValue payload;

  if(m_ipHasBeenSet)
  {
   payload.WithString("Ip", m_ip);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
