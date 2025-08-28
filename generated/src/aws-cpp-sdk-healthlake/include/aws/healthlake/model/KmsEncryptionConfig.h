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
   * <p>The customer-managed-key (CMK) used when creating a data store. If a
   * customer-owned key is not specified, an AWS-owned key is used for encryption.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/KmsEncryptionConfig">AWS
   * API Reference</a></p>
   */
  class KmsEncryptionConfig
  {
  public:
    AWS_HEALTHLAKE_API KmsEncryptionConfig() = default;
    AWS_HEALTHLAKE_API KmsEncryptionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API KmsEncryptionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of customer-managed-key (CMK) used for encryption.</p>
     */
    inline CmkType GetCmkType() const { return m_cmkType; }
    inline bool CmkTypeHasBeenSet() const { return m_cmkTypeHasBeenSet; }
    inline void SetCmkType(CmkType value) { m_cmkTypeHasBeenSet = true; m_cmkType = value; }
    inline KmsEncryptionConfig& WithCmkType(CmkType value) { SetCmkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Management Service (KMS) encryption key id/alias used to encrypt the
     * data store contents at rest.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    KmsEncryptionConfig& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}
  private:

    CmkType m_cmkType{CmkType::NOT_SET};
    bool m_cmkTypeHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
