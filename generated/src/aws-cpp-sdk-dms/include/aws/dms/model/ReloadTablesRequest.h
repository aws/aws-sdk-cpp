/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dms/model/ReloadOptionValue.h>
#include <aws/dms/model/TableToReload.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   */
  class ReloadTablesRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ReloadTablesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReloadTables"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline const Aws::String& GetReplicationTaskArn() const { return m_replicationTaskArn; }
    inline bool ReplicationTaskArnHasBeenSet() const { return m_replicationTaskArnHasBeenSet; }
    template<typename ReplicationTaskArnT = Aws::String>
    void SetReplicationTaskArn(ReplicationTaskArnT&& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = std::forward<ReplicationTaskArnT>(value); }
    template<typename ReplicationTaskArnT = Aws::String>
    ReloadTablesRequest& WithReplicationTaskArn(ReplicationTaskArnT&& value) { SetReplicationTaskArn(std::forward<ReplicationTaskArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name and schema of the table to be reloaded. </p>
     */
    inline const Aws::Vector<TableToReload>& GetTablesToReload() const { return m_tablesToReload; }
    inline bool TablesToReloadHasBeenSet() const { return m_tablesToReloadHasBeenSet; }
    template<typename TablesToReloadT = Aws::Vector<TableToReload>>
    void SetTablesToReload(TablesToReloadT&& value) { m_tablesToReloadHasBeenSet = true; m_tablesToReload = std::forward<TablesToReloadT>(value); }
    template<typename TablesToReloadT = Aws::Vector<TableToReload>>
    ReloadTablesRequest& WithTablesToReload(TablesToReloadT&& value) { SetTablesToReload(std::forward<TablesToReloadT>(value)); return *this;}
    template<typename TablesToReloadT = TableToReload>
    ReloadTablesRequest& AddTablesToReload(TablesToReloadT&& value) { m_tablesToReloadHasBeenSet = true; m_tablesToReload.emplace_back(std::forward<TablesToReloadT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Options for reload. Specify <code>data-reload</code> to reload the data and
     * re-validate it if validation is enabled. Specify <code>validate-only</code> to
     * re-validate the table. This option applies only when validation is enabled for
     * the task. </p> <p>Valid values: data-reload, validate-only</p> <p>Default value
     * is data-reload.</p>
     */
    inline ReloadOptionValue GetReloadOption() const { return m_reloadOption; }
    inline bool ReloadOptionHasBeenSet() const { return m_reloadOptionHasBeenSet; }
    inline void SetReloadOption(ReloadOptionValue value) { m_reloadOptionHasBeenSet = true; m_reloadOption = value; }
    inline ReloadTablesRequest& WithReloadOption(ReloadOptionValue value) { SetReloadOption(value); return *this;}
    ///@}
  private:

    Aws::String m_replicationTaskArn;
    bool m_replicationTaskArnHasBeenSet = false;

    Aws::Vector<TableToReload> m_tablesToReload;
    bool m_tablesToReloadHasBeenSet = false;

    ReloadOptionValue m_reloadOption{ReloadOptionValue::NOT_SET};
    bool m_reloadOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
