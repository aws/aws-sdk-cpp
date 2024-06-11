﻿/**
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


    ///@{
    /**
     * <p>The base64 PEM-encoded certificate signing request (CSR) for your private CA
     * certificate.</p>
     */
    inline const Aws::String& GetCsr() const{ return m_csr; }
    inline void SetCsr(const Aws::String& value) { m_csr = value; }
    inline void SetCsr(Aws::String&& value) { m_csr = std::move(value); }
    inline void SetCsr(const char* value) { m_csr.assign(value); }
    inline GetCertificateAuthorityCsrResult& WithCsr(const Aws::String& value) { SetCsr(value); return *this;}
    inline GetCertificateAuthorityCsrResult& WithCsr(Aws::String&& value) { SetCsr(std::move(value)); return *this;}
    inline GetCertificateAuthorityCsrResult& WithCsr(const char* value) { SetCsr(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetCertificateAuthorityCsrResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetCertificateAuthorityCsrResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetCertificateAuthorityCsrResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_csr;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
