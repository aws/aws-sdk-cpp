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
    AWS_DRS_API DisconnectSourceServerResult();
    AWS_DRS_API DisconnectSourceServerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API DisconnectSourceServerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The version of the DRS agent installed on the source server</p>
     */
    inline const Aws::String& GetAgentVersion() const{ return m_agentVersion; }
    inline void SetAgentVersion(const Aws::String& value) { m_agentVersion = value; }
    inline void SetAgentVersion(Aws::String&& value) { m_agentVersion = std::move(value); }
    inline void SetAgentVersion(const char* value) { m_agentVersion.assign(value); }
    inline DisconnectSourceServerResult& WithAgentVersion(const Aws::String& value) { SetAgentVersion(value); return *this;}
    inline DisconnectSourceServerResult& WithAgentVersion(Aws::String&& value) { SetAgentVersion(std::move(value)); return *this;}
    inline DisconnectSourceServerResult& WithAgentVersion(const char* value) { SetAgentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Source Server.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DisconnectSourceServerResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DisconnectSourceServerResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DisconnectSourceServerResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Data Replication Info of the Source Server.</p>
     */
    inline const DataReplicationInfo& GetDataReplicationInfo() const{ return m_dataReplicationInfo; }
    inline void SetDataReplicationInfo(const DataReplicationInfo& value) { m_dataReplicationInfo = value; }
    inline void SetDataReplicationInfo(DataReplicationInfo&& value) { m_dataReplicationInfo = std::move(value); }
    inline DisconnectSourceServerResult& WithDataReplicationInfo(const DataReplicationInfo& value) { SetDataReplicationInfo(value); return *this;}
    inline DisconnectSourceServerResult& WithDataReplicationInfo(DataReplicationInfo&& value) { SetDataReplicationInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the last recovery launch of this Source Server.</p>
     */
    inline const LastLaunchResult& GetLastLaunchResult() const{ return m_lastLaunchResult; }
    inline void SetLastLaunchResult(const LastLaunchResult& value) { m_lastLaunchResult = value; }
    inline void SetLastLaunchResult(LastLaunchResult&& value) { m_lastLaunchResult = std::move(value); }
    inline DisconnectSourceServerResult& WithLastLaunchResult(const LastLaunchResult& value) { SetLastLaunchResult(value); return *this;}
    inline DisconnectSourceServerResult& WithLastLaunchResult(LastLaunchResult&& value) { SetLastLaunchResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle information of this Source Server.</p>
     */
    inline const LifeCycle& GetLifeCycle() const{ return m_lifeCycle; }
    inline void SetLifeCycle(const LifeCycle& value) { m_lifeCycle = value; }
    inline void SetLifeCycle(LifeCycle&& value) { m_lifeCycle = std::move(value); }
    inline DisconnectSourceServerResult& WithLifeCycle(const LifeCycle& value) { SetLifeCycle(value); return *this;}
    inline DisconnectSourceServerResult& WithLifeCycle(LifeCycle&& value) { SetLifeCycle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Recovery Instance associated with this Source Server.</p>
     */
    inline const Aws::String& GetRecoveryInstanceId() const{ return m_recoveryInstanceId; }
    inline void SetRecoveryInstanceId(const Aws::String& value) { m_recoveryInstanceId = value; }
    inline void SetRecoveryInstanceId(Aws::String&& value) { m_recoveryInstanceId = std::move(value); }
    inline void SetRecoveryInstanceId(const char* value) { m_recoveryInstanceId.assign(value); }
    inline DisconnectSourceServerResult& WithRecoveryInstanceId(const Aws::String& value) { SetRecoveryInstanceId(value); return *this;}
    inline DisconnectSourceServerResult& WithRecoveryInstanceId(Aws::String&& value) { SetRecoveryInstanceId(std::move(value)); return *this;}
    inline DisconnectSourceServerResult& WithRecoveryInstanceId(const char* value) { SetRecoveryInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Replication direction of the Source Server.</p>
     */
    inline const ReplicationDirection& GetReplicationDirection() const{ return m_replicationDirection; }
    inline void SetReplicationDirection(const ReplicationDirection& value) { m_replicationDirection = value; }
    inline void SetReplicationDirection(ReplicationDirection&& value) { m_replicationDirection = std::move(value); }
    inline DisconnectSourceServerResult& WithReplicationDirection(const ReplicationDirection& value) { SetReplicationDirection(value); return *this;}
    inline DisconnectSourceServerResult& WithReplicationDirection(ReplicationDirection&& value) { SetReplicationDirection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For EC2-originated Source Servers which have been failed over and then failed
     * back, this value will mean the ARN of the Source Server on the opposite
     * replication direction.</p>
     */
    inline const Aws::String& GetReversedDirectionSourceServerArn() const{ return m_reversedDirectionSourceServerArn; }
    inline void SetReversedDirectionSourceServerArn(const Aws::String& value) { m_reversedDirectionSourceServerArn = value; }
    inline void SetReversedDirectionSourceServerArn(Aws::String&& value) { m_reversedDirectionSourceServerArn = std::move(value); }
    inline void SetReversedDirectionSourceServerArn(const char* value) { m_reversedDirectionSourceServerArn.assign(value); }
    inline DisconnectSourceServerResult& WithReversedDirectionSourceServerArn(const Aws::String& value) { SetReversedDirectionSourceServerArn(value); return *this;}
    inline DisconnectSourceServerResult& WithReversedDirectionSourceServerArn(Aws::String&& value) { SetReversedDirectionSourceServerArn(std::move(value)); return *this;}
    inline DisconnectSourceServerResult& WithReversedDirectionSourceServerArn(const char* value) { SetReversedDirectionSourceServerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source cloud properties of the Source Server.</p>
     */
    inline const SourceCloudProperties& GetSourceCloudProperties() const{ return m_sourceCloudProperties; }
    inline void SetSourceCloudProperties(const SourceCloudProperties& value) { m_sourceCloudProperties = value; }
    inline void SetSourceCloudProperties(SourceCloudProperties&& value) { m_sourceCloudProperties = std::move(value); }
    inline DisconnectSourceServerResult& WithSourceCloudProperties(const SourceCloudProperties& value) { SetSourceCloudProperties(value); return *this;}
    inline DisconnectSourceServerResult& WithSourceCloudProperties(SourceCloudProperties&& value) { SetSourceCloudProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the Source Network which is protecting this Source Server's
     * network.</p>
     */
    inline const Aws::String& GetSourceNetworkID() const{ return m_sourceNetworkID; }
    inline void SetSourceNetworkID(const Aws::String& value) { m_sourceNetworkID = value; }
    inline void SetSourceNetworkID(Aws::String&& value) { m_sourceNetworkID = std::move(value); }
    inline void SetSourceNetworkID(const char* value) { m_sourceNetworkID.assign(value); }
    inline DisconnectSourceServerResult& WithSourceNetworkID(const Aws::String& value) { SetSourceNetworkID(value); return *this;}
    inline DisconnectSourceServerResult& WithSourceNetworkID(Aws::String&& value) { SetSourceNetworkID(std::move(value)); return *this;}
    inline DisconnectSourceServerResult& WithSourceNetworkID(const char* value) { SetSourceNetworkID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source properties of the Source Server.</p>
     */
    inline const SourceProperties& GetSourceProperties() const{ return m_sourceProperties; }
    inline void SetSourceProperties(const SourceProperties& value) { m_sourceProperties = value; }
    inline void SetSourceProperties(SourceProperties&& value) { m_sourceProperties = std::move(value); }
    inline DisconnectSourceServerResult& WithSourceProperties(const SourceProperties& value) { SetSourceProperties(value); return *this;}
    inline DisconnectSourceServerResult& WithSourceProperties(SourceProperties&& value) { SetSourceProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Source Server.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerID = value; }
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerID = std::move(value); }
    inline void SetSourceServerID(const char* value) { m_sourceServerID.assign(value); }
    inline DisconnectSourceServerResult& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}
    inline DisconnectSourceServerResult& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}
    inline DisconnectSourceServerResult& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The staging area of the source server.</p>
     */
    inline const StagingArea& GetStagingArea() const{ return m_stagingArea; }
    inline void SetStagingArea(const StagingArea& value) { m_stagingArea = value; }
    inline void SetStagingArea(StagingArea&& value) { m_stagingArea = std::move(value); }
    inline DisconnectSourceServerResult& WithStagingArea(const StagingArea& value) { SetStagingArea(value); return *this;}
    inline DisconnectSourceServerResult& WithStagingArea(StagingArea&& value) { SetStagingArea(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the Source Server.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DisconnectSourceServerResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DisconnectSourceServerResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DisconnectSourceServerResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DisconnectSourceServerResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DisconnectSourceServerResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DisconnectSourceServerResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DisconnectSourceServerResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DisconnectSourceServerResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DisconnectSourceServerResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DisconnectSourceServerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DisconnectSourceServerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DisconnectSourceServerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_agentVersion;

    Aws::String m_arn;

    DataReplicationInfo m_dataReplicationInfo;

    LastLaunchResult m_lastLaunchResult;

    LifeCycle m_lifeCycle;

    Aws::String m_recoveryInstanceId;

    ReplicationDirection m_replicationDirection;

    Aws::String m_reversedDirectionSourceServerArn;

    SourceCloudProperties m_sourceCloudProperties;

    Aws::String m_sourceNetworkID;

    SourceProperties m_sourceProperties;

    Aws::String m_sourceServerID;

    StagingArea m_stagingArea;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
