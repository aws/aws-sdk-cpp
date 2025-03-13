/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
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
namespace BedrockDataAutomation
{
namespace Model
{

  /**
   * <p>KMS Encryption Configuration</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/EncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class EncryptionConfiguration
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API EncryptionConfiguration() = default;
    AWS_BEDROCKDATAAUTOMATION_API EncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API EncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    EncryptionConfiguration& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    
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
} // namespace BedrockDataAutomation
} // namespace Aws
