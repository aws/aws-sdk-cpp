/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/Limitation.h>
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
  class DescribeRecommendationLimitationsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeRecommendationLimitationsResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeRecommendationLimitationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeRecommendationLimitationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    DescribeRecommendationLimitationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of limitations for recommendations of target Amazon Web Services
     * engines.</p>
     */
    inline const Aws::Vector<Limitation>& GetLimitations() const { return m_limitations; }
    template<typename LimitationsT = Aws::Vector<Limitation>>
    void SetLimitations(LimitationsT&& value) { m_limitationsHasBeenSet = true; m_limitations = std::forward<LimitationsT>(value); }
    template<typename LimitationsT = Aws::Vector<Limitation>>
    DescribeRecommendationLimitationsResult& WithLimitations(LimitationsT&& value) { SetLimitations(std::forward<LimitationsT>(value)); return *this;}
    template<typename LimitationsT = Limitation>
    DescribeRecommendationLimitationsResult& AddLimitations(LimitationsT&& value) { m_limitationsHasBeenSet = true; m_limitations.emplace_back(std::forward<LimitationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRecommendationLimitationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Limitation> m_limitations;
    bool m_limitationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
