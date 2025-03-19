/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-guru/model/AnomalousLogGroup.h>
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
namespace DevOpsGuru
{
namespace Model
{
  class ListAnomalousLogGroupsResult
  {
  public:
    AWS_DEVOPSGURU_API ListAnomalousLogGroupsResult() = default;
    AWS_DEVOPSGURU_API ListAnomalousLogGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API ListAnomalousLogGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The ID of the insight containing the log groups. </p>
     */
    inline const Aws::String& GetInsightId() const { return m_insightId; }
    template<typename InsightIdT = Aws::String>
    void SetInsightId(InsightIdT&& value) { m_insightIdHasBeenSet = true; m_insightId = std::forward<InsightIdT>(value); }
    template<typename InsightIdT = Aws::String>
    ListAnomalousLogGroupsResult& WithInsightId(InsightIdT&& value) { SetInsightId(std::forward<InsightIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of Amazon CloudWatch log groups that are related to an insight.
     * </p>
     */
    inline const Aws::Vector<AnomalousLogGroup>& GetAnomalousLogGroups() const { return m_anomalousLogGroups; }
    template<typename AnomalousLogGroupsT = Aws::Vector<AnomalousLogGroup>>
    void SetAnomalousLogGroups(AnomalousLogGroupsT&& value) { m_anomalousLogGroupsHasBeenSet = true; m_anomalousLogGroups = std::forward<AnomalousLogGroupsT>(value); }
    template<typename AnomalousLogGroupsT = Aws::Vector<AnomalousLogGroup>>
    ListAnomalousLogGroupsResult& WithAnomalousLogGroups(AnomalousLogGroupsT&& value) { SetAnomalousLogGroups(std::forward<AnomalousLogGroupsT>(value)); return *this;}
    template<typename AnomalousLogGroupsT = AnomalousLogGroup>
    ListAnomalousLogGroupsResult& AddAnomalousLogGroups(AnomalousLogGroupsT&& value) { m_anomalousLogGroupsHasBeenSet = true; m_anomalousLogGroups.emplace_back(std::forward<AnomalousLogGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAnomalousLogGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAnomalousLogGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_insightId;
    bool m_insightIdHasBeenSet = false;

    Aws::Vector<AnomalousLogGroup> m_anomalousLogGroups;
    bool m_anomalousLogGroupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
