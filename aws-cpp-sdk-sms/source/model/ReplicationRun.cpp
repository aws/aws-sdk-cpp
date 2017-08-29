/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_statusMessageHasBeenSet(false),
    m_amiIdHasBeenSet(false),
    m_scheduledStartTimeHasBeenSet(false),
    m_completedTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

ReplicationRun::ReplicationRun(const JsonValue& jsonValue) : 
    m_replicationRunIdHasBeenSet(false),
    m_state(ReplicationRunState::NOT_SET),
    m_stateHasBeenSet(false),
    m_type(ReplicationRunType::NOT_SET),
    m_typeHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_amiIdHasBeenSet(false),
    m_scheduledStartTimeHasBeenSet(false),
    m_completedTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationRun& ReplicationRun::operator =(const JsonValue& jsonValue)
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

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
