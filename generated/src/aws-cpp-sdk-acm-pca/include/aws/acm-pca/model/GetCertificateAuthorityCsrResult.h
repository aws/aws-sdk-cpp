/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
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
namespace ACMPCA
{
namespace Model
{
  class GetCertificateAuthorityCsrResult
  {
  public:
    AWS_ACMPCA_API GetCertificateAuthorityCsrResult();
    AWS_ACMPCA_API GetCertificateAuthorityCsrResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACMPCA_API GetCertificateAuthorityCsrResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The base64 PEM-encoded certificate signing request (CSR) for your private CA
     * certificate.</p>
     */
    inline const Aws::String& GetCsr() const{ return m_csr; }

    /**
     * <p>The base64 PEM-encoded certificate signing request (CSR) for your private CA
     * certificate.</p>
     */
    inline void SetCsr(const Aws::String& value) { m_csr = value; }

    /**
     * <p>The base64 PEM-encoded certificate signing request (CSR) for your private CA
     * certificate.</p>
     */
    inline void SetCsr(Aws::String&& value) { m_csr = std::move(value); }

    /**
     * <p>The base64 PEM-encoded certificate signing request (CSR) for your private CA
     * certificate.</p>
     */
    inline void SetCsr(const char* value) { m_csr.assign(value); }

    /**
     * <p>The base64 PEM-encoded certificate signing request (CSR) for your private CA
     * certificate.</p>
     */
    inline GetCertificateAuthorityCsrResult& WithCsr(const Aws::String& value) { SetCsr(value); return *this;}

    /**
     * <p>The base64 PEM-encoded certificate signing request (CSR) for your private CA
     * certificate.</p>
     */
    inline GetCertificateAuthorityCsrResult& WithCsr(Aws::String&& value) { SetCsr(std::move(value)); return *this;}

    /**
     * <p>The base64 PEM-encoded certificate signing request (CSR) for your private CA
     * certificate.</p>
     */
    inline GetCertificateAuthorityCsrResult& WithCsr(const char* value) { SetCsr(value); return *this;}

  private:

    Aws::String m_csr;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
