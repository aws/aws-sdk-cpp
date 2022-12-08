/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/DatabaseResponse.h>
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
  class DescribeFleetAdvisorDatabasesResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorDatabasesResult();
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorDatabasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorDatabasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides descriptions of the Fleet Advisor collector databases, including the
     * database's collector, ID, and name.</p>
     */
    inline const Aws::Vector<DatabaseResponse>& GetDatabases() const{ return m_databases; }

    /**
     * <p>Provides descriptions of the Fleet Advisor collector databases, including the
     * database's collector, ID, and name.</p>
     */
    inline void SetDatabases(const Aws::Vector<DatabaseResponse>& value) { m_databases = value; }

    /**
     * <p>Provides descriptions of the Fleet Advisor collector databases, including the
     * database's collector, ID, and name.</p>
     */
    inline void SetDatabases(Aws::Vector<DatabaseResponse>&& value) { m_databases = std::move(value); }

    /**
     * <p>Provides descriptions of the Fleet Advisor collector databases, including the
     * database's collector, ID, and name.</p>
     */
    inline DescribeFleetAdvisorDatabasesResult& WithDatabases(const Aws::Vector<DatabaseResponse>& value) { SetDatabases(value); return *this;}

    /**
     * <p>Provides descriptions of the Fleet Advisor collector databases, including the
     * database's collector, ID, and name.</p>
     */
    inline DescribeFleetAdvisorDatabasesResult& WithDatabases(Aws::Vector<DatabaseResponse>&& value) { SetDatabases(std::move(value)); return *this;}

    /**
     * <p>Provides descriptions of the Fleet Advisor collector databases, including the
     * database's collector, ID, and name.</p>
     */
    inline DescribeFleetAdvisorDatabasesResult& AddDatabases(const DatabaseResponse& value) { m_databases.push_back(value); return *this; }

    /**
     * <p>Provides descriptions of the Fleet Advisor collector databases, including the
     * database's collector, ID, and name.</p>
     */
    inline DescribeFleetAdvisorDatabasesResult& AddDatabases(DatabaseResponse&& value) { m_databases.push_back(std::move(value)); return *this; }


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
    inline DescribeFleetAdvisorDatabasesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. </p>
     */
    inline DescribeFleetAdvisorDatabasesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. </p>
     */
    inline DescribeFleetAdvisorDatabasesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DatabaseResponse> m_databases;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
