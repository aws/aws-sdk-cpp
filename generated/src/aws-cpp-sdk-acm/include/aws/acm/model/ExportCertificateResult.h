﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ACM
{
namespace Model
{
  class ExportCertificateResult
  {
  public:
    AWS_ACM_API ExportCertificateResult();
    AWS_ACM_API ExportCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACM_API ExportCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The base64 PEM-encoded certificate.</p>
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }
    inline void SetCertificate(const Aws::String& value) { m_certificate = value; }
    inline void SetCertificate(Aws::String&& value) { m_certificate = std::move(value); }
    inline void SetCertificate(const char* value) { m_certificate.assign(value); }
    inline ExportCertificateResult& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}
    inline ExportCertificateResult& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}
    inline ExportCertificateResult& WithCertificate(const char* value) { SetCertificate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base64 PEM-encoded certificate chain. This does not include the
     * certificate that you are exporting.</p>
     */
    inline const Aws::String& GetCertificateChain() const{ return m_certificateChain; }
    inline void SetCertificateChain(const Aws::String& value) { m_certificateChain = value; }
    inline void SetCertificateChain(Aws::String&& value) { m_certificateChain = std::move(value); }
    inline void SetCertificateChain(const char* value) { m_certificateChain.assign(value); }
    inline ExportCertificateResult& WithCertificateChain(const Aws::String& value) { SetCertificateChain(value); return *this;}
    inline ExportCertificateResult& WithCertificateChain(Aws::String&& value) { SetCertificateChain(std::move(value)); return *this;}
    inline ExportCertificateResult& WithCertificateChain(const char* value) { SetCertificateChain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encrypted private key associated with the public key in the certificate.
     * The key is output in PKCS #8 format and is base64 PEM-encoded. </p>
     */
    inline const Aws::String& GetPrivateKey() const{ return m_privateKey; }
    inline void SetPrivateKey(const Aws::String& value) { m_privateKey = value; }
    inline void SetPrivateKey(Aws::String&& value) { m_privateKey = std::move(value); }
    inline void SetPrivateKey(const char* value) { m_privateKey.assign(value); }
    inline ExportCertificateResult& WithPrivateKey(const Aws::String& value) { SetPrivateKey(value); return *this;}
    inline ExportCertificateResult& WithPrivateKey(Aws::String&& value) { SetPrivateKey(std::move(value)); return *this;}
    inline ExportCertificateResult& WithPrivateKey(const char* value) { SetPrivateKey(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ExportCertificateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ExportCertificateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ExportCertificateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_certificate;

    Aws::String m_certificateChain;

    Aws::String m_privateKey;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
