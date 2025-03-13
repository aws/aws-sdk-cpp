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
    AWS_DATABASEMIGRATIONSERVICE_API DescribeRecommendationsResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeRecommendationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeRecommendationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique pagination token returned for you to pass to a subsequent request.
     * Fleet Advisor returns this token when the number of records in the response is
     * greater than the <code>MaxRecords</code> value. To retrieve the next page, make
     * the call again using the returned token and keeping all other arguments
     * unchanged.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeRecommendationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of recommendations of target engines that Fleet Advisor created for
     * the source database.</p>
     */
    inline const Aws::Vector<Recommendation>& GetRecommendations() const { return m_recommendations; }
    template<typename RecommendationsT = Aws::Vector<Recommendation>>
    void SetRecommendations(RecommendationsT&& value) { m_recommendationsHasBeenSet = true; m_recommendations = std::forward<RecommendationsT>(value); }
    template<typename RecommendationsT = Aws::Vector<Recommendation>>
    DescribeRecommendationsResult& WithRecommendations(RecommendationsT&& value) { SetRecommendations(std::forward<RecommendationsT>(value)); return *this;}
    template<typename RecommendationsT = Recommendation>
    DescribeRecommendationsResult& AddRecommendations(RecommendationsT&& value) { m_recommendationsHasBeenSet = true; m_recommendations.emplace_back(std::forward<RecommendationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRecommendationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Recommendation> m_recommendations;
    bool m_recommendationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
