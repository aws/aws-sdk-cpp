/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/Recommendation.h>
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
namespace DatabaseMigrationService
{
namespace Model
{
  class DescribeRecommendationsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeRecommendationsResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique pagination token returned for you to pass to a subsequent request.
     * Fleet Advisor returns this token when the number of records in the response is
     * greater than the <code>MaxRecords</code> value. To retrieve the next page, make
     * the call again using the returned token and keeping all other arguments
     * unchanged.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The unique pagination token returned for you to pass to a subsequent request.
     * Fleet Advisor returns this token when the number of records in the response is
     * greater than the <code>MaxRecords</code> value. To retrieve the next page, make
     * the call again using the returned token and keeping all other arguments
     * unchanged.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The unique pagination token returned for you to pass to a subsequent request.
     * Fleet Advisor returns this token when the number of records in the response is
     * greater than the <code>MaxRecords</code> value. To retrieve the next page, make
     * the call again using the returned token and keeping all other arguments
     * unchanged.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The unique pagination token returned for you to pass to a subsequent request.
     * Fleet Advisor returns this token when the number of records in the response is
     * greater than the <code>MaxRecords</code> value. To retrieve the next page, make
     * the call again using the returned token and keeping all other arguments
     * unchanged.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The unique pagination token returned for you to pass to a subsequent request.
     * Fleet Advisor returns this token when the number of records in the response is
     * greater than the <code>MaxRecords</code> value. To retrieve the next page, make
     * the call again using the returned token and keeping all other arguments
     * unchanged.</p>
     */
    inline DescribeRecommendationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The unique pagination token returned for you to pass to a subsequent request.
     * Fleet Advisor returns this token when the number of records in the response is
     * greater than the <code>MaxRecords</code> value. To retrieve the next page, make
     * the call again using the returned token and keeping all other arguments
     * unchanged.</p>
     */
    inline DescribeRecommendationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The unique pagination token returned for you to pass to a subsequent request.
     * Fleet Advisor returns this token when the number of records in the response is
     * greater than the <code>MaxRecords</code> value. To retrieve the next page, make
     * the call again using the returned token and keeping all other arguments
     * unchanged.</p>
     */
    inline DescribeRecommendationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of recommendations of target engines that Fleet Advisor created for
     * the source database.</p>
     */
    inline const Aws::Vector<Recommendation>& GetRecommendations() const{ return m_recommendations; }

    /**
     * <p>The list of recommendations of target engines that Fleet Advisor created for
     * the source database.</p>
     */
    inline void SetRecommendations(const Aws::Vector<Recommendation>& value) { m_recommendations = value; }

    /**
     * <p>The list of recommendations of target engines that Fleet Advisor created for
     * the source database.</p>
     */
    inline void SetRecommendations(Aws::Vector<Recommendation>&& value) { m_recommendations = std::move(value); }

    /**
     * <p>The list of recommendations of target engines that Fleet Advisor created for
     * the source database.</p>
     */
    inline DescribeRecommendationsResult& WithRecommendations(const Aws::Vector<Recommendation>& value) { SetRecommendations(value); return *this;}

    /**
     * <p>The list of recommendations of target engines that Fleet Advisor created for
     * the source database.</p>
     */
    inline DescribeRecommendationsResult& WithRecommendations(Aws::Vector<Recommendation>&& value) { SetRecommendations(std::move(value)); return *this;}

    /**
     * <p>The list of recommendations of target engines that Fleet Advisor created for
     * the source database.</p>
     */
    inline DescribeRecommendationsResult& AddRecommendations(const Recommendation& value) { m_recommendations.push_back(value); return *this; }

    /**
     * <p>The list of recommendations of target engines that Fleet Advisor created for
     * the source database.</p>
     */
    inline DescribeRecommendationsResult& AddRecommendations(Recommendation&& value) { m_recommendations.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeRecommendationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeRecommendationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeRecommendationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<Recommendation> m_recommendations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
