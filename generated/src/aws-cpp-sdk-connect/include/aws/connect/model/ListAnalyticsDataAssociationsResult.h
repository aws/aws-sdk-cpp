/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/AnalyticsDataAssociationResult.h>
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
  class ListAnalyticsDataAssociationsResult
  {
  public:
    AWS_CONNECT_API ListAnalyticsDataAssociationsResult();
    AWS_CONNECT_API ListAnalyticsDataAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListAnalyticsDataAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of successful results: <code>DataSetId</code>,
     * <code>TargetAccountId</code>, <code>ResourceShareId</code>,
     * <code>ResourceShareArn</code>. This is a paginated API, so
     * <code>nextToken</code> is given if there are more results to be returned.</p>
     */
    inline const Aws::Vector<AnalyticsDataAssociationResult>& GetResults() const{ return m_results; }

    /**
     * <p>An array of successful results: <code>DataSetId</code>,
     * <code>TargetAccountId</code>, <code>ResourceShareId</code>,
     * <code>ResourceShareArn</code>. This is a paginated API, so
     * <code>nextToken</code> is given if there are more results to be returned.</p>
     */
    inline void SetResults(const Aws::Vector<AnalyticsDataAssociationResult>& value) { m_results = value; }

    /**
     * <p>An array of successful results: <code>DataSetId</code>,
     * <code>TargetAccountId</code>, <code>ResourceShareId</code>,
     * <code>ResourceShareArn</code>. This is a paginated API, so
     * <code>nextToken</code> is given if there are more results to be returned.</p>
     */
    inline void SetResults(Aws::Vector<AnalyticsDataAssociationResult>&& value) { m_results = std::move(value); }

    /**
     * <p>An array of successful results: <code>DataSetId</code>,
     * <code>TargetAccountId</code>, <code>ResourceShareId</code>,
     * <code>ResourceShareArn</code>. This is a paginated API, so
     * <code>nextToken</code> is given if there are more results to be returned.</p>
     */
    inline ListAnalyticsDataAssociationsResult& WithResults(const Aws::Vector<AnalyticsDataAssociationResult>& value) { SetResults(value); return *this;}

    /**
     * <p>An array of successful results: <code>DataSetId</code>,
     * <code>TargetAccountId</code>, <code>ResourceShareId</code>,
     * <code>ResourceShareArn</code>. This is a paginated API, so
     * <code>nextToken</code> is given if there are more results to be returned.</p>
     */
    inline ListAnalyticsDataAssociationsResult& WithResults(Aws::Vector<AnalyticsDataAssociationResult>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>An array of successful results: <code>DataSetId</code>,
     * <code>TargetAccountId</code>, <code>ResourceShareId</code>,
     * <code>ResourceShareArn</code>. This is a paginated API, so
     * <code>nextToken</code> is given if there are more results to be returned.</p>
     */
    inline ListAnalyticsDataAssociationsResult& AddResults(const AnalyticsDataAssociationResult& value) { m_results.push_back(value); return *this; }

    /**
     * <p>An array of successful results: <code>DataSetId</code>,
     * <code>TargetAccountId</code>, <code>ResourceShareId</code>,
     * <code>ResourceShareArn</code>. This is a paginated API, so
     * <code>nextToken</code> is given if there are more results to be returned.</p>
     */
    inline ListAnalyticsDataAssociationsResult& AddResults(AnalyticsDataAssociationResult&& value) { m_results.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListAnalyticsDataAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListAnalyticsDataAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListAnalyticsDataAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAnalyticsDataAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAnalyticsDataAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAnalyticsDataAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AnalyticsDataAssociationResult> m_results;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
