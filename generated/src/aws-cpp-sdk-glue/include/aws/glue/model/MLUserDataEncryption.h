/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/MLUserDataEncryptionModeString.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The encryption-at-rest settings of the transform that apply to accessing user
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/MLUserDataEncryption">AWS
   * API Reference</a></p>
   */
  class MLUserDataEncryption
  {
  public:
    AWS_GLUE_API MLUserDataEncryption() = default;
    AWS_GLUE_API MLUserDataEncryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API MLUserDataEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The encryption mode applied to user data. Valid values are:</p> <ul> <li>
     * <p>DISABLED: encryption is disabled</p> </li> <li> <p>SSEKMS: use of server-side
     * encryption with Key Management Service (SSE-KMS) for user data stored in Amazon
     * S3.</p> </li> </ul>
     */
    inline MLUserDataEncryptionModeString GetMlUserDataEncryptionMode() const { return m_mlUserDataEncryptionMode; }
    inline bool MlUserDataEncryptionModeHasBeenSet() const { return m_mlUserDataEncryptionModeHasBeenSet; }
    inline void SetMlUserDataEncryptionMode(MLUserDataEncryptionModeString value) { m_mlUserDataEncryptionModeHasBeenSet = true; m_mlUserDataEncryptionMode = value; }
    inline MLUserDataEncryption& WithMlUserDataEncryptionMode(MLUserDataEncryptionModeString value) { SetMlUserDataEncryptionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the customer-provided KMS key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    MLUserDataEncryption& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}
  private:

    MLUserDataEncryptionModeString m_mlUserDataEncryptionMode{MLUserDataEncryptionModeString::NOT_SET};
    bool m_mlUserDataEncryptionModeHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
