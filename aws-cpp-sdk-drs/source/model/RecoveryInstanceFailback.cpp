/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/RecoveryInstanceFailback.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

RecoveryInstanceFailback::RecoveryInstanceFailback() : 
    m_agentLastSeenByServiceDateTimeHasBeenSet(false),
    m_elapsedReplicationDurationHasBeenSet(false),
    m_failbackClientIDHasBeenSet(false),
    m_failbackClientLastSeenByServiceDateTimeHasBeenSet(false),
    m_failbackInitiationTimeHasBeenSet(false),
    m_failbackJobIDHasBeenSet(false),
    m_failbackLaunchType(FailbackLaunchType::NOT_SET),
    m_failbackLaunchTypeHasBeenSet(false),
    m_failbackToOriginalServer(false),
    m_failbackToOriginalServerHasBeenSet(false),
    m_firstByteDateTimeHasBeenSet(false),
    m_state(FailbackState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

RecoveryInstanceFailback::RecoveryInstanceFailback(JsonView jsonValue) : 
    m_agentLastSeenByServiceDateTimeHasBeenSet(false),
    m_elapsedReplicationDurationHasBeenSet(false),
    m_failbackClientIDHasBeenSet(false),
    m_failbackClientLastSeenByServiceDateTimeHasBeenSet(false),
    m_failbackInitiationTimeHasBeenSet(false),
    m_failbackJobIDHasBeenSet(false),
    m_failbackLaunchType(FailbackLaunchType::NOT_SET),
    m_failbackLaunchTypeHasBeenSet(false),
    m_failbackToOriginalServer(false),
    m_failbackToOriginalServerHasBeenSet(false),
    m_firstByteDateTimeHasBeenSet(false),
    m_state(FailbackState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

RecoveryInstanceFailback& RecoveryInstanceFailback::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentLastSeenByServiceDateTime"))
  {
    m_agentLastSeenByServiceDateTime = jsonValue.GetString("agentLastSeenByServiceDateTime");

    m_agentLastSeenByServiceDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("elapsedReplicationDuration"))
  {
    m_elapsedReplicationDuration = jsonValue.GetString("elapsedReplicationDuration");

    m_elapsedReplicationDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failbackClientID"))
  {
    m_failbackClientID = jsonValue.GetString("failbackClientID");

    m_failbackClientIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failbackClientLastSeenByServiceDateTime"))
  {
    m_failbackClientLastSeenByServiceDateTime = jsonValue.GetString("failbackClientLastSeenByServiceDateTime");

    m_failbackClientLastSeenByServiceDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failbackInitiationTime"))
  {
    m_failbackInitiationTime = jsonValue.GetString("failbackInitiationTime");

    m_failbackInitiationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failbackJobID"))
  {
    m_failbackJobID = jsonValue.GetString("failbackJobID");

    m_failbackJobIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failbackLaunchType"))
  {
    m_failbackLaunchType = FailbackLaunchTypeMapper::GetFailbackLaunchTypeForName(jsonValue.GetString("failbackLaunchType"));

    m_failbackLaunchTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failbackToOriginalServer"))
  {
    m_failbackToOriginalServer = jsonValue.GetBool("failbackToOriginalServer");

    m_failbackToOriginalServerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("firstByteDateTime"))
  {
    m_firstByteDateTime = jsonValue.GetString("firstByteDateTime");

    m_firstByteDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = FailbackStateMapper::GetFailbackStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue RecoveryInstanceFailback::Jsonize() const
{
  JsonValue payload;

  if(m_agentLastSeenByServiceDateTimeHasBeenSet)
  {
   payload.WithString("agentLastSeenByServiceDateTime", m_agentLastSeenByServiceDateTime);

  }

  if(m_elapsedReplicationDurationHasBeenSet)
  {
   payload.WithString("elapsedReplicationDuration", m_elapsedReplicationDuration);

  }

  if(m_failbackClientIDHasBeenSet)
  {
   payload.WithString("failbackClientID", m_failbackClientID);

  }

  if(m_failbackClientLastSeenByServiceDateTimeHasBeenSet)
  {
   payload.WithString("failbackClientLastSeenByServiceDateTime", m_failbackClientLastSeenByServiceDateTime);

  }

  if(m_failbackInitiationTimeHasBeenSet)
  {
   payload.WithString("failbackInitiationTime", m_failbackInitiationTime);

  }

  if(m_failbackJobIDHasBeenSet)
  {
   payload.WithString("failbackJobID", m_failbackJobID);

  }

  if(m_failbackLaunchTypeHasBeenSet)
  {
   payload.WithString("failbackLaunchType", FailbackLaunchTypeMapper::GetNameForFailbackLaunchType(m_failbackLaunchType));
  }

  if(m_failbackToOriginalServerHasBeenSet)
  {
   payload.WithBool("failbackToOriginalServer", m_failbackToOriginalServer);

  }

  if(m_firstByteDateTimeHasBeenSet)
  {
   payload.WithString("firstByteDateTime", m_firstByteDateTime);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", FailbackStateMapper::GetNameForFailbackState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
