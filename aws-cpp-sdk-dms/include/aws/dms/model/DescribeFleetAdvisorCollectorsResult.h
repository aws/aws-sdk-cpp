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
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorCollectorsResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorCollectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorCollectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides descriptions of the Fleet Advisor collectors, including the
     * collectors' name and ID, and the latest inventory data. </p>
     */
    inline const Aws::Vector<CollectorResponse>& GetCollectors() const{ return m_collectors; }

    /**
     * <p>Provides descriptions of the Fleet Advisor collectors, including the
     * collectors' name and ID, and the latest inventory data. </p>
     */
    inline void SetCollectors(const Aws::Vector<CollectorResponse>& value) { m_collectors = value; }

    /**
     * <p>Provides descriptions of the Fleet Advisor collectors, including the
     * collectors' name and ID, and the latest inventory data. </p>
     */
    inline void SetCollectors(Aws::Vector<CollectorResponse>&& value) { m_collectors = std::move(value); }

    /**
     * <p>Provides descriptions of the Fleet Advisor collectors, including the
     * collectors' name and ID, and the latest inventory data. </p>
     */
    inline DescribeFleetAdvisorCollectorsResult& WithCollectors(const Aws::Vector<CollectorResponse>& value) { SetCollectors(value); return *this;}

    /**
     * <p>Provides descriptions of the Fleet Advisor collectors, including the
     * collectors' name and ID, and the latest inventory data. </p>
     */
    inline DescribeFleetAdvisorCollectorsResult& WithCollectors(Aws::Vector<CollectorResponse>&& value) { SetCollectors(std::move(value)); return *this;}

    /**
     * <p>Provides descriptions of the Fleet Advisor collectors, including the
     * collectors' name and ID, and the latest inventory data. </p>
     */
    inline DescribeFleetAdvisorCollectorsResult& AddCollectors(const CollectorResponse& value) { m_collectors.push_back(value); return *this; }

    /**
     * <p>Provides descriptions of the Fleet Advisor collectors, including the
     * collectors' name and ID, and the latest inventory data. </p>
     */
    inline DescribeFleetAdvisorCollectorsResult& AddCollectors(CollectorResponse&& value) { m_collectors.push_back(std::move(value)); return *this; }


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
    inline DescribeFleetAdvisorCollectorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. </p>
     */
    inline DescribeFleetAdvisorCollectorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. </p>
     */
    inline DescribeFleetAdvisorCollectorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CollectorResponse> m_collectors;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
