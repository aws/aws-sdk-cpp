/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/model/DatabaseType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/SSLMode.h>
#include <aws/firehose/model/DatabaseList.h>
#include <aws/firehose/model/DatabaseTableList.h>
#include <aws/firehose/model/DatabaseColumnList.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/firehose/model/DatabaseSourceAuthenticationConfiguration.h>
#include <aws/firehose/model/DatabaseSourceVPCConfiguration.h>
#include <aws/firehose/model/DatabaseSnapshotInfo.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Firehose
{
namespace Model
{

  /**
   * <p> The top level object for database source description. </p> <p>Amazon Data
   * Firehose is in preview release and is subject to change.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/DatabaseSourceDescription">AWS
   * API Reference</a></p>
   */
  class DatabaseSourceDescription
  {
  public:
    AWS_FIREHOSE_API DatabaseSourceDescription() = default;
    AWS_FIREHOSE_API DatabaseSourceDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API DatabaseSourceDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of database engine. This can be one of the following values. </p>
     * <ul> <li> <p>MySQL</p> </li> <li> <p>PostgreSQL</p> </li> </ul> <p>Amazon Data
     * Firehose is in preview release and is subject to change.</p>
     */
    inline DatabaseType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DatabaseType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DatabaseSourceDescription& WithType(DatabaseType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The endpoint of the database server. </p> <p>Amazon Data Firehose is in
     * preview release and is subject to change.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    DatabaseSourceDescription& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port of the database. This can be one of the following values.</p> <ul>
     * <li> <p>3306 for MySQL database type</p> </li> <li> <p>5432 for PostgreSQL
     * database type</p> </li> </ul> <p>Amazon Data Firehose is in preview release and
     * is subject to change.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline DatabaseSourceDescription& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The mode to enable or disable SSL when Firehose connects to the database
     * endpoint. </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline SSLMode GetSSLMode() const { return m_sSLMode; }
    inline bool SSLModeHasBeenSet() const { return m_sSLModeHasBeenSet; }
    inline void SetSSLMode(SSLMode value) { m_sSLModeHasBeenSet = true; m_sSLMode = value; }
    inline DatabaseSourceDescription& WithSSLMode(SSLMode value) { SetSSLMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of database patterns in source database endpoint for Firehose to
     * read from. </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const DatabaseList& GetDatabases() const { return m_databases; }
    inline bool DatabasesHasBeenSet() const { return m_databasesHasBeenSet; }
    template<typename DatabasesT = DatabaseList>
    void SetDatabases(DatabasesT&& value) { m_databasesHasBeenSet = true; m_databases = std::forward<DatabasesT>(value); }
    template<typename DatabasesT = DatabaseList>
    DatabaseSourceDescription& WithDatabases(DatabasesT&& value) { SetDatabases(std::forward<DatabasesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of table patterns in source database endpoint for Firehose to read
     * from. </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const DatabaseTableList& GetTables() const { return m_tables; }
    inline bool TablesHasBeenSet() const { return m_tablesHasBeenSet; }
    template<typename TablesT = DatabaseTableList>
    void SetTables(TablesT&& value) { m_tablesHasBeenSet = true; m_tables = std::forward<TablesT>(value); }
    template<typename TablesT = DatabaseTableList>
    DatabaseSourceDescription& WithTables(TablesT&& value) { SetTables(std::forward<TablesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of column patterns in source database endpoint for Firehose to read
     * from. </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const DatabaseColumnList& GetColumns() const { return m_columns; }
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }
    template<typename ColumnsT = DatabaseColumnList>
    void SetColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns = std::forward<ColumnsT>(value); }
    template<typename ColumnsT = DatabaseColumnList>
    DatabaseSourceDescription& WithColumns(ColumnsT&& value) { SetColumns(std::forward<ColumnsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The optional list of table and column names used as unique key columns when
     * taking snapshot if the tables don’t have primary keys configured. </p> <p>Amazon
     * Data Firehose is in preview release and is subject to change.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSurrogateKeys() const { return m_surrogateKeys; }
    inline bool SurrogateKeysHasBeenSet() const { return m_surrogateKeysHasBeenSet; }
    template<typename SurrogateKeysT = Aws::Vector<Aws::String>>
    void SetSurrogateKeys(SurrogateKeysT&& value) { m_surrogateKeysHasBeenSet = true; m_surrogateKeys = std::forward<SurrogateKeysT>(value); }
    template<typename SurrogateKeysT = Aws::Vector<Aws::String>>
    DatabaseSourceDescription& WithSurrogateKeys(SurrogateKeysT&& value) { SetSurrogateKeys(std::forward<SurrogateKeysT>(value)); return *this;}
    template<typename SurrogateKeysT = Aws::String>
    DatabaseSourceDescription& AddSurrogateKeys(SurrogateKeysT&& value) { m_surrogateKeysHasBeenSet = true; m_surrogateKeys.emplace_back(std::forward<SurrogateKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The fully qualified name of the table in source database endpoint that
     * Firehose uses to track snapshot progress. </p> <p>Amazon Data Firehose is in
     * preview release and is subject to change.</p>
     */
    inline const Aws::String& GetSnapshotWatermarkTable() const { return m_snapshotWatermarkTable; }
    inline bool SnapshotWatermarkTableHasBeenSet() const { return m_snapshotWatermarkTableHasBeenSet; }
    template<typename SnapshotWatermarkTableT = Aws::String>
    void SetSnapshotWatermarkTable(SnapshotWatermarkTableT&& value) { m_snapshotWatermarkTableHasBeenSet = true; m_snapshotWatermarkTable = std::forward<SnapshotWatermarkTableT>(value); }
    template<typename SnapshotWatermarkTableT = Aws::String>
    DatabaseSourceDescription& WithSnapshotWatermarkTable(SnapshotWatermarkTableT&& value) { SetSnapshotWatermarkTable(std::forward<SnapshotWatermarkTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The structure that describes the snapshot information of a table in source
     * database endpoint that Firehose reads. </p> <p>Amazon Data Firehose is in
     * preview release and is subject to change.</p>
     */
    inline const Aws::Vector<DatabaseSnapshotInfo>& GetSnapshotInfo() const { return m_snapshotInfo; }
    inline bool SnapshotInfoHasBeenSet() const { return m_snapshotInfoHasBeenSet; }
    template<typename SnapshotInfoT = Aws::Vector<DatabaseSnapshotInfo>>
    void SetSnapshotInfo(SnapshotInfoT&& value) { m_snapshotInfoHasBeenSet = true; m_snapshotInfo = std::forward<SnapshotInfoT>(value); }
    template<typename SnapshotInfoT = Aws::Vector<DatabaseSnapshotInfo>>
    DatabaseSourceDescription& WithSnapshotInfo(SnapshotInfoT&& value) { SetSnapshotInfo(std::forward<SnapshotInfoT>(value)); return *this;}
    template<typename SnapshotInfoT = DatabaseSnapshotInfo>
    DatabaseSourceDescription& AddSnapshotInfo(SnapshotInfoT&& value) { m_snapshotInfoHasBeenSet = true; m_snapshotInfo.emplace_back(std::forward<SnapshotInfoT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The structure to configure the authentication methods for Firehose to
     * connect to source database endpoint. </p> <p>Amazon Data Firehose is in preview
     * release and is subject to change.</p>
     */
    inline const DatabaseSourceAuthenticationConfiguration& GetDatabaseSourceAuthenticationConfiguration() const { return m_databaseSourceAuthenticationConfiguration; }
    inline bool DatabaseSourceAuthenticationConfigurationHasBeenSet() const { return m_databaseSourceAuthenticationConfigurationHasBeenSet; }
    template<typename DatabaseSourceAuthenticationConfigurationT = DatabaseSourceAuthenticationConfiguration>
    void SetDatabaseSourceAuthenticationConfiguration(DatabaseSourceAuthenticationConfigurationT&& value) { m_databaseSourceAuthenticationConfigurationHasBeenSet = true; m_databaseSourceAuthenticationConfiguration = std::forward<DatabaseSourceAuthenticationConfigurationT>(value); }
    template<typename DatabaseSourceAuthenticationConfigurationT = DatabaseSourceAuthenticationConfiguration>
    DatabaseSourceDescription& WithDatabaseSourceAuthenticationConfiguration(DatabaseSourceAuthenticationConfigurationT&& value) { SetDatabaseSourceAuthenticationConfiguration(std::forward<DatabaseSourceAuthenticationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The details of the VPC Endpoint Service which Firehose uses to create a
     * PrivateLink to the database. </p> <p>Amazon Data Firehose is in preview release
     * and is subject to change.</p>
     */
    inline const DatabaseSourceVPCConfiguration& GetDatabaseSourceVPCConfiguration() const { return m_databaseSourceVPCConfiguration; }
    inline bool DatabaseSourceVPCConfigurationHasBeenSet() const { return m_databaseSourceVPCConfigurationHasBeenSet; }
    template<typename DatabaseSourceVPCConfigurationT = DatabaseSourceVPCConfiguration>
    void SetDatabaseSourceVPCConfiguration(DatabaseSourceVPCConfigurationT&& value) { m_databaseSourceVPCConfigurationHasBeenSet = true; m_databaseSourceVPCConfiguration = std::forward<DatabaseSourceVPCConfigurationT>(value); }
    template<typename DatabaseSourceVPCConfigurationT = DatabaseSourceVPCConfiguration>
    DatabaseSourceDescription& WithDatabaseSourceVPCConfiguration(DatabaseSourceVPCConfigurationT&& value) { SetDatabaseSourceVPCConfiguration(std::forward<DatabaseSourceVPCConfigurationT>(value)); return *this;}
    ///@}
  private:

    DatabaseType m_type{DatabaseType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    SSLMode m_sSLMode{SSLMode::NOT_SET};
    bool m_sSLModeHasBeenSet = false;

    DatabaseList m_databases;
    bool m_databasesHasBeenSet = false;

    DatabaseTableList m_tables;
    bool m_tablesHasBeenSet = false;

    DatabaseColumnList m_columns;
    bool m_columnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_surrogateKeys;
    bool m_surrogateKeysHasBeenSet = false;

    Aws::String m_snapshotWatermarkTable;
    bool m_snapshotWatermarkTableHasBeenSet = false;

    Aws::Vector<DatabaseSnapshotInfo> m_snapshotInfo;
    bool m_snapshotInfoHasBeenSet = false;

    DatabaseSourceAuthenticationConfiguration m_databaseSourceAuthenticationConfiguration;
    bool m_databaseSourceAuthenticationConfigurationHasBeenSet = false;

    DatabaseSourceVPCConfiguration m_databaseSourceVPCConfiguration;
    bool m_databaseSourceVPCConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
