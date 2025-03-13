/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace BedrockDataAutomationRuntime
{
namespace Model
{

  /**
   * <p>Encryption configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-runtime-2024-06-13/EncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class EncryptionConfiguration
  {
  public:
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API EncryptionConfiguration() = default;
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API EncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API EncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Customer KMS key used for encryption</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    EncryptionConfiguration& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>KMS encryption context.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetKmsEncryptionContext() const { return m_kmsEncryptionContext; }
    inline bool KmsEncryptionContextHasBeenSet() const { return m_kmsEncryptionContextHasBeenSet; }
    template<typename KmsEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
    void SetKmsEncryptionContext(KmsEncryptionContextT&& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext = std::forward<KmsEncryptionContextT>(value); }
    template<typename KmsEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
    EncryptionConfiguration& WithKmsEncryptionContext(KmsEncryptionContextT&& value) { SetKmsEncryptionContext(std::forward<KmsEncryptionContextT>(value)); return *this;}
    template<typename KmsEncryptionContextKeyT = Aws::String, typename KmsEncryptionContextValueT = Aws::String>
    EncryptionConfiguration& AddKmsEncryptionContext(KmsEncryptionContextKeyT&& key, KmsEncryptionContextValueT&& value) {
      m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(std::forward<KmsEncryptionContextKeyT>(key), std::forward<KmsEncryptionContextValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_kmsEncryptionContext;
    bool m_kmsEncryptionContextHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
