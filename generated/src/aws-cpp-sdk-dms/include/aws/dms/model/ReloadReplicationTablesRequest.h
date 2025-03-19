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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReloadReplicationTablesMessage">AWS
   * API Reference</a></p>
   */
  class ReloadReplicationTablesRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ReloadReplicationTablesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReloadReplicationTables"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name of the replication config for which to reload
     * tables.</p>
     */
    inline const Aws::String& GetReplicationConfigArn() const { return m_replicationConfigArn; }
    inline bool ReplicationConfigArnHasBeenSet() const { return m_replicationConfigArnHasBeenSet; }
    template<typename ReplicationConfigArnT = Aws::String>
    void SetReplicationConfigArn(ReplicationConfigArnT&& value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn = std::forward<ReplicationConfigArnT>(value); }
    template<typename ReplicationConfigArnT = Aws::String>
    ReloadReplicationTablesRequest& WithReplicationConfigArn(ReplicationConfigArnT&& value) { SetReplicationConfigArn(std::forward<ReplicationConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tables to reload.</p>
     */
    inline const Aws::Vector<TableToReload>& GetTablesToReload() const { return m_tablesToReload; }
    inline bool TablesToReloadHasBeenSet() const { return m_tablesToReloadHasBeenSet; }
    template<typename TablesToReloadT = Aws::Vector<TableToReload>>
    void SetTablesToReload(TablesToReloadT&& value) { m_tablesToReloadHasBeenSet = true; m_tablesToReload = std::forward<TablesToReloadT>(value); }
    template<typename TablesToReloadT = Aws::Vector<TableToReload>>
    ReloadReplicationTablesRequest& WithTablesToReload(TablesToReloadT&& value) { SetTablesToReload(std::forward<TablesToReloadT>(value)); return *this;}
    template<typename TablesToReloadT = TableToReload>
    ReloadReplicationTablesRequest& AddTablesToReload(TablesToReloadT&& value) { m_tablesToReloadHasBeenSet = true; m_tablesToReload.emplace_back(std::forward<TablesToReloadT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Options for reload. Specify <code>data-reload</code> to reload the data and
     * re-validate it if validation is enabled. Specify <code>validate-only</code> to
     * re-validate the table. This option applies only when validation is enabled for
     * the replication. </p>
     */
    inline ReloadOptionValue GetReloadOption() const { return m_reloadOption; }
    inline bool ReloadOptionHasBeenSet() const { return m_reloadOptionHasBeenSet; }
    inline void SetReloadOption(ReloadOptionValue value) { m_reloadOptionHasBeenSet = true; m_reloadOption = value; }
    inline ReloadReplicationTablesRequest& WithReloadOption(ReloadOptionValue value) { SetReloadOption(value); return *this;}
    ///@}
  private:

    Aws::String m_replicationConfigArn;
    bool m_replicationConfigArnHasBeenSet = false;

    Aws::Vector<TableToReload> m_tablesToReload;
    bool m_tablesToReloadHasBeenSet = false;

    ReloadOptionValue m_reloadOption{ReloadOptionValue::NOT_SET};
    bool m_reloadOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
