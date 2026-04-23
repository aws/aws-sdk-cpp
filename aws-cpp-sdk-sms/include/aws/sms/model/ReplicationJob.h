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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SMS
{
namespace Model
{

  /**
   * <p>Represents a replication job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ReplicationJob">AWS
   * API Reference</a></p>
   */
  class AWS_SMS_API ReplicationJob
  {
  public:
    ReplicationJob();
    ReplicationJob(Aws::Utils::Json::JsonView jsonValue);
    ReplicationJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the replication job.</p>
     */
    inline const Aws::String& GetReplicationJobId() const{ return m_replicationJobId; }

    /**
     * <p>The identifier of the replication job.</p>
     */
    inline bool ReplicationJobIdHasBeenSet() const { return m_replicationJobIdHasBeenSet; }

    /**
     * <p>The identifier of the replication job.</p>
     */
    inline void SetReplicationJobId(const Aws::String& value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId = value; }

    /**
     * <p>The identifier of the replication job.</p>
     */
    inline void SetReplicationJobId(Aws::String&& value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId = std::move(value); }

    /**
     * <p>The identifier of the replication job.</p>
     */
    inline void SetReplicationJobId(const char* value) { m_replicationJobIdHasBeenSet = true; m_replicationJobId.assign(value); }

    /**
     * <p>The identifier of the replication job.</p>
     */
    inline ReplicationJob& WithReplicationJobId(const Aws::String& value) { SetReplicationJobId(value); return *this;}

    /**
     * <p>The identifier of the replication job.</p>
     */
    inline ReplicationJob& WithReplicationJobId(Aws::String&& value) { SetReplicationJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the replication job.</p>
     */
    inline ReplicationJob& WithReplicationJobId(const char* value) { SetReplicationJobId(value); return *this;}


    /**
     * <p>The identifier of the server.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>The identifier of the server.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>The identifier of the server.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>The identifier of the server.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>The identifier of the server.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>The identifier of the server.</p>
     */
    inline ReplicationJob& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>The identifier of the server.</p>
     */
    inline ReplicationJob& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the server.</p>
     */
    inline ReplicationJob& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>The type of server.</p>
     */
    inline const ServerType& GetServerType() const{ return m_serverType; }

    /**
     * <p>The type of server.</p>
     */
    inline bool ServerTypeHasBeenSet() const { return m_serverTypeHasBeenSet; }

    /**
     * <p>The type of server.</p>
     */
    inline void SetServerType(const ServerType& value) { m_serverTypeHasBeenSet = true; m_serverType = value; }

    /**
     * <p>The type of server.</p>
     */
    inline void SetServerType(ServerType&& value) { m_serverTypeHasBeenSet = true; m_serverType = std::move(value); }

    /**
     * <p>The type of server.</p>
     */
    inline ReplicationJob& WithServerType(const ServerType& value) { SetServerType(value); return *this;}

    /**
     * <p>The type of server.</p>
     */
    inline ReplicationJob& WithServerType(ServerType&& value) { SetServerType(std::move(value)); return *this;}


    /**
     * <p>Information about the VM server.</p>
     */
    inline const VmServer& GetVmServer() const{ return m_vmServer; }

    /**
     * <p>Information about the VM server.</p>
     */
    inline bool VmServerHasBeenSet() const { return m_vmServerHasBeenSet; }

    /**
     * <p>Information about the VM server.</p>
     */
    inline void SetVmServer(const VmServer& value) { m_vmServerHasBeenSet = true; m_vmServer = value; }

    /**
     * <p>Information about the VM server.</p>
     */
    inline void SetVmServer(VmServer&& value) { m_vmServerHasBeenSet = true; m_vmServer = std::move(value); }

    /**
     * <p>Information about the VM server.</p>
     */
    inline ReplicationJob& WithVmServer(const VmServer& value) { SetVmServer(value); return *this;}

    /**
     * <p>Information about the VM server.</p>
     */
    inline ReplicationJob& WithVmServer(VmServer&& value) { SetVmServer(std::move(value)); return *this;}


    /**
     * <p>The seed replication time.</p>
     */
    inline const Aws::Utils::DateTime& GetSeedReplicationTime() const{ return m_seedReplicationTime; }

    /**
     * <p>The seed replication time.</p>
     */
    inline bool SeedReplicationTimeHasBeenSet() const { return m_seedReplicationTimeHasBeenSet; }

    /**
     * <p>The seed replication time.</p>
     */
    inline void SetSeedReplicationTime(const Aws::Utils::DateTime& value) { m_seedReplicationTimeHasBeenSet = true; m_seedReplicationTime = value; }

    /**
     * <p>The seed replication time.</p>
     */
    inline void SetSeedReplicationTime(Aws::Utils::DateTime&& value) { m_seedReplicationTimeHasBeenSet = true; m_seedReplicationTime = std::move(value); }

    /**
     * <p>The seed replication time.</p>
     */
    inline ReplicationJob& WithSeedReplicationTime(const Aws::Utils::DateTime& value) { SetSeedReplicationTime(value); return *this;}

    /**
     * <p>The seed replication time.</p>
     */
    inline ReplicationJob& WithSeedReplicationTime(Aws::Utils::DateTime&& value) { SetSeedReplicationTime(std::move(value)); return *this;}


    /**
     * <p>The time between consecutive replication runs, in hours.</p>
     */
    inline int GetFrequency() const{ return m_frequency; }

    /**
     * <p>The time between consecutive replication runs, in hours.</p>
     */
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }

    /**
     * <p>The time between consecutive replication runs, in hours.</p>
     */
    inline void SetFrequency(int value) { m_frequencyHasBeenSet = true; m_frequency = value; }

    /**
     * <p>The time between consecutive replication runs, in hours.</p>
     */
    inline ReplicationJob& WithFrequency(int value) { SetFrequency(value); return *this;}


    /**
     * <p/>
     */
    inline bool GetRunOnce() const{ return m_runOnce; }

    /**
     * <p/>
     */
    inline bool RunOnceHasBeenSet() const { return m_runOnceHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetRunOnce(bool value) { m_runOnceHasBeenSet = true; m_runOnce = value; }

    /**
     * <p/>
     */
    inline ReplicationJob& WithRunOnce(bool value) { SetRunOnce(value); return *this;}


    /**
     * <p>The start time of the next replication run.</p>
     */
    inline const Aws::Utils::DateTime& GetNextReplicationRunStartTime() const{ return m_nextReplicationRunStartTime; }

    /**
     * <p>The start time of the next replication run.</p>
     */
    inline bool NextReplicationRunStartTimeHasBeenSet() const { return m_nextReplicationRunStartTimeHasBeenSet; }

    /**
     * <p>The start time of the next replication run.</p>
     */
    inline void SetNextReplicationRunStartTime(const Aws::Utils::DateTime& value) { m_nextReplicationRunStartTimeHasBeenSet = true; m_nextReplicationRunStartTime = value; }

    /**
     * <p>The start time of the next replication run.</p>
     */
    inline void SetNextReplicationRunStartTime(Aws::Utils::DateTime&& value) { m_nextReplicationRunStartTimeHasBeenSet = true; m_nextReplicationRunStartTime = std::move(value); }

    /**
     * <p>The start time of the next replication run.</p>
     */
    inline ReplicationJob& WithNextReplicationRunStartTime(const Aws::Utils::DateTime& value) { SetNextReplicationRunStartTime(value); return *this;}

    /**
     * <p>The start time of the next replication run.</p>
     */
    inline ReplicationJob& WithNextReplicationRunStartTime(Aws::Utils::DateTime&& value) { SetNextReplicationRunStartTime(std::move(value)); return *this;}


    /**
     * <p>The license type to be used for the AMI created by a successful replication
     * run.</p>
     */
    inline const LicenseType& GetLicenseType() const{ return m_licenseType; }

    /**
     * <p>The license type to be used for the AMI created by a successful replication
     * run.</p>
     */
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }

    /**
     * <p>The license type to be used for the AMI created by a successful replication
     * run.</p>
     */
    inline void SetLicenseType(const LicenseType& value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }

    /**
     * <p>The license type to be used for the AMI created by a successful replication
     * run.</p>
     */
    inline void SetLicenseType(LicenseType&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::move(value); }

    /**
     * <p>The license type to be used for the AMI created by a successful replication
     * run.</p>
     */
    inline ReplicationJob& WithLicenseType(const LicenseType& value) { SetLicenseType(value); return *this;}

    /**
     * <p>The license type to be used for the AMI created by a successful replication
     * run.</p>
     */
    inline ReplicationJob& WithLicenseType(LicenseType&& value) { SetLicenseType(std::move(value)); return *this;}


    /**
     * <p>The name of the IAM role to be used by the Server Migration Service.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The name of the IAM role to be used by the Server Migration Service.</p>
     */
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }

    /**
     * <p>The name of the IAM role to be used by the Server Migration Service.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The name of the IAM role to be used by the Server Migration Service.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * <p>The name of the IAM role to be used by the Server Migration Service.</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>The name of the IAM role to be used by the Server Migration Service.</p>
     */
    inline ReplicationJob& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The name of the IAM role to be used by the Server Migration Service.</p>
     */
    inline ReplicationJob& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM role to be used by the Server Migration Service.</p>
     */
    inline ReplicationJob& WithRoleName(const char* value) { SetRoleName(value); return *this;}


    /**
     * <p>The ID of the latest Amazon Machine Image (AMI).</p>
     */
    inline const Aws::String& GetLatestAmiId() const{ return m_latestAmiId; }

    /**
     * <p>The ID of the latest Amazon Machine Image (AMI).</p>
     */
    inline bool LatestAmiIdHasBeenSet() const { return m_latestAmiIdHasBeenSet; }

    /**
     * <p>The ID of the latest Amazon Machine Image (AMI).</p>
     */
    inline void SetLatestAmiId(const Aws::String& value) { m_latestAmiIdHasBeenSet = true; m_latestAmiId = value; }

    /**
     * <p>The ID of the latest Amazon Machine Image (AMI).</p>
     */
    inline void SetLatestAmiId(Aws::String&& value) { m_latestAmiIdHasBeenSet = true; m_latestAmiId = std::move(value); }

    /**
     * <p>The ID of the latest Amazon Machine Image (AMI).</p>
     */
    inline void SetLatestAmiId(const char* value) { m_latestAmiIdHasBeenSet = true; m_latestAmiId.assign(value); }

    /**
     * <p>The ID of the latest Amazon Machine Image (AMI).</p>
     */
    inline ReplicationJob& WithLatestAmiId(const Aws::String& value) { SetLatestAmiId(value); return *this;}

    /**
     * <p>The ID of the latest Amazon Machine Image (AMI).</p>
     */
    inline ReplicationJob& WithLatestAmiId(Aws::String&& value) { SetLatestAmiId(std::move(value)); return *this;}

    /**
     * <p>The ID of the latest Amazon Machine Image (AMI).</p>
     */
    inline ReplicationJob& WithLatestAmiId(const char* value) { SetLatestAmiId(value); return *this;}


    /**
     * <p>The state of the replication job.</p>
     */
    inline const ReplicationJobState& GetState() const{ return m_state; }

    /**
     * <p>The state of the replication job.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the replication job.</p>
     */
    inline void SetState(const ReplicationJobState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the replication job.</p>
     */
    inline void SetState(ReplicationJobState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the replication job.</p>
     */
    inline ReplicationJob& WithState(const ReplicationJobState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the replication job.</p>
     */
    inline ReplicationJob& WithState(ReplicationJobState&& value) { SetState(std::move(value)); return *this;}


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
    inline ReplicationJob& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The description of the current status of the replication job.</p>
     */
    inline ReplicationJob& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The description of the current status of the replication job.</p>
     */
    inline ReplicationJob& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The description of the replication job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the replication job.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the replication job.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the replication job.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the replication job.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the replication job.</p>
     */
    inline ReplicationJob& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the replication job.</p>
     */
    inline ReplicationJob& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the replication job.</p>
     */
    inline ReplicationJob& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Number of recent AMIs to keep in the customer's account for a replication
     * job. By default the value is set to zero, meaning that all AMIs are kept.</p>
     */
    inline int GetNumberOfRecentAmisToKeep() const{ return m_numberOfRecentAmisToKeep; }

    /**
     * <p>Number of recent AMIs to keep in the customer's account for a replication
     * job. By default the value is set to zero, meaning that all AMIs are kept.</p>
     */
    inline bool NumberOfRecentAmisToKeepHasBeenSet() const { return m_numberOfRecentAmisToKeepHasBeenSet; }

    /**
     * <p>Number of recent AMIs to keep in the customer's account for a replication
     * job. By default the value is set to zero, meaning that all AMIs are kept.</p>
     */
    inline void SetNumberOfRecentAmisToKeep(int value) { m_numberOfRecentAmisToKeepHasBeenSet = true; m_numberOfRecentAmisToKeep = value; }

    /**
     * <p>Number of recent AMIs to keep in the customer's account for a replication
     * job. By default the value is set to zero, meaning that all AMIs are kept.</p>
     */
    inline ReplicationJob& WithNumberOfRecentAmisToKeep(int value) { SetNumberOfRecentAmisToKeep(value); return *this;}


    /**
     * <p>Whether the replication job should produce encrypted AMIs or not. See also
     * <code>KmsKeyId</code> below.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Whether the replication job should produce encrypted AMIs or not. See also
     * <code>KmsKeyId</code> below.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>Whether the replication job should produce encrypted AMIs or not. See also
     * <code>KmsKeyId</code> below.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Whether the replication job should produce encrypted AMIs or not. See also
     * <code>KmsKeyId</code> below.</p>
     */
    inline ReplicationJob& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p>KMS key ID for replication jobs that produce encrypted AMIs. Can be any of
     * the following: </p> <ul> <li> <p>KMS key ID</p> </li> <li> <p>KMS key alias</p>
     * </li> <li> <p>ARN referring to KMS key ID</p> </li> <li> <p>ARN referring to KMS
     * key alias</p> </li> </ul> <p> If encrypted is <i>true</i> but a KMS key id is
     * not specified, the customer's default KMS key for EBS is used. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>KMS key ID for replication jobs that produce encrypted AMIs. Can be any of
     * the following: </p> <ul> <li> <p>KMS key ID</p> </li> <li> <p>KMS key alias</p>
     * </li> <li> <p>ARN referring to KMS key ID</p> </li> <li> <p>ARN referring to KMS
     * key alias</p> </li> </ul> <p> If encrypted is <i>true</i> but a KMS key id is
     * not specified, the customer's default KMS key for EBS is used. </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>KMS key ID for replication jobs that produce encrypted AMIs. Can be any of
     * the following: </p> <ul> <li> <p>KMS key ID</p> </li> <li> <p>KMS key alias</p>
     * </li> <li> <p>ARN referring to KMS key ID</p> </li> <li> <p>ARN referring to KMS
     * key alias</p> </li> </ul> <p> If encrypted is <i>true</i> but a KMS key id is
     * not specified, the customer's default KMS key for EBS is used. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>KMS key ID for replication jobs that produce encrypted AMIs. Can be any of
     * the following: </p> <ul> <li> <p>KMS key ID</p> </li> <li> <p>KMS key alias</p>
     * </li> <li> <p>ARN referring to KMS key ID</p> </li> <li> <p>ARN referring to KMS
     * key alias</p> </li> </ul> <p> If encrypted is <i>true</i> but a KMS key id is
     * not specified, the customer's default KMS key for EBS is used. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>KMS key ID for replication jobs that produce encrypted AMIs. Can be any of
     * the following: </p> <ul> <li> <p>KMS key ID</p> </li> <li> <p>KMS key alias</p>
     * </li> <li> <p>ARN referring to KMS key ID</p> </li> <li> <p>ARN referring to KMS
     * key alias</p> </li> </ul> <p> If encrypted is <i>true</i> but a KMS key id is
     * not specified, the customer's default KMS key for EBS is used. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>KMS key ID for replication jobs that produce encrypted AMIs. Can be any of
     * the following: </p> <ul> <li> <p>KMS key ID</p> </li> <li> <p>KMS key alias</p>
     * </li> <li> <p>ARN referring to KMS key ID</p> </li> <li> <p>ARN referring to KMS
     * key alias</p> </li> </ul> <p> If encrypted is <i>true</i> but a KMS key id is
     * not specified, the customer's default KMS key for EBS is used. </p>
     */
    inline ReplicationJob& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>KMS key ID for replication jobs that produce encrypted AMIs. Can be any of
     * the following: </p> <ul> <li> <p>KMS key ID</p> </li> <li> <p>KMS key alias</p>
     * </li> <li> <p>ARN referring to KMS key ID</p> </li> <li> <p>ARN referring to KMS
     * key alias</p> </li> </ul> <p> If encrypted is <i>true</i> but a KMS key id is
     * not specified, the customer's default KMS key for EBS is used. </p>
     */
    inline ReplicationJob& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>KMS key ID for replication jobs that produce encrypted AMIs. Can be any of
     * the following: </p> <ul> <li> <p>KMS key ID</p> </li> <li> <p>KMS key alias</p>
     * </li> <li> <p>ARN referring to KMS key ID</p> </li> <li> <p>ARN referring to KMS
     * key alias</p> </li> </ul> <p> If encrypted is <i>true</i> but a KMS key id is
     * not specified, the customer's default KMS key for EBS is used. </p>
     */
    inline ReplicationJob& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Information about the replication runs.</p>
     */
    inline const Aws::Vector<ReplicationRun>& GetReplicationRunList() const{ return m_replicationRunList; }

    /**
     * <p>Information about the replication runs.</p>
     */
    inline bool ReplicationRunListHasBeenSet() const { return m_replicationRunListHasBeenSet; }

    /**
     * <p>Information about the replication runs.</p>
     */
    inline void SetReplicationRunList(const Aws::Vector<ReplicationRun>& value) { m_replicationRunListHasBeenSet = true; m_replicationRunList = value; }

    /**
     * <p>Information about the replication runs.</p>
     */
    inline void SetReplicationRunList(Aws::Vector<ReplicationRun>&& value) { m_replicationRunListHasBeenSet = true; m_replicationRunList = std::move(value); }

    /**
     * <p>Information about the replication runs.</p>
     */
    inline ReplicationJob& WithReplicationRunList(const Aws::Vector<ReplicationRun>& value) { SetReplicationRunList(value); return *this;}

    /**
     * <p>Information about the replication runs.</p>
     */
    inline ReplicationJob& WithReplicationRunList(Aws::Vector<ReplicationRun>&& value) { SetReplicationRunList(std::move(value)); return *this;}

    /**
     * <p>Information about the replication runs.</p>
     */
    inline ReplicationJob& AddReplicationRunList(const ReplicationRun& value) { m_replicationRunListHasBeenSet = true; m_replicationRunList.push_back(value); return *this; }

    /**
     * <p>Information about the replication runs.</p>
     */
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

    bool m_runOnce;
    bool m_runOnceHasBeenSet;

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

    int m_numberOfRecentAmisToKeep;
    bool m_numberOfRecentAmisToKeepHasBeenSet;

    bool m_encrypted;
    bool m_encryptedHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::Vector<ReplicationRun> m_replicationRunList;
    bool m_replicationRunListHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
