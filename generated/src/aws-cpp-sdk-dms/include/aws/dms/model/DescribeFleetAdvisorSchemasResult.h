/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/SchemaResponse.h>
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
  class DescribeFleetAdvisorSchemasResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorSchemasResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorSchemasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorSchemasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of <code>SchemaResponse</code> objects.</p>
     */
    inline const Aws::Vector<SchemaResponse>& GetFleetAdvisorSchemas() const { return m_fleetAdvisorSchemas; }
    template<typename FleetAdvisorSchemasT = Aws::Vector<SchemaResponse>>
    void SetFleetAdvisorSchemas(FleetAdvisorSchemasT&& value) { m_fleetAdvisorSchemasHasBeenSet = true; m_fleetAdvisorSchemas = std::forward<FleetAdvisorSchemasT>(value); }
    template<typename FleetAdvisorSchemasT = Aws::Vector<SchemaResponse>>
    DescribeFleetAdvisorSchemasResult& WithFleetAdvisorSchemas(FleetAdvisorSchemasT&& value) { SetFleetAdvisorSchemas(std::forward<FleetAdvisorSchemasT>(value)); return *this;}
    template<typename FleetAdvisorSchemasT = SchemaResponse>
    DescribeFleetAdvisorSchemasResult& AddFleetAdvisorSchemas(FleetAdvisorSchemasT&& value) { m_fleetAdvisorSchemasHasBeenSet = true; m_fleetAdvisorSchemas.emplace_back(std::forward<FleetAdvisorSchemasT>(value)); return *this; }
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
    DescribeFleetAdvisorSchemasResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFleetAdvisorSchemasResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SchemaResponse> m_fleetAdvisorSchemas;
    bool m_fleetAdvisorSchemasHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
