/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/VpcPeeringAuthorization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

VpcPeeringAuthorization::VpcPeeringAuthorization() : 
    m_gameLiftAwsAccountIdHasBeenSet(false),
    m_peerVpcAwsAccountIdHasBeenSet(false),
    m_peerVpcIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_expirationTimeHasBeenSet(false)
{
}

VpcPeeringAuthorization::VpcPeeringAuthorization(JsonView jsonValue) : 
    m_gameLiftAwsAccountIdHasBeenSet(false),
    m_peerVpcAwsAccountIdHasBeenSet(false),
    m_peerVpcIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_expirationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

VpcPeeringAuthorization& VpcPeeringAuthorization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GameLiftAwsAccountId"))
  {
    m_gameLiftAwsAccountId = jsonValue.GetString("GameLiftAwsAccountId");

    m_gameLiftAwsAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PeerVpcAwsAccountId"))
  {
    m_peerVpcAwsAccountId = jsonValue.GetString("PeerVpcAwsAccountId");

    m_peerVpcAwsAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PeerVpcId"))
  {
    m_peerVpcId = jsonValue.GetString("PeerVpcId");

    m_peerVpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpirationTime"))
  {
    m_expirationTime = jsonValue.GetDouble("ExpirationTime");

    m_expirationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcPeeringAuthorization::Jsonize() const
{
  JsonValue payload;

  if(m_gameLiftAwsAccountIdHasBeenSet)
  {
   payload.WithString("GameLiftAwsAccountId", m_gameLiftAwsAccountId);

  }

  if(m_peerVpcAwsAccountIdHasBeenSet)
  {
   payload.WithString("PeerVpcAwsAccountId", m_peerVpcAwsAccountId);

  }

  if(m_peerVpcIdHasBeenSet)
  {
   payload.WithString("PeerVpcId", m_peerVpcId);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_expirationTimeHasBeenSet)
  {
   payload.WithDouble("ExpirationTime", m_expirationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
