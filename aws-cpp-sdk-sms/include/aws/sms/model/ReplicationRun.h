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

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/ReplicationRunState.h>
#include <aws/sms/model/ReplicationRunType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SMS
{
namespace Model
{

  /**
   * Object representing a Replication Run<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ReplicationRun">AWS
   * API Reference</a></p>
   */
  class AWS_SMS_API ReplicationRun
  {
  public:
    ReplicationRun();
    ReplicationRun(const Aws::Utils::Json::JsonValue& jsonValue);
    ReplicationRun& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetReplicationRunId() const{ return m_replicationRunId; }

    
    inline void SetReplicationRunId(const Aws::String& value) { m_replicationRunIdHasBeenSet = true; m_replicationRunId = value; }

    
    inline void SetReplicationRunId(Aws::String&& value) { m_replicationRunIdHasBeenSet = true; m_replicationRunId = std::move(value); }

    
    inline void SetReplicationRunId(const char* value) { m_replicationRunIdHasBeenSet = true; m_replicationRunId.assign(value); }

    
    inline ReplicationRun& WithReplicationRunId(const Aws::String& value) { SetReplicationRunId(value); return *this;}

    
    inline ReplicationRun& WithReplicationRunId(Aws::String&& value) { SetReplicationRunId(std::move(value)); return *this;}

    
    inline ReplicationRun& WithReplicationRunId(const char* value) { SetReplicationRunId(value); return *this;}


    
    inline const ReplicationRunState& GetState() const{ return m_state; }

    
    inline void SetState(const ReplicationRunState& value) { m_stateHasBeenSet = true; m_state = value; }

    
    inline void SetState(ReplicationRunState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    
    inline ReplicationRun& WithState(const ReplicationRunState& value) { SetState(value); return *this;}

    
    inline ReplicationRun& WithState(ReplicationRunState&& value) { SetState(std::move(value)); return *this;}


    
    inline const ReplicationRunType& GetType() const{ return m_type; }

    
    inline void SetType(const ReplicationRunType& value) { m_typeHasBeenSet = true; m_type = value; }

    
    inline void SetType(ReplicationRunType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    
    inline ReplicationRun& WithType(const ReplicationRunType& value) { SetType(value); return *this;}

    
    inline ReplicationRun& WithType(ReplicationRunType&& value) { SetType(std::move(value)); return *this;}


    
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    
    inline ReplicationRun& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    
    inline ReplicationRun& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    
    inline ReplicationRun& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    
    inline const Aws::String& GetAmiId() const{ return m_amiId; }

    
    inline void SetAmiId(const Aws::String& value) { m_amiIdHasBeenSet = true; m_amiId = value; }

    
    inline void SetAmiId(Aws::String&& value) { m_amiIdHasBeenSet = true; m_amiId = std::move(value); }

    
    inline void SetAmiId(const char* value) { m_amiIdHasBeenSet = true; m_amiId.assign(value); }

    
    inline ReplicationRun& WithAmiId(const Aws::String& value) { SetAmiId(value); return *this;}

    
    inline ReplicationRun& WithAmiId(Aws::String&& value) { SetAmiId(std::move(value)); return *this;}

    
    inline ReplicationRun& WithAmiId(const char* value) { SetAmiId(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetScheduledStartTime() const{ return m_scheduledStartTime; }

    
    inline void SetScheduledStartTime(const Aws::Utils::DateTime& value) { m_scheduledStartTimeHasBeenSet = true; m_scheduledStartTime = value; }

    
    inline void SetScheduledStartTime(Aws::Utils::DateTime&& value) { m_scheduledStartTimeHasBeenSet = true; m_scheduledStartTime = std::move(value); }

    
    inline ReplicationRun& WithScheduledStartTime(const Aws::Utils::DateTime& value) { SetScheduledStartTime(value); return *this;}

    
    inline ReplicationRun& WithScheduledStartTime(Aws::Utils::DateTime&& value) { SetScheduledStartTime(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetCompletedTime() const{ return m_completedTime; }

    
    inline void SetCompletedTime(const Aws::Utils::DateTime& value) { m_completedTimeHasBeenSet = true; m_completedTime = value; }

    
    inline void SetCompletedTime(Aws::Utils::DateTime&& value) { m_completedTimeHasBeenSet = true; m_completedTime = std::move(value); }

    
    inline ReplicationRun& WithCompletedTime(const Aws::Utils::DateTime& value) { SetCompletedTime(value); return *this;}

    
    inline ReplicationRun& WithCompletedTime(Aws::Utils::DateTime&& value) { SetCompletedTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline ReplicationRun& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline ReplicationRun& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline ReplicationRun& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_replicationRunId;
    bool m_replicationRunIdHasBeenSet;

    ReplicationRunState m_state;
    bool m_stateHasBeenSet;

    ReplicationRunType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;

    Aws::String m_amiId;
    bool m_amiIdHasBeenSet;

    Aws::Utils::DateTime m_scheduledStartTime;
    bool m_scheduledStartTimeHasBeenSet;

    Aws::Utils::DateTime m_completedTime;
    bool m_completedTimeHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
