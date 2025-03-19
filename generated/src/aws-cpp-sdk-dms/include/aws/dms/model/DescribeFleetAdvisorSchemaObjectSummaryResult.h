/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/FleetAdvisorSchemaObjectResponse.h>
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
  class DescribeFleetAdvisorSchemaObjectSummaryResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorSchemaObjectSummaryResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorSchemaObjectSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorSchemaObjectSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of <code>FleetAdvisorSchemaObjectResponse</code> objects.</p>
     */
    inline const Aws::Vector<FleetAdvisorSchemaObjectResponse>& GetFleetAdvisorSchemaObjects() const { return m_fleetAdvisorSchemaObjects; }
    template<typename FleetAdvisorSchemaObjectsT = Aws::Vector<FleetAdvisorSchemaObjectResponse>>
    void SetFleetAdvisorSchemaObjects(FleetAdvisorSchemaObjectsT&& value) { m_fleetAdvisorSchemaObjectsHasBeenSet = true; m_fleetAdvisorSchemaObjects = std::forward<FleetAdvisorSchemaObjectsT>(value); }
    template<typename FleetAdvisorSchemaObjectsT = Aws::Vector<FleetAdvisorSchemaObjectResponse>>
    DescribeFleetAdvisorSchemaObjectSummaryResult& WithFleetAdvisorSchemaObjects(FleetAdvisorSchemaObjectsT&& value) { SetFleetAdvisorSchemaObjects(std::forward<FleetAdvisorSchemaObjectsT>(value)); return *this;}
    template<typename FleetAdvisorSchemaObjectsT = FleetAdvisorSchemaObjectResponse>
    DescribeFleetAdvisorSchemaObjectSummaryResult& AddFleetAdvisorSchemaObjects(FleetAdvisorSchemaObjectsT&& value) { m_fleetAdvisorSchemaObjectsHasBeenSet = true; m_fleetAdvisorSchemaObjects.emplace_back(std::forward<FleetAdvisorSchemaObjectsT>(value)); return *this; }
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
    DescribeFleetAdvisorSchemaObjectSummaryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFleetAdvisorSchemaObjectSummaryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FleetAdvisorSchemaObjectResponse> m_fleetAdvisorSchemaObjects;
    bool m_fleetAdvisorSchemaObjectsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
