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
    AWS_ACMPCA_API GetCertificateAuthorityCsrResult() = default;
    AWS_ACMPCA_API GetCertificateAuthorityCsrResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACMPCA_API GetCertificateAuthorityCsrResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The base64 PEM-encoded certificate signing request (CSR) for your private CA
     * certificate.</p>
     */
    inline const Aws::String& GetCsr() const { return m_csr; }
    template<typename CsrT = Aws::String>
    void SetCsr(CsrT&& value) { m_csrHasBeenSet = true; m_csr = std::forward<CsrT>(value); }
    template<typename CsrT = Aws::String>
    GetCertificateAuthorityCsrResult& WithCsr(CsrT&& value) { SetCsr(std::forward<CsrT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCertificateAuthorityCsrResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_csr;
    bool m_csrHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
