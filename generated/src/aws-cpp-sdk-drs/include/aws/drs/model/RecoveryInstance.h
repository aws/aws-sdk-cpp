/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/RecoveryInstanceDataReplicationInfo.h>
#include <aws/drs/model/EC2InstanceState.h>
#include <aws/drs/model/RecoveryInstanceFailback.h>
#include <aws/drs/model/OriginEnvironment.h>
#include <aws/drs/model/RecoveryInstanceProperties.h>
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

  /**
   * <p>A Recovery Instance is a replica of a Source Server running on
   * EC2.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RecoveryInstance">AWS
   * API Reference</a></p>
   */
  class RecoveryInstance
  {
  public:
    AWS_DRS_API RecoveryInstance() = default;
    AWS_DRS_API RecoveryInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API RecoveryInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the DRS agent installed on the recovery instance</p>
     */
    inline const Aws::String& GetAgentVersion() const { return m_agentVersion; }
    inline bool AgentVersionHasBeenSet() const { return m_agentVersionHasBeenSet; }
    template<typename AgentVersionT = Aws::String>
    void SetAgentVersion(AgentVersionT&& value) { m_agentVersionHasBeenSet = true; m_agentVersion = std::forward<AgentVersionT>(value); }
    template<typename AgentVersionT = Aws::String>
    RecoveryInstance& WithAgentVersion(AgentVersionT&& value) { SetAgentVersion(std::forward<AgentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Recovery Instance.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    RecoveryInstance& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Data Replication Info of the Recovery Instance.</p>
     */
    inline const RecoveryInstanceDataReplicationInfo& GetDataReplicationInfo() const { return m_dataReplicationInfo; }
    inline bool DataReplicationInfoHasBeenSet() const { return m_dataReplicationInfoHasBeenSet; }
    template<typename DataReplicationInfoT = RecoveryInstanceDataReplicationInfo>
    void SetDataReplicationInfo(DataReplicationInfoT&& value) { m_dataReplicationInfoHasBeenSet = true; m_dataReplicationInfo = std::forward<DataReplicationInfoT>(value); }
    template<typename DataReplicationInfoT = RecoveryInstanceDataReplicationInfo>
    RecoveryInstance& WithDataReplicationInfo(DataReplicationInfoT&& value) { SetDataReplicationInfo(std::forward<DataReplicationInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EC2 instance ID of the Recovery Instance.</p>
     */
    inline const Aws::String& GetEc2InstanceID() const { return m_ec2InstanceID; }
    inline bool Ec2InstanceIDHasBeenSet() const { return m_ec2InstanceIDHasBeenSet; }
    template<typename Ec2InstanceIDT = Aws::String>
    void SetEc2InstanceID(Ec2InstanceIDT&& value) { m_ec2InstanceIDHasBeenSet = true; m_ec2InstanceID = std::forward<Ec2InstanceIDT>(value); }
    template<typename Ec2InstanceIDT = Aws::String>
    RecoveryInstance& WithEc2InstanceID(Ec2InstanceIDT&& value) { SetEc2InstanceID(std::forward<Ec2InstanceIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the EC2 instance for this Recovery Instance.</p>
     */
    inline EC2InstanceState GetEc2InstanceState() const { return m_ec2InstanceState; }
    inline bool Ec2InstanceStateHasBeenSet() const { return m_ec2InstanceStateHasBeenSet; }
    inline void SetEc2InstanceState(EC2InstanceState value) { m_ec2InstanceStateHasBeenSet = true; m_ec2InstanceState = value; }
    inline RecoveryInstance& WithEc2InstanceState(EC2InstanceState value) { SetEc2InstanceState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object representing failback related information of the Recovery
     * Instance.</p>
     */
    inline const RecoveryInstanceFailback& GetFailback() const { return m_failback; }
    inline bool FailbackHasBeenSet() const { return m_failbackHasBeenSet; }
    template<typename FailbackT = RecoveryInstanceFailback>
    void SetFailback(FailbackT&& value) { m_failbackHasBeenSet = true; m_failback = std::forward<FailbackT>(value); }
    template<typename FailbackT = RecoveryInstanceFailback>
    RecoveryInstance& WithFailback(FailbackT&& value) { SetFailback(std::forward<FailbackT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether this Recovery Instance was created for a drill or for an actual
     * Recovery event.</p>
     */
    inline bool GetIsDrill() const { return m_isDrill; }
    inline bool IsDrillHasBeenSet() const { return m_isDrillHasBeenSet; }
    inline void SetIsDrill(bool value) { m_isDrillHasBeenSet = true; m_isDrill = value; }
    inline RecoveryInstance& WithIsDrill(bool value) { SetIsDrill(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Job that created the Recovery Instance.</p>
     */
    inline const Aws::String& GetJobID() const { return m_jobID; }
    inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }
    template<typename JobIDT = Aws::String>
    void SetJobID(JobIDT&& value) { m_jobIDHasBeenSet = true; m_jobID = std::forward<JobIDT>(value); }
    template<typename JobIDT = Aws::String>
    RecoveryInstance& WithJobID(JobIDT&& value) { SetJobID(std::forward<JobIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS availability zone associated with the recovery instance.</p>
     */
    inline const Aws::String& GetOriginAvailabilityZone() const { return m_originAvailabilityZone; }
    inline bool OriginAvailabilityZoneHasBeenSet() const { return m_originAvailabilityZoneHasBeenSet; }
    template<typename OriginAvailabilityZoneT = Aws::String>
    void SetOriginAvailabilityZone(OriginAvailabilityZoneT&& value) { m_originAvailabilityZoneHasBeenSet = true; m_originAvailabilityZone = std::forward<OriginAvailabilityZoneT>(value); }
    template<typename OriginAvailabilityZoneT = Aws::String>
    RecoveryInstance& WithOriginAvailabilityZone(OriginAvailabilityZoneT&& value) { SetOriginAvailabilityZone(std::forward<OriginAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Environment (On Premises / AWS) of the instance that the recovery instance
     * originated from.</p>
     */
    inline OriginEnvironment GetOriginEnvironment() const { return m_originEnvironment; }
    inline bool OriginEnvironmentHasBeenSet() const { return m_originEnvironmentHasBeenSet; }
    inline void SetOriginEnvironment(OriginEnvironment value) { m_originEnvironmentHasBeenSet = true; m_originEnvironment = value; }
    inline RecoveryInstance& WithOriginEnvironment(OriginEnvironment value) { SetOriginEnvironment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the Point in Time (PIT) snapshot that this Recovery
     * Instance was launched from.</p>
     */
    inline const Aws::String& GetPointInTimeSnapshotDateTime() const { return m_pointInTimeSnapshotDateTime; }
    inline bool PointInTimeSnapshotDateTimeHasBeenSet() const { return m_pointInTimeSnapshotDateTimeHasBeenSet; }
    template<typename PointInTimeSnapshotDateTimeT = Aws::String>
    void SetPointInTimeSnapshotDateTime(PointInTimeSnapshotDateTimeT&& value) { m_pointInTimeSnapshotDateTimeHasBeenSet = true; m_pointInTimeSnapshotDateTime = std::forward<PointInTimeSnapshotDateTimeT>(value); }
    template<typename PointInTimeSnapshotDateTimeT = Aws::String>
    RecoveryInstance& WithPointInTimeSnapshotDateTime(PointInTimeSnapshotDateTimeT&& value) { SetPointInTimeSnapshotDateTime(std::forward<PointInTimeSnapshotDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Recovery Instance.</p>
     */
    inline const Aws::String& GetRecoveryInstanceID() const { return m_recoveryInstanceID; }
    inline bool RecoveryInstanceIDHasBeenSet() const { return m_recoveryInstanceIDHasBeenSet; }
    template<typename RecoveryInstanceIDT = Aws::String>
    void SetRecoveryInstanceID(RecoveryInstanceIDT&& value) { m_recoveryInstanceIDHasBeenSet = true; m_recoveryInstanceID = std::forward<RecoveryInstanceIDT>(value); }
    template<typename RecoveryInstanceIDT = Aws::String>
    RecoveryInstance& WithRecoveryInstanceID(RecoveryInstanceIDT&& value) { SetRecoveryInstanceID(std::forward<RecoveryInstanceIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Properties of the Recovery Instance machine.</p>
     */
    inline const RecoveryInstanceProperties& GetRecoveryInstanceProperties() const { return m_recoveryInstanceProperties; }
    inline bool RecoveryInstancePropertiesHasBeenSet() const { return m_recoveryInstancePropertiesHasBeenSet; }
    template<typename RecoveryInstancePropertiesT = RecoveryInstanceProperties>
    void SetRecoveryInstanceProperties(RecoveryInstancePropertiesT&& value) { m_recoveryInstancePropertiesHasBeenSet = true; m_recoveryInstanceProperties = std::forward<RecoveryInstancePropertiesT>(value); }
    template<typename RecoveryInstancePropertiesT = RecoveryInstanceProperties>
    RecoveryInstance& WithRecoveryInstanceProperties(RecoveryInstancePropertiesT&& value) { SetRecoveryInstanceProperties(std::forward<RecoveryInstancePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the source Outpost</p>
     */
    inline const Aws::String& GetSourceOutpostArn() const { return m_sourceOutpostArn; }
    inline bool SourceOutpostArnHasBeenSet() const { return m_sourceOutpostArnHasBeenSet; }
    template<typename SourceOutpostArnT = Aws::String>
    void SetSourceOutpostArn(SourceOutpostArnT&& value) { m_sourceOutpostArnHasBeenSet = true; m_sourceOutpostArn = std::forward<SourceOutpostArnT>(value); }
    template<typename SourceOutpostArnT = Aws::String>
    RecoveryInstance& WithSourceOutpostArn(SourceOutpostArnT&& value) { SetSourceOutpostArn(std::forward<SourceOutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Source Server ID that this Recovery Instance is associated with.</p>
     */
    inline const Aws::String& GetSourceServerID() const { return m_sourceServerID; }
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }
    template<typename SourceServerIDT = Aws::String>
    void SetSourceServerID(SourceServerIDT&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::forward<SourceServerIDT>(value); }
    template<typename SourceServerIDT = Aws::String>
    RecoveryInstance& WithSourceServerID(SourceServerIDT&& value) { SetSourceServerID(std::forward<SourceServerIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of tags that are associated with the Recovery Instance.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    RecoveryInstance& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    RecoveryInstance& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_agentVersion;
    bool m_agentVersionHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    RecoveryInstanceDataReplicationInfo m_dataReplicationInfo;
    bool m_dataReplicationInfoHasBeenSet = false;

    Aws::String m_ec2InstanceID;
    bool m_ec2InstanceIDHasBeenSet = false;

    EC2InstanceState m_ec2InstanceState{EC2InstanceState::NOT_SET};
    bool m_ec2InstanceStateHasBeenSet = false;

    RecoveryInstanceFailback m_failback;
    bool m_failbackHasBeenSet = false;

    bool m_isDrill{false};
    bool m_isDrillHasBeenSet = false;

    Aws::String m_jobID;
    bool m_jobIDHasBeenSet = false;

    Aws::String m_originAvailabilityZone;
    bool m_originAvailabilityZoneHasBeenSet = false;

    OriginEnvironment m_originEnvironment{OriginEnvironment::NOT_SET};
    bool m_originEnvironmentHasBeenSet = false;

    Aws::String m_pointInTimeSnapshotDateTime;
    bool m_pointInTimeSnapshotDateTimeHasBeenSet = false;

    Aws::String m_recoveryInstanceID;
    bool m_recoveryInstanceIDHasBeenSet = false;

    RecoveryInstanceProperties m_recoveryInstanceProperties;
    bool m_recoveryInstancePropertiesHasBeenSet = false;

    Aws::String m_sourceOutpostArn;
    bool m_sourceOutpostArnHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
