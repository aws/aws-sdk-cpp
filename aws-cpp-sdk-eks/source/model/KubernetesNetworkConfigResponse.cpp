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

KubernetesNetworkConfigResponse::KubernetesNetworkConfigResponse() : 
    m_serviceIpv4CidrHasBeenSet(false)
{
}

KubernetesNetworkConfigResponse::KubernetesNetworkConfigResponse(JsonView jsonValue) : 
    m_serviceIpv4CidrHasBeenSet(false)
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

  return *this;
}

JsonValue KubernetesNetworkConfigResponse::Jsonize() const
{
  JsonValue payload;

  if(m_serviceIpv4CidrHasBeenSet)
  {
   payload.WithString("serviceIpv4Cidr", m_serviceIpv4Cidr);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
