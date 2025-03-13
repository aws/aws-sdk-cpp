/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KMS
{
namespace Model
{
  class GetParametersForImportResult
  {
  public:
    AWS_KMS_API GetParametersForImportResult() = default;
    AWS_KMS_API GetParametersForImportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API GetParametersForImportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">key
     * ARN</a>) of the KMS key to use in a subsequent <a>ImportKeyMaterial</a> request.
     * This is the same KMS key specified in the <code>GetParametersForImport</code>
     * request.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    GetParametersForImportResult& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The import token to send in a subsequent <a>ImportKeyMaterial</a>
     * request.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetImportToken() const { return m_importToken; }
    template<typename ImportTokenT = Aws::Utils::ByteBuffer>
    void SetImportToken(ImportTokenT&& value) { m_importTokenHasBeenSet = true; m_importToken = std::forward<ImportTokenT>(value); }
    template<typename ImportTokenT = Aws::Utils::ByteBuffer>
    GetParametersForImportResult& WithImportToken(ImportTokenT&& value) { SetImportToken(std::forward<ImportTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public key to use to encrypt the key material before importing it with
     * <a>ImportKeyMaterial</a>.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetPublicKey() const { return m_publicKey; }
    template<typename PublicKeyT = Aws::Utils::CryptoBuffer>
    void SetPublicKey(PublicKeyT&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::forward<PublicKeyT>(value); }
    template<typename PublicKeyT = Aws::Utils::CryptoBuffer>
    GetParametersForImportResult& WithPublicKey(PublicKeyT&& value) { SetPublicKey(std::forward<PublicKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the import token and public key are no longer valid. After
     * this time, you cannot use them to make an <a>ImportKeyMaterial</a> request and
     * you must send another <code>GetParametersForImport</code> request to get new
     * ones.</p>
     */
    inline const Aws::Utils::DateTime& GetParametersValidTo() const { return m_parametersValidTo; }
    template<typename ParametersValidToT = Aws::Utils::DateTime>
    void SetParametersValidTo(ParametersValidToT&& value) { m_parametersValidToHasBeenSet = true; m_parametersValidTo = std::forward<ParametersValidToT>(value); }
    template<typename ParametersValidToT = Aws::Utils::DateTime>
    GetParametersForImportResult& WithParametersValidTo(ParametersValidToT&& value) { SetParametersValidTo(std::forward<ParametersValidToT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetParametersForImportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::Utils::ByteBuffer m_importToken{};
    bool m_importTokenHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_publicKey{};
    bool m_publicKeyHasBeenSet = false;

    Aws::Utils::DateTime m_parametersValidTo{};
    bool m_parametersValidToHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
