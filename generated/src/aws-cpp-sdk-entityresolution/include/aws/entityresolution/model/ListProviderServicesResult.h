/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/ProviderServiceSummary.h>
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
namespace EntityResolution
{
namespace Model
{
  class ListProviderServicesResult
  {
  public:
    AWS_ENTITYRESOLUTION_API ListProviderServicesResult();
    AWS_ENTITYRESOLUTION_API ListProviderServicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API ListProviderServicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline ListProviderServicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline ListProviderServicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline ListProviderServicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of <code>ProviderServices</code> objects.</p>
     */
    inline const Aws::Vector<ProviderServiceSummary>& GetProviderServiceSummaries() const{ return m_providerServiceSummaries; }

    /**
     * <p>A list of <code>ProviderServices</code> objects.</p>
     */
    inline void SetProviderServiceSummaries(const Aws::Vector<ProviderServiceSummary>& value) { m_providerServiceSummaries = value; }

    /**
     * <p>A list of <code>ProviderServices</code> objects.</p>
     */
    inline void SetProviderServiceSummaries(Aws::Vector<ProviderServiceSummary>&& value) { m_providerServiceSummaries = std::move(value); }

    /**
     * <p>A list of <code>ProviderServices</code> objects.</p>
     */
    inline ListProviderServicesResult& WithProviderServiceSummaries(const Aws::Vector<ProviderServiceSummary>& value) { SetProviderServiceSummaries(value); return *this;}

    /**
     * <p>A list of <code>ProviderServices</code> objects.</p>
     */
    inline ListProviderServicesResult& WithProviderServiceSummaries(Aws::Vector<ProviderServiceSummary>&& value) { SetProviderServiceSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ProviderServices</code> objects.</p>
     */
    inline ListProviderServicesResult& AddProviderServiceSummaries(const ProviderServiceSummary& value) { m_providerServiceSummaries.push_back(value); return *this; }

    /**
     * <p>A list of <code>ProviderServices</code> objects.</p>
     */
    inline ListProviderServicesResult& AddProviderServiceSummaries(ProviderServiceSummary&& value) { m_providerServiceSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListProviderServicesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListProviderServicesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListProviderServicesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ProviderServiceSummary> m_providerServiceSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
