/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/WorkforceVpcConfigResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

WorkforceVpcConfigResponse::WorkforceVpcConfigResponse() : 
    m_vpcIdHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_vpcEndpointIdHasBeenSet(false)
{
}

WorkforceVpcConfigResponse::WorkforceVpcConfigResponse(JsonView jsonValue) : 
    m_vpcIdHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_vpcEndpointIdHasBeenSet(false)
{
  *this = jsonValue;
}

WorkforceVpcConfigResponse& WorkforceVpcConfigResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroupIds"))
  {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("SecurityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subnets"))
  {
    Aws::Utils::Array<JsonView> subnetsJsonList = jsonValue.GetArray("Subnets");
    for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
    {
      m_subnets.push_back(subnetsJsonList[subnetsIndex].AsString());
    }
    m_subnetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcEndpointId"))
  {
    m_vpcEndpointId = jsonValue.GetString("VpcEndpointId");

    m_vpcEndpointIdHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkforceVpcConfigResponse::Jsonize() const
{
  JsonValue payload;

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("SecurityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_subnetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetsJsonList(m_subnets.size());
   for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
   {
     subnetsJsonList[subnetsIndex].AsString(m_subnets[subnetsIndex]);
   }
   payload.WithArray("Subnets", std::move(subnetsJsonList));

  }

  if(m_vpcEndpointIdHasBeenSet)
  {
   payload.WithString("VpcEndpointId", m_vpcEndpointId);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
