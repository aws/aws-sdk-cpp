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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/RestoreTableFromClusterSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API RestoreTableFromClusterSnapshotRequest : public RedshiftRequest
  {
  public:
    RestoreTableFromClusterSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreTableFromClusterSnapshot"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the Amazon Redshift cluster to restore the table to.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The identifier of the Amazon Redshift cluster to restore the table to.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Redshift cluster to restore the table to.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The identifier of the Amazon Redshift cluster to restore the table to.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The identifier of the Amazon Redshift cluster to restore the table to.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the Amazon Redshift cluster to restore the table to.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon Redshift cluster to restore the table to.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Redshift cluster to restore the table to.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The identifier of the snapshot to restore the table from. This snapshot must
     * have been created from the Amazon Redshift cluster specified by the
     * <code>ClusterIdentifier</code> parameter.</p>
     */
    inline const Aws::String& GetSnapshotIdentifier() const{ return m_snapshotIdentifier; }

    /**
     * <p>The identifier of the snapshot to restore the table from. This snapshot must
     * have been created from the Amazon Redshift cluster specified by the
     * <code>ClusterIdentifier</code> parameter.</p>
     */
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the snapshot to restore the table from. This snapshot must
     * have been created from the Amazon Redshift cluster specified by the
     * <code>ClusterIdentifier</code> parameter.</p>
     */
    inline void SetSnapshotIdentifier(const Aws::String& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = value; }

    /**
     * <p>The identifier of the snapshot to restore the table from. This snapshot must
     * have been created from the Amazon Redshift cluster specified by the
     * <code>ClusterIdentifier</code> parameter.</p>
     */
    inline void SetSnapshotIdentifier(Aws::String&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier of the snapshot to restore the table from. This snapshot must
     * have been created from the Amazon Redshift cluster specified by the
     * <code>ClusterIdentifier</code> parameter.</p>
     */
    inline void SetSnapshotIdentifier(const char* value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier.assign(value); }

    /**
     * <p>The identifier of the snapshot to restore the table from. This snapshot must
     * have been created from the Amazon Redshift cluster specified by the
     * <code>ClusterIdentifier</code> parameter.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithSnapshotIdentifier(const Aws::String& value) { SetSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the snapshot to restore the table from. This snapshot must
     * have been created from the Amazon Redshift cluster specified by the
     * <code>ClusterIdentifier</code> parameter.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithSnapshotIdentifier(Aws::String&& value) { SetSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the snapshot to restore the table from. This snapshot must
     * have been created from the Amazon Redshift cluster specified by the
     * <code>ClusterIdentifier</code> parameter.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithSnapshotIdentifier(const char* value) { SetSnapshotIdentifier(value); return *this;}


    /**
     * <p>The name of the source database that contains the table to restore from.</p>
     */
    inline const Aws::String& GetSourceDatabaseName() const{ return m_sourceDatabaseName; }

    /**
     * <p>The name of the source database that contains the table to restore from.</p>
     */
    inline bool SourceDatabaseNameHasBeenSet() const { return m_sourceDatabaseNameHasBeenSet; }

    /**
     * <p>The name of the source database that contains the table to restore from.</p>
     */
    inline void SetSourceDatabaseName(const Aws::String& value) { m_sourceDatabaseNameHasBeenSet = true; m_sourceDatabaseName = value; }

    /**
     * <p>The name of the source database that contains the table to restore from.</p>
     */
    inline void SetSourceDatabaseName(Aws::String&& value) { m_sourceDatabaseNameHasBeenSet = true; m_sourceDatabaseName = std::move(value); }

    /**
     * <p>The name of the source database that contains the table to restore from.</p>
     */
    inline void SetSourceDatabaseName(const char* value) { m_sourceDatabaseNameHasBeenSet = true; m_sourceDatabaseName.assign(value); }

    /**
     * <p>The name of the source database that contains the table to restore from.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithSourceDatabaseName(const Aws::String& value) { SetSourceDatabaseName(value); return *this;}

    /**
     * <p>The name of the source database that contains the table to restore from.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithSourceDatabaseName(Aws::String&& value) { SetSourceDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the source database that contains the table to restore from.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithSourceDatabaseName(const char* value) { SetSourceDatabaseName(value); return *this;}


    /**
     * <p>The name of the source schema that contains the table to restore from. If you
     * do not specify a <code>SourceSchemaName</code> value, the default is
     * <code>public</code>.</p>
     */
    inline const Aws::String& GetSourceSchemaName() const{ return m_sourceSchemaName; }

    /**
     * <p>The name of the source schema that contains the table to restore from. If you
     * do not specify a <code>SourceSchemaName</code> value, the default is
     * <code>public</code>.</p>
     */
    inline bool SourceSchemaNameHasBeenSet() const { return m_sourceSchemaNameHasBeenSet; }

    /**
     * <p>The name of the source schema that contains the table to restore from. If you
     * do not specify a <code>SourceSchemaName</code> value, the default is
     * <code>public</code>.</p>
     */
    inline void SetSourceSchemaName(const Aws::String& value) { m_sourceSchemaNameHasBeenSet = true; m_sourceSchemaName = value; }

    /**
     * <p>The name of the source schema that contains the table to restore from. If you
     * do not specify a <code>SourceSchemaName</code> value, the default is
     * <code>public</code>.</p>
     */
    inline void SetSourceSchemaName(Aws::String&& value) { m_sourceSchemaNameHasBeenSet = true; m_sourceSchemaName = std::move(value); }

    /**
     * <p>The name of the source schema that contains the table to restore from. If you
     * do not specify a <code>SourceSchemaName</code> value, the default is
     * <code>public</code>.</p>
     */
    inline void SetSourceSchemaName(const char* value) { m_sourceSchemaNameHasBeenSet = true; m_sourceSchemaName.assign(value); }

    /**
     * <p>The name of the source schema that contains the table to restore from. If you
     * do not specify a <code>SourceSchemaName</code> value, the default is
     * <code>public</code>.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithSourceSchemaName(const Aws::String& value) { SetSourceSchemaName(value); return *this;}

    /**
     * <p>The name of the source schema that contains the table to restore from. If you
     * do not specify a <code>SourceSchemaName</code> value, the default is
     * <code>public</code>.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithSourceSchemaName(Aws::String&& value) { SetSourceSchemaName(std::move(value)); return *this;}

    /**
     * <p>The name of the source schema that contains the table to restore from. If you
     * do not specify a <code>SourceSchemaName</code> value, the default is
     * <code>public</code>.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithSourceSchemaName(const char* value) { SetSourceSchemaName(value); return *this;}


    /**
     * <p>The name of the source table to restore from.</p>
     */
    inline const Aws::String& GetSourceTableName() const{ return m_sourceTableName; }

    /**
     * <p>The name of the source table to restore from.</p>
     */
    inline bool SourceTableNameHasBeenSet() const { return m_sourceTableNameHasBeenSet; }

    /**
     * <p>The name of the source table to restore from.</p>
     */
    inline void SetSourceTableName(const Aws::String& value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName = value; }

    /**
     * <p>The name of the source table to restore from.</p>
     */
    inline void SetSourceTableName(Aws::String&& value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName = std::move(value); }

    /**
     * <p>The name of the source table to restore from.</p>
     */
    inline void SetSourceTableName(const char* value) { m_sourceTableNameHasBeenSet = true; m_sourceTableName.assign(value); }

    /**
     * <p>The name of the source table to restore from.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithSourceTableName(const Aws::String& value) { SetSourceTableName(value); return *this;}

    /**
     * <p>The name of the source table to restore from.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithSourceTableName(Aws::String&& value) { SetSourceTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the source table to restore from.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithSourceTableName(const char* value) { SetSourceTableName(value); return *this;}


    /**
     * <p>The name of the database to restore the table to.</p>
     */
    inline const Aws::String& GetTargetDatabaseName() const{ return m_targetDatabaseName; }

    /**
     * <p>The name of the database to restore the table to.</p>
     */
    inline bool TargetDatabaseNameHasBeenSet() const { return m_targetDatabaseNameHasBeenSet; }

    /**
     * <p>The name of the database to restore the table to.</p>
     */
    inline void SetTargetDatabaseName(const Aws::String& value) { m_targetDatabaseNameHasBeenSet = true; m_targetDatabaseName = value; }

    /**
     * <p>The name of the database to restore the table to.</p>
     */
    inline void SetTargetDatabaseName(Aws::String&& value) { m_targetDatabaseNameHasBeenSet = true; m_targetDatabaseName = std::move(value); }

    /**
     * <p>The name of the database to restore the table to.</p>
     */
    inline void SetTargetDatabaseName(const char* value) { m_targetDatabaseNameHasBeenSet = true; m_targetDatabaseName.assign(value); }

    /**
     * <p>The name of the database to restore the table to.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithTargetDatabaseName(const Aws::String& value) { SetTargetDatabaseName(value); return *this;}

    /**
     * <p>The name of the database to restore the table to.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithTargetDatabaseName(Aws::String&& value) { SetTargetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the database to restore the table to.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithTargetDatabaseName(const char* value) { SetTargetDatabaseName(value); return *this;}


    /**
     * <p>The name of the schema to restore the table to.</p>
     */
    inline const Aws::String& GetTargetSchemaName() const{ return m_targetSchemaName; }

    /**
     * <p>The name of the schema to restore the table to.</p>
     */
    inline bool TargetSchemaNameHasBeenSet() const { return m_targetSchemaNameHasBeenSet; }

    /**
     * <p>The name of the schema to restore the table to.</p>
     */
    inline void SetTargetSchemaName(const Aws::String& value) { m_targetSchemaNameHasBeenSet = true; m_targetSchemaName = value; }

    /**
     * <p>The name of the schema to restore the table to.</p>
     */
    inline void SetTargetSchemaName(Aws::String&& value) { m_targetSchemaNameHasBeenSet = true; m_targetSchemaName = std::move(value); }

    /**
     * <p>The name of the schema to restore the table to.</p>
     */
    inline void SetTargetSchemaName(const char* value) { m_targetSchemaNameHasBeenSet = true; m_targetSchemaName.assign(value); }

    /**
     * <p>The name of the schema to restore the table to.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithTargetSchemaName(const Aws::String& value) { SetTargetSchemaName(value); return *this;}

    /**
     * <p>The name of the schema to restore the table to.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithTargetSchemaName(Aws::String&& value) { SetTargetSchemaName(std::move(value)); return *this;}

    /**
     * <p>The name of the schema to restore the table to.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithTargetSchemaName(const char* value) { SetTargetSchemaName(value); return *this;}


    /**
     * <p>The name of the table to create as a result of the current request.</p>
     */
    inline const Aws::String& GetNewTableName() const{ return m_newTableName; }

    /**
     * <p>The name of the table to create as a result of the current request.</p>
     */
    inline bool NewTableNameHasBeenSet() const { return m_newTableNameHasBeenSet; }

    /**
     * <p>The name of the table to create as a result of the current request.</p>
     */
    inline void SetNewTableName(const Aws::String& value) { m_newTableNameHasBeenSet = true; m_newTableName = value; }

    /**
     * <p>The name of the table to create as a result of the current request.</p>
     */
    inline void SetNewTableName(Aws::String&& value) { m_newTableNameHasBeenSet = true; m_newTableName = std::move(value); }

    /**
     * <p>The name of the table to create as a result of the current request.</p>
     */
    inline void SetNewTableName(const char* value) { m_newTableNameHasBeenSet = true; m_newTableName.assign(value); }

    /**
     * <p>The name of the table to create as a result of the current request.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithNewTableName(const Aws::String& value) { SetNewTableName(value); return *this;}

    /**
     * <p>The name of the table to create as a result of the current request.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithNewTableName(Aws::String&& value) { SetNewTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table to create as a result of the current request.</p>
     */
    inline RestoreTableFromClusterSnapshotRequest& WithNewTableName(const char* value) { SetNewTableName(value); return *this;}

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;

    Aws::String m_snapshotIdentifier;
    bool m_snapshotIdentifierHasBeenSet;

    Aws::String m_sourceDatabaseName;
    bool m_sourceDatabaseNameHasBeenSet;

    Aws::String m_sourceSchemaName;
    bool m_sourceSchemaNameHasBeenSet;

    Aws::String m_sourceTableName;
    bool m_sourceTableNameHasBeenSet;

    Aws::String m_targetDatabaseName;
    bool m_targetDatabaseNameHasBeenSet;

    Aws::String m_targetSchemaName;
    bool m_targetSchemaNameHasBeenSet;

    Aws::String m_newTableName;
    bool m_newTableNameHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
