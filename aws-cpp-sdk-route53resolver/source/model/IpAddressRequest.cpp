/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/IpAddressRequest.h>
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

IpAddressRequest::IpAddressRequest() : 
    m_subnetIdHasBeenSet(false),
    m_ipHasBeenSet(false)
{
}

IpAddressRequest::IpAddressRequest(JsonView jsonValue) : 
    m_subnetIdHasBeenSet(false),
    m_ipHasBeenSet(false)
{
  *this = jsonValue;
}

IpAddressRequest& IpAddressRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SubnetId"))
  {
    m_subnetId = jsonValue.GetString("SubnetId");

    m_subnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ip"))
  {
    m_ip = jsonValue.GetString("Ip");

    m_ipHasBeenSet = true;
  }

  return *this;
}

JsonValue IpAddressRequest::Jsonize() const
{
  JsonValue payload;

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_ipHasBeenSet)
  {
   payload.WithString("Ip", m_ip);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
