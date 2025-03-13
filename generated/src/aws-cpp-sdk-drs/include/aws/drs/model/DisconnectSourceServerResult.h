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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace drs
{
namespace Model
{
  class DisconnectSourceServerResult
  {
  public:
    AWS_DRS_API DisconnectSourceServerResult() = default;
    AWS_DRS_API DisconnectSourceServerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API DisconnectSourceServerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The version of the DRS agent installed on the source server</p>
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    DisconnectSourceServerResult& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Source Server.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DisconnectSourceServerResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Data Replication Info of the Source Server.</p>
     */
    inline const DataReplicationInfo& GetDataReplicationInfo() const { return m_dataReplicationInfo; }
    template<typename DataReplicationInfoT = DataReplicationInfo>
    void SetDataReplicationInfo(DataReplicationInfoT&& value) { m_dataReplicationInfoHasBeenSet = true; m_dataReplicationInfo = std::forward<DataReplicationInfoT>(value); }
    template<typename DataReplicationInfoT = DataReplicationInfo>
    DisconnectSourceServerResult& WithDataReplicationInfo(DataReplicationInfoT&& value) { SetDataReplicationInfo(std::forward<DataReplicationInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the last recovery launch of this Source Server.</p>
     */
    inline LastLaunchResult GetLastLaunchResult() const { return m_lastLaunchResult; }
    inline void SetLastLaunchResult(LastLaunchResult value) { m_lastLaunchResultHasBeenSet = true; m_lastLaunchResult = value; }
    inline DisconnectSourceServerResult& WithLastLaunchResult(LastLaunchResult value) { SetLastLaunchResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle information of this Source Server.</p>
     */
    inline const LifeCycle& GetLifeCycle() const { return m_lifeCycle; }
    template<typename LifeCycleT = LifeCycle>
    void SetLifeCycle(LifeCycleT&& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = std::forward<LifeCycleT>(value); }
    template<typename LifeCycleT = LifeCycle>
    DisconnectSourceServerResult& WithLifeCycle(LifeCycleT&& value) { SetLifeCycle(std::forward<LifeCycleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Recovery Instance associated with this Source Server.</p>
     */
    inline const Aws::String& GetRecoveryInstanceId() const { return m_recoveryInstanceId; }
    template<typename RecoveryInstanceIdT = Aws::String>
    void SetRecoveryInstanceId(RecoveryInstanceIdT&& value) { m_recoveryInstanceIdHasBeenSet = true; m_recoveryInstanceId = std::forward<RecoveryInstanceIdT>(value); }
    template<typename RecoveryInstanceIdT = Aws::String>
    DisconnectSourceServerResult& WithRecoveryInstanceId(RecoveryInstanceIdT&& value) { SetRecoveryInstanceId(std::forward<RecoveryInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication direction of the Source Server.</p>
     */
    inline ReplicationDirection GetReplicationDirection() const { return m_replicationDirection; }
    inline void SetReplicationDirection(ReplicationDirection value) { m_replicationDirectionHasBeenSet = true; m_replicationDirection = value; }
    inline DisconnectSourceServerResult& WithReplicationDirection(ReplicationDirection value) { SetReplicationDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For EC2-originated Source Servers which have been failed over and then failed
     * back, this value will mean the ARN of the Source Server on the opposite
     * replication direction.</p>
     */
    inline const Aws::String& GetReversedDirectionSourceServerArn() const { return m_reversedDirectionSourceServerArn; }
    template<typename ReversedDirectionSourceServerArnT = Aws::String>
    void SetReversedDirectionSourceServerArn(ReversedDirectionSourceServerArnT&& value) { m_reversedDirectionSourceServerArnHasBeenSet = true; m_reversedDirectionSourceServerArn = std::forward<ReversedDirectionSourceServerArnT>(value); }
    template<typename ReversedDirectionSourceServerArnT = Aws::String>
    DisconnectSourceServerResult& WithReversedDirectionSourceServerArn(ReversedDirectionSourceServerArnT&& value) { SetReversedDirectionSourceServerArn(std::forward<ReversedDirectionSourceServerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source cloud properties of the Source Server.</p>
     */
    inline const SourceCloudProperties& GetSourceCloudProperties() const { return m_sourceCloudProperties; }
    template<typename SourceCloudPropertiesT = SourceCloudProperties>
    void SetSourceCloudProperties(SourceCloudPropertiesT&& value) { m_sourceCloudPropertiesHasBeenSet = true; m_sourceCloudProperties = std::forward<SourceCloudPropertiesT>(value); }
    template<typename SourceCloudPropertiesT = SourceCloudProperties>
    DisconnectSourceServerResult& WithSourceCloudProperties(SourceCloudPropertiesT&& value) { SetSourceCloudProperties(std::forward<SourceCloudPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the Source Network which is protecting this Source Server's
     * network.</p>
     */
    inline const Aws::String& GetSourceNetworkID() const { return m_sourceNetworkID; }
    template<typename SourceNetworkIDT = Aws::String>
    void SetSourceNetworkID(SourceNetworkIDT&& value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID = std::forward<SourceNetworkIDT>(value); }
    template<typename SourceNetworkIDT = Aws::String>
    DisconnectSourceServerResult& WithSourceNetworkID(SourceNetworkIDT&& value) { SetSourceNetworkID(std::forward<SourceNetworkIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source properties of the Source Server.</p>
     */
    inline const SourceProperties& GetSourceProperties() const { return m_sourceProperties; }
    template<typename SourcePropertiesT = SourceProperties>
    void SetSourceProperties(SourcePropertiesT&& value) { m_sourcePropertiesHasBeenSet = true; m_sourceProperties = std::forward<SourcePropertiesT>(value); }
    template<typename SourcePropertiesT = SourceProperties>
    DisconnectSourceServerResult& WithSourceProperties(SourcePropertiesT&& value) { SetSourceProperties(std::forward<SourcePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Source Server.</p>
     */
    inline const Aws::String& GetSourceServerID() const { return m_sourceServerID; }
    template<typename SourceServerIDT = Aws::String>
    void SetSourceServerID(SourceServerIDT&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::forward<SourceServerIDT>(value); }
    template<typename SourceServerIDT = Aws::String>
    DisconnectSourceServerResult& WithSourceServerID(SourceServerIDT&& value) { SetSourceServerID(std::forward<SourceServerIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The staging area of the source server.</p>
     */
    inline const StagingArea& GetStagingArea() const { return m_stagingArea; }
    template<typename StagingAreaT = StagingArea>
    void SetStagingArea(StagingAreaT&& value) { m_stagingAreaHasBeenSet = true; m_stagingArea = std::forward<StagingAreaT>(value); }
    template<typename StagingAreaT = StagingArea>
    DisconnectSourceServerResult& WithStagingArea(StagingAreaT&& value) { SetStagingArea(std::forward<StagingAreaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the Source Server.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DisconnectSourceServerResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DisconnectSourceServerResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DisconnectSourceServerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    DataReplicationInfo m_dataReplicationInfo;
    bool m_dataReplicationInfoHasBeenSet = false;

    LastLaunchResult m_lastLaunchResult{LastLaunchResult::NOT_SET};
    bool m_lastLaunchResultHasBeenSet = false;

    LifeCycle m_lifeCycle;
    bool m_lifeCycleHasBeenSet = false;

    Aws::String m_recoveryInstanceId;
    bool m_recoveryInstanceIdHasBeenSet = false;

    ReplicationDirection m_replicationDirection{ReplicationDirection::NOT_SET};
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
