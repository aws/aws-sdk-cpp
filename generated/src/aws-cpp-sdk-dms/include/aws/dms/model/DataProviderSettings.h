/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/RedshiftDataProviderSettings.h>
#include <aws/dms/model/PostgreSqlDataProviderSettings.h>
#include <aws/dms/model/MySqlDataProviderSettings.h>
#include <aws/dms/model/OracleDataProviderSettings.h>
#include <aws/dms/model/MicrosoftSqlServerDataProviderSettings.h>
#include <aws/dms/model/DocDbDataProviderSettings.h>
#include <aws/dms/model/MariaDbDataProviderSettings.h>
#include <aws/dms/model/IbmDb2LuwDataProviderSettings.h>
#include <aws/dms/model/IbmDb2zOsDataProviderSettings.h>
#include <aws/dms/model/MongoDbDataProviderSettings.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information that defines a data provider.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DataProviderSettings">AWS
   * API Reference</a></p>
   */
  class DataProviderSettings
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DataProviderSettings() = default;
    AWS_DATABASEMIGRATIONSERVICE_API DataProviderSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API DataProviderSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const RedshiftDataProviderSettings& GetRedshiftSettings() const { return m_redshiftSettings; }
    inline bool RedshiftSettingsHasBeenSet() const { return m_redshiftSettingsHasBeenSet; }
    template<typename RedshiftSettingsT = RedshiftDataProviderSettings>
    void SetRedshiftSettings(RedshiftSettingsT&& value) { m_redshiftSettingsHasBeenSet = true; m_redshiftSettings = std::forward<RedshiftSettingsT>(value); }
    template<typename RedshiftSettingsT = RedshiftDataProviderSettings>
    DataProviderSettings& WithRedshiftSettings(RedshiftSettingsT&& value) { SetRedshiftSettings(std::forward<RedshiftSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PostgreSqlDataProviderSettings& GetPostgreSqlSettings() const { return m_postgreSqlSettings; }
    inline bool PostgreSqlSettingsHasBeenSet() const { return m_postgreSqlSettingsHasBeenSet; }
    template<typename PostgreSqlSettingsT = PostgreSqlDataProviderSettings>
    void SetPostgreSqlSettings(PostgreSqlSettingsT&& value) { m_postgreSqlSettingsHasBeenSet = true; m_postgreSqlSettings = std::forward<PostgreSqlSettingsT>(value); }
    template<typename PostgreSqlSettingsT = PostgreSqlDataProviderSettings>
    DataProviderSettings& WithPostgreSqlSettings(PostgreSqlSettingsT&& value) { SetPostgreSqlSettings(std::forward<PostgreSqlSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MySqlDataProviderSettings& GetMySqlSettings() const { return m_mySqlSettings; }
    inline bool MySqlSettingsHasBeenSet() const { return m_mySqlSettingsHasBeenSet; }
    template<typename MySqlSettingsT = MySqlDataProviderSettings>
    void SetMySqlSettings(MySqlSettingsT&& value) { m_mySqlSettingsHasBeenSet = true; m_mySqlSettings = std::forward<MySqlSettingsT>(value); }
    template<typename MySqlSettingsT = MySqlDataProviderSettings>
    DataProviderSettings& WithMySqlSettings(MySqlSettingsT&& value) { SetMySqlSettings(std::forward<MySqlSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OracleDataProviderSettings& GetOracleSettings() const { return m_oracleSettings; }
    inline bool OracleSettingsHasBeenSet() const { return m_oracleSettingsHasBeenSet; }
    template<typename OracleSettingsT = OracleDataProviderSettings>
    void SetOracleSettings(OracleSettingsT&& value) { m_oracleSettingsHasBeenSet = true; m_oracleSettings = std::forward<OracleSettingsT>(value); }
    template<typename OracleSettingsT = OracleDataProviderSettings>
    DataProviderSettings& WithOracleSettings(OracleSettingsT&& value) { SetOracleSettings(std::forward<OracleSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MicrosoftSqlServerDataProviderSettings& GetMicrosoftSqlServerSettings() const { return m_microsoftSqlServerSettings; }
    inline bool MicrosoftSqlServerSettingsHasBeenSet() const { return m_microsoftSqlServerSettingsHasBeenSet; }
    template<typename MicrosoftSqlServerSettingsT = MicrosoftSqlServerDataProviderSettings>
    void SetMicrosoftSqlServerSettings(MicrosoftSqlServerSettingsT&& value) { m_microsoftSqlServerSettingsHasBeenSet = true; m_microsoftSqlServerSettings = std::forward<MicrosoftSqlServerSettingsT>(value); }
    template<typename MicrosoftSqlServerSettingsT = MicrosoftSqlServerDataProviderSettings>
    DataProviderSettings& WithMicrosoftSqlServerSettings(MicrosoftSqlServerSettingsT&& value) { SetMicrosoftSqlServerSettings(std::forward<MicrosoftSqlServerSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DocDbDataProviderSettings& GetDocDbSettings() const { return m_docDbSettings; }
    inline bool DocDbSettingsHasBeenSet() const { return m_docDbSettingsHasBeenSet; }
    template<typename DocDbSettingsT = DocDbDataProviderSettings>
    void SetDocDbSettings(DocDbSettingsT&& value) { m_docDbSettingsHasBeenSet = true; m_docDbSettings = std::forward<DocDbSettingsT>(value); }
    template<typename DocDbSettingsT = DocDbDataProviderSettings>
    DataProviderSettings& WithDocDbSettings(DocDbSettingsT&& value) { SetDocDbSettings(std::forward<DocDbSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information that defines a MariaDB data provider.</p>
     */
    inline const MariaDbDataProviderSettings& GetMariaDbSettings() const { return m_mariaDbSettings; }
    inline bool MariaDbSettingsHasBeenSet() const { return m_mariaDbSettingsHasBeenSet; }
    template<typename MariaDbSettingsT = MariaDbDataProviderSettings>
    void SetMariaDbSettings(MariaDbSettingsT&& value) { m_mariaDbSettingsHasBeenSet = true; m_mariaDbSettings = std::forward<MariaDbSettingsT>(value); }
    template<typename MariaDbSettingsT = MariaDbDataProviderSettings>
    DataProviderSettings& WithMariaDbSettings(MariaDbSettingsT&& value) { SetMariaDbSettings(std::forward<MariaDbSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information that defines an IBM DB2 LUW data provider.</p>
     */
    inline const IbmDb2LuwDataProviderSettings& GetIbmDb2LuwSettings() const { return m_ibmDb2LuwSettings; }
    inline bool IbmDb2LuwSettingsHasBeenSet() const { return m_ibmDb2LuwSettingsHasBeenSet; }
    template<typename IbmDb2LuwSettingsT = IbmDb2LuwDataProviderSettings>
    void SetIbmDb2LuwSettings(IbmDb2LuwSettingsT&& value) { m_ibmDb2LuwSettingsHasBeenSet = true; m_ibmDb2LuwSettings = std::forward<IbmDb2LuwSettingsT>(value); }
    template<typename IbmDb2LuwSettingsT = IbmDb2LuwDataProviderSettings>
    DataProviderSettings& WithIbmDb2LuwSettings(IbmDb2LuwSettingsT&& value) { SetIbmDb2LuwSettings(std::forward<IbmDb2LuwSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information that defines an IBM DB2 for z/OS data provider.</p>
     */
    inline const IbmDb2zOsDataProviderSettings& GetIbmDb2zOsSettings() const { return m_ibmDb2zOsSettings; }
    inline bool IbmDb2zOsSettingsHasBeenSet() const { return m_ibmDb2zOsSettingsHasBeenSet; }
    template<typename IbmDb2zOsSettingsT = IbmDb2zOsDataProviderSettings>
    void SetIbmDb2zOsSettings(IbmDb2zOsSettingsT&& value) { m_ibmDb2zOsSettingsHasBeenSet = true; m_ibmDb2zOsSettings = std::forward<IbmDb2zOsSettingsT>(value); }
    template<typename IbmDb2zOsSettingsT = IbmDb2zOsDataProviderSettings>
    DataProviderSettings& WithIbmDb2zOsSettings(IbmDb2zOsSettingsT&& value) { SetIbmDb2zOsSettings(std::forward<IbmDb2zOsSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information that defines a MongoDB data provider.</p>
     */
    inline const MongoDbDataProviderSettings& GetMongoDbSettings() const { return m_mongoDbSettings; }
    inline bool MongoDbSettingsHasBeenSet() const { return m_mongoDbSettingsHasBeenSet; }
    template<typename MongoDbSettingsT = MongoDbDataProviderSettings>
    void SetMongoDbSettings(MongoDbSettingsT&& value) { m_mongoDbSettingsHasBeenSet = true; m_mongoDbSettings = std::forward<MongoDbSettingsT>(value); }
    template<typename MongoDbSettingsT = MongoDbDataProviderSettings>
    DataProviderSettings& WithMongoDbSettings(MongoDbSettingsT&& value) { SetMongoDbSettings(std::forward<MongoDbSettingsT>(value)); return *this;}
    ///@}
  private:

    RedshiftDataProviderSettings m_redshiftSettings;
    bool m_redshiftSettingsHasBeenSet = false;

    PostgreSqlDataProviderSettings m_postgreSqlSettings;
    bool m_postgreSqlSettingsHasBeenSet = false;

    MySqlDataProviderSettings m_mySqlSettings;
    bool m_mySqlSettingsHasBeenSet = false;

    OracleDataProviderSettings m_oracleSettings;
    bool m_oracleSettingsHasBeenSet = false;

    MicrosoftSqlServerDataProviderSettings m_microsoftSqlServerSettings;
    bool m_microsoftSqlServerSettingsHasBeenSet = false;

    DocDbDataProviderSettings m_docDbSettings;
    bool m_docDbSettingsHasBeenSet = false;

    MariaDbDataProviderSettings m_mariaDbSettings;
    bool m_mariaDbSettingsHasBeenSet = false;

    IbmDb2LuwDataProviderSettings m_ibmDb2LuwSettings;
    bool m_ibmDb2LuwSettingsHasBeenSet = false;

    IbmDb2zOsDataProviderSettings m_ibmDb2zOsSettings;
    bool m_ibmDb2zOsSettingsHasBeenSet = false;

    MongoDbDataProviderSettings m_mongoDbSettings;
    bool m_mongoDbSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
