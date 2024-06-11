/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/DataReplicationInfo.h>
#include <aws/drs/model/LastLaunchResult.h>
#include <aws/drs/model/LifeCycle.h>
#include <aws/drs/model/ReplicationDirection.h>
#include <aws/drs/model/SourceCloudProperties.h>
#include <aws/drs/model/SourceProperties.h>
#include <aws/drs/model/StagingArea.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace drs
{
namespace Model
{

  class SourceServer
  {
  public:
    AWS_DRS_API SourceServer();
    AWS_DRS_API SourceServer(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API SourceServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the DRS agent installed on the source server</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersionHasBeenSet = true; m_agentVersion = value; }
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::move(value); }
    inline void SetAgentVersion(const char* value) { m_agentVersionHasBeenSet = true; m_agentVersion.assign(value); }
    inline SourceServer& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}
    inline SourceServer& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}
    inline SourceServer& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Source Server.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline SourceServer& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline SourceServer& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline SourceServer& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Data Replication Info of the Source Server.</p>
     */
    inline const DataReplicationInfo& GetDataReplicationInfo() const{ return m_dataReplicationInfo; }
    inline bool DataReplicationInfoHasBeenSet() const { return m_dataReplicationInfoHasBeenSet; }
    inline void SetDataReplicationInfo(const DataReplicationInfo& value) { m_dataReplicationInfoHasBeenSet = true; m_dataReplicationInfo = value; }
    inline void SetDataReplicationInfo(DataReplicationInfo&& value) { m_dataReplicationInfoHasBeenSet = true; m_dataReplicationInfo = std::move(value); }
    inline SourceServer& WithDataReplicationInfo(const DataReplicationInfo& value) { SetDataReplicationInfo(value); return *this;}
    inline SourceServer& WithDataReplicationInfo(DataReplicationInfo&& value) { SetDataReplicationInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the last recovery launch of this Source Server.</p>
     */
    inline const LastLaunchResult& GetLastLaunchResult() const{ return m_lastLaunchResult; }
    inline bool LastLaunchResultHasBeenSet() const { return m_lastLaunchResultHasBeenSet; }
    inline void SetLastLaunchResult(const LastLaunchResult& value) { m_lastLaunchResultHasBeenSet = true; m_lastLaunchResult = value; }
    inline void SetLastLaunchResult(LastLaunchResult&& value) { m_lastLaunchResultHasBeenSet = true; m_lastLaunchResult = std::move(value); }
    inline SourceServer& WithLastLaunchResult(const LastLaunchResult& value) { SetLastLaunchResult(value); return *this;}
    inline SourceServer& WithLastLaunchResult(LastLaunchResult&& value) { SetLastLaunchResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle information of this Source Server.</p>
     */
    inline const LifeCycle& GetLifeCycle() const{ return m_lifeCycle; }
    inline bool LifeCycleHasBeenSet() const { return m_lifeCycleHasBeenSet; }
    inline void SetLifeCycle(const LifeCycle& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = value; }
    inline void SetLifeCycle(LifeCycle&& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = std::move(value); }
    inline SourceServer& WithLifeCycle(const LifeCycle& value) { SetLifeCycle(value); return *this;}
    inline SourceServer& WithLifeCycle(LifeCycle&& value) { SetLifeCycle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Recovery Instance associated with this Source Server.</p>
     */
    inline const Aws::String& GetRecoveryInstanceId() const{ return m_recoveryInstanceId; }
    inline bool RecoveryInstanceIdHasBeenSet() const { return m_recoveryInstanceIdHasBeenSet; }
    inline void SetRecoveryInstanceId(const Aws::String& value) { m_recoveryInstanceIdHasBeenSet = true; m_recoveryInstanceId = value; }
    inline void SetRecoveryInstanceId(Aws::String&& value) { m_recoveryInstanceIdHasBeenSet = true; m_recoveryInstanceId = std::move(value); }
    inline void SetRecoveryInstanceId(const char* value) { m_recoveryInstanceIdHasBeenSet = true; m_recoveryInstanceId.assign(value); }
    inline SourceServer& WithRecoveryInstanceId(const Aws::String& value) { SetRecoveryInstanceId(value); return *this;}
    inline SourceServer& WithRecoveryInstanceId(Aws::String&& value) { SetRecoveryInstanceId(std::move(value)); return *this;}
    inline SourceServer& WithRecoveryInstanceId(const char* value) { SetRecoveryInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication direction of the Source Server.</p>
     */
    inline const ReplicationDirection& GetReplicationDirection() const{ return m_replicationDirection; }
    inline bool ReplicationDirectionHasBeenSet() const { return m_replicationDirectionHasBeenSet; }
    inline void SetReplicationDirection(const ReplicationDirection& value) { m_replicationDirectionHasBeenSet = true; m_replicationDirection = value; }
    inline void SetReplicationDirection(ReplicationDirection&& value) { m_replicationDirectionHasBeenSet = true; m_replicationDirection = std::move(value); }
    inline SourceServer& WithReplicationDirection(const ReplicationDirection& value) { SetReplicationDirection(value); return *this;}
    inline SourceServer& WithReplicationDirection(ReplicationDirection&& value) { SetReplicationDirection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For EC2-originated Source Servers which have been failed over and then failed
     * back, this value will mean the ARN of the Source Server on the opposite
     * replication direction.</p>
     */
    inline const Aws::String& GetReversedDirectionSourceServerArn() const{ return m_reversedDirectionSourceServerArn; }
    inline bool ReversedDirectionSourceServerArnHasBeenSet() const { return m_reversedDirectionSourceServerArnHasBeenSet; }
    inline void SetReversedDirectionSourceServerArn(const Aws::String& value) { m_reversedDirectionSourceServerArnHasBeenSet = true; m_reversedDirectionSourceServerArn = value; }
    inline void SetReversedDirectionSourceServerArn(Aws::String&& value) { m_reversedDirectionSourceServerArnHasBeenSet = true; m_reversedDirectionSourceServerArn = std::move(value); }
    inline void SetReversedDirectionSourceServerArn(const char* value) { m_reversedDirectionSourceServerArnHasBeenSet = true; m_reversedDirectionSourceServerArn.assign(value); }
    inline SourceServer& WithReversedDirectionSourceServerArn(const Aws::String& value) { SetReversedDirectionSourceServerArn(value); return *this;}
    inline SourceServer& WithReversedDirectionSourceServerArn(Aws::String&& value) { SetReversedDirectionSourceServerArn(std::move(value)); return *this;}
    inline SourceServer& WithReversedDirectionSourceServerArn(const char* value) { SetReversedDirectionSourceServerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source cloud properties of the Source Server.</p>
     */
    inline const SourceCloudProperties& GetSourceCloudProperties() const{ return m_sourceCloudProperties; }
    inline bool SourceCloudPropertiesHasBeenSet() const { return m_sourceCloudPropertiesHasBeenSet; }
    inline void SetSourceCloudProperties(const SourceCloudProperties& value) { m_sourceCloudPropertiesHasBeenSet = true; m_sourceCloudProperties = value; }
    inline void SetSourceCloudProperties(SourceCloudProperties&& value) { m_sourceCloudPropertiesHasBeenSet = true; m_sourceCloudProperties = std::move(value); }
    inline SourceServer& WithSourceCloudProperties(const SourceCloudProperties& value) { SetSourceCloudProperties(value); return *this;}
    inline SourceServer& WithSourceCloudProperties(SourceCloudProperties&& value) { SetSourceCloudProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the Source Network which is protecting this Source Server's
     * network.</p>
     */
    inline const Aws::String& GetSourceNetworkID() const{ return m_sourceNetworkID; }
    inline bool SourceNetworkIDHasBeenSet() const { return m_sourceNetworkIDHasBeenSet; }
    inline void SetSourceNetworkID(const Aws::String& value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID = value; }
    inline void SetSourceNetworkID(Aws::String&& value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID = std::move(value); }
    inline void SetSourceNetworkID(const char* value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID.assign(value); }
    inline SourceServer& WithSourceNetworkID(const Aws::String& value) { SetSourceNetworkID(value); return *this;}
    inline SourceServer& WithSourceNetworkID(Aws::String&& value) { SetSourceNetworkID(std::move(value)); return *this;}
    inline SourceServer& WithSourceNetworkID(const char* value) { SetSourceNetworkID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source properties of the Source Server.</p>
     */
    inline const SourceProperties& GetSourceProperties() const{ return m_sourceProperties; }
    inline bool SourcePropertiesHasBeenSet() const { return m_sourcePropertiesHasBeenSet; }
    inline void SetSourceProperties(const SourceProperties& value) { m_sourcePropertiesHasBeenSet = true; m_sourceProperties = value; }
    inline void SetSourceProperties(SourceProperties&& value) { m_sourcePropertiesHasBeenSet = true; m_sourceProperties = std::move(value); }
    inline SourceServer& WithSourceProperties(const SourceProperties& value) { SetSourceProperties(value); return *this;}
    inline SourceServer& WithSourceProperties(SourceProperties&& value) { SetSourceProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Source Server.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }
    inline SourceServer& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}
    inline SourceServer& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}
    inline SourceServer& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The staging area of the source server.</p>
     */
    inline const StagingArea& GetStagingArea() const{ return m_stagingArea; }
    inline bool StagingAreaHasBeenSet() const { return m_stagingAreaHasBeenSet; }
    inline void SetStagingArea(const StagingArea& value) { m_stagingAreaHasBeenSet = true; m_stagingArea = value; }
    inline void SetStagingArea(StagingArea&& value) { m_stagingAreaHasBeenSet = true; m_stagingArea = std::move(value); }
    inline SourceServer& WithStagingArea(const StagingArea& value) { SetStagingArea(value); return *this;}
    inline SourceServer& WithStagingArea(StagingArea&& value) { SetStagingArea(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the Source Server.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline SourceServer& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline SourceServer& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline SourceServer& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline SourceServer& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline SourceServer& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline SourceServer& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline SourceServer& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline SourceServer& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline SourceServer& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline SourceServer& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SourceServer& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SourceServer& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    DataReplicationInfo m_dataReplicationInfo;
    bool m_dataReplicationInfoHasBeenSet = false;

    LastLaunchResult m_lastLaunchResult;
    bool m_lastLaunchResultHasBeenSet = false;

    LifeCycle m_lifeCycle;
    bool m_lifeCycleHasBeenSet = false;

    Aws::String m_recoveryInstanceId;
    bool m_recoveryInstanceIdHasBeenSet = false;

    ReplicationDirection m_replicationDirection;
    bool m_replicationDirectionHasBeenSet = false;

    Aws::String m_reversedDirectionSourceServerArn;
    bool m_reversedDirectionSourceServerArnHasBeenSet = false;

    SourceCloudProperties m_sourceCloudProperties;
    bool m_sourceCloudPropertiesHasBeenSet = false;

    Aws::String m_sourceNetworkID;
    bool m_sourceNetworkIDHasBeenSet = false;

    SourceProperties m_sourceProperties;
    bool m_sourcePropertiesHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;

    StagingArea m_stagingArea;
    bool m_stagingAreaHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
