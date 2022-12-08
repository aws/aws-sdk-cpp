/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/ReplicationRunState.h>
#include <aws/sms/model/ReplicationRunType.h>
#include <aws/sms/model/ReplicationRunStageDetails.h>
#include <aws/core/utils/DateTime.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>Represents a replication run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ReplicationRun">AWS
   * API Reference</a></p>
   */
  class ReplicationRun
  {
  public:
    AWS_SMS_API ReplicationRun();
    AWS_SMS_API ReplicationRun(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API ReplicationRun& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the replication run.</p>
     */
    inline const Aws::String& GetReplicationRunId() const{ return m_replicationRunId; }

    /**
     * <p>The ID of the replication run.</p>
     */
    inline bool ReplicationRunIdHasBeenSet() const { return m_replicationRunIdHasBeenSet; }

    /**
     * <p>The ID of the replication run.</p>
     */
    inline void SetReplicationRunId(const Aws::String& value) { m_replicationRunIdHasBeenSet = true; m_replicationRunId = value; }

    /**
     * <p>The ID of the replication run.</p>
     */
    inline void SetReplicationRunId(Aws::String&& value) { m_replicationRunIdHasBeenSet = true; m_replicationRunId = std::move(value); }

    /**
     * <p>The ID of the replication run.</p>
     */
    inline void SetReplicationRunId(const char* value) { m_replicationRunIdHasBeenSet = true; m_replicationRunId.assign(value); }

    /**
     * <p>The ID of the replication run.</p>
     */
    inline ReplicationRun& WithReplicationRunId(const Aws::String& value) { SetReplicationRunId(value); return *this;}

    /**
     * <p>The ID of the replication run.</p>
     */
    inline ReplicationRun& WithReplicationRunId(Aws::String&& value) { SetReplicationRunId(std::move(value)); return *this;}

    /**
     * <p>The ID of the replication run.</p>
     */
    inline ReplicationRun& WithReplicationRunId(const char* value) { SetReplicationRunId(value); return *this;}


    /**
     * <p>The state of the replication run.</p>
     */
    inline const ReplicationRunState& GetState() const{ return m_state; }

    /**
     * <p>The state of the replication run.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the replication run.</p>
     */
    inline void SetState(const ReplicationRunState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the replication run.</p>
     */
    inline void SetState(ReplicationRunState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the replication run.</p>
     */
    inline ReplicationRun& WithState(const ReplicationRunState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the replication run.</p>
     */
    inline ReplicationRun& WithState(ReplicationRunState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The type of replication run.</p>
     */
    inline const ReplicationRunType& GetType() const{ return m_type; }

    /**
     * <p>The type of replication run.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of replication run.</p>
     */
    inline void SetType(const ReplicationRunType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of replication run.</p>
     */
    inline void SetType(ReplicationRunType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of replication run.</p>
     */
    inline ReplicationRun& WithType(const ReplicationRunType& value) { SetType(value); return *this;}

    /**
     * <p>The type of replication run.</p>
     */
    inline ReplicationRun& WithType(ReplicationRunType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Details about the current stage of the replication run.</p>
     */
    inline const ReplicationRunStageDetails& GetStageDetails() const{ return m_stageDetails; }

    /**
     * <p>Details about the current stage of the replication run.</p>
     */
    inline bool StageDetailsHasBeenSet() const { return m_stageDetailsHasBeenSet; }

    /**
     * <p>Details about the current stage of the replication run.</p>
     */
    inline void SetStageDetails(const ReplicationRunStageDetails& value) { m_stageDetailsHasBeenSet = true; m_stageDetails = value; }

    /**
     * <p>Details about the current stage of the replication run.</p>
     */
    inline void SetStageDetails(ReplicationRunStageDetails&& value) { m_stageDetailsHasBeenSet = true; m_stageDetails = std::move(value); }

    /**
     * <p>Details about the current stage of the replication run.</p>
     */
    inline ReplicationRun& WithStageDetails(const ReplicationRunStageDetails& value) { SetStageDetails(value); return *this;}

    /**
     * <p>Details about the current stage of the replication run.</p>
     */
    inline ReplicationRun& WithStageDetails(ReplicationRunStageDetails&& value) { SetStageDetails(std::move(value)); return *this;}


    /**
     * <p>The description of the current status of the replication job.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The description of the current status of the replication job.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The description of the current status of the replication job.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The description of the current status of the replication job.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The description of the current status of the replication job.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The description of the current status of the replication job.</p>
     */
    inline ReplicationRun& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The description of the current status of the replication job.</p>
     */
    inline ReplicationRun& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The description of the current status of the replication job.</p>
     */
    inline ReplicationRun& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The ID of the Amazon Machine Image (AMI) from the replication run.</p>
     */
    inline const Aws::String& GetAmiId() const{ return m_amiId; }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) from the replication run.</p>
     */
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) from the replication run.</p>
     */
    inline void SetAmiId(const Aws::String& value) { m_amiIdHasBeenSet = true; m_amiId = value; }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) from the replication run.</p>
     */
    inline void SetAmiId(Aws::String&& value) { m_amiIdHasBeenSet = true; m_amiId = std::move(value); }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) from the replication run.</p>
     */
    inline void SetAmiId(const char* value) { m_amiIdHasBeenSet = true; m_amiId.assign(value); }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) from the replication run.</p>
     */
    inline ReplicationRun& WithAmiId(const Aws::String& value) { SetAmiId(value); return *this;}

    /**
     * <p>The ID of the Amazon Machine Image (AMI) from the replication run.</p>
     */
    inline ReplicationRun& WithAmiId(Aws::String&& value) { SetAmiId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Machine Image (AMI) from the replication run.</p>
     */
    inline ReplicationRun& WithAmiId(const char* value) { SetAmiId(value); return *this;}


    /**
     * <p>The start time of the next replication run.</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledStartTime() const{ return m_scheduledStartTime; }

    /**
     * <p>The start time of the next replication run.</p>
     */
    inline bool ScheduledStartTimeHasBeenSet() const { return m_scheduledStartTimeHasBeenSet; }

    /**
     * <p>The start time of the next replication run.</p>
     */
    inline void SetScheduledStartTime(const Aws::Utils::DateTime& value) { m_scheduledStartTimeHasBeenSet = true; m_scheduledStartTime = value; }

    /**
     * <p>The start time of the next replication run.</p>
     */
    inline void SetScheduledStartTime(Aws::Utils::DateTime&& value) { m_scheduledStartTimeHasBeenSet = true; m_scheduledStartTime = std::move(value); }

    /**
     * <p>The start time of the next replication run.</p>
     */
    inline ReplicationRun& WithScheduledStartTime(const Aws::Utils::DateTime& value) { SetScheduledStartTime(value); return *this;}

    /**
     * <p>The start time of the next replication run.</p>
     */
    inline ReplicationRun& WithScheduledStartTime(Aws::Utils::DateTime&& value) { SetScheduledStartTime(std::move(value)); return *this;}


    /**
     * <p>The completion time of the last replication run.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedTime() const{ return m_completedTime; }

    /**
     * <p>The completion time of the last replication run.</p>
     */
    inline bool CompletedTimeHasBeenSet() const { return m_completedTimeHasBeenSet; }

    /**
     * <p>The completion time of the last replication run.</p>
     */
    inline void SetCompletedTime(const Aws::Utils::DateTime& value) { m_completedTimeHasBeenSet = true; m_completedTime = value; }

    /**
     * <p>The completion time of the last replication run.</p>
     */
    inline void SetCompletedTime(Aws::Utils::DateTime&& value) { m_completedTimeHasBeenSet = true; m_completedTime = std::move(value); }

    /**
     * <p>The completion time of the last replication run.</p>
     */
    inline ReplicationRun& WithCompletedTime(const Aws::Utils::DateTime& value) { SetCompletedTime(value); return *this;}

    /**
     * <p>The completion time of the last replication run.</p>
     */
    inline ReplicationRun& WithCompletedTime(Aws::Utils::DateTime&& value) { SetCompletedTime(std::move(value)); return *this;}


    /**
     * <p>The description of the replication run.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the replication run.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the replication run.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the replication run.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the replication run.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the replication run.</p>
     */
    inline ReplicationRun& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the replication run.</p>
     */
    inline ReplicationRun& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the replication run.</p>
     */
    inline ReplicationRun& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Indicates whether the replication run should produce an encrypted AMI.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Indicates whether the replication run should produce an encrypted AMI.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>Indicates whether the replication run should produce an encrypted AMI.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Indicates whether the replication run should produce an encrypted AMI.</p>
     */
    inline ReplicationRun& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>The ID of the KMS key for replication jobs that produce encrypted AMIs. This
     * value can be any of the following:</p> <ul> <li> <p>KMS key ID</p> </li> <li>
     * <p>KMS key alias</p> </li> <li> <p>ARN referring to the KMS key ID</p> </li>
     * <li> <p>ARN referring to the KMS key alias</p> </li> </ul> <p> If encrypted is
     * <i>true</i> but a KMS key ID is not specified, the customer's default KMS key
     * for Amazon EBS is used. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The ID of the KMS key for replication jobs that produce encrypted AMIs. This
     * value can be any of the following:</p> <ul> <li> <p>KMS key ID</p> </li> <li>
     * <p>KMS key alias</p> </li> <li> <p>ARN referring to the KMS key ID</p> </li>
     * <li> <p>ARN referring to the KMS key alias</p> </li> </ul> <p> If encrypted is
     * <i>true</i> but a KMS key ID is not specified, the customer's default KMS key
     * for Amazon EBS is used. </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The ID of the KMS key for replication jobs that produce encrypted AMIs. This
     * value can be any of the following:</p> <ul> <li> <p>KMS key ID</p> </li> <li>
     * <p>KMS key alias</p> </li> <li> <p>ARN referring to the KMS key ID</p> </li>
     * <li> <p>ARN referring to the KMS key alias</p> </li> </ul> <p> If encrypted is
     * <i>true</i> but a KMS key ID is not specified, the customer's default KMS key
     * for Amazon EBS is used. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The ID of the KMS key for replication jobs that produce encrypted AMIs. This
     * value can be any of the following:</p> <ul> <li> <p>KMS key ID</p> </li> <li>
     * <p>KMS key alias</p> </li> <li> <p>ARN referring to the KMS key ID</p> </li>
     * <li> <p>ARN referring to the KMS key alias</p> </li> </ul> <p> If encrypted is
     * <i>true</i> but a KMS key ID is not specified, the customer's default KMS key
     * for Amazon EBS is used. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The ID of the KMS key for replication jobs that produce encrypted AMIs. This
     * value can be any of the following:</p> <ul> <li> <p>KMS key ID</p> </li> <li>
     * <p>KMS key alias</p> </li> <li> <p>ARN referring to the KMS key ID</p> </li>
     * <li> <p>ARN referring to the KMS key alias</p> </li> </ul> <p> If encrypted is
     * <i>true</i> but a KMS key ID is not specified, the customer's default KMS key
     * for Amazon EBS is used. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The ID of the KMS key for replication jobs that produce encrypted AMIs. This
     * value can be any of the following:</p> <ul> <li> <p>KMS key ID</p> </li> <li>
     * <p>KMS key alias</p> </li> <li> <p>ARN referring to the KMS key ID</p> </li>
     * <li> <p>ARN referring to the KMS key alias</p> </li> </ul> <p> If encrypted is
     * <i>true</i> but a KMS key ID is not specified, the customer's default KMS key
     * for Amazon EBS is used. </p>
     */
    inline ReplicationRun& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the KMS key for replication jobs that produce encrypted AMIs. This
     * value can be any of the following:</p> <ul> <li> <p>KMS key ID</p> </li> <li>
     * <p>KMS key alias</p> </li> <li> <p>ARN referring to the KMS key ID</p> </li>
     * <li> <p>ARN referring to the KMS key alias</p> </li> </ul> <p> If encrypted is
     * <i>true</i> but a KMS key ID is not specified, the customer's default KMS key
     * for Amazon EBS is used. </p>
     */
    inline ReplicationRun& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the KMS key for replication jobs that produce encrypted AMIs. This
     * value can be any of the following:</p> <ul> <li> <p>KMS key ID</p> </li> <li>
     * <p>KMS key alias</p> </li> <li> <p>ARN referring to the KMS key ID</p> </li>
     * <li> <p>ARN referring to the KMS key alias</p> </li> </ul> <p> If encrypted is
     * <i>true</i> but a KMS key ID is not specified, the customer's default KMS key
     * for Amazon EBS is used. </p>
     */
    inline ReplicationRun& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_replicationRunId;
    bool m_replicationRunIdHasBeenSet = false;

    ReplicationRunState m_state;
    bool m_stateHasBeenSet = false;

    ReplicationRunType m_type;
    bool m_typeHasBeenSet = false;

    ReplicationRunStageDetails m_stageDetails;
    bool m_stageDetailsHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_amiId;
    bool m_amiIdHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledStartTime;
    bool m_scheduledStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completedTime;
    bool m_completedTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
