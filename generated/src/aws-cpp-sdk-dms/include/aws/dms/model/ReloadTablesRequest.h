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
    AWS_DATABASEMIGRATIONSERVICE_API ReloadTablesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReloadTables"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline const Aws::String& GetReplicationTaskArn() const{ return m_replicationTaskArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline bool ReplicationTaskArnHasBeenSet() const { return m_replicationTaskArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline void SetReplicationTaskArn(const Aws::String& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline void SetReplicationTaskArn(Aws::String&& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline void SetReplicationTaskArn(const char* value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline ReloadTablesRequest& WithReplicationTaskArn(const Aws::String& value) { SetReplicationTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline ReloadTablesRequest& WithReplicationTaskArn(Aws::String&& value) { SetReplicationTaskArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline ReloadTablesRequest& WithReplicationTaskArn(const char* value) { SetReplicationTaskArn(value); return *this;}


    /**
     * <p>The name and schema of the table to be reloaded. </p>
     */
    inline const Aws::Vector<TableToReload>& GetTablesToReload() const{ return m_tablesToReload; }

    /**
     * <p>The name and schema of the table to be reloaded. </p>
     */
    inline bool TablesToReloadHasBeenSet() const { return m_tablesToReloadHasBeenSet; }

    /**
     * <p>The name and schema of the table to be reloaded. </p>
     */
    inline void SetTablesToReload(const Aws::Vector<TableToReload>& value) { m_tablesToReloadHasBeenSet = true; m_tablesToReload = value; }

    /**
     * <p>The name and schema of the table to be reloaded. </p>
     */
    inline void SetTablesToReload(Aws::Vector<TableToReload>&& value) { m_tablesToReloadHasBeenSet = true; m_tablesToReload = std::move(value); }

    /**
     * <p>The name and schema of the table to be reloaded. </p>
     */
    inline ReloadTablesRequest& WithTablesToReload(const Aws::Vector<TableToReload>& value) { SetTablesToReload(value); return *this;}

    /**
     * <p>The name and schema of the table to be reloaded. </p>
     */
    inline ReloadTablesRequest& WithTablesToReload(Aws::Vector<TableToReload>&& value) { SetTablesToReload(std::move(value)); return *this;}

    /**
     * <p>The name and schema of the table to be reloaded. </p>
     */
    inline ReloadTablesRequest& AddTablesToReload(const TableToReload& value) { m_tablesToReloadHasBeenSet = true; m_tablesToReload.push_back(value); return *this; }

    /**
     * <p>The name and schema of the table to be reloaded. </p>
     */
    inline ReloadTablesRequest& AddTablesToReload(TableToReload&& value) { m_tablesToReloadHasBeenSet = true; m_tablesToReload.push_back(std::move(value)); return *this; }


    /**
     * <p>Options for reload. Specify <code>data-reload</code> to reload the data and
     * re-validate it if validation is enabled. Specify <code>validate-only</code> to
     * re-validate the table. This option applies only when validation is enabled for
     * the task. </p> <p>Valid values: data-reload, validate-only</p> <p>Default value
     * is data-reload.</p>
     */
    inline const ReloadOptionValue& GetReloadOption() const{ return m_reloadOption; }

    /**
     * <p>Options for reload. Specify <code>data-reload</code> to reload the data and
     * re-validate it if validation is enabled. Specify <code>validate-only</code> to
     * re-validate the table. This option applies only when validation is enabled for
     * the task. </p> <p>Valid values: data-reload, validate-only</p> <p>Default value
     * is data-reload.</p>
     */
    inline bool ReloadOptionHasBeenSet() const { return m_reloadOptionHasBeenSet; }

    /**
     * <p>Options for reload. Specify <code>data-reload</code> to reload the data and
     * re-validate it if validation is enabled. Specify <code>validate-only</code> to
     * re-validate the table. This option applies only when validation is enabled for
     * the task. </p> <p>Valid values: data-reload, validate-only</p> <p>Default value
     * is data-reload.</p>
     */
    inline void SetReloadOption(const ReloadOptionValue& value) { m_reloadOptionHasBeenSet = true; m_reloadOption = value; }

    /**
     * <p>Options for reload. Specify <code>data-reload</code> to reload the data and
     * re-validate it if validation is enabled. Specify <code>validate-only</code> to
     * re-validate the table. This option applies only when validation is enabled for
     * the task. </p> <p>Valid values: data-reload, validate-only</p> <p>Default value
     * is data-reload.</p>
     */
    inline void SetReloadOption(ReloadOptionValue&& value) { m_reloadOptionHasBeenSet = true; m_reloadOption = std::move(value); }

    /**
     * <p>Options for reload. Specify <code>data-reload</code> to reload the data and
     * re-validate it if validation is enabled. Specify <code>validate-only</code> to
     * re-validate the table. This option applies only when validation is enabled for
     * the task. </p> <p>Valid values: data-reload, validate-only</p> <p>Default value
     * is data-reload.</p>
     */
    inline ReloadTablesRequest& WithReloadOption(const ReloadOptionValue& value) { SetReloadOption(value); return *this;}

    /**
     * <p>Options for reload. Specify <code>data-reload</code> to reload the data and
     * re-validate it if validation is enabled. Specify <code>validate-only</code> to
     * re-validate the table. This option applies only when validation is enabled for
     * the task. </p> <p>Valid values: data-reload, validate-only</p> <p>Default value
     * is data-reload.</p>
     */
    inline ReloadTablesRequest& WithReloadOption(ReloadOptionValue&& value) { SetReloadOption(std::move(value)); return *this;}

  private:

    Aws::String m_replicationTaskArn;
    bool m_replicationTaskArnHasBeenSet = false;

    Aws::Vector<TableToReload> m_tablesToReload;
    bool m_tablesToReloadHasBeenSet = false;

    ReloadOptionValue m_reloadOption;
    bool m_reloadOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
