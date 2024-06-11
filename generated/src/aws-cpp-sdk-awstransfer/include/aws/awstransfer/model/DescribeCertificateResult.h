﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/DescribedCertificate.h>
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


    ///@{
    /**
     * <p>The details for the specified certificate, returned as an object.</p>
     */
    inline const DescribedCertificate& GetCertificate() const{ return m_certificate; }
    inline void SetCertificate(const DescribedCertificate& value) { m_certificate = value; }
    inline void SetCertificate(DescribedCertificate&& value) { m_certificate = std::move(value); }
    inline DescribeCertificateResult& WithCertificate(const DescribedCertificate& value) { SetCertificate(value); return *this;}
    inline DescribeCertificateResult& WithCertificate(DescribedCertificate&& value) { SetCertificate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeCertificateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeCertificateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeCertificateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DescribedCertificate m_certificate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
