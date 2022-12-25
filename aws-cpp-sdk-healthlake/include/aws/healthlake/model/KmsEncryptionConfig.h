/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/CmkType.h>
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
namespace HealthLake
{
namespace Model
{

  /**
   * <p> The customer-managed-key(CMK) used when creating a Data Store. If a customer
   * owned key is not specified, an AWS owned key will be used for encryption.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/KmsEncryptionConfig">AWS
   * API Reference</a></p>
   */
  class KmsEncryptionConfig
  {
  public:
    AWS_HEALTHLAKE_API KmsEncryptionConfig();
    AWS_HEALTHLAKE_API KmsEncryptionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API KmsEncryptionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The type of customer-managed-key(CMK) used for encyrption. The two types of
     * supported CMKs are customer owned CMKs and AWS owned CMKs. </p>
     */
    inline const CmkType& GetCmkType() const{ return m_cmkType; }

    /**
     * <p> The type of customer-managed-key(CMK) used for encyrption. The two types of
     * supported CMKs are customer owned CMKs and AWS owned CMKs. </p>
     */
    inline bool CmkTypeHasBeenSet() const { return m_cmkTypeHasBeenSet; }

    /**
     * <p> The type of customer-managed-key(CMK) used for encyrption. The two types of
     * supported CMKs are customer owned CMKs and AWS owned CMKs. </p>
     */
    inline void SetCmkType(const CmkType& value) { m_cmkTypeHasBeenSet = true; m_cmkType = value; }

    /**
     * <p> The type of customer-managed-key(CMK) used for encyrption. The two types of
     * supported CMKs are customer owned CMKs and AWS owned CMKs. </p>
     */
    inline void SetCmkType(CmkType&& value) { m_cmkTypeHasBeenSet = true; m_cmkType = std::move(value); }

    /**
     * <p> The type of customer-managed-key(CMK) used for encyrption. The two types of
     * supported CMKs are customer owned CMKs and AWS owned CMKs. </p>
     */
    inline KmsEncryptionConfig& WithCmkType(const CmkType& value) { SetCmkType(value); return *this;}

    /**
     * <p> The type of customer-managed-key(CMK) used for encyrption. The two types of
     * supported CMKs are customer owned CMKs and AWS owned CMKs. </p>
     */
    inline KmsEncryptionConfig& WithCmkType(CmkType&& value) { SetCmkType(std::move(value)); return *this;}


    /**
     * <p> The KMS encryption key id/alias used to encrypt the Data Store contents at
     * rest. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p> The KMS encryption key id/alias used to encrypt the Data Store contents at
     * rest. </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p> The KMS encryption key id/alias used to encrypt the Data Store contents at
     * rest. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p> The KMS encryption key id/alias used to encrypt the Data Store contents at
     * rest. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p> The KMS encryption key id/alias used to encrypt the Data Store contents at
     * rest. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p> The KMS encryption key id/alias used to encrypt the Data Store contents at
     * rest. </p>
     */
    inline KmsEncryptionConfig& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p> The KMS encryption key id/alias used to encrypt the Data Store contents at
     * rest. </p>
     */
    inline KmsEncryptionConfig& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p> The KMS encryption key id/alias used to encrypt the Data Store contents at
     * rest. </p>
     */
    inline KmsEncryptionConfig& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:

    CmkType m_cmkType;
    bool m_cmkTypeHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
