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
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorSchemaObjectSummaryResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorSchemaObjectSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorSchemaObjectSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of <code>FleetAdvisorSchemaObjectResponse</code> objects.</p>
     */
    inline const Aws::Vector<FleetAdvisorSchemaObjectResponse>& GetFleetAdvisorSchemaObjects() const{ return m_fleetAdvisorSchemaObjects; }

    /**
     * <p>A collection of <code>FleetAdvisorSchemaObjectResponse</code> objects.</p>
     */
    inline void SetFleetAdvisorSchemaObjects(const Aws::Vector<FleetAdvisorSchemaObjectResponse>& value) { m_fleetAdvisorSchemaObjects = value; }

    /**
     * <p>A collection of <code>FleetAdvisorSchemaObjectResponse</code> objects.</p>
     */
    inline void SetFleetAdvisorSchemaObjects(Aws::Vector<FleetAdvisorSchemaObjectResponse>&& value) { m_fleetAdvisorSchemaObjects = std::move(value); }

    /**
     * <p>A collection of <code>FleetAdvisorSchemaObjectResponse</code> objects.</p>
     */
    inline DescribeFleetAdvisorSchemaObjectSummaryResult& WithFleetAdvisorSchemaObjects(const Aws::Vector<FleetAdvisorSchemaObjectResponse>& value) { SetFleetAdvisorSchemaObjects(value); return *this;}

    /**
     * <p>A collection of <code>FleetAdvisorSchemaObjectResponse</code> objects.</p>
     */
    inline DescribeFleetAdvisorSchemaObjectSummaryResult& WithFleetAdvisorSchemaObjects(Aws::Vector<FleetAdvisorSchemaObjectResponse>&& value) { SetFleetAdvisorSchemaObjects(std::move(value)); return *this;}

    /**
     * <p>A collection of <code>FleetAdvisorSchemaObjectResponse</code> objects.</p>
     */
    inline DescribeFleetAdvisorSchemaObjectSummaryResult& AddFleetAdvisorSchemaObjects(const FleetAdvisorSchemaObjectResponse& value) { m_fleetAdvisorSchemaObjects.push_back(value); return *this; }

    /**
     * <p>A collection of <code>FleetAdvisorSchemaObjectResponse</code> objects.</p>
     */
    inline DescribeFleetAdvisorSchemaObjectSummaryResult& AddFleetAdvisorSchemaObjects(FleetAdvisorSchemaObjectResponse&& value) { m_fleetAdvisorSchemaObjects.push_back(std::move(value)); return *this; }


    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. </p>
     */
    inline DescribeFleetAdvisorSchemaObjectSummaryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. </p>
     */
    inline DescribeFleetAdvisorSchemaObjectSummaryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. </p>
     */
    inline DescribeFleetAdvisorSchemaObjectSummaryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<FleetAdvisorSchemaObjectResponse> m_fleetAdvisorSchemaObjects;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
