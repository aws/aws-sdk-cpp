/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/EndpointDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

EndpointDetails::EndpointDetails() : 
    m_addressAllocationIdsHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_vpcEndpointIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false)
{
}

EndpointDetails::EndpointDetails(JsonView jsonValue) : 
    m_addressAllocationIdsHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_vpcEndpointIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointDetails& EndpointDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AddressAllocationIds"))
  {
    Aws::Utils::Array<JsonView> addressAllocationIdsJsonList = jsonValue.GetArray("AddressAllocationIds");
    for(unsigned addressAllocationIdsIndex = 0; addressAllocationIdsIndex < addressAllocationIdsJsonList.GetLength(); ++addressAllocationIdsIndex)
    {
      m_addressAllocationIds.push_back(addressAllocationIdsJsonList[addressAllocationIdsIndex].AsString());
    }
    m_addressAllocationIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("SubnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcEndpointId"))
  {
    m_vpcEndpointId = jsonValue.GetString("VpcEndpointId");

    m_vpcEndpointIdHasBeenSet = true;
  }

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

  return *this;
}

JsonValue EndpointDetails::Jsonize() const
{
  JsonValue payload;

  if(m_addressAllocationIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addressAllocationIdsJsonList(m_addressAllocationIds.size());
   for(unsigned addressAllocationIdsIndex = 0; addressAllocationIdsIndex < addressAllocationIdsJsonList.GetLength(); ++addressAllocationIdsIndex)
   {
     addressAllocationIdsJsonList[addressAllocationIdsIndex].AsString(m_addressAllocationIds[addressAllocationIdsIndex]);
   }
   payload.WithArray("AddressAllocationIds", std::move(addressAllocationIdsJsonList));

  }

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("SubnetIds", std::move(subnetIdsJsonList));

  }

  if(m_vpcEndpointIdHasBeenSet)
  {
   payload.WithString("VpcEndpointId", m_vpcEndpointId);

  }

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

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
