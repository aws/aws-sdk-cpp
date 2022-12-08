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
    AWS_DRS_API RecoveryInstance();
    AWS_DRS_API RecoveryInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API RecoveryInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the Recovery Instance.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the Recovery Instance.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the Recovery Instance.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the Recovery Instance.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the Recovery Instance.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the Recovery Instance.</p>
     */
    inline RecoveryInstance& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the Recovery Instance.</p>
     */
    inline RecoveryInstance& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Recovery Instance.</p>
     */
    inline RecoveryInstance& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Data Replication Info of the Recovery Instance.</p>
     */
    inline const RecoveryInstanceDataReplicationInfo& GetDataReplicationInfo() const{ return m_dataReplicationInfo; }

    /**
     * <p>The Data Replication Info of the Recovery Instance.</p>
     */
    inline bool DataReplicationInfoHasBeenSet() const { return m_dataReplicationInfoHasBeenSet; }

    /**
     * <p>The Data Replication Info of the Recovery Instance.</p>
     */
    inline void SetDataReplicationInfo(const RecoveryInstanceDataReplicationInfo& value) { m_dataReplicationInfoHasBeenSet = true; m_dataReplicationInfo = value; }

    /**
     * <p>The Data Replication Info of the Recovery Instance.</p>
     */
    inline void SetDataReplicationInfo(RecoveryInstanceDataReplicationInfo&& value) { m_dataReplicationInfoHasBeenSet = true; m_dataReplicationInfo = std::move(value); }

    /**
     * <p>The Data Replication Info of the Recovery Instance.</p>
     */
    inline RecoveryInstance& WithDataReplicationInfo(const RecoveryInstanceDataReplicationInfo& value) { SetDataReplicationInfo(value); return *this;}

    /**
     * <p>The Data Replication Info of the Recovery Instance.</p>
     */
    inline RecoveryInstance& WithDataReplicationInfo(RecoveryInstanceDataReplicationInfo&& value) { SetDataReplicationInfo(std::move(value)); return *this;}


    /**
     * <p>The EC2 instance ID of the Recovery Instance.</p>
     */
    inline const Aws::String& GetEc2InstanceID() const{ return m_ec2InstanceID; }

    /**
     * <p>The EC2 instance ID of the Recovery Instance.</p>
     */
    inline bool Ec2InstanceIDHasBeenSet() const { return m_ec2InstanceIDHasBeenSet; }

    /**
     * <p>The EC2 instance ID of the Recovery Instance.</p>
     */
    inline void SetEc2InstanceID(const Aws::String& value) { m_ec2InstanceIDHasBeenSet = true; m_ec2InstanceID = value; }

    /**
     * <p>The EC2 instance ID of the Recovery Instance.</p>
     */
    inline void SetEc2InstanceID(Aws::String&& value) { m_ec2InstanceIDHasBeenSet = true; m_ec2InstanceID = std::move(value); }

    /**
     * <p>The EC2 instance ID of the Recovery Instance.</p>
     */
    inline void SetEc2InstanceID(const char* value) { m_ec2InstanceIDHasBeenSet = true; m_ec2InstanceID.assign(value); }

    /**
     * <p>The EC2 instance ID of the Recovery Instance.</p>
     */
    inline RecoveryInstance& WithEc2InstanceID(const Aws::String& value) { SetEc2InstanceID(value); return *this;}

    /**
     * <p>The EC2 instance ID of the Recovery Instance.</p>
     */
    inline RecoveryInstance& WithEc2InstanceID(Aws::String&& value) { SetEc2InstanceID(std::move(value)); return *this;}

    /**
     * <p>The EC2 instance ID of the Recovery Instance.</p>
     */
    inline RecoveryInstance& WithEc2InstanceID(const char* value) { SetEc2InstanceID(value); return *this;}


    /**
     * <p>The state of the EC2 instance for this Recovery Instance.</p>
     */
    inline const EC2InstanceState& GetEc2InstanceState() const{ return m_ec2InstanceState; }

    /**
     * <p>The state of the EC2 instance for this Recovery Instance.</p>
     */
    inline bool Ec2InstanceStateHasBeenSet() const { return m_ec2InstanceStateHasBeenSet; }

    /**
     * <p>The state of the EC2 instance for this Recovery Instance.</p>
     */
    inline void SetEc2InstanceState(const EC2InstanceState& value) { m_ec2InstanceStateHasBeenSet = true; m_ec2InstanceState = value; }

    /**
     * <p>The state of the EC2 instance for this Recovery Instance.</p>
     */
    inline void SetEc2InstanceState(EC2InstanceState&& value) { m_ec2InstanceStateHasBeenSet = true; m_ec2InstanceState = std::move(value); }

    /**
     * <p>The state of the EC2 instance for this Recovery Instance.</p>
     */
    inline RecoveryInstance& WithEc2InstanceState(const EC2InstanceState& value) { SetEc2InstanceState(value); return *this;}

    /**
     * <p>The state of the EC2 instance for this Recovery Instance.</p>
     */
    inline RecoveryInstance& WithEc2InstanceState(EC2InstanceState&& value) { SetEc2InstanceState(std::move(value)); return *this;}


    /**
     * <p>An object representing failback related information of the Recovery
     * Instance.</p>
     */
    inline const RecoveryInstanceFailback& GetFailback() const{ return m_failback; }

    /**
     * <p>An object representing failback related information of the Recovery
     * Instance.</p>
     */
    inline bool FailbackHasBeenSet() const { return m_failbackHasBeenSet; }

    /**
     * <p>An object representing failback related information of the Recovery
     * Instance.</p>
     */
    inline void SetFailback(const RecoveryInstanceFailback& value) { m_failbackHasBeenSet = true; m_failback = value; }

    /**
     * <p>An object representing failback related information of the Recovery
     * Instance.</p>
     */
    inline void SetFailback(RecoveryInstanceFailback&& value) { m_failbackHasBeenSet = true; m_failback = std::move(value); }

    /**
     * <p>An object representing failback related information of the Recovery
     * Instance.</p>
     */
    inline RecoveryInstance& WithFailback(const RecoveryInstanceFailback& value) { SetFailback(value); return *this;}

    /**
     * <p>An object representing failback related information of the Recovery
     * Instance.</p>
     */
    inline RecoveryInstance& WithFailback(RecoveryInstanceFailback&& value) { SetFailback(std::move(value)); return *this;}


    /**
     * <p>Whether this Recovery Instance was created for a drill or for an actual
     * Recovery event.</p>
     */
    inline bool GetIsDrill() const{ return m_isDrill; }

    /**
     * <p>Whether this Recovery Instance was created for a drill or for an actual
     * Recovery event.</p>
     */
    inline bool IsDrillHasBeenSet() const { return m_isDrillHasBeenSet; }

    /**
     * <p>Whether this Recovery Instance was created for a drill or for an actual
     * Recovery event.</p>
     */
    inline void SetIsDrill(bool value) { m_isDrillHasBeenSet = true; m_isDrill = value; }

    /**
     * <p>Whether this Recovery Instance was created for a drill or for an actual
     * Recovery event.</p>
     */
    inline RecoveryInstance& WithIsDrill(bool value) { SetIsDrill(value); return *this;}


    /**
     * <p>The ID of the Job that created the Recovery Instance.</p>
     */
    inline const Aws::String& GetJobID() const{ return m_jobID; }

    /**
     * <p>The ID of the Job that created the Recovery Instance.</p>
     */
    inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }

    /**
     * <p>The ID of the Job that created the Recovery Instance.</p>
     */
    inline void SetJobID(const Aws::String& value) { m_jobIDHasBeenSet = true; m_jobID = value; }

    /**
     * <p>The ID of the Job that created the Recovery Instance.</p>
     */
    inline void SetJobID(Aws::String&& value) { m_jobIDHasBeenSet = true; m_jobID = std::move(value); }

    /**
     * <p>The ID of the Job that created the Recovery Instance.</p>
     */
    inline void SetJobID(const char* value) { m_jobIDHasBeenSet = true; m_jobID.assign(value); }

    /**
     * <p>The ID of the Job that created the Recovery Instance.</p>
     */
    inline RecoveryInstance& WithJobID(const Aws::String& value) { SetJobID(value); return *this;}

    /**
     * <p>The ID of the Job that created the Recovery Instance.</p>
     */
    inline RecoveryInstance& WithJobID(Aws::String&& value) { SetJobID(std::move(value)); return *this;}

    /**
     * <p>The ID of the Job that created the Recovery Instance.</p>
     */
    inline RecoveryInstance& WithJobID(const char* value) { SetJobID(value); return *this;}


    /**
     * <p>Environment (On Premises / AWS) of the instance that the recovery instance
     * originated from. </p>
     */
    inline const OriginEnvironment& GetOriginEnvironment() const{ return m_originEnvironment; }

    /**
     * <p>Environment (On Premises / AWS) of the instance that the recovery instance
     * originated from. </p>
     */
    inline bool OriginEnvironmentHasBeenSet() const { return m_originEnvironmentHasBeenSet; }

    /**
     * <p>Environment (On Premises / AWS) of the instance that the recovery instance
     * originated from. </p>
     */
    inline void SetOriginEnvironment(const OriginEnvironment& value) { m_originEnvironmentHasBeenSet = true; m_originEnvironment = value; }

    /**
     * <p>Environment (On Premises / AWS) of the instance that the recovery instance
     * originated from. </p>
     */
    inline void SetOriginEnvironment(OriginEnvironment&& value) { m_originEnvironmentHasBeenSet = true; m_originEnvironment = std::move(value); }

    /**
     * <p>Environment (On Premises / AWS) of the instance that the recovery instance
     * originated from. </p>
     */
    inline RecoveryInstance& WithOriginEnvironment(const OriginEnvironment& value) { SetOriginEnvironment(value); return *this;}

    /**
     * <p>Environment (On Premises / AWS) of the instance that the recovery instance
     * originated from. </p>
     */
    inline RecoveryInstance& WithOriginEnvironment(OriginEnvironment&& value) { SetOriginEnvironment(std::move(value)); return *this;}


    /**
     * <p>The date and time of the Point in Time (PIT) snapshot that this Recovery
     * Instance was launched from.</p>
     */
    inline const Aws::String& GetPointInTimeSnapshotDateTime() const{ return m_pointInTimeSnapshotDateTime; }

    /**
     * <p>The date and time of the Point in Time (PIT) snapshot that this Recovery
     * Instance was launched from.</p>
     */
    inline bool PointInTimeSnapshotDateTimeHasBeenSet() const { return m_pointInTimeSnapshotDateTimeHasBeenSet; }

    /**
     * <p>The date and time of the Point in Time (PIT) snapshot that this Recovery
     * Instance was launched from.</p>
     */
    inline void SetPointInTimeSnapshotDateTime(const Aws::String& value) { m_pointInTimeSnapshotDateTimeHasBeenSet = true; m_pointInTimeSnapshotDateTime = value; }

    /**
     * <p>The date and time of the Point in Time (PIT) snapshot that this Recovery
     * Instance was launched from.</p>
     */
    inline void SetPointInTimeSnapshotDateTime(Aws::String&& value) { m_pointInTimeSnapshotDateTimeHasBeenSet = true; m_pointInTimeSnapshotDateTime = std::move(value); }

    /**
     * <p>The date and time of the Point in Time (PIT) snapshot that this Recovery
     * Instance was launched from.</p>
     */
    inline void SetPointInTimeSnapshotDateTime(const char* value) { m_pointInTimeSnapshotDateTimeHasBeenSet = true; m_pointInTimeSnapshotDateTime.assign(value); }

    /**
     * <p>The date and time of the Point in Time (PIT) snapshot that this Recovery
     * Instance was launched from.</p>
     */
    inline RecoveryInstance& WithPointInTimeSnapshotDateTime(const Aws::String& value) { SetPointInTimeSnapshotDateTime(value); return *this;}

    /**
     * <p>The date and time of the Point in Time (PIT) snapshot that this Recovery
     * Instance was launched from.</p>
     */
    inline RecoveryInstance& WithPointInTimeSnapshotDateTime(Aws::String&& value) { SetPointInTimeSnapshotDateTime(std::move(value)); return *this;}

    /**
     * <p>The date and time of the Point in Time (PIT) snapshot that this Recovery
     * Instance was launched from.</p>
     */
    inline RecoveryInstance& WithPointInTimeSnapshotDateTime(const char* value) { SetPointInTimeSnapshotDateTime(value); return *this;}


    /**
     * <p>The ID of the Recovery Instance.</p>
     */
    inline const Aws::String& GetRecoveryInstanceID() const{ return m_recoveryInstanceID; }

    /**
     * <p>The ID of the Recovery Instance.</p>
     */
    inline bool RecoveryInstanceIDHasBeenSet() const { return m_recoveryInstanceIDHasBeenSet; }

    /**
     * <p>The ID of the Recovery Instance.</p>
     */
    inline void SetRecoveryInstanceID(const Aws::String& value) { m_recoveryInstanceIDHasBeenSet = true; m_recoveryInstanceID = value; }

    /**
     * <p>The ID of the Recovery Instance.</p>
     */
    inline void SetRecoveryInstanceID(Aws::String&& value) { m_recoveryInstanceIDHasBeenSet = true; m_recoveryInstanceID = std::move(value); }

    /**
     * <p>The ID of the Recovery Instance.</p>
     */
    inline void SetRecoveryInstanceID(const char* value) { m_recoveryInstanceIDHasBeenSet = true; m_recoveryInstanceID.assign(value); }

    /**
     * <p>The ID of the Recovery Instance.</p>
     */
    inline RecoveryInstance& WithRecoveryInstanceID(const Aws::String& value) { SetRecoveryInstanceID(value); return *this;}

    /**
     * <p>The ID of the Recovery Instance.</p>
     */
    inline RecoveryInstance& WithRecoveryInstanceID(Aws::String&& value) { SetRecoveryInstanceID(std::move(value)); return *this;}

    /**
     * <p>The ID of the Recovery Instance.</p>
     */
    inline RecoveryInstance& WithRecoveryInstanceID(const char* value) { SetRecoveryInstanceID(value); return *this;}


    /**
     * <p>Properties of the Recovery Instance machine.</p>
     */
    inline const RecoveryInstanceProperties& GetRecoveryInstanceProperties() const{ return m_recoveryInstanceProperties; }

    /**
     * <p>Properties of the Recovery Instance machine.</p>
     */
    inline bool RecoveryInstancePropertiesHasBeenSet() const { return m_recoveryInstancePropertiesHasBeenSet; }

    /**
     * <p>Properties of the Recovery Instance machine.</p>
     */
    inline void SetRecoveryInstanceProperties(const RecoveryInstanceProperties& value) { m_recoveryInstancePropertiesHasBeenSet = true; m_recoveryInstanceProperties = value; }

    /**
     * <p>Properties of the Recovery Instance machine.</p>
     */
    inline void SetRecoveryInstanceProperties(RecoveryInstanceProperties&& value) { m_recoveryInstancePropertiesHasBeenSet = true; m_recoveryInstanceProperties = std::move(value); }

    /**
     * <p>Properties of the Recovery Instance machine.</p>
     */
    inline RecoveryInstance& WithRecoveryInstanceProperties(const RecoveryInstanceProperties& value) { SetRecoveryInstanceProperties(value); return *this;}

    /**
     * <p>Properties of the Recovery Instance machine.</p>
     */
    inline RecoveryInstance& WithRecoveryInstanceProperties(RecoveryInstanceProperties&& value) { SetRecoveryInstanceProperties(std::move(value)); return *this;}


    /**
     * <p>The Source Server ID that this Recovery Instance is associated with.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }

    /**
     * <p>The Source Server ID that this Recovery Instance is associated with.</p>
     */
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }

    /**
     * <p>The Source Server ID that this Recovery Instance is associated with.</p>
     */
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }

    /**
     * <p>The Source Server ID that this Recovery Instance is associated with.</p>
     */
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }

    /**
     * <p>The Source Server ID that this Recovery Instance is associated with.</p>
     */
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }

    /**
     * <p>The Source Server ID that this Recovery Instance is associated with.</p>
     */
    inline RecoveryInstance& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}

    /**
     * <p>The Source Server ID that this Recovery Instance is associated with.</p>
     */
    inline RecoveryInstance& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}

    /**
     * <p>The Source Server ID that this Recovery Instance is associated with.</p>
     */
    inline RecoveryInstance& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}


    /**
     * <p>An array of tags that are associated with the Recovery Instance.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of tags that are associated with the Recovery Instance.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of tags that are associated with the Recovery Instance.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of tags that are associated with the Recovery Instance.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of tags that are associated with the Recovery Instance.</p>
     */
    inline RecoveryInstance& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of tags that are associated with the Recovery Instance.</p>
     */
    inline RecoveryInstance& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of tags that are associated with the Recovery Instance.</p>
     */
    inline RecoveryInstance& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>An array of tags that are associated with the Recovery Instance.</p>
     */
    inline RecoveryInstance& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An array of tags that are associated with the Recovery Instance.</p>
     */
    inline RecoveryInstance& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An array of tags that are associated with the Recovery Instance.</p>
     */
    inline RecoveryInstance& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An array of tags that are associated with the Recovery Instance.</p>
     */
    inline RecoveryInstance& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An array of tags that are associated with the Recovery Instance.</p>
     */
    inline RecoveryInstance& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>An array of tags that are associated with the Recovery Instance.</p>
     */
    inline RecoveryInstance& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    RecoveryInstanceDataReplicationInfo m_dataReplicationInfo;
    bool m_dataReplicationInfoHasBeenSet = false;

    Aws::String m_ec2InstanceID;
    bool m_ec2InstanceIDHasBeenSet = false;

    EC2InstanceState m_ec2InstanceState;
    bool m_ec2InstanceStateHasBeenSet = false;

    RecoveryInstanceFailback m_failback;
    bool m_failbackHasBeenSet = false;

    bool m_isDrill;
    bool m_isDrillHasBeenSet = false;

    Aws::String m_jobID;
    bool m_jobIDHasBeenSet = false;

    OriginEnvironment m_originEnvironment;
    bool m_originEnvironmentHasBeenSet = false;

    Aws::String m_pointInTimeSnapshotDateTime;
    bool m_pointInTimeSnapshotDateTimeHasBeenSet = false;

    Aws::String m_recoveryInstanceID;
    bool m_recoveryInstanceIDHasBeenSet = false;

    RecoveryInstanceProperties m_recoveryInstanceProperties;
    bool m_recoveryInstancePropertiesHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
