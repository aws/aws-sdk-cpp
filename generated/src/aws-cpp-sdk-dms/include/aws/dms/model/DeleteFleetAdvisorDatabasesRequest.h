/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class DeleteFleetAdvisorDatabasesRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DeleteFleetAdvisorDatabasesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFleetAdvisorDatabases"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The IDs of the Fleet Advisor collector databases to delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDatabaseIds() const { return m_databaseIds; }
    inline bool DatabaseIdsHasBeenSet() const { return m_databaseIdsHasBeenSet; }
    template<typename DatabaseIdsT = Aws::Vector<Aws::String>>
    void SetDatabaseIds(DatabaseIdsT&& value) { m_databaseIdsHasBeenSet = true; m_databaseIds = std::forward<DatabaseIdsT>(value); }
    template<typename DatabaseIdsT = Aws::Vector<Aws::String>>
    DeleteFleetAdvisorDatabasesRequest& WithDatabaseIds(DatabaseIdsT&& value) { SetDatabaseIds(std::forward<DatabaseIdsT>(value)); return *this;}
    template<typename DatabaseIdsT = Aws::String>
    DeleteFleetAdvisorDatabasesRequest& AddDatabaseIds(DatabaseIdsT&& value) { m_databaseIdsHasBeenSet = true; m_databaseIds.emplace_back(std::forward<DatabaseIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_databaseIds;
    bool m_databaseIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
