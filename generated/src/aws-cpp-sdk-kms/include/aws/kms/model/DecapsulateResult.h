/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/model/EncapsulationAlgorithmSpec.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace KMS {
namespace Model {
class DecapsulateResult {
 public:
  AWS_KMS_API DecapsulateResult() = default;
  AWS_KMS_API DecapsulateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_KMS_API DecapsulateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the ML-KEM KMS key used to decapsulate the shared
   * secret.</p>
   */
  inline const Aws::String& GetKeyId() const { return m_keyId; }
  template <typename KeyIdT = Aws::String>
  void SetKeyId(KeyIdT&& value) {
    m_keyIdHasBeenSet = true;
    m_keyId = std::forward<KeyIdT>(value);
  }
  template <typename KeyIdT = Aws::String>
  DecapsulateResult& WithKeyId(KeyIdT&& value) {
    SetKeyId(std::forward<KeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The plaintext shared secret recovered from the encapsulated form. It is a
   * 32-byte value that matches the shared secret held by the encapsulating party.
   * When you use the HTTP API or the Amazon Web Services CLI, the value is
   * Base64-encoded. Otherwise, it is not Base64-encoded.</p>
   */
  inline const Aws::Utils::CryptoBuffer& GetSharedSecret() const { return m_sharedSecret; }
  template <typename SharedSecretT = Aws::Utils::CryptoBuffer>
  void SetSharedSecret(SharedSecretT&& value) {
    m_sharedSecretHasBeenSet = true;
    m_sharedSecret = std::forward<SharedSecretT>(value);
  }
  template <typename SharedSecretT = Aws::Utils::CryptoBuffer>
  DecapsulateResult& WithSharedSecret(SharedSecretT&& value) {
    SetSharedSecret(std::forward<SharedSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key encapsulation algorithm used to recover the shared secret.</p>
   */
  inline EncapsulationAlgorithmSpec GetEncapsulationAlgorithm() const { return m_encapsulationAlgorithm; }
  inline void SetEncapsulationAlgorithm(EncapsulationAlgorithmSpec value) {
    m_encapsulationAlgorithmHasBeenSet = true;
    m_encapsulationAlgorithm = value;
  }
  inline DecapsulateResult& WithEncapsulationAlgorithm(EncapsulationAlgorithmSpec value) {
    SetEncapsulationAlgorithm(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DecapsulateResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_keyId;

  Aws::Utils::CryptoBuffer m_sharedSecret{};

  EncapsulationAlgorithmSpec m_encapsulationAlgorithm{EncapsulationAlgorithmSpec::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_keyIdHasBeenSet = false;
  bool m_sharedSecretHasBeenSet = false;
  bool m_encapsulationAlgorithmHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace KMS
}  // namespace Aws
