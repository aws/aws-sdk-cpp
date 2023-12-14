/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/CertificateProviderSummary.h>
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
namespace IoT
{
namespace Model
{
  class ListCertificateProvidersResult
  {
  public:
    AWS_IOT_API ListCertificateProvidersResult();
    AWS_IOT_API ListCertificateProvidersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListCertificateProvidersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of certificate providers in your Amazon Web Services account.</p>
     */
    inline const Aws::Vector<CertificateProviderSummary>& GetCertificateProviders() const{ return m_certificateProviders; }

    /**
     * <p>The list of certificate providers in your Amazon Web Services account.</p>
     */
    inline void SetCertificateProviders(const Aws::Vector<CertificateProviderSummary>& value) { m_certificateProviders = value; }

    /**
     * <p>The list of certificate providers in your Amazon Web Services account.</p>
     */
    inline void SetCertificateProviders(Aws::Vector<CertificateProviderSummary>&& value) { m_certificateProviders = std::move(value); }

    /**
     * <p>The list of certificate providers in your Amazon Web Services account.</p>
     */
    inline ListCertificateProvidersResult& WithCertificateProviders(const Aws::Vector<CertificateProviderSummary>& value) { SetCertificateProviders(value); return *this;}

    /**
     * <p>The list of certificate providers in your Amazon Web Services account.</p>
     */
    inline ListCertificateProvidersResult& WithCertificateProviders(Aws::Vector<CertificateProviderSummary>&& value) { SetCertificateProviders(std::move(value)); return *this;}

    /**
     * <p>The list of certificate providers in your Amazon Web Services account.</p>
     */
    inline ListCertificateProvidersResult& AddCertificateProviders(const CertificateProviderSummary& value) { m_certificateProviders.push_back(value); return *this; }

    /**
     * <p>The list of certificate providers in your Amazon Web Services account.</p>
     */
    inline ListCertificateProvidersResult& AddCertificateProviders(CertificateProviderSummary&& value) { m_certificateProviders.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * more results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * more results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * more results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * more results.</p>
     */
    inline ListCertificateProvidersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * more results.</p>
     */
    inline ListCertificateProvidersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or <code>null</code> if there are no
     * more results.</p>
     */
    inline ListCertificateProvidersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCertificateProvidersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCertificateProvidersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCertificateProvidersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<CertificateProviderSummary> m_certificateProviders;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
