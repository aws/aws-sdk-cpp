/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/acm/model/CertificateDetail.h>

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
  class AWS_ACM_API DescribeCertificateResult
  {
  public:
    DescribeCertificateResult();
    DescribeCertificateResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeCertificateResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Contains a <a>CertificateDetail</a> structure that lists the fields of an ACM
     * Certificate.</p>
     */
    inline const CertificateDetail& GetCertificate() const{ return m_certificate; }

    /**
     * <p>Contains a <a>CertificateDetail</a> structure that lists the fields of an ACM
     * Certificate.</p>
     */
    inline void SetCertificate(const CertificateDetail& value) { m_certificate = value; }

    /**
     * <p>Contains a <a>CertificateDetail</a> structure that lists the fields of an ACM
     * Certificate.</p>
     */
    inline void SetCertificate(CertificateDetail&& value) { m_certificate = value; }

    /**
     * <p>Contains a <a>CertificateDetail</a> structure that lists the fields of an ACM
     * Certificate.</p>
     */
    inline DescribeCertificateResult& WithCertificate(const CertificateDetail& value) { SetCertificate(value); return *this;}

    /**
     * <p>Contains a <a>CertificateDetail</a> structure that lists the fields of an ACM
     * Certificate.</p>
     */
    inline DescribeCertificateResult& WithCertificate(CertificateDetail&& value) { SetCertificate(value); return *this;}

  private:
    CertificateDetail m_certificate;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
