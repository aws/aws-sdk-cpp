﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/KubernetesNetworkConfigRequest.h>
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

KubernetesNetworkConfigRequest::KubernetesNetworkConfigRequest() : 
    m_serviceIpv4CidrHasBeenSet(false),
    m_ipFamily(IpFamily::NOT_SET),
    m_ipFamilyHasBeenSet(false)
{
}

KubernetesNetworkConfigRequest::KubernetesNetworkConfigRequest(JsonView jsonValue) : 
    m_serviceIpv4CidrHasBeenSet(false),
    m_ipFamily(IpFamily::NOT_SET),
    m_ipFamilyHasBeenSet(false)
{
  *this = jsonValue;
}

KubernetesNetworkConfigRequest& KubernetesNetworkConfigRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceIpv4Cidr"))
  {
    m_serviceIpv4Cidr = jsonValue.GetString("serviceIpv4Cidr");

    m_serviceIpv4CidrHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipFamily"))
  {
    m_ipFamily = IpFamilyMapper::GetIpFamilyForName(jsonValue.GetString("ipFamily"));

    m_ipFamilyHasBeenSet = true;
  }

  return *this;
}

JsonValue KubernetesNetworkConfigRequest::Jsonize() const
{
  JsonValue payload;

  if(m_serviceIpv4CidrHasBeenSet)
  {
   payload.WithString("serviceIpv4Cidr", m_serviceIpv4Cidr);

  }

  if(m_ipFamilyHasBeenSet)
  {
   payload.WithString("ipFamily", IpFamilyMapper::GetNameForIpFamily(m_ipFamily));
  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
