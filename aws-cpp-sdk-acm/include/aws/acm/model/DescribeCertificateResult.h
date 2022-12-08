/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/CertificateDetail.h>
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
  class DescribeCertificateResult
  {
  public:
    AWS_ACM_API DescribeCertificateResult();
    AWS_ACM_API DescribeCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACM_API DescribeCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Metadata about an ACM certificate.</p>
     */
    inline const CertificateDetail& GetCertificate() const{ return m_certificate; }

    /**
     * <p>Metadata about an ACM certificate.</p>
     */
    inline void SetCertificate(const CertificateDetail& value) { m_certificate = value; }

    /**
     * <p>Metadata about an ACM certificate.</p>
     */
    inline void SetCertificate(CertificateDetail&& value) { m_certificate = std::move(value); }

    /**
     * <p>Metadata about an ACM certificate.</p>
     */
    inline DescribeCertificateResult& WithCertificate(const CertificateDetail& value) { SetCertificate(value); return *this;}

    /**
     * <p>Metadata about an ACM certificate.</p>
     */
    inline DescribeCertificateResult& WithCertificate(CertificateDetail&& value) { SetCertificate(std::move(value)); return *this;}

  private:

    CertificateDetail m_certificate;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
