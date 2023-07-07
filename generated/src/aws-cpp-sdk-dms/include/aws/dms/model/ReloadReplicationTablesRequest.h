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
    AWS_DATABASEMIGRATIONSERVICE_API ReloadReplicationTablesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReloadReplicationTables"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name of the replication config for which to reload
     * tables.</p>
     */
    inline const Aws::String& GetReplicationConfigArn() const{ return m_replicationConfigArn; }

    /**
     * <p>The Amazon Resource Name of the replication config for which to reload
     * tables.</p>
     */
    inline bool ReplicationConfigArnHasBeenSet() const { return m_replicationConfigArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name of the replication config for which to reload
     * tables.</p>
     */
    inline void SetReplicationConfigArn(const Aws::String& value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn = value; }

    /**
     * <p>The Amazon Resource Name of the replication config for which to reload
     * tables.</p>
     */
    inline void SetReplicationConfigArn(Aws::String&& value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of the replication config for which to reload
     * tables.</p>
     */
    inline void SetReplicationConfigArn(const char* value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn.assign(value); }

    /**
     * <p>The Amazon Resource Name of the replication config for which to reload
     * tables.</p>
     */
    inline ReloadReplicationTablesRequest& WithReplicationConfigArn(const Aws::String& value) { SetReplicationConfigArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the replication config for which to reload
     * tables.</p>
     */
    inline ReloadReplicationTablesRequest& WithReplicationConfigArn(Aws::String&& value) { SetReplicationConfigArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the replication config for which to reload
     * tables.</p>
     */
    inline ReloadReplicationTablesRequest& WithReplicationConfigArn(const char* value) { SetReplicationConfigArn(value); return *this;}


    /**
     * <p>The list of tables to reload.</p>
     */
    inline const Aws::Vector<TableToReload>& GetTablesToReload() const{ return m_tablesToReload; }

    /**
     * <p>The list of tables to reload.</p>
     */
    inline bool TablesToReloadHasBeenSet() const { return m_tablesToReloadHasBeenSet; }

    /**
     * <p>The list of tables to reload.</p>
     */
    inline void SetTablesToReload(const Aws::Vector<TableToReload>& value) { m_tablesToReloadHasBeenSet = true; m_tablesToReload = value; }

    /**
     * <p>The list of tables to reload.</p>
     */
    inline void SetTablesToReload(Aws::Vector<TableToReload>&& value) { m_tablesToReloadHasBeenSet = true; m_tablesToReload = std::move(value); }

    /**
     * <p>The list of tables to reload.</p>
     */
    inline ReloadReplicationTablesRequest& WithTablesToReload(const Aws::Vector<TableToReload>& value) { SetTablesToReload(value); return *this;}

    /**
     * <p>The list of tables to reload.</p>
     */
    inline ReloadReplicationTablesRequest& WithTablesToReload(Aws::Vector<TableToReload>&& value) { SetTablesToReload(std::move(value)); return *this;}

    /**
     * <p>The list of tables to reload.</p>
     */
    inline ReloadReplicationTablesRequest& AddTablesToReload(const TableToReload& value) { m_tablesToReloadHasBeenSet = true; m_tablesToReload.push_back(value); return *this; }

    /**
     * <p>The list of tables to reload.</p>
     */
    inline ReloadReplicationTablesRequest& AddTablesToReload(TableToReload&& value) { m_tablesToReloadHasBeenSet = true; m_tablesToReload.push_back(std::move(value)); return *this; }


    /**
     * <p>Options for reload. Specify <code>data-reload</code> to reload the data and
     * re-validate it if validation is enabled. Specify <code>validate-only</code> to
     * re-validate the table. This option applies only when validation is enabled for
     * the replication. </p>
     */
    inline const ReloadOptionValue& GetReloadOption() const{ return m_reloadOption; }

    /**
     * <p>Options for reload. Specify <code>data-reload</code> to reload the data and
     * re-validate it if validation is enabled. Specify <code>validate-only</code> to
     * re-validate the table. This option applies only when validation is enabled for
     * the replication. </p>
     */
    inline bool ReloadOptionHasBeenSet() const { return m_reloadOptionHasBeenSet; }

    /**
     * <p>Options for reload. Specify <code>data-reload</code> to reload the data and
     * re-validate it if validation is enabled. Specify <code>validate-only</code> to
     * re-validate the table. This option applies only when validation is enabled for
     * the replication. </p>
     */
    inline void SetReloadOption(const ReloadOptionValue& value) { m_reloadOptionHasBeenSet = true; m_reloadOption = value; }

    /**
     * <p>Options for reload. Specify <code>data-reload</code> to reload the data and
     * re-validate it if validation is enabled. Specify <code>validate-only</code> to
     * re-validate the table. This option applies only when validation is enabled for
     * the replication. </p>
     */
    inline void SetReloadOption(ReloadOptionValue&& value) { m_reloadOptionHasBeenSet = true; m_reloadOption = std::move(value); }

    /**
     * <p>Options for reload. Specify <code>data-reload</code> to reload the data and
     * re-validate it if validation is enabled. Specify <code>validate-only</code> to
     * re-validate the table. This option applies only when validation is enabled for
     * the replication. </p>
     */
    inline ReloadReplicationTablesRequest& WithReloadOption(const ReloadOptionValue& value) { SetReloadOption(value); return *this;}

    /**
     * <p>Options for reload. Specify <code>data-reload</code> to reload the data and
     * re-validate it if validation is enabled. Specify <code>validate-only</code> to
     * re-validate the table. This option applies only when validation is enabled for
     * the replication. </p>
     */
    inline ReloadReplicationTablesRequest& WithReloadOption(ReloadOptionValue&& value) { SetReloadOption(std::move(value)); return *this;}

  private:

    Aws::String m_replicationConfigArn;
    bool m_replicationConfigArnHasBeenSet = false;

    Aws::Vector<TableToReload> m_tablesToReload;
    bool m_tablesToReloadHasBeenSet = false;

    ReloadOptionValue m_reloadOption;
    bool m_reloadOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
