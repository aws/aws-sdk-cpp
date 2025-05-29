/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/ParticipantReplica.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

ParticipantReplica::ParticipantReplica(JsonView jsonValue)
{
  *this = jsonValue;
}

ParticipantReplica& ParticipantReplica::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceStageArn"))
  {
    m_sourceStageArn = jsonValue.GetString("sourceStageArn");
    m_sourceStageArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("participantId"))
  {
    m_participantId = jsonValue.GetString("participantId");
    m_participantIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceSessionId"))
  {
    m_sourceSessionId = jsonValue.GetString("sourceSessionId");
    m_sourceSessionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("destinationStageArn"))
  {
    m_destinationStageArn = jsonValue.GetString("destinationStageArn");
    m_destinationStageArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("destinationSessionId"))
  {
    m_destinationSessionId = jsonValue.GetString("destinationSessionId");
    m_destinationSessionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("replicationState"))
  {
    m_replicationState = ReplicationStateMapper::GetReplicationStateForName(jsonValue.GetString("replicationState"));
    m_replicationStateHasBeenSet = true;
  }
  return *this;
}

JsonValue ParticipantReplica::Jsonize() const
{
  JsonValue payload;

  if(m_sourceStageArnHasBeenSet)
  {
   payload.WithString("sourceStageArn", m_sourceStageArn);

  }

  if(m_participantIdHasBeenSet)
  {
   payload.WithString("participantId", m_participantId);

  }

  if(m_sourceSessionIdHasBeenSet)
  {
   payload.WithString("sourceSessionId", m_sourceSessionId);

  }

  if(m_destinationStageArnHasBeenSet)
  {
   payload.WithString("destinationStageArn", m_destinationStageArn);

  }

  if(m_destinationSessionIdHasBeenSet)
  {
   payload.WithString("destinationSessionId", m_destinationSessionId);

  }

  if(m_replicationStateHasBeenSet)
  {
   payload.WithString("replicationState", ReplicationStateMapper::GetNameForReplicationState(m_replicationState));
  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
