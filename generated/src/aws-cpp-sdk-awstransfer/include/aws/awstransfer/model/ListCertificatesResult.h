﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/ListedCertificate.h>
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
  class ListCertificatesResult
  {
  public:
    AWS_TRANSFER_API ListCertificatesResult();
    AWS_TRANSFER_API ListCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API ListCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the next token, which you can use to list the next certificate.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCertificatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCertificatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCertificatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an array of the certificates that are specified in the
     * <code>ListCertificates</code> call.</p>
     */
    inline const Aws::Vector<ListedCertificate>& GetCertificates() const{ return m_certificates; }
    inline void SetCertificates(const Aws::Vector<ListedCertificate>& value) { m_certificates = value; }
    inline void SetCertificates(Aws::Vector<ListedCertificate>&& value) { m_certificates = std::move(value); }
    inline ListCertificatesResult& WithCertificates(const Aws::Vector<ListedCertificate>& value) { SetCertificates(value); return *this;}
    inline ListCertificatesResult& WithCertificates(Aws::Vector<ListedCertificate>&& value) { SetCertificates(std::move(value)); return *this;}
    inline ListCertificatesResult& AddCertificates(const ListedCertificate& value) { m_certificates.push_back(value); return *this; }
    inline ListCertificatesResult& AddCertificates(ListedCertificate&& value) { m_certificates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCertificatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCertificatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCertificatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ListedCertificate> m_certificates;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
