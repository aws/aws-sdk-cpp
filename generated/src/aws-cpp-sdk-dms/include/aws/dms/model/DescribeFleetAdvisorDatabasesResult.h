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
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorDatabasesResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorDatabasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DescribeFleetAdvisorDatabasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Provides descriptions of the Fleet Advisor collector databases, including the
     * database's collector, ID, and name.</p>
     */
    inline const Aws::Vector<DatabaseResponse>& GetDatabases() const { return m_databases; }
    template<typename DatabasesT = Aws::Vector<DatabaseResponse>>
    void SetDatabases(DatabasesT&& value) { m_databasesHasBeenSet = true; m_databases = std::forward<DatabasesT>(value); }
    template<typename DatabasesT = Aws::Vector<DatabaseResponse>>
    DescribeFleetAdvisorDatabasesResult& WithDatabases(DatabasesT&& value) { SetDatabases(std::forward<DatabasesT>(value)); return *this;}
    template<typename DatabasesT = DatabaseResponse>
    DescribeFleetAdvisorDatabasesResult& AddDatabases(DatabasesT&& value) { m_databasesHasBeenSet = true; m_databases.emplace_back(std::forward<DatabasesT>(value)); return *this; }
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
    DescribeFleetAdvisorDatabasesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFleetAdvisorDatabasesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DatabaseResponse> m_databases;
    bool m_databasesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
