/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/KubernetesNetworkConfigResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

KubernetesNetworkConfigResponse::KubernetesNetworkConfigResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

KubernetesNetworkConfigResponse& KubernetesNetworkConfigResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceIpv4Cidr"))
  {
    m_serviceIpv4Cidr = jsonValue.GetString("serviceIpv4Cidr");
    m_serviceIpv4CidrHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceIpv6Cidr"))
  {
    m_serviceIpv6Cidr = jsonValue.GetString("serviceIpv6Cidr");
    m_serviceIpv6CidrHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ipFamily"))
  {
    m_ipFamily = IpFamilyMapper::GetIpFamilyForName(jsonValue.GetString("ipFamily"));
    m_ipFamilyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("elasticLoadBalancing"))
  {
    m_elasticLoadBalancing = jsonValue.GetObject("elasticLoadBalancing");
    m_elasticLoadBalancingHasBeenSet = true;
  }
  return *this;
}

JsonValue KubernetesNetworkConfigResponse::Jsonize() const
{
  JsonValue payload;

  if(m_serviceIpv4CidrHasBeenSet)
  {
   payload.WithString("serviceIpv4Cidr", m_serviceIpv4Cidr);

  }

  if(m_serviceIpv6CidrHasBeenSet)
  {
   payload.WithString("serviceIpv6Cidr", m_serviceIpv6Cidr);

  }

  if(m_ipFamilyHasBeenSet)
  {
   payload.WithString("ipFamily", IpFamilyMapper::GetNameForIpFamily(m_ipFamily));
  }

  if(m_elasticLoadBalancingHasBeenSet)
  {
   payload.WithObject("elasticLoadBalancing", m_elasticLoadBalancing.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
