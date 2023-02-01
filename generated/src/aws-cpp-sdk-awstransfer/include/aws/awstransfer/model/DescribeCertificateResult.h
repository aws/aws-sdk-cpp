/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/DescribedCertificate.h>
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
namespace Transfer
{
namespace Model
{
  class DescribeCertificateResult
  {
  public:
    AWS_TRANSFER_API DescribeCertificateResult();
    AWS_TRANSFER_API DescribeCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API DescribeCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details for the specified certificate, returned as an object.</p>
     */
    inline const DescribedCertificate& GetCertificate() const{ return m_certificate; }

    /**
     * <p>The details for the specified certificate, returned as an object.</p>
     */
    inline void SetCertificate(const DescribedCertificate& value) { m_certificate = value; }

    /**
     * <p>The details for the specified certificate, returned as an object.</p>
     */
    inline void SetCertificate(DescribedCertificate&& value) { m_certificate = std::move(value); }

    /**
     * <p>The details for the specified certificate, returned as an object.</p>
     */
    inline DescribeCertificateResult& WithCertificate(const DescribedCertificate& value) { SetCertificate(value); return *this;}

    /**
     * <p>The details for the specified certificate, returned as an object.</p>
     */
    inline DescribeCertificateResult& WithCertificate(DescribedCertificate&& value) { SetCertificate(std::move(value)); return *this;}

  private:

    DescribedCertificate m_certificate;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
