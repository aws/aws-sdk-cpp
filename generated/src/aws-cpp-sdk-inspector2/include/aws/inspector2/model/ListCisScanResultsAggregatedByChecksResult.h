/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CisCheckAggregation.h>
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
  class ListCisScanResultsAggregatedByChecksResult
  {
  public:
    AWS_INSPECTOR2_API ListCisScanResultsAggregatedByChecksResult();
    AWS_INSPECTOR2_API ListCisScanResultsAggregatedByChecksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API ListCisScanResultsAggregatedByChecksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The check aggregations.</p>
     */
    inline const Aws::Vector<CisCheckAggregation>& GetCheckAggregations() const{ return m_checkAggregations; }

    /**
     * <p>The check aggregations.</p>
     */
    inline void SetCheckAggregations(const Aws::Vector<CisCheckAggregation>& value) { m_checkAggregations = value; }

    /**
     * <p>The check aggregations.</p>
     */
    inline void SetCheckAggregations(Aws::Vector<CisCheckAggregation>&& value) { m_checkAggregations = std::move(value); }

    /**
     * <p>The check aggregations.</p>
     */
    inline ListCisScanResultsAggregatedByChecksResult& WithCheckAggregations(const Aws::Vector<CisCheckAggregation>& value) { SetCheckAggregations(value); return *this;}

    /**
     * <p>The check aggregations.</p>
     */
    inline ListCisScanResultsAggregatedByChecksResult& WithCheckAggregations(Aws::Vector<CisCheckAggregation>&& value) { SetCheckAggregations(std::move(value)); return *this;}

    /**
     * <p>The check aggregations.</p>
     */
    inline ListCisScanResultsAggregatedByChecksResult& AddCheckAggregations(const CisCheckAggregation& value) { m_checkAggregations.push_back(value); return *this; }

    /**
     * <p>The check aggregations.</p>
     */
    inline ListCisScanResultsAggregatedByChecksResult& AddCheckAggregations(CisCheckAggregation&& value) { m_checkAggregations.push_back(std::move(value)); return *this; }


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
    inline ListCisScanResultsAggregatedByChecksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline ListCisScanResultsAggregatedByChecksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from a previous request that's used to retrieve the next
     * page of results.</p>
     */
    inline ListCisScanResultsAggregatedByChecksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCisScanResultsAggregatedByChecksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCisScanResultsAggregatedByChecksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCisScanResultsAggregatedByChecksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<CisCheckAggregation> m_checkAggregations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
