/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/aiops/AIOps_EXPORTS.h>
#include <aws/aiops/model/EncryptionConfigurationType.h>
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
namespace AIOps
{
namespace Model
{

  /**
   * <p>Use this structure to specify a customer managed KMS key to use to encrypt
   * investigation data. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/aiops-2018-05-10/EncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class EncryptionConfiguration
  {
  public:
    AWS_AIOPS_API EncryptionConfiguration() = default;
    AWS_AIOPS_API EncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_AIOPS_API EncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AIOPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Displays whether investigation data is encrypted by a customer managed key or
     * an Amazon Web Services owned key.</p>
     */
    inline EncryptionConfigurationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(EncryptionConfigurationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline EncryptionConfiguration& WithType(EncryptionConfigurationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the investigation group uses a customer managed key for encryption, this
     * field displays the ID of that key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    EncryptionConfiguration& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}
  private:

    EncryptionConfigurationType m_type{EncryptionConfigurationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AIOps
} // namespace Aws
