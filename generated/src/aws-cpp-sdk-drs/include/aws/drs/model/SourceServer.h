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


    /**
     * <p>The ARN of the Source Server.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the Source Server.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the Source Server.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the Source Server.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the Source Server.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the Source Server.</p>
     */
    inline SourceServer& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the Source Server.</p>
     */
    inline SourceServer& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Source Server.</p>
     */
    inline SourceServer& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Data Replication Info of the Source Server.</p>
     */
    inline const DataReplicationInfo& GetDataReplicationInfo() const{ return m_dataReplicationInfo; }

    /**
     * <p>The Data Replication Info of the Source Server.</p>
     */
    inline bool DataReplicationInfoHasBeenSet() const { return m_dataReplicationInfoHasBeenSet; }

    /**
     * <p>The Data Replication Info of the Source Server.</p>
     */
    inline void SetDataReplicationInfo(const DataReplicationInfo& value) { m_dataReplicationInfoHasBeenSet = true; m_dataReplicationInfo = value; }

    /**
     * <p>The Data Replication Info of the Source Server.</p>
     */
    inline void SetDataReplicationInfo(DataReplicationInfo&& value) { m_dataReplicationInfoHasBeenSet = true; m_dataReplicationInfo = std::move(value); }

    /**
     * <p>The Data Replication Info of the Source Server.</p>
     */
    inline SourceServer& WithDataReplicationInfo(const DataReplicationInfo& value) { SetDataReplicationInfo(value); return *this;}

    /**
     * <p>The Data Replication Info of the Source Server.</p>
     */
    inline SourceServer& WithDataReplicationInfo(DataReplicationInfo&& value) { SetDataReplicationInfo(std::move(value)); return *this;}


    /**
     * <p>The status of the last recovery launch of this Source Server.</p>
     */
    inline const LastLaunchResult& GetLastLaunchResult() const{ return m_lastLaunchResult; }

    /**
     * <p>The status of the last recovery launch of this Source Server.</p>
     */
    inline bool LastLaunchResultHasBeenSet() const { return m_lastLaunchResultHasBeenSet; }

    /**
     * <p>The status of the last recovery launch of this Source Server.</p>
     */
    inline void SetLastLaunchResult(const LastLaunchResult& value) { m_lastLaunchResultHasBeenSet = true; m_lastLaunchResult = value; }

    /**
     * <p>The status of the last recovery launch of this Source Server.</p>
     */
    inline void SetLastLaunchResult(LastLaunchResult&& value) { m_lastLaunchResultHasBeenSet = true; m_lastLaunchResult = std::move(value); }

    /**
     * <p>The status of the last recovery launch of this Source Server.</p>
     */
    inline SourceServer& WithLastLaunchResult(const LastLaunchResult& value) { SetLastLaunchResult(value); return *this;}

    /**
     * <p>The status of the last recovery launch of this Source Server.</p>
     */
    inline SourceServer& WithLastLaunchResult(LastLaunchResult&& value) { SetLastLaunchResult(std::move(value)); return *this;}


    /**
     * <p>The lifecycle information of this Source Server.</p>
     */
    inline const LifeCycle& GetLifeCycle() const{ return m_lifeCycle; }

    /**
     * <p>The lifecycle information of this Source Server.</p>
     */
    inline bool LifeCycleHasBeenSet() const { return m_lifeCycleHasBeenSet; }

    /**
     * <p>The lifecycle information of this Source Server.</p>
     */
    inline void SetLifeCycle(const LifeCycle& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = value; }

    /**
     * <p>The lifecycle information of this Source Server.</p>
     */
    inline void SetLifeCycle(LifeCycle&& value) { m_lifeCycleHasBeenSet = true; m_lifeCycle = std::move(value); }

    /**
     * <p>The lifecycle information of this Source Server.</p>
     */
    inline SourceServer& WithLifeCycle(const LifeCycle& value) { SetLifeCycle(value); return *this;}

    /**
     * <p>The lifecycle information of this Source Server.</p>
     */
    inline SourceServer& WithLifeCycle(LifeCycle&& value) { SetLifeCycle(std::move(value)); return *this;}


    /**
     * <p>The ID of the Recovery Instance associated with this Source Server.</p>
     */
    inline const Aws::String& GetRecoveryInstanceId() const{ return m_recoveryInstanceId; }

    /**
     * <p>The ID of the Recovery Instance associated with this Source Server.</p>
     */
    inline bool RecoveryInstanceIdHasBeenSet() const { return m_recoveryInstanceIdHasBeenSet; }

    /**
     * <p>The ID of the Recovery Instance associated with this Source Server.</p>
     */
    inline void SetRecoveryInstanceId(const Aws::String& value) { m_recoveryInstanceIdHasBeenSet = true; m_recoveryInstanceId = value; }

    /**
     * <p>The ID of the Recovery Instance associated with this Source Server.</p>
     */
    inline void SetRecoveryInstanceId(Aws::String&& value) { m_recoveryInstanceIdHasBeenSet = true; m_recoveryInstanceId = std::move(value); }

    /**
     * <p>The ID of the Recovery Instance associated with this Source Server.</p>
     */
    inline void SetRecoveryInstanceId(const char* value) { m_recoveryInstanceIdHasBeenSet = true; m_recoveryInstanceId.assign(value); }

    /**
     * <p>The ID of the Recovery Instance associated with this Source Server.</p>
     */
    inline SourceServer& WithRecoveryInstanceId(const Aws::String& value) { SetRecoveryInstanceId(value); return *this;}

    /**
     * <p>The ID of the Recovery Instance associated with this Source Server.</p>
     */
    inline SourceServer& WithRecoveryInstanceId(Aws::String&& value) { SetRecoveryInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Recovery Instance associated with this Source Server.</p>
     */
    inline SourceServer& WithRecoveryInstanceId(const char* value) { SetRecoveryInstanceId(value); return *this;}


    /**
     * <p>Replication direction of the Source Server.</p>
     */
    inline const ReplicationDirection& GetReplicationDirection() const{ return m_replicationDirection; }

    /**
     * <p>Replication direction of the Source Server.</p>
     */
    inline bool ReplicationDirectionHasBeenSet() const { return m_replicationDirectionHasBeenSet; }

    /**
     * <p>Replication direction of the Source Server.</p>
     */
    inline void SetReplicationDirection(const ReplicationDirection& value) { m_replicationDirectionHasBeenSet = true; m_replicationDirection = value; }

    /**
     * <p>Replication direction of the Source Server.</p>
     */
    inline void SetReplicationDirection(ReplicationDirection&& value) { m_replicationDirectionHasBeenSet = true; m_replicationDirection = std::move(value); }

    /**
     * <p>Replication direction of the Source Server.</p>
     */
    inline SourceServer& WithReplicationDirection(const ReplicationDirection& value) { SetReplicationDirection(value); return *this;}

    /**
     * <p>Replication direction of the Source Server.</p>
     */
    inline SourceServer& WithReplicationDirection(ReplicationDirection&& value) { SetReplicationDirection(std::move(value)); return *this;}


    /**
     * <p>For EC2-originated Source Servers which have been failed over and then failed
     * back, this value will mean the ARN of the Source Server on the opposite
     * replication direction.</p>
     */
    inline const Aws::String& GetReversedDirectionSourceServerArn() const{ return m_reversedDirectionSourceServerArn; }

    /**
     * <p>For EC2-originated Source Servers which have been failed over and then failed
     * back, this value will mean the ARN of the Source Server on the opposite
     * replication direction.</p>
     */
    inline bool ReversedDirectionSourceServerArnHasBeenSet() const { return m_reversedDirectionSourceServerArnHasBeenSet; }

    /**
     * <p>For EC2-originated Source Servers which have been failed over and then failed
     * back, this value will mean the ARN of the Source Server on the opposite
     * replication direction.</p>
     */
    inline void SetReversedDirectionSourceServerArn(const Aws::String& value) { m_reversedDirectionSourceServerArnHasBeenSet = true; m_reversedDirectionSourceServerArn = value; }

    /**
     * <p>For EC2-originated Source Servers which have been failed over and then failed
     * back, this value will mean the ARN of the Source Server on the opposite
     * replication direction.</p>
     */
    inline void SetReversedDirectionSourceServerArn(Aws::String&& value) { m_reversedDirectionSourceServerArnHasBeenSet = true; m_reversedDirectionSourceServerArn = std::move(value); }

    /**
     * <p>For EC2-originated Source Servers which have been failed over and then failed
     * back, this value will mean the ARN of the Source Server on the opposite
     * replication direction.</p>
     */
    inline void SetReversedDirectionSourceServerArn(const char* value) { m_reversedDirectionSourceServerArnHasBeenSet = true; m_reversedDirectionSourceServerArn.assign(value); }

    /**
     * <p>For EC2-originated Source Servers which have been failed over and then failed
     * back, this value will mean the ARN of the Source Server on the opposite
     * replication direction.</p>
     */
    inline SourceServer& WithReversedDirectionSourceServerArn(const Aws::String& value) { SetReversedDirectionSourceServerArn(value); return *this;}

    /**
     * <p>For EC2-originated Source Servers which have been failed over and then failed
     * back, this value will mean the ARN of the Source Server on the opposite
     * replication direction.</p>
     */
    inline SourceServer& WithReversedDirectionSourceServerArn(Aws::String&& value) { SetReversedDirectionSourceServerArn(std::move(value)); return *this;}

    /**
     * <p>For EC2-originated Source Servers which have been failed over and then failed
     * back, this value will mean the ARN of the Source Server on the opposite
     * replication direction.</p>
     */
    inline SourceServer& WithReversedDirectionSourceServerArn(const char* value) { SetReversedDirectionSourceServerArn(value); return *this;}


    /**
     * <p>Source cloud properties of the Source Server.</p>
     */
    inline const SourceCloudProperties& GetSourceCloudProperties() const{ return m_sourceCloudProperties; }

    /**
     * <p>Source cloud properties of the Source Server.</p>
     */
    inline bool SourceCloudPropertiesHasBeenSet() const { return m_sourceCloudPropertiesHasBeenSet; }

    /**
     * <p>Source cloud properties of the Source Server.</p>
     */
    inline void SetSourceCloudProperties(const SourceCloudProperties& value) { m_sourceCloudPropertiesHasBeenSet = true; m_sourceCloudProperties = value; }

    /**
     * <p>Source cloud properties of the Source Server.</p>
     */
    inline void SetSourceCloudProperties(SourceCloudProperties&& value) { m_sourceCloudPropertiesHasBeenSet = true; m_sourceCloudProperties = std::move(value); }

    /**
     * <p>Source cloud properties of the Source Server.</p>
     */
    inline SourceServer& WithSourceCloudProperties(const SourceCloudProperties& value) { SetSourceCloudProperties(value); return *this;}

    /**
     * <p>Source cloud properties of the Source Server.</p>
     */
    inline SourceServer& WithSourceCloudProperties(SourceCloudProperties&& value) { SetSourceCloudProperties(std::move(value)); return *this;}


    /**
     * <p>The source properties of the Source Server.</p>
     */
    inline const SourceProperties& GetSourceProperties() const{ return m_sourceProperties; }

    /**
     * <p>The source properties of the Source Server.</p>
     */
    inline bool SourcePropertiesHasBeenSet() const { return m_sourcePropertiesHasBeenSet; }

    /**
     * <p>The source properties of the Source Server.</p>
     */
    inline void SetSourceProperties(const SourceProperties& value) { m_sourcePropertiesHasBeenSet = true; m_sourceProperties = value; }

    /**
     * <p>The source properties of the Source Server.</p>
     */
    inline void SetSourceProperties(SourceProperties&& value) { m_sourcePropertiesHasBeenSet = true; m_sourceProperties = std::move(value); }

    /**
     * <p>The source properties of the Source Server.</p>
     */
    inline SourceServer& WithSourceProperties(const SourceProperties& value) { SetSourceProperties(value); return *this;}

    /**
     * <p>The source properties of the Source Server.</p>
     */
    inline SourceServer& WithSourceProperties(SourceProperties&& value) { SetSourceProperties(std::move(value)); return *this;}


    /**
     * <p>The ID of the Source Server.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }

    /**
     * <p>The ID of the Source Server.</p>
     */
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }

    /**
     * <p>The ID of the Source Server.</p>
     */
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }

    /**
     * <p>The ID of the Source Server.</p>
     */
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }

    /**
     * <p>The ID of the Source Server.</p>
     */
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }

    /**
     * <p>The ID of the Source Server.</p>
     */
    inline SourceServer& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}

    /**
     * <p>The ID of the Source Server.</p>
     */
    inline SourceServer& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}

    /**
     * <p>The ID of the Source Server.</p>
     */
    inline SourceServer& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}


    /**
     * <p>The staging area of the source server.</p>
     */
    inline const StagingArea& GetStagingArea() const{ return m_stagingArea; }

    /**
     * <p>The staging area of the source server.</p>
     */
    inline bool StagingAreaHasBeenSet() const { return m_stagingAreaHasBeenSet; }

    /**
     * <p>The staging area of the source server.</p>
     */
    inline void SetStagingArea(const StagingArea& value) { m_stagingAreaHasBeenSet = true; m_stagingArea = value; }

    /**
     * <p>The staging area of the source server.</p>
     */
    inline void SetStagingArea(StagingArea&& value) { m_stagingAreaHasBeenSet = true; m_stagingArea = std::move(value); }

    /**
     * <p>The staging area of the source server.</p>
     */
    inline SourceServer& WithStagingArea(const StagingArea& value) { SetStagingArea(value); return *this;}

    /**
     * <p>The staging area of the source server.</p>
     */
    inline SourceServer& WithStagingArea(StagingArea&& value) { SetStagingArea(std::move(value)); return *this;}


    /**
     * <p>The tags associated with the Source Server.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the Source Server.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags associated with the Source Server.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags associated with the Source Server.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags associated with the Source Server.</p>
     */
    inline SourceServer& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the Source Server.</p>
     */
    inline SourceServer& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the Source Server.</p>
     */
    inline SourceServer& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags associated with the Source Server.</p>
     */
    inline SourceServer& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the Source Server.</p>
     */
    inline SourceServer& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the Source Server.</p>
     */
    inline SourceServer& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags associated with the Source Server.</p>
     */
    inline SourceServer& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the Source Server.</p>
     */
    inline SourceServer& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the Source Server.</p>
     */
    inline SourceServer& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

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

    SourceProperties m_sourceProperties;
    bool m_sourcePropertiesHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;

    StagingArea m_stagingArea;
    bool m_stagingAreaHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
