/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListCertificateAuthoritiesResult
  {
  public:
    AWS_ACMPCA_API ListCertificateAuthoritiesResult();
    AWS_ACMPCA_API ListCertificateAuthoritiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACMPCA_API ListCertificateAuthoritiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When the list is truncated, this value is present and should be used for the
     * <code>NextToken</code> parameter in a subsequent pagination request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCertificateAuthoritiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCertificateAuthoritiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCertificateAuthoritiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary information about each certificate authority you have created.</p>
     */
    inline const Aws::Vector<CertificateAuthority>& GetCertificateAuthorities() const{ return m_certificateAuthorities; }
    inline void SetCertificateAuthorities(const Aws::Vector<CertificateAuthority>& value) { m_certificateAuthorities = value; }
    inline void SetCertificateAuthorities(Aws::Vector<CertificateAuthority>&& value) { m_certificateAuthorities = std::move(value); }
    inline ListCertificateAuthoritiesResult& WithCertificateAuthorities(const Aws::Vector<CertificateAuthority>& value) { SetCertificateAuthorities(value); return *this;}
    inline ListCertificateAuthoritiesResult& WithCertificateAuthorities(Aws::Vector<CertificateAuthority>&& value) { SetCertificateAuthorities(std::move(value)); return *this;}
    inline ListCertificateAuthoritiesResult& AddCertificateAuthorities(const CertificateAuthority& value) { m_certificateAuthorities.push_back(value); return *this; }
    inline ListCertificateAuthoritiesResult& AddCertificateAuthorities(CertificateAuthority&& value) { m_certificateAuthorities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCertificateAuthoritiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCertificateAuthoritiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCertificateAuthoritiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<CertificateAuthority> m_certificateAuthorities;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
