﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm/model/CertificateSummary.h>
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
  class ListCertificatesResult
  {
  public:
    AWS_ACM_API ListCertificatesResult();
    AWS_ACM_API ListCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACM_API ListCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When the list is truncated, this value is present and contains the value to
     * use for the <code>NextToken</code> parameter in a subsequent pagination
     * request.</p>
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
     * <p>A list of ACM certificates.</p>
     */
    inline const Aws::Vector<CertificateSummary>& GetCertificateSummaryList() const{ return m_certificateSummaryList; }
    inline void SetCertificateSummaryList(const Aws::Vector<CertificateSummary>& value) { m_certificateSummaryList = value; }
    inline void SetCertificateSummaryList(Aws::Vector<CertificateSummary>&& value) { m_certificateSummaryList = std::move(value); }
    inline ListCertificatesResult& WithCertificateSummaryList(const Aws::Vector<CertificateSummary>& value) { SetCertificateSummaryList(value); return *this;}
    inline ListCertificatesResult& WithCertificateSummaryList(Aws::Vector<CertificateSummary>&& value) { SetCertificateSummaryList(std::move(value)); return *this;}
    inline ListCertificatesResult& AddCertificateSummaryList(const CertificateSummary& value) { m_certificateSummaryList.push_back(value); return *this; }
    inline ListCertificatesResult& AddCertificateSummaryList(CertificateSummary&& value) { m_certificateSummaryList.push_back(std::move(value)); return *this; }
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

    Aws::Vector<CertificateSummary> m_certificateSummaryList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
