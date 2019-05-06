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
  class AWS_SMS_API UpdateReplicationJobRequest : public SMSRequest
  {
  public:
    UpdateReplicationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateReplicationJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline UpdateReplicationJobRequest& WithReplicationJobId(const Aws::String& value) { SetReplicationJobId(value); return *this;}

    /**
     * <p>The identifier of the replication job.</p>
     */
    inline UpdateReplicationJobRequest& WithReplicationJobId(Aws::String&& value) { SetReplicationJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the replication job.</p>
     */
    inline UpdateReplicationJobRequest& WithReplicationJobId(const char* value) { SetReplicationJobId(value); return *this;}


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
    inline UpdateReplicationJobRequest& WithFrequency(int value) { SetFrequency(value); return *this;}


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
    inline UpdateReplicationJobRequest& WithNextReplicationRunStartTime(const Aws::Utils::DateTime& value) { SetNextReplicationRunStartTime(value); return *this;}

    /**
     * <p>The start time of the next replication run.</p>
     */
    inline UpdateReplicationJobRequest& WithNextReplicationRunStartTime(Aws::Utils::DateTime&& value) { SetNextReplicationRunStartTime(std::move(value)); return *this;}


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
    inline UpdateReplicationJobRequest& WithLicenseType(const LicenseType& value) { SetLicenseType(value); return *this;}

    /**
     * <p>The license type to be used for the AMI created by a successful replication
     * run.</p>
     */
    inline UpdateReplicationJobRequest& WithLicenseType(LicenseType&& value) { SetLicenseType(std::move(value)); return *this;}


    /**
     * <p>The name of the IAM role to be used by AWS SMS.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The name of the IAM role to be used by AWS SMS.</p>
     */
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }

    /**
     * <p>The name of the IAM role to be used by AWS SMS.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The name of the IAM role to be used by AWS SMS.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * <p>The name of the IAM role to be used by AWS SMS.</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>The name of the IAM role to be used by AWS SMS.</p>
     */
    inline UpdateReplicationJobRequest& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The name of the IAM role to be used by AWS SMS.</p>
     */
    inline UpdateReplicationJobRequest& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM role to be used by AWS SMS.</p>
     */
    inline UpdateReplicationJobRequest& WithRoleName(const char* value) { SetRoleName(value); return *this;}


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
    inline UpdateReplicationJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the replication job.</p>
     */
    inline UpdateReplicationJobRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the replication job.</p>
     */
    inline UpdateReplicationJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The maximum number of SMS-created AMIs to retain. The oldest will be deleted
     * once the maximum number is reached and a new AMI is created.</p>
     */
    inline int GetNumberOfRecentAmisToKeep() const{ return m_numberOfRecentAmisToKeep; }

    /**
     * <p>The maximum number of SMS-created AMIs to retain. The oldest will be deleted
     * once the maximum number is reached and a new AMI is created.</p>
     */
    inline bool NumberOfRecentAmisToKeepHasBeenSet() const { return m_numberOfRecentAmisToKeepHasBeenSet; }

    /**
     * <p>The maximum number of SMS-created AMIs to retain. The oldest will be deleted
     * once the maximum number is reached and a new AMI is created.</p>
     */
    inline void SetNumberOfRecentAmisToKeep(int value) { m_numberOfRecentAmisToKeepHasBeenSet = true; m_numberOfRecentAmisToKeep = value; }

    /**
     * <p>The maximum number of SMS-created AMIs to retain. The oldest will be deleted
     * once the maximum number is reached and a new AMI is created.</p>
     */
    inline UpdateReplicationJobRequest& WithNumberOfRecentAmisToKeep(int value) { SetNumberOfRecentAmisToKeep(value); return *this;}


    /**
     * <p>When true, the replication job produces encrypted AMIs . See also
     * <code>KmsKeyId</code> below.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>When true, the replication job produces encrypted AMIs . See also
     * <code>KmsKeyId</code> below.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>When true, the replication job produces encrypted AMIs . See also
     * <code>KmsKeyId</code> below.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>When true, the replication job produces encrypted AMIs . See also
     * <code>KmsKeyId</code> below.</p>
     */
    inline UpdateReplicationJobRequest& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


    /**
     * <p/> <p>KMS key ID for replication jobs that produce encrypted AMIs. Can be any
     * of the following: </p> <ul> <li> <p>KMS key ID</p> </li> <li> <p>KMS key
     * alias</p> </li> <li> <p>ARN referring to KMS key ID</p> </li> <li> <p>ARN
     * referring to KMS key alias</p> </li> </ul> <p> If encrypted is <i>true</i> but a
     * KMS key id is not specified, the customer's default KMS key for EBS is used.
     * </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p/> <p>KMS key ID for replication jobs that produce encrypted AMIs. Can be any
     * of the following: </p> <ul> <li> <p>KMS key ID</p> </li> <li> <p>KMS key
     * alias</p> </li> <li> <p>ARN referring to KMS key ID</p> </li> <li> <p>ARN
     * referring to KMS key alias</p> </li> </ul> <p> If encrypted is <i>true</i> but a
     * KMS key id is not specified, the customer's default KMS key for EBS is used.
     * </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p/> <p>KMS key ID for replication jobs that produce encrypted AMIs. Can be any
     * of the following: </p> <ul> <li> <p>KMS key ID</p> </li> <li> <p>KMS key
     * alias</p> </li> <li> <p>ARN referring to KMS key ID</p> </li> <li> <p>ARN
     * referring to KMS key alias</p> </li> </ul> <p> If encrypted is <i>true</i> but a
     * KMS key id is not specified, the customer's default KMS key for EBS is used.
     * </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p/> <p>KMS key ID for replication jobs that produce encrypted AMIs. Can be any
     * of the following: </p> <ul> <li> <p>KMS key ID</p> </li> <li> <p>KMS key
     * alias</p> </li> <li> <p>ARN referring to KMS key ID</p> </li> <li> <p>ARN
     * referring to KMS key alias</p> </li> </ul> <p> If encrypted is <i>true</i> but a
     * KMS key id is not specified, the customer's default KMS key for EBS is used.
     * </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p/> <p>KMS key ID for replication jobs that produce encrypted AMIs. Can be any
     * of the following: </p> <ul> <li> <p>KMS key ID</p> </li> <li> <p>KMS key
     * alias</p> </li> <li> <p>ARN referring to KMS key ID</p> </li> <li> <p>ARN
     * referring to KMS key alias</p> </li> </ul> <p> If encrypted is <i>true</i> but a
     * KMS key id is not specified, the customer's default KMS key for EBS is used.
     * </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p/> <p>KMS key ID for replication jobs that produce encrypted AMIs. Can be any
     * of the following: </p> <ul> <li> <p>KMS key ID</p> </li> <li> <p>KMS key
     * alias</p> </li> <li> <p>ARN referring to KMS key ID</p> </li> <li> <p>ARN
     * referring to KMS key alias</p> </li> </ul> <p> If encrypted is <i>true</i> but a
     * KMS key id is not specified, the customer's default KMS key for EBS is used.
     * </p>
     */
    inline UpdateReplicationJobRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p/> <p>KMS key ID for replication jobs that produce encrypted AMIs. Can be any
     * of the following: </p> <ul> <li> <p>KMS key ID</p> </li> <li> <p>KMS key
     * alias</p> </li> <li> <p>ARN referring to KMS key ID</p> </li> <li> <p>ARN
     * referring to KMS key alias</p> </li> </ul> <p> If encrypted is <i>true</i> but a
     * KMS key id is not specified, the customer's default KMS key for EBS is used.
     * </p>
     */
    inline UpdateReplicationJobRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p/> <p>KMS key ID for replication jobs that produce encrypted AMIs. Can be any
     * of the following: </p> <ul> <li> <p>KMS key ID</p> </li> <li> <p>KMS key
     * alias</p> </li> <li> <p>ARN referring to KMS key ID</p> </li> <li> <p>ARN
     * referring to KMS key alias</p> </li> </ul> <p> If encrypted is <i>true</i> but a
     * KMS key id is not specified, the customer's default KMS key for EBS is used.
     * </p>
     */
    inline UpdateReplicationJobRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::String m_replicationJobId;
    bool m_replicationJobIdHasBeenSet;

    int m_frequency;
    bool m_frequencyHasBeenSet;

    Aws::Utils::DateTime m_nextReplicationRunStartTime;
    bool m_nextReplicationRunStartTimeHasBeenSet;

    LicenseType m_licenseType;
    bool m_licenseTypeHasBeenSet;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    int m_numberOfRecentAmisToKeep;
    bool m_numberOfRecentAmisToKeepHasBeenSet;

    bool m_encrypted;
    bool m_encryptedHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
