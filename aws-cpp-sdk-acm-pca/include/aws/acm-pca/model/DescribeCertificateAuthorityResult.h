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
#include <aws/acm-pca/model/CertificateAuthority.h>
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
  class AWS_ACMPCA_API DescribeCertificateAuthorityResult
  {
  public:
    DescribeCertificateAuthorityResult();
    DescribeCertificateAuthorityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeCertificateAuthorityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <a>CertificateAuthority</a> structure that contains information about your
     * private CA.</p>
     */
    inline const CertificateAuthority& GetCertificateAuthority() const{ return m_certificateAuthority; }

    /**
     * <p>A <a>CertificateAuthority</a> structure that contains information about your
     * private CA.</p>
     */
    inline void SetCertificateAuthority(const CertificateAuthority& value) { m_certificateAuthority = value; }

    /**
     * <p>A <a>CertificateAuthority</a> structure that contains information about your
     * private CA.</p>
     */
    inline void SetCertificateAuthority(CertificateAuthority&& value) { m_certificateAuthority = std::move(value); }

    /**
     * <p>A <a>CertificateAuthority</a> structure that contains information about your
     * private CA.</p>
     */
    inline DescribeCertificateAuthorityResult& WithCertificateAuthority(const CertificateAuthority& value) { SetCertificateAuthority(value); return *this;}

    /**
     * <p>A <a>CertificateAuthority</a> structure that contains information about your
     * private CA.</p>
     */
    inline DescribeCertificateAuthorityResult& WithCertificateAuthority(CertificateAuthority&& value) { SetCertificateAuthority(std::move(value)); return *this;}

  private:

    CertificateAuthority m_certificateAuthority;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
