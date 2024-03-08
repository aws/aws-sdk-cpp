/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/CisTargetResourceAggregation.h>
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
namespace Inspector2
{
namespace Model
{
  class ListCisScanResultsAggregatedByTargetResourceResult
  {
  public:
    AWS_INSPECTOR2_API ListCisScanResultsAggregatedByTargetResourceResult();
    AWS_INSPECTOR2_API ListCisScanResultsAggregatedByTargetResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API ListCisScanResultsAggregatedByTargetResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline ListCisScanResultsAggregatedByTargetResourceResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline ListCisScanResultsAggregatedByTargetResourceResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline ListCisScanResultsAggregatedByTargetResourceResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The resource aggregations.</p>
     */
    inline const Aws::Vector<CisTargetResourceAggregation>& GetTargetResourceAggregations() const{ return m_targetResourceAggregations; }

    /**
     * <p>The resource aggregations.</p>
     */
    inline void SetTargetResourceAggregations(const Aws::Vector<CisTargetResourceAggregation>& value) { m_targetResourceAggregations = value; }

    /**
     * <p>The resource aggregations.</p>
     */
    inline void SetTargetResourceAggregations(Aws::Vector<CisTargetResourceAggregation>&& value) { m_targetResourceAggregations = std::move(value); }

    /**
     * <p>The resource aggregations.</p>
     */
    inline ListCisScanResultsAggregatedByTargetResourceResult& WithTargetResourceAggregations(const Aws::Vector<CisTargetResourceAggregation>& value) { SetTargetResourceAggregations(value); return *this;}

    /**
     * <p>The resource aggregations.</p>
     */
    inline ListCisScanResultsAggregatedByTargetResourceResult& WithTargetResourceAggregations(Aws::Vector<CisTargetResourceAggregation>&& value) { SetTargetResourceAggregations(std::move(value)); return *this;}

    /**
     * <p>The resource aggregations.</p>
     */
    inline ListCisScanResultsAggregatedByTargetResourceResult& AddTargetResourceAggregations(const CisTargetResourceAggregation& value) { m_targetResourceAggregations.push_back(value); return *this; }

    /**
     * <p>The resource aggregations.</p>
     */
    inline ListCisScanResultsAggregatedByTargetResourceResult& AddTargetResourceAggregations(CisTargetResourceAggregation&& value) { m_targetResourceAggregations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCisScanResultsAggregatedByTargetResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCisScanResultsAggregatedByTargetResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCisScanResultsAggregatedByTargetResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<CisTargetResourceAggregation> m_targetResourceAggregations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
