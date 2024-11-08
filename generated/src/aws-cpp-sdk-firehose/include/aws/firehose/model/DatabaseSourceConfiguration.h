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
   * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
   * change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/DatabaseSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class DatabaseSourceConfiguration
  {
  public:
    AWS_FIREHOSE_API DatabaseSourceConfiguration();
    AWS_FIREHOSE_API DatabaseSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API DatabaseSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const DatabaseType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const DatabaseType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(DatabaseType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline DatabaseSourceConfiguration& WithType(const DatabaseType& value) { SetType(value); return *this;}
    inline DatabaseSourceConfiguration& WithType(DatabaseType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }
    inline DatabaseSourceConfiguration& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline DatabaseSourceConfiguration& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline DatabaseSourceConfiguration& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline DatabaseSourceConfiguration& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const SSLMode& GetSSLMode() const{ return m_sSLMode; }
    inline bool SSLModeHasBeenSet() const { return m_sSLModeHasBeenSet; }
    inline void SetSSLMode(const SSLMode& value) { m_sSLModeHasBeenSet = true; m_sSLMode = value; }
    inline void SetSSLMode(SSLMode&& value) { m_sSLModeHasBeenSet = true; m_sSLMode = std::move(value); }
    inline DatabaseSourceConfiguration& WithSSLMode(const SSLMode& value) { SetSSLMode(value); return *this;}
    inline DatabaseSourceConfiguration& WithSSLMode(SSLMode&& value) { SetSSLMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const DatabaseList& GetDatabases() const{ return m_databases; }
    inline bool DatabasesHasBeenSet() const { return m_databasesHasBeenSet; }
    inline void SetDatabases(const DatabaseList& value) { m_databasesHasBeenSet = true; m_databases = value; }
    inline void SetDatabases(DatabaseList&& value) { m_databasesHasBeenSet = true; m_databases = std::move(value); }
    inline DatabaseSourceConfiguration& WithDatabases(const DatabaseList& value) { SetDatabases(value); return *this;}
    inline DatabaseSourceConfiguration& WithDatabases(DatabaseList&& value) { SetDatabases(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const DatabaseTableList& GetTables() const{ return m_tables; }
    inline bool TablesHasBeenSet() const { return m_tablesHasBeenSet; }
    inline void SetTables(const DatabaseTableList& value) { m_tablesHasBeenSet = true; m_tables = value; }
    inline void SetTables(DatabaseTableList&& value) { m_tablesHasBeenSet = true; m_tables = std::move(value); }
    inline DatabaseSourceConfiguration& WithTables(const DatabaseTableList& value) { SetTables(value); return *this;}
    inline DatabaseSourceConfiguration& WithTables(DatabaseTableList&& value) { SetTables(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const DatabaseColumnList& GetColumns() const{ return m_columns; }
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }
    inline void SetColumns(const DatabaseColumnList& value) { m_columnsHasBeenSet = true; m_columns = value; }
    inline void SetColumns(DatabaseColumnList&& value) { m_columnsHasBeenSet = true; m_columns = std::move(value); }
    inline DatabaseSourceConfiguration& WithColumns(const DatabaseColumnList& value) { SetColumns(value); return *this;}
    inline DatabaseSourceConfiguration& WithColumns(DatabaseColumnList&& value) { SetColumns(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSurrogateKeys() const{ return m_surrogateKeys; }
    inline bool SurrogateKeysHasBeenSet() const { return m_surrogateKeysHasBeenSet; }
    inline void SetSurrogateKeys(const Aws::Vector<Aws::String>& value) { m_surrogateKeysHasBeenSet = true; m_surrogateKeys = value; }
    inline void SetSurrogateKeys(Aws::Vector<Aws::String>&& value) { m_surrogateKeysHasBeenSet = true; m_surrogateKeys = std::move(value); }
    inline DatabaseSourceConfiguration& WithSurrogateKeys(const Aws::Vector<Aws::String>& value) { SetSurrogateKeys(value); return *this;}
    inline DatabaseSourceConfiguration& WithSurrogateKeys(Aws::Vector<Aws::String>&& value) { SetSurrogateKeys(std::move(value)); return *this;}
    inline DatabaseSourceConfiguration& AddSurrogateKeys(const Aws::String& value) { m_surrogateKeysHasBeenSet = true; m_surrogateKeys.push_back(value); return *this; }
    inline DatabaseSourceConfiguration& AddSurrogateKeys(Aws::String&& value) { m_surrogateKeysHasBeenSet = true; m_surrogateKeys.push_back(std::move(value)); return *this; }
    inline DatabaseSourceConfiguration& AddSurrogateKeys(const char* value) { m_surrogateKeysHasBeenSet = true; m_surrogateKeys.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const Aws::String& GetSnapshotWatermarkTable() const{ return m_snapshotWatermarkTable; }
    inline bool SnapshotWatermarkTableHasBeenSet() const { return m_snapshotWatermarkTableHasBeenSet; }
    inline void SetSnapshotWatermarkTable(const Aws::String& value) { m_snapshotWatermarkTableHasBeenSet = true; m_snapshotWatermarkTable = value; }
    inline void SetSnapshotWatermarkTable(Aws::String&& value) { m_snapshotWatermarkTableHasBeenSet = true; m_snapshotWatermarkTable = std::move(value); }
    inline void SetSnapshotWatermarkTable(const char* value) { m_snapshotWatermarkTableHasBeenSet = true; m_snapshotWatermarkTable.assign(value); }
    inline DatabaseSourceConfiguration& WithSnapshotWatermarkTable(const Aws::String& value) { SetSnapshotWatermarkTable(value); return *this;}
    inline DatabaseSourceConfiguration& WithSnapshotWatermarkTable(Aws::String&& value) { SetSnapshotWatermarkTable(std::move(value)); return *this;}
    inline DatabaseSourceConfiguration& WithSnapshotWatermarkTable(const char* value) { SetSnapshotWatermarkTable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const DatabaseSourceAuthenticationConfiguration& GetDatabaseSourceAuthenticationConfiguration() const{ return m_databaseSourceAuthenticationConfiguration; }
    inline bool DatabaseSourceAuthenticationConfigurationHasBeenSet() const { return m_databaseSourceAuthenticationConfigurationHasBeenSet; }
    inline void SetDatabaseSourceAuthenticationConfiguration(const DatabaseSourceAuthenticationConfiguration& value) { m_databaseSourceAuthenticationConfigurationHasBeenSet = true; m_databaseSourceAuthenticationConfiguration = value; }
    inline void SetDatabaseSourceAuthenticationConfiguration(DatabaseSourceAuthenticationConfiguration&& value) { m_databaseSourceAuthenticationConfigurationHasBeenSet = true; m_databaseSourceAuthenticationConfiguration = std::move(value); }
    inline DatabaseSourceConfiguration& WithDatabaseSourceAuthenticationConfiguration(const DatabaseSourceAuthenticationConfiguration& value) { SetDatabaseSourceAuthenticationConfiguration(value); return *this;}
    inline DatabaseSourceConfiguration& WithDatabaseSourceAuthenticationConfiguration(DatabaseSourceAuthenticationConfiguration&& value) { SetDatabaseSourceAuthenticationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> </p> <p>Amazon Data Firehose is in preview release and is subject to
     * change.</p>
     */
    inline const DatabaseSourceVPCConfiguration& GetDatabaseSourceVPCConfiguration() const{ return m_databaseSourceVPCConfiguration; }
    inline bool DatabaseSourceVPCConfigurationHasBeenSet() const { return m_databaseSourceVPCConfigurationHasBeenSet; }
    inline void SetDatabaseSourceVPCConfiguration(const DatabaseSourceVPCConfiguration& value) { m_databaseSourceVPCConfigurationHasBeenSet = true; m_databaseSourceVPCConfiguration = value; }
    inline void SetDatabaseSourceVPCConfiguration(DatabaseSourceVPCConfiguration&& value) { m_databaseSourceVPCConfigurationHasBeenSet = true; m_databaseSourceVPCConfiguration = std::move(value); }
    inline DatabaseSourceConfiguration& WithDatabaseSourceVPCConfiguration(const DatabaseSourceVPCConfiguration& value) { SetDatabaseSourceVPCConfiguration(value); return *this;}
    inline DatabaseSourceConfiguration& WithDatabaseSourceVPCConfiguration(DatabaseSourceVPCConfiguration&& value) { SetDatabaseSourceVPCConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    DatabaseType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    SSLMode m_sSLMode;
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

    DatabaseSourceAuthenticationConfiguration m_databaseSourceAuthenticationConfiguration;
    bool m_databaseSourceAuthenticationConfigurationHasBeenSet = false;

    DatabaseSourceVPCConfiguration m_databaseSourceVPCConfiguration;
    bool m_databaseSourceVPCConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
