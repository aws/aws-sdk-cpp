/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/CollectorResponse.h>
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
  class DescribeFleetAdvisorCollectorsResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorCollectorsResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorCollectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorCollectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides descriptions of the Fleet Advisor collectors, including the
     * collectors' name and ID, and the latest inventory data. </p>
     */
    inline const Aws::Vector<CollectorResponse>& GetCollectors() const { return m_collectors; }
    template<typename CollectorsT = Aws::Vector<CollectorResponse>>
    void SetCollectors(CollectorsT&& value) { m_collectorsHasBeenSet = true; m_collectors = std::forward<CollectorsT>(value); }
    template<typename CollectorsT = Aws::Vector<CollectorResponse>>
    DescribeFleetAdvisorCollectorsResult& WithCollectors(CollectorsT&& value) { SetCollectors(std::forward<CollectorsT>(value)); return *this;}
    template<typename CollectorsT = CollectorResponse>
    DescribeFleetAdvisorCollectorsResult& AddCollectors(CollectorsT&& value) { m_collectorsHasBeenSet = true; m_collectors.emplace_back(std::forward<CollectorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeFleetAdvisorCollectorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFleetAdvisorCollectorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CollectorResponse> m_collectors;
    bool m_collectorsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
