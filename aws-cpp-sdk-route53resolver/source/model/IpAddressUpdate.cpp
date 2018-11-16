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

#include <aws/route53resolver/model/IpAddressUpdate.h>
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

IpAddressUpdate::IpAddressUpdate() : 
    m_ipIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_ipHasBeenSet(false)
{
}

IpAddressUpdate::IpAddressUpdate(JsonView jsonValue) : 
    m_ipIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_ipHasBeenSet(false)
{
  *this = jsonValue;
}

IpAddressUpdate& IpAddressUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IpId"))
  {
    m_ipId = jsonValue.GetString("IpId");

    m_ipIdHasBeenSet = true;
  }

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

JsonValue IpAddressUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_ipIdHasBeenSet)
  {
   payload.WithString("IpId", m_ipId);

  }

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
