/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2VpcPeeringConnectionDetails.h>
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

AwsEc2VpcPeeringConnectionDetails::AwsEc2VpcPeeringConnectionDetails() : 
    m_accepterVpcInfoHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_requesterVpcInfoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_vpcPeeringConnectionIdHasBeenSet(false)
{
}

AwsEc2VpcPeeringConnectionDetails::AwsEc2VpcPeeringConnectionDetails(JsonView jsonValue) : 
    m_accepterVpcInfoHasBeenSet(false),
    m_expirationTimeHasBeenSet(false),
    m_requesterVpcInfoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_vpcPeeringConnectionIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2VpcPeeringConnectionDetails& AwsEc2VpcPeeringConnectionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccepterVpcInfo"))
  {
    m_accepterVpcInfo = jsonValue.GetObject("AccepterVpcInfo");

    m_accepterVpcInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpirationTime"))
  {
    m_expirationTime = jsonValue.GetString("ExpirationTime");

    m_expirationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequesterVpcInfo"))
  {
    m_requesterVpcInfo = jsonValue.GetObject("RequesterVpcInfo");

    m_requesterVpcInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcPeeringConnectionId"))
  {
    m_vpcPeeringConnectionId = jsonValue.GetString("VpcPeeringConnectionId");

    m_vpcPeeringConnectionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2VpcPeeringConnectionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_accepterVpcInfoHasBeenSet)
  {
   payload.WithObject("AccepterVpcInfo", m_accepterVpcInfo.Jsonize());

  }

  if(m_expirationTimeHasBeenSet)
  {
   payload.WithString("ExpirationTime", m_expirationTime);

  }

  if(m_requesterVpcInfoHasBeenSet)
  {
   payload.WithObject("RequesterVpcInfo", m_requesterVpcInfo.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("Status", m_status.Jsonize());

  }

  if(m_vpcPeeringConnectionIdHasBeenSet)
  {
   payload.WithString("VpcPeeringConnectionId", m_vpcPeeringConnectionId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
