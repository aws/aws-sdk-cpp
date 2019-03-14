/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ACM_API ExportCertificateResult
  {
  public:
    ExportCertificateResult();
    ExportCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ExportCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The base64 PEM-encoded certificate.</p>
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }

    /**
     * <p>The base64 PEM-encoded certificate.</p>
     */
    inline void SetCertificate(const Aws::String& value) { m_certificate = value; }

    /**
     * <p>The base64 PEM-encoded certificate.</p>
     */
    inline void SetCertificate(Aws::String&& value) { m_certificate = std::move(value); }

    /**
     * <p>The base64 PEM-encoded certificate.</p>
     */
    inline void SetCertificate(const char* value) { m_certificate.assign(value); }

    /**
     * <p>The base64 PEM-encoded certificate.</p>
     */
    inline ExportCertificateResult& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}

    /**
     * <p>The base64 PEM-encoded certificate.</p>
     */
    inline ExportCertificateResult& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}

    /**
     * <p>The base64 PEM-encoded certificate.</p>
     */
    inline ExportCertificateResult& WithCertificate(const char* value) { SetCertificate(value); return *this;}


    /**
     * <p>The base64 PEM-encoded certificate chain. This does not include the
     * certificate that you are exporting.</p>
     */
    inline const Aws::String& GetCertificateChain() const{ return m_certificateChain; }

    /**
     * <p>The base64 PEM-encoded certificate chain. This does not include the
     * certificate that you are exporting.</p>
     */
    inline void SetCertificateChain(const Aws::String& value) { m_certificateChain = value; }

    /**
     * <p>The base64 PEM-encoded certificate chain. This does not include the
     * certificate that you are exporting.</p>
     */
    inline void SetCertificateChain(Aws::String&& value) { m_certificateChain = std::move(value); }

    /**
     * <p>The base64 PEM-encoded certificate chain. This does not include the
     * certificate that you are exporting.</p>
     */
    inline void SetCertificateChain(const char* value) { m_certificateChain.assign(value); }

    /**
     * <p>The base64 PEM-encoded certificate chain. This does not include the
     * certificate that you are exporting.</p>
     */
    inline ExportCertificateResult& WithCertificateChain(const Aws::String& value) { SetCertificateChain(value); return *this;}

    /**
     * <p>The base64 PEM-encoded certificate chain. This does not include the
     * certificate that you are exporting.</p>
     */
    inline ExportCertificateResult& WithCertificateChain(Aws::String&& value) { SetCertificateChain(std::move(value)); return *this;}

    /**
     * <p>The base64 PEM-encoded certificate chain. This does not include the
     * certificate that you are exporting.</p>
     */
    inline ExportCertificateResult& WithCertificateChain(const char* value) { SetCertificateChain(value); return *this;}


    /**
     * <p>The encrypted private key associated with the public key in the certificate.
     * The key is output in PKCS #8 format and is base64 PEM-encoded. </p>
     */
    inline const Aws::String& GetPrivateKey() const{ return m_privateKey; }

    /**
     * <p>The encrypted private key associated with the public key in the certificate.
     * The key is output in PKCS #8 format and is base64 PEM-encoded. </p>
     */
    inline void SetPrivateKey(const Aws::String& value) { m_privateKey = value; }

    /**
     * <p>The encrypted private key associated with the public key in the certificate.
     * The key is output in PKCS #8 format and is base64 PEM-encoded. </p>
     */
    inline void SetPrivateKey(Aws::String&& value) { m_privateKey = std::move(value); }

    /**
     * <p>The encrypted private key associated with the public key in the certificate.
     * The key is output in PKCS #8 format and is base64 PEM-encoded. </p>
     */
    inline void SetPrivateKey(const char* value) { m_privateKey.assign(value); }

    /**
     * <p>The encrypted private key associated with the public key in the certificate.
     * The key is output in PKCS #8 format and is base64 PEM-encoded. </p>
     */
    inline ExportCertificateResult& WithPrivateKey(const Aws::String& value) { SetPrivateKey(value); return *this;}

    /**
     * <p>The encrypted private key associated with the public key in the certificate.
     * The key is output in PKCS #8 format and is base64 PEM-encoded. </p>
     */
    inline ExportCertificateResult& WithPrivateKey(Aws::String&& value) { SetPrivateKey(std::move(value)); return *this;}

    /**
     * <p>The encrypted private key associated with the public key in the certificate.
     * The key is output in PKCS #8 format and is base64 PEM-encoded. </p>
     */
    inline ExportCertificateResult& WithPrivateKey(const char* value) { SetPrivateKey(value); return *this;}

  private:

    Aws::String m_certificate;

    Aws::String m_certificateChain;

    Aws::String m_privateKey;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
