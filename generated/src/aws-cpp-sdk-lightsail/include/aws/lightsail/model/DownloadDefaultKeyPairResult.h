﻿/**
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
    AWS_LIGHTSAIL_API DownloadDefaultKeyPairResult();
    AWS_LIGHTSAIL_API DownloadDefaultKeyPairResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API DownloadDefaultKeyPairResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A base64-encoded public key of the <code>ssh-rsa</code> type.</p>
     */
    inline const Aws::String& GetPublicKeyBase64() const{ return m_publicKeyBase64; }
    inline void SetPublicKeyBase64(const Aws::String& value) { m_publicKeyBase64 = value; }
    inline void SetPublicKeyBase64(Aws::String&& value) { m_publicKeyBase64 = std::move(value); }
    inline void SetPublicKeyBase64(const char* value) { m_publicKeyBase64.assign(value); }
    inline DownloadDefaultKeyPairResult& WithPublicKeyBase64(const Aws::String& value) { SetPublicKeyBase64(value); return *this;}
    inline DownloadDefaultKeyPairResult& WithPublicKeyBase64(Aws::String&& value) { SetPublicKeyBase64(std::move(value)); return *this;}
    inline DownloadDefaultKeyPairResult& WithPublicKeyBase64(const char* value) { SetPublicKeyBase64(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A base64-encoded RSA private key.</p>
     */
    inline const Aws::String& GetPrivateKeyBase64() const{ return m_privateKeyBase64; }
    inline void SetPrivateKeyBase64(const Aws::String& value) { m_privateKeyBase64 = value; }
    inline void SetPrivateKeyBase64(Aws::String&& value) { m_privateKeyBase64 = std::move(value); }
    inline void SetPrivateKeyBase64(const char* value) { m_privateKeyBase64.assign(value); }
    inline DownloadDefaultKeyPairResult& WithPrivateKeyBase64(const Aws::String& value) { SetPrivateKeyBase64(value); return *this;}
    inline DownloadDefaultKeyPairResult& WithPrivateKeyBase64(Aws::String&& value) { SetPrivateKeyBase64(std::move(value)); return *this;}
    inline DownloadDefaultKeyPairResult& WithPrivateKeyBase64(const char* value) { SetPrivateKeyBase64(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the default key pair was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline DownloadDefaultKeyPairResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DownloadDefaultKeyPairResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DownloadDefaultKeyPairResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DownloadDefaultKeyPairResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DownloadDefaultKeyPairResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_publicKeyBase64;

    Aws::String m_privateKeyBase64;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
