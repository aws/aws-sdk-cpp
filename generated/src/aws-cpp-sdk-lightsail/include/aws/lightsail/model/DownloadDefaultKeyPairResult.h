/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Lightsail
{
namespace Model
{
  class DownloadDefaultKeyPairResult
  {
  public:
    AWS_LIGHTSAIL_API DownloadDefaultKeyPairResult() = default;
    AWS_LIGHTSAIL_API DownloadDefaultKeyPairResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API DownloadDefaultKeyPairResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A base64-encoded public key of the <code>ssh-rsa</code> type.</p>
     */
    inline const Aws::String& GetPublicKeyBase64() const { return m_publicKeyBase64; }
    template<typename PublicKeyBase64T = Aws::String>
    void SetPublicKeyBase64(PublicKeyBase64T&& value) { m_publicKeyBase64HasBeenSet = true; m_publicKeyBase64 = std::forward<PublicKeyBase64T>(value); }
    template<typename PublicKeyBase64T = Aws::String>
    DownloadDefaultKeyPairResult& WithPublicKeyBase64(PublicKeyBase64T&& value) { SetPublicKeyBase64(std::forward<PublicKeyBase64T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A base64-encoded RSA private key.</p>
     */
    inline const Aws::String& GetPrivateKeyBase64() const { return m_privateKeyBase64; }
    template<typename PrivateKeyBase64T = Aws::String>
    void SetPrivateKeyBase64(PrivateKeyBase64T&& value) { m_privateKeyBase64HasBeenSet = true; m_privateKeyBase64 = std::forward<PrivateKeyBase64T>(value); }
    template<typename PrivateKeyBase64T = Aws::String>
    DownloadDefaultKeyPairResult& WithPrivateKeyBase64(PrivateKeyBase64T&& value) { SetPrivateKeyBase64(std::forward<PrivateKeyBase64T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the default key pair was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DownloadDefaultKeyPairResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DownloadDefaultKeyPairResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_publicKeyBase64;
    bool m_publicKeyBase64HasBeenSet = false;

    Aws::String m_privateKeyBase64;
    bool m_privateKeyBase64HasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
