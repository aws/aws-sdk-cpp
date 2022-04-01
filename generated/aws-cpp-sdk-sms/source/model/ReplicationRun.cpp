/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/ReplicationRun.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SMS
{
namespace Model
{

ReplicationRun::ReplicationRun() : 
    m_replicationRunIdHasBeenSet(false),
    m_state(ReplicationRunState::NOT_SET),
    m_stateHasBeenSet(false),
    m_type(ReplicationRunType::NOT_SET),
    m_typeHasBeenSet(false),
    m_stageDetailsHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_amiIdHasBeenSet(false),
    m_scheduledStartTimeHasBeenSet(false),
    m_completedTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

ReplicationRun::ReplicationRun(JsonView jsonValue) : 
    m_replicationRunIdHasBeenSet(false),
    m_state(ReplicationRunState::NOT_SET),
    m_stateHasBeenSet(false),
    m_type(ReplicationRunType::NOT_SET),
    m_typeHasBeenSet(false),
    m_stageDetailsHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_amiIdHasBeenSet(false),
    m_scheduledStartTimeHasBeenSet(false),
    m_completedTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationRun& ReplicationRun::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("replicationRunId"))
  {
    m_replicationRunId = jsonValue.GetString("replicationRunId");

    m_replicationRunIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = ReplicationRunStateMapper::GetReplicationRunStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ReplicationRunTypeMapper::GetReplicationRunTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stageDetails"))
  {
    m_stageDetails = jsonValue.GetObject("stageDetails");

    m_stageDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("amiId"))
  {
    m_amiId = jsonValue.GetString("amiId");

    m_amiIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scheduledStartTime"))
  {
    m_scheduledStartTime = jsonValue.GetDouble("scheduledStartTime");

    m_scheduledStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("completedTime"))
  {
    m_completedTime = jsonValue.GetDouble("completedTime");

    m_completedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encrypted"))
  {
    m_encrypted = jsonValue.GetBool("encrypted");

    m_encryptedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationRun::Jsonize() const
{
  JsonValue payload;

  if(m_replicationRunIdHasBeenSet)
  {
   payload.WithString("replicationRunId", m_replicationRunId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", ReplicationRunStateMapper::GetNameForReplicationRunState(m_state));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ReplicationRunTypeMapper::GetNameForReplicationRunType(m_type));
  }

  if(m_stageDetailsHasBeenSet)
  {
   payload.WithObject("stageDetails", m_stageDetails.Jsonize());

  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_amiIdHasBeenSet)
  {
   payload.WithString("amiId", m_amiId);

  }

  if(m_scheduledStartTimeHasBeenSet)
  {
   payload.WithDouble("scheduledStartTime", m_scheduledStartTime.SecondsWithMSPrecision());
  }

  if(m_completedTimeHasBeenSet)
  {
   payload.WithDouble("completedTime", m_completedTime.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_encryptedHasBeenSet)
  {
   payload.WithBool("encrypted", m_encrypted);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
