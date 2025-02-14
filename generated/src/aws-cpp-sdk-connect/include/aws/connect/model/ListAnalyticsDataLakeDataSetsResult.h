/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/AnalyticsDataSetsResult.h>
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
namespace Connect
{
namespace Model
{
  class ListAnalyticsDataLakeDataSetsResult
  {
  public:
    AWS_CONNECT_API ListAnalyticsDataLakeDataSetsResult();
    AWS_CONNECT_API ListAnalyticsDataLakeDataSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListAnalyticsDataLakeDataSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of successful results: <code>DataSetId</code>,
     * <code>DataSetName</code>. This is a paginated API, so <code>nextToken</code> is
     * given if there are more results to be returned.</p>
     */
    inline const Aws::Vector<AnalyticsDataSetsResult>& GetResults() const{ return m_results; }
    inline void SetResults(const Aws::Vector<AnalyticsDataSetsResult>& value) { m_results = value; }
    inline void SetResults(Aws::Vector<AnalyticsDataSetsResult>&& value) { m_results = std::move(value); }
    inline ListAnalyticsDataLakeDataSetsResult& WithResults(const Aws::Vector<AnalyticsDataSetsResult>& value) { SetResults(value); return *this;}
    inline ListAnalyticsDataLakeDataSetsResult& WithResults(Aws::Vector<AnalyticsDataSetsResult>&& value) { SetResults(std::move(value)); return *this;}
    inline ListAnalyticsDataLakeDataSetsResult& AddResults(const AnalyticsDataSetsResult& value) { m_results.push_back(value); return *this; }
    inline ListAnalyticsDataLakeDataSetsResult& AddResults(AnalyticsDataSetsResult&& value) { m_results.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAnalyticsDataLakeDataSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAnalyticsDataLakeDataSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAnalyticsDataLakeDataSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAnalyticsDataLakeDataSetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAnalyticsDataLakeDataSetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAnalyticsDataLakeDataSetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AnalyticsDataSetsResult> m_results;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
