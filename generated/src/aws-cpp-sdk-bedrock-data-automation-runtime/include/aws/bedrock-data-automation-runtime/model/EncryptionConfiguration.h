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
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API EncryptionConfiguration();
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API EncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API EncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>KMS key id.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline EncryptionConfiguration& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline EncryptionConfiguration& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline EncryptionConfiguration& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>KMS encryption context.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetKmsEncryptionContext() const{ return m_kmsEncryptionContext; }
    inline bool KmsEncryptionContextHasBeenSet() const { return m_kmsEncryptionContextHasBeenSet; }
    inline void SetKmsEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext = value; }
    inline void SetKmsEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext = std::move(value); }
    inline EncryptionConfiguration& WithKmsEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetKmsEncryptionContext(value); return *this;}
    inline EncryptionConfiguration& WithKmsEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetKmsEncryptionContext(std::move(value)); return *this;}
    inline EncryptionConfiguration& AddKmsEncryptionContext(const Aws::String& key, const Aws::String& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(key, value); return *this; }
    inline EncryptionConfiguration& AddKmsEncryptionContext(Aws::String&& key, const Aws::String& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(std::move(key), value); return *this; }
    inline EncryptionConfiguration& AddKmsEncryptionContext(const Aws::String& key, Aws::String&& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(key, std::move(value)); return *this; }
    inline EncryptionConfiguration& AddKmsEncryptionContext(Aws::String&& key, Aws::String&& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }
    inline EncryptionConfiguration& AddKmsEncryptionContext(const char* key, Aws::String&& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(key, std::move(value)); return *this; }
    inline EncryptionConfiguration& AddKmsEncryptionContext(Aws::String&& key, const char* value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(std::move(key), value); return *this; }
    inline EncryptionConfiguration& AddKmsEncryptionContext(const char* key, const char* value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(key, value); return *this; }
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
