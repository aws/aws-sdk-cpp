/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DATABASEMIGRATIONSERVICE_API ReloadTablesRequest : public DatabaseMigrationServiceRequest
  {
  public:
    ReloadTablesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReloadTables"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    bool m_replicationTaskArnHasBeenSet;

    Aws::Vector<TableToReload> m_tablesToReload;
    bool m_tablesToReloadHasBeenSet;

    ReloadOptionValue m_reloadOption;
    bool m_reloadOptionHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
