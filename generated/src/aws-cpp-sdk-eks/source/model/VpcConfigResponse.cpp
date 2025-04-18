﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/VpcConfigResponse.h>
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

VpcConfigResponse::VpcConfigResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

VpcConfigResponse& VpcConfigResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("subnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("subnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("securityGroupIds"))
  {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("securityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusterSecurityGroupId"))
  {
    m_clusterSecurityGroupId = jsonValue.GetString("clusterSecurityGroupId");
    m_clusterSecurityGroupIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcId"))
  {
    m_vpcId = jsonValue.GetString("vpcId");
    m_vpcIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endpointPublicAccess"))
  {
    m_endpointPublicAccess = jsonValue.GetBool("endpointPublicAccess");
    m_endpointPublicAccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endpointPrivateAccess"))
  {
    m_endpointPrivateAccess = jsonValue.GetBool("endpointPrivateAccess");
    m_endpointPrivateAccessHasBeenSet = true;
  }
  if(jsonValue.ValueExists("publicAccessCidrs"))
  {
    Aws::Utils::Array<JsonView> publicAccessCidrsJsonList = jsonValue.GetArray("publicAccessCidrs");
    for(unsigned publicAccessCidrsIndex = 0; publicAccessCidrsIndex < publicAccessCidrsJsonList.GetLength(); ++publicAccessCidrsIndex)
    {
      m_publicAccessCidrs.push_back(publicAccessCidrsJsonList[publicAccessCidrsIndex].AsString());
    }
    m_publicAccessCidrsHasBeenSet = true;
  }
  return *this;
}

JsonValue VpcConfigResponse::Jsonize() const
{
  JsonValue payload;

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("subnetIds", std::move(subnetIdsJsonList));

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("securityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_clusterSecurityGroupIdHasBeenSet)
  {
   payload.WithString("clusterSecurityGroupId", m_clusterSecurityGroupId);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("vpcId", m_vpcId);

  }

  if(m_endpointPublicAccessHasBeenSet)
  {
   payload.WithBool("endpointPublicAccess", m_endpointPublicAccess);

  }

  if(m_endpointPrivateAccessHasBeenSet)
  {
   payload.WithBool("endpointPrivateAccess", m_endpointPrivateAccess);

  }

  if(m_publicAccessCidrsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> publicAccessCidrsJsonList(m_publicAccessCidrs.size());
   for(unsigned publicAccessCidrsIndex = 0; publicAccessCidrsIndex < publicAccessCidrsJsonList.GetLength(); ++publicAccessCidrsIndex)
   {
     publicAccessCidrsJsonList[publicAccessCidrsIndex].AsString(m_publicAccessCidrs[publicAccessCidrsIndex]);
   }
   payload.WithArray("publicAccessCidrs", std::move(publicAccessCidrsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
