/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ClientVpcConnection.h>
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

ClientVpcConnection::ClientVpcConnection() : 
    m_authenticationHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_state(VpcConnectionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_vpcConnectionArnHasBeenSet(false),
    m_ownerHasBeenSet(false)
{
}

ClientVpcConnection::ClientVpcConnection(JsonView jsonValue) : 
    m_authenticationHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_state(VpcConnectionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_vpcConnectionArnHasBeenSet(false),
    m_ownerHasBeenSet(false)
{
  *this = jsonValue;
}

ClientVpcConnection& ClientVpcConnection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authentication"))
  {
    m_authentication = jsonValue.GetString("authentication");

    m_authenticationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = VpcConnectionStateMapper::GetVpcConnectionStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcConnectionArn"))
  {
    m_vpcConnectionArn = jsonValue.GetString("vpcConnectionArn");

    m_vpcConnectionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("owner"))
  {
    m_owner = jsonValue.GetString("owner");

    m_ownerHasBeenSet = true;
  }

  return *this;
}

JsonValue ClientVpcConnection::Jsonize() const
{
  JsonValue payload;

  if(m_authenticationHasBeenSet)
  {
   payload.WithString("authentication", m_authentication);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", VpcConnectionStateMapper::GetNameForVpcConnectionState(m_state));
  }

  if(m_vpcConnectionArnHasBeenSet)
  {
   payload.WithString("vpcConnectionArn", m_vpcConnectionArn);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("owner", m_owner);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
