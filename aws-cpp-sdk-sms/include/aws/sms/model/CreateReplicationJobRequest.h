/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sms/model/LicenseType.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class CreateReplicationJobRequest : public SMSRequest
  {
  public:
    AWS_SMS_API CreateReplicationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReplicationJob"; }

    AWS_SMS_API Aws::String SerializePayload() const override;

    AWS_SMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the server.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>The ID of the server.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>The ID of the server.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>The ID of the server.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>The ID of the server.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>The ID of the server.</p>
     */
    inline CreateReplicationJobRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>The ID of the server.</p>
     */
    inline CreateReplicationJobRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the server.</p>
     */
    inline CreateReplicationJobRequest& WithServerId(const char* value) { SetServerId(value); return *this;}


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
    inline CreateReplicationJobRequest& WithSeedReplicationTime(const Aws::Utils::DateTime& value) { SetSeedReplicationTime(value); return *this;}

    /**
     * <p>The seed replication time.</p>
     */
    inline CreateReplicationJobRequest& WithSeedReplicationTime(Aws::Utils::DateTime&& value) { SetSeedReplicationTime(std::move(value)); return *this;}


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
    inline CreateReplicationJobRequest& WithFrequency(int value) { SetFrequency(value); return *this;}


    /**
     * <p>Indicates whether to run the replication job one time.</p>
     */
    inline bool GetRunOnce() const{ return m_runOnce; }

    /**
     * <p>Indicates whether to run the replication job one time.</p>
     */
    inline bool RunOnceHasBeenSet() const { return m_runOnceHasBeenSet; }

    /**
     * <p>Indicates whether to run the replication job one time.</p>
     */
    inline void SetRunOnce(bool value) { m_runOnceHasBeenSet = true; m_runOnce = value; }

    /**
     * <p>Indicates whether to run the replication job one time.</p>
     */
    inline CreateReplicationJobRequest& WithRunOnce(bool value) { SetRunOnce(value); return *this;}


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
    inline CreateReplicationJobRequest& WithLicenseType(const LicenseType& value) { SetLicenseType(value); return *this;}

    /**
     * <p>The license type to be used for the AMI created by a successful replication
     * run.</p>
     */
    inline CreateReplicationJobRequest& WithLicenseType(LicenseType&& value) { SetLicenseType(std::move(value)); return *this;}


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
    inline CreateReplicationJobRequest& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The name of the IAM role to be used by the Server Migration Service.</p>
     */
    inline CreateReplicationJobRequest& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM role to be used by the Server Migration Service.</p>
     */
    inline CreateReplicationJobRequest& WithRoleName(const char* value) { SetRoleName(value); return *this;}


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
    inline CreateReplicationJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the replication job.</p>
     */
    inline CreateReplicationJobRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the replication job.</p>
     */
    inline CreateReplicationJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The maximum number of SMS-created AMIs to retain. The oldest is deleted after
     * the maximum number is reached and a new AMI is created.</p>
     */
    inline int GetNumberOfRecentAmisToKeep() const{ return m_numberOfRecentAmisToKeep; }

    /**
     * <p>The maximum number of SMS-created AMIs to retain. The oldest is deleted after
     * the maximum number is reached and a new AMI is created.</p>
     */
    inline bool NumberOfRecentAmisToKeepHasBeenSet() const { return m_numberOfRecentAmisToKeepHasBeenSet; }

    /**
     * <p>The maximum number of SMS-created AMIs to retain. The oldest is deleted after
     * the maximum number is reached and a new AMI is created.</p>
     */
    inline void SetNumberOfRecentAmisToKeep(int value) { m_numberOfRecentAmisToKeepHasBeenSet = true; m_numberOfRecentAmisToKeep = value; }

    /**
     * <p>The maximum number of SMS-created AMIs to retain. The oldest is deleted after
     * the maximum number is reached and a new AMI is created.</p>
     */
    inline CreateReplicationJobRequest& WithNumberOfRecentAmisToKeep(int value) { SetNumberOfRecentAmisToKeep(value); return *this;}


    /**
     * <p>Indicates whether the replication job produces encrypted AMIs.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>Indicates whether the replication job produces encrypted AMIs.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>Indicates whether the replication job produces encrypted AMIs.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>Indicates whether the replication job produces encrypted AMIs.</p>
     */
    inline CreateReplicationJobRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


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
    inline CreateReplicationJobRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The ID of the KMS key for replication jobs that produce encrypted AMIs. This
     * value can be any of the following:</p> <ul> <li> <p>KMS key ID</p> </li> <li>
     * <p>KMS key alias</p> </li> <li> <p>ARN referring to the KMS key ID</p> </li>
     * <li> <p>ARN referring to the KMS key alias</p> </li> </ul> <p> If encrypted is
     * <i>true</i> but a KMS key ID is not specified, the customer's default KMS key
     * for Amazon EBS is used. </p>
     */
    inline CreateReplicationJobRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the KMS key for replication jobs that produce encrypted AMIs. This
     * value can be any of the following:</p> <ul> <li> <p>KMS key ID</p> </li> <li>
     * <p>KMS key alias</p> </li> <li> <p>ARN referring to the KMS key ID</p> </li>
     * <li> <p>ARN referring to the KMS key alias</p> </li> </ul> <p> If encrypted is
     * <i>true</i> but a KMS key ID is not specified, the customer's default KMS key
     * for Amazon EBS is used. </p>
     */
    inline CreateReplicationJobRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    Aws::Utils::DateTime m_seedReplicationTime;
    bool m_seedReplicationTimeHasBeenSet = false;

    int m_frequency;
    bool m_frequencyHasBeenSet = false;

    bool m_runOnce;
    bool m_runOnceHasBeenSet = false;

    LicenseType m_licenseType;
    bool m_licenseTypeHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_numberOfRecentAmisToKeep;
    bool m_numberOfRecentAmisToKeepHasBeenSet = false;

    bool m_encrypted;
    bool m_encryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
