/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Use this structure to propose allowing <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
   * operations</a> in the grant only when the operation request includes the
   * specified <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#encrypt_context">encryption
   * context</a>. You can specify only one type of encryption context. An empty map
   * is treated as not specified. For more information, see <a
   * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_GrantConstraints.html">GrantConstraints</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/KmsGrantConstraints">AWS
   * API Reference</a></p>
   */
  class KmsGrantConstraints
  {
  public:
    AWS_ACCESSANALYZER_API KmsGrantConstraints() = default;
    AWS_ACCESSANALYZER_API KmsGrantConstraints(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API KmsGrantConstraints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of key-value pairs that must match the encryption context in the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the operation only when the encryption
     * context in the request is the same as the encryption context specified in this
     * constraint.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContextEquals() const { return m_encryptionContextEquals; }
    inline bool EncryptionContextEqualsHasBeenSet() const { return m_encryptionContextEqualsHasBeenSet; }
    template<typename EncryptionContextEqualsT = Aws::Map<Aws::String, Aws::String>>
    void SetEncryptionContextEquals(EncryptionContextEqualsT&& value) { m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals = std::forward<EncryptionContextEqualsT>(value); }
    template<typename EncryptionContextEqualsT = Aws::Map<Aws::String, Aws::String>>
    KmsGrantConstraints& WithEncryptionContextEquals(EncryptionContextEqualsT&& value) { SetEncryptionContextEquals(std::forward<EncryptionContextEqualsT>(value)); return *this;}
    template<typename EncryptionContextEqualsKeyT = Aws::String, typename EncryptionContextEqualsValueT = Aws::String>
    KmsGrantConstraints& AddEncryptionContextEquals(EncryptionContextEqualsKeyT&& key, EncryptionContextEqualsValueT&& value) {
      m_encryptionContextEqualsHasBeenSet = true; m_encryptionContextEquals.emplace(std::forward<EncryptionContextEqualsKeyT>(key), std::forward<EncryptionContextEqualsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that must be included in the encryption context of
     * the <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#cryptographic-operations">cryptographic
     * operation</a> request. The grant allows the cryptographic operation only when
     * the encryption context in the request includes the key-value pairs specified in
     * this constraint, although it can include additional key-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEncryptionContextSubset() const { return m_encryptionContextSubset; }
    inline bool EncryptionContextSubsetHasBeenSet() const { return m_encryptionContextSubsetHasBeenSet; }
    template<typename EncryptionContextSubsetT = Aws::Map<Aws::String, Aws::String>>
    void SetEncryptionContextSubset(EncryptionContextSubsetT&& value) { m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset = std::forward<EncryptionContextSubsetT>(value); }
    template<typename EncryptionContextSubsetT = Aws::Map<Aws::String, Aws::String>>
    KmsGrantConstraints& WithEncryptionContextSubset(EncryptionContextSubsetT&& value) { SetEncryptionContextSubset(std::forward<EncryptionContextSubsetT>(value)); return *this;}
    template<typename EncryptionContextSubsetKeyT = Aws::String, typename EncryptionContextSubsetValueT = Aws::String>
    KmsGrantConstraints& AddEncryptionContextSubset(EncryptionContextSubsetKeyT&& key, EncryptionContextSubsetValueT&& value) {
      m_encryptionContextSubsetHasBeenSet = true; m_encryptionContextSubset.emplace(std::forward<EncryptionContextSubsetKeyT>(key), std::forward<EncryptionContextSubsetValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_encryptionContextEquals;
    bool m_encryptionContextEqualsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_encryptionContextSubset;
    bool m_encryptionContextSubsetHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
