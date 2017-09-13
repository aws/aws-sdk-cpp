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
#include <aws/sms/model/ServerType.h>
#include <aws/sms/model/VmServer.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sms/model/LicenseType.h>
#include <aws/sms/model/ReplicationJobState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/ReplicationRun.h>
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
   * Object representing a Replication Job<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ReplicationJob">AWS
   * API Reference</a></p>
   */
  class AWS_SMS_API ReplicationJob
  {
  public:
    ReplicationJob();
    ReplicationJob(const Aws::Utils::Json::JsonValue& jsonValue);
    ReplicationJob& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetReplicationJobId() const{ return m_replicationJobId; }

    
    inline void SetReplicationJobId(const Aws::String& value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId = value; }

    
    inline void SetReplicationJobId(Aws::String&& value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId = std::move(value); }

    
    inline void SetReplicationJobId(const char* value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId.assign(value); }

    
    inline ReplicationJob& WithReplicationJobId(const Aws::String& value) { SetReplicationJobId(value); return *this;}

    
    inline ReplicationJob& WithReplicationJobId(Aws::String&& value) { SetReplicationJobId(std::move(value)); return *this;}

    
    inline ReplicationJob& WithReplicationJobId(const char* value) { SetReplicationJobId(value); return *this;}


    
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    
    inline ReplicationJob& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    
    inline ReplicationJob& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    
    inline ReplicationJob& WithServerId(const char* value) { SetServerId(value); return *this;}


    
    inline const ServerType& GetServerType() const{ return m_serverType; }

    
    inline void SetServerType(const ServerType& value) { m_serverTypeHasBeenSet = true; m_serverType = value; }

    
    inline void SetServerType(ServerType&& value) { m_serverTypeHasBeenSet = true; m_serverType = std::move(value); }

    
    inline ReplicationJob& WithServerType(const ServerType& value) { SetServerType(value); return *this;}

    
    inline ReplicationJob& WithServerType(ServerType&& value) { SetServerType(std::move(value)); return *this;}


    
    inline const VmServer& GetVmServer() const{ return m_vmServer; }

    
    inline void SetVmServer(const VmServer& value) { m_vmServerHasBeenSet = true; m_vmServer = value; }

    
    inline void SetVmServer(VmServer&& value) { m_vmServerHasBeenSet = true; m_vmServer = std::move(value); }

    
    inline ReplicationJob& WithVmServer(const VmServer& value) { SetVmServer(value); return *this;}

    
    inline ReplicationJob& WithVmServer(VmServer&& value) { SetVmServer(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetSeedReplicationTime() const{ return m_seedReplicationTime; }

    
    inline void SetSeedReplicationTime(const Aws::Utils::DateTime& value) { m_seedReplicationTimeHasBeenSet = true; m_seedReplicationTime = value; }

    
    inline void SetSeedReplicationTime(Aws::Utils::DateTime&& value) { m_seedReplicationTimeHasBeenSet = true; m_seedReplicationTime = std::move(value); }

    
    inline ReplicationJob& WithSeedReplicationTime(const Aws::Utils::DateTime& value) { SetSeedReplicationTime(value); return *this;}

    
    inline ReplicationJob& WithSeedReplicationTime(Aws::Utils::DateTime&& value) { SetSeedReplicationTime(std::move(value)); return *this;}


    
    inline int GetFrequency() const{ return m_frequency; }

    
    inline void SetFrequency(int value) { m_frequencyHasBeenSet = true; m_frequency = value; }

    
    inline ReplicationJob& WithFrequency(int value) { SetFrequency(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetNextReplicationRunStartTime() const{ return m_nextReplicationRunStartTime; }

    
    inline void SetNextReplicationRunStartTime(const Aws::Utils::DateTime& value) { m_nextReplicationRunStartTimeHasBeenSet = true; m_nextReplicationRunStartTime = value; }

    
    inline void SetNextReplicationRunStartTime(Aws::Utils::DateTime&& value) { m_nextReplicationRunStartTimeHasBeenSet = true; m_nextReplicationRunStartTime = std::move(value); }

    
    inline ReplicationJob& WithNextReplicationRunStartTime(const Aws::Utils::DateTime& value) { SetNextReplicationRunStartTime(value); return *this;}

    
    inline ReplicationJob& WithNextReplicationRunStartTime(Aws::Utils::DateTime&& value) { SetNextReplicationRunStartTime(std::move(value)); return *this;}


    
    inline const LicenseType& GetLicenseType() const{ return m_licenseType; }

    
    inline void SetLicenseType(const LicenseType& value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }

    
    inline void SetLicenseType(LicenseType&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::move(value); }

    
    inline ReplicationJob& WithLicenseType(const LicenseType& value) { SetLicenseType(value); return *this;}

    
    inline ReplicationJob& WithLicenseType(LicenseType&& value) { SetLicenseType(std::move(value)); return *this;}


    
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    
    inline ReplicationJob& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    
    inline ReplicationJob& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    
    inline ReplicationJob& WithRoleName(const char* value) { SetRoleName(value); return *this;}


    
    inline const Aws::String& GetLatestAmiId() const{ return m_latestAmiId; }

    
    inline void SetLatestAmiId(const Aws::String& value) { m_latestAmiIdHasBeenSet = true; m_latestAmiId = value; }

    
    inline void SetLatestAmiId(Aws::String&& value) { m_latestAmiIdHasBeenSet = true; m_latestAmiId = std::move(value); }

    
    inline void SetLatestAmiId(const char* value) { m_latestAmiIdHasBeenSet = true; m_latestAmiId.assign(value); }

    
    inline ReplicationJob& WithLatestAmiId(const Aws::String& value) { SetLatestAmiId(value); return *this;}

    
    inline ReplicationJob& WithLatestAmiId(Aws::String&& value) { SetLatestAmiId(std::move(value)); return *this;}

    
    inline ReplicationJob& WithLatestAmiId(const char* value) { SetLatestAmiId(value); return *this;}


    
    inline const ReplicationJobState& GetState() const{ return m_state; }

    
    inline void SetState(const ReplicationJobState& value) { m_stateHasBeenSet = true; m_state = value; }

    
    inline void SetState(ReplicationJobState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    
    inline ReplicationJob& WithState(const ReplicationJobState& value) { SetState(value); return *this;}

    
    inline ReplicationJob& WithState(ReplicationJobState&& value) { SetState(std::move(value)); return *this;}


    
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    
    inline ReplicationJob& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    
    inline ReplicationJob& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    
    inline ReplicationJob& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline ReplicationJob& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline ReplicationJob& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline ReplicationJob& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::Vector<ReplicationRun>& GetReplicationRunList() const{ return m_replicationRunList; }

    
    inline void SetReplicationRunList(const Aws::Vector<ReplicationRun>& value) { m_replicationRunListHasBeenSet = true; m_replicationRunList = value; }

    
    inline void SetReplicationRunList(Aws::Vector<ReplicationRun>&& value) { m_replicationRunListHasBeenSet = true; m_replicationRunList = std::move(value); }

    
    inline ReplicationJob& WithReplicationRunList(const Aws::Vector<ReplicationRun>& value) { SetReplicationRunList(value); return *this;}

    
    inline ReplicationJob& WithReplicationRunList(Aws::Vector<ReplicationRun>&& value) { SetReplicationRunList(std::move(value)); return *this;}

    
    inline ReplicationJob& AddReplicationRunList(const ReplicationRun& value) { m_replicationRunListHasBeenSet = true; m_replicationRunList.push_back(value); return *this; }

    
    inline ReplicationJob& AddReplicationRunList(ReplicationRun&& value) { m_replicationRunListHasBeenSet = true; m_replicationRunList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_replicationJobId;
    bool m_replicationJobIdHasBeenSet;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet;

    ServerType m_serverType;
    bool m_serverTypeHasBeenSet;

    VmServer m_vmServer;
    bool m_vmServerHasBeenSet;

    Aws::Utils::DateTime m_seedReplicationTime;
    bool m_seedReplicationTimeHasBeenSet;

    int m_frequency;
    bool m_frequencyHasBeenSet;

    Aws::Utils::DateTime m_nextReplicationRunStartTime;
    bool m_nextReplicationRunStartTimeHasBeenSet;

    LicenseType m_licenseType;
    bool m_licenseTypeHasBeenSet;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet;

    Aws::String m_latestAmiId;
    bool m_latestAmiIdHasBeenSet;

    ReplicationJobState m_state;
    bool m_stateHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<ReplicationRun> m_replicationRunList;
    bool m_replicationRunListHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
