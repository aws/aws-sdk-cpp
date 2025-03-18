/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>The KMS key details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/KMSKey">AWS
   * API Reference</a></p>
   */
  class KMSKey
  {
  public:
    AWS_FRAUDDETECTOR_API KMSKey() = default;
    AWS_FRAUDDETECTOR_API KMSKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API KMSKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The encryption key ARN.</p>
     */
    inline const Aws::String& GetKmsEncryptionKeyArn() const { return m_kmsEncryptionKeyArn; }
    inline bool KmsEncryptionKeyArnHasBeenSet() const { return m_kmsEncryptionKeyArnHasBeenSet; }
    template<typename KmsEncryptionKeyArnT = Aws::String>
    void SetKmsEncryptionKeyArn(KmsEncryptionKeyArnT&& value) { m_kmsEncryptionKeyArnHasBeenSet = true; m_kmsEncryptionKeyArn = std::forward<KmsEncryptionKeyArnT>(value); }
    template<typename KmsEncryptionKeyArnT = Aws::String>
    KMSKey& WithKmsEncryptionKeyArn(KmsEncryptionKeyArnT&& value) { SetKmsEncryptionKeyArn(std::forward<KmsEncryptionKeyArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kmsEncryptionKeyArn;
    bool m_kmsEncryptionKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
