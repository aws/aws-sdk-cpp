/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DeleteFleetAdvisorDatabasesResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DeleteFleetAdvisorDatabasesResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DeleteFleetAdvisorDatabasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATABASEMIGRATIONSERVICE_API DeleteFleetAdvisorDatabasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The IDs of the databases that the operation deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDatabaseIds() const { return m_databaseIds; }
    template<typename DatabaseIdsT = Aws::Vector<Aws::String>>
    void SetDatabaseIds(DatabaseIdsT&& value) { m_databaseIdsHasBeenSet = true; m_databaseIds = std::forward<DatabaseIdsT>(value); }
    template<typename DatabaseIdsT = Aws::Vector<Aws::String>>
    DeleteFleetAdvisorDatabasesResult& WithDatabaseIds(DatabaseIdsT&& value) { SetDatabaseIds(std::forward<DatabaseIdsT>(value)); return *this;}
    template<typename DatabaseIdsT = Aws::String>
    DeleteFleetAdvisorDatabasesResult& AddDatabaseIds(DatabaseIdsT&& value) { m_databaseIdsHasBeenSet = true; m_databaseIds.emplace_back(std::forward<DatabaseIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteFleetAdvisorDatabasesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_databaseIds;
    bool m_databaseIdsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
