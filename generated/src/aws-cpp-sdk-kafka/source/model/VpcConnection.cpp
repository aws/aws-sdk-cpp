/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/VpcConnection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

VpcConnection::VpcConnection() : 
    m_vpcConnectionArnHasBeenSet(false),
    m_targetClusterArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_authenticationHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_state(VpcConnectionState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

VpcConnection::VpcConnection(JsonView jsonValue) : 
    m_vpcConnectionArnHasBeenSet(false),
    m_targetClusterArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_authenticationHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_state(VpcConnectionState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

VpcConnection& VpcConnection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vpcConnectionArn"))
  {
    m_vpcConnectionArn = jsonValue.GetString("vpcConnectionArn");

    m_vpcConnectionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetClusterArn"))
  {
    m_targetClusterArn = jsonValue.GetString("targetClusterArn");

    m_targetClusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authentication"))
  {
    m_authentication = jsonValue.GetString("authentication");

    m_authenticationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcId"))
  {
    m_vpcId = jsonValue.GetString("vpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = VpcConnectionStateMapper::GetVpcConnectionStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcConnection::Jsonize() const
{
  JsonValue payload;

  if(m_vpcConnectionArnHasBeenSet)
  {
   payload.WithString("vpcConnectionArn", m_vpcConnectionArn);

  }

  if(m_targetClusterArnHasBeenSet)
  {
   payload.WithString("targetClusterArn", m_targetClusterArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_authenticationHasBeenSet)
  {
   payload.WithString("authentication", m_authentication);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("vpcId", m_vpcId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", VpcConnectionStateMapper::GetNameForVpcConnectionState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
