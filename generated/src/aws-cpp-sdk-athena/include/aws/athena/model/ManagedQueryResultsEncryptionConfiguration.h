/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>If you encrypt query and calculation results in Athena owned storage, this
   * field indicates the encryption option (for example, SSE_KMS or CSE_KMS) and key
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ManagedQueryResultsEncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class ManagedQueryResultsEncryptionConfiguration
  {
  public:
    AWS_ATHENA_API ManagedQueryResultsEncryptionConfiguration() = default;
    AWS_ATHENA_API ManagedQueryResultsEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API ManagedQueryResultsEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of an KMS key for encrypting managed query results.</p>
     */
    inline const Aws::String& GetKmsKey() const { return m_kmsKey; }
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
    template<typename KmsKeyT = Aws::String>
    void SetKmsKey(KmsKeyT&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::forward<KmsKeyT>(value); }
    template<typename KmsKeyT = Aws::String>
    ManagedQueryResultsEncryptionConfiguration& WithKmsKey(KmsKeyT&& value) { SetKmsKey(std::forward<KmsKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
