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
  class AWS_ACMPCA_API GetCertificateAuthorityCsrResult
  {
  public:
    GetCertificateAuthorityCsrResult();
    GetCertificateAuthorityCsrResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetCertificateAuthorityCsrResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
