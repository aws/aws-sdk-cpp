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
#include <aws/core/utils/DateTime.h>
#include <aws/sms/model/LicenseType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Replication parameters for replicating a server.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ServerReplicationParameters">AWS
   * API Reference</a></p>
   */
  class AWS_SMS_API ServerReplicationParameters
  {
  public:
    ServerReplicationParameters();
    ServerReplicationParameters(Aws::Utils::Json::JsonView jsonValue);
    ServerReplicationParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Seed time for creating a replication job for the server.</p>
     */
    inline const Aws::Utils::DateTime& GetSeedTime() const{ return m_seedTime; }

    /**
     * <p>Seed time for creating a replication job for the server.</p>
     */
    inline bool SeedTimeHasBeenSet() const { return m_seedTimeHasBeenSet; }

    /**
     * <p>Seed time for creating a replication job for the server.</p>
     */
    inline void SetSeedTime(const Aws::Utils::DateTime& value) { m_seedTimeHasBeenSet = true; m_seedTime = value; }

    /**
     * <p>Seed time for creating a replication job for the server.</p>
     */
    inline void SetSeedTime(Aws::Utils::DateTime&& value) { m_seedTimeHasBeenSet = true; m_seedTime = std::move(value); }

    /**
     * <p>Seed time for creating a replication job for the server.</p>
     */
    inline ServerReplicationParameters& WithSeedTime(const Aws::Utils::DateTime& value) { SetSeedTime(value); return *this;}

    /**
     * <p>Seed time for creating a replication job for the server.</p>
     */
    inline ServerReplicationParameters& WithSeedTime(Aws::Utils::DateTime&& value) { SetSeedTime(std::move(value)); return *this;}


    /**
     * <p>Frequency of creating replication jobs for the server.</p>
     */
    inline int GetFrequency() const{ return m_frequency; }

    /**
     * <p>Frequency of creating replication jobs for the server.</p>
     */
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }

    /**
     * <p>Frequency of creating replication jobs for the server.</p>
     */
    inline void SetFrequency(int value) { m_frequencyHasBeenSet = true; m_frequency = value; }

    /**
     * <p>Frequency of creating replication jobs for the server.</p>
     */
    inline ServerReplicationParameters& WithFrequency(int value) { SetFrequency(value); return *this;}


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
    inline ServerReplicationParameters& WithRunOnce(bool value) { SetRunOnce(value); return *this;}


    /**
     * <p>License type for creating a replication job for the server.</p>
     */
    inline const LicenseType& GetLicenseType() const{ return m_licenseType; }

    /**
     * <p>License type for creating a replication job for the server.</p>
     */
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }

    /**
     * <p>License type for creating a replication job for the server.</p>
     */
    inline void SetLicenseType(const LicenseType& value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }

    /**
     * <p>License type for creating a replication job for the server.</p>
     */
    inline void SetLicenseType(LicenseType&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::move(value); }

    /**
     * <p>License type for creating a replication job for the server.</p>
     */
    inline ServerReplicationParameters& WithLicenseType(const LicenseType& value) { SetLicenseType(value); return *this;}

    /**
     * <p>License type for creating a replication job for the server.</p>
     */
    inline ServerReplicationParameters& WithLicenseType(LicenseType&& value) { SetLicenseType(std::move(value)); return *this;}


    /**
     * <p>Number of recent AMIs to keep when creating a replication job for this
     * server.</p>
     */
    inline int GetNumberOfRecentAmisToKeep() const{ return m_numberOfRecentAmisToKeep; }

    /**
     * <p>Number of recent AMIs to keep when creating a replication job for this
     * server.</p>
     */
    inline bool NumberOfRecentAmisToKeepHasBeenSet() const { return m_numberOfRecentAmisToKeepHasBeenSet; }

    /**
     * <p>Number of recent AMIs to keep when creating a replication job for this
     * server.</p>
     */
    inline void SetNumberOfRecentAmisToKeep(int value) { m_numberOfRecentAmisToKeepHasBeenSet = true; m_numberOfRecentAmisToKeep = value; }

    /**
     * <p>Number of recent AMIs to keep when creating a replication job for this
     * server.</p>
     */
    inline ServerReplicationParameters& WithNumberOfRecentAmisToKeep(int value) { SetNumberOfRecentAmisToKeep(value); return *this;}


    /**
     * <p>When true, the replication job produces encrypted AMIs. See also
     * <code>KmsKeyId</code> below.</p>
     */
    inline bool GetEncrypted() const{ return m_encrypted; }

    /**
     * <p>When true, the replication job produces encrypted AMIs. See also
     * <code>KmsKeyId</code> below.</p>
     */
    inline bool EncryptedHasBeenSet() const { return m_encryptedHasBeenSet; }

    /**
     * <p>When true, the replication job produces encrypted AMIs. See also
     * <code>KmsKeyId</code> below.</p>
     */
    inline void SetEncrypted(bool value) { m_encryptedHasBeenSet = true; m_encrypted = value; }

    /**
     * <p>When true, the replication job produces encrypted AMIs. See also
     * <code>KmsKeyId</code> below.</p>
     */
    inline ServerReplicationParameters& WithEncrypted(bool value) { SetEncrypted(value); return *this;}


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
    inline ServerReplicationParameters& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p/> <p>KMS key ID for replication jobs that produce encrypted AMIs. Can be any
     * of the following: </p> <ul> <li> <p>KMS key ID</p> </li> <li> <p>KMS key
     * alias</p> </li> <li> <p>ARN referring to KMS key ID</p> </li> <li> <p>ARN
     * referring to KMS key alias</p> </li> </ul> <p> If encrypted is <i>true</i> but a
     * KMS key id is not specified, the customer's default KMS key for EBS is used.
     * </p>
     */
    inline ServerReplicationParameters& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p/> <p>KMS key ID for replication jobs that produce encrypted AMIs. Can be any
     * of the following: </p> <ul> <li> <p>KMS key ID</p> </li> <li> <p>KMS key
     * alias</p> </li> <li> <p>ARN referring to KMS key ID</p> </li> <li> <p>ARN
     * referring to KMS key alias</p> </li> </ul> <p> If encrypted is <i>true</i> but a
     * KMS key id is not specified, the customer's default KMS key for EBS is used.
     * </p>
     */
    inline ServerReplicationParameters& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    Aws::Utils::DateTime m_seedTime;
    bool m_seedTimeHasBeenSet;

    int m_frequency;
    bool m_frequencyHasBeenSet;

    bool m_runOnce;
    bool m_runOnceHasBeenSet;

    LicenseType m_licenseType;
    bool m_licenseTypeHasBeenSet;

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
