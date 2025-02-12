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
    AWS_DATABASEMIGRATIONSERVICE_API DataProviderSettings();
    AWS_DATABASEMIGRATIONSERVICE_API DataProviderSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API DataProviderSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const RedshiftDataProviderSettings& GetRedshiftSettings() const{ return m_redshiftSettings; }
    inline bool RedshiftSettingsHasBeenSet() const { return m_redshiftSettingsHasBeenSet; }
    inline void SetRedshiftSettings(const RedshiftDataProviderSettings& value) { m_redshiftSettingsHasBeenSet = true; m_redshiftSettings = value; }
    inline void SetRedshiftSettings(RedshiftDataProviderSettings&& value) { m_redshiftSettingsHasBeenSet = true; m_redshiftSettings = std::move(value); }
    inline DataProviderSettings& WithRedshiftSettings(const RedshiftDataProviderSettings& value) { SetRedshiftSettings(value); return *this;}
    inline DataProviderSettings& WithRedshiftSettings(RedshiftDataProviderSettings&& value) { SetRedshiftSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const PostgreSqlDataProviderSettings& GetPostgreSqlSettings() const{ return m_postgreSqlSettings; }
    inline bool PostgreSqlSettingsHasBeenSet() const { return m_postgreSqlSettingsHasBeenSet; }
    inline void SetPostgreSqlSettings(const PostgreSqlDataProviderSettings& value) { m_postgreSqlSettingsHasBeenSet = true; m_postgreSqlSettings = value; }
    inline void SetPostgreSqlSettings(PostgreSqlDataProviderSettings&& value) { m_postgreSqlSettingsHasBeenSet = true; m_postgreSqlSettings = std::move(value); }
    inline DataProviderSettings& WithPostgreSqlSettings(const PostgreSqlDataProviderSettings& value) { SetPostgreSqlSettings(value); return *this;}
    inline DataProviderSettings& WithPostgreSqlSettings(PostgreSqlDataProviderSettings&& value) { SetPostgreSqlSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const MySqlDataProviderSettings& GetMySqlSettings() const{ return m_mySqlSettings; }
    inline bool MySqlSettingsHasBeenSet() const { return m_mySqlSettingsHasBeenSet; }
    inline void SetMySqlSettings(const MySqlDataProviderSettings& value) { m_mySqlSettingsHasBeenSet = true; m_mySqlSettings = value; }
    inline void SetMySqlSettings(MySqlDataProviderSettings&& value) { m_mySqlSettingsHasBeenSet = true; m_mySqlSettings = std::move(value); }
    inline DataProviderSettings& WithMySqlSettings(const MySqlDataProviderSettings& value) { SetMySqlSettings(value); return *this;}
    inline DataProviderSettings& WithMySqlSettings(MySqlDataProviderSettings&& value) { SetMySqlSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const OracleDataProviderSettings& GetOracleSettings() const{ return m_oracleSettings; }
    inline bool OracleSettingsHasBeenSet() const { return m_oracleSettingsHasBeenSet; }
    inline void SetOracleSettings(const OracleDataProviderSettings& value) { m_oracleSettingsHasBeenSet = true; m_oracleSettings = value; }
    inline void SetOracleSettings(OracleDataProviderSettings&& value) { m_oracleSettingsHasBeenSet = true; m_oracleSettings = std::move(value); }
    inline DataProviderSettings& WithOracleSettings(const OracleDataProviderSettings& value) { SetOracleSettings(value); return *this;}
    inline DataProviderSettings& WithOracleSettings(OracleDataProviderSettings&& value) { SetOracleSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const MicrosoftSqlServerDataProviderSettings& GetMicrosoftSqlServerSettings() const{ return m_microsoftSqlServerSettings; }
    inline bool MicrosoftSqlServerSettingsHasBeenSet() const { return m_microsoftSqlServerSettingsHasBeenSet; }
    inline void SetMicrosoftSqlServerSettings(const MicrosoftSqlServerDataProviderSettings& value) { m_microsoftSqlServerSettingsHasBeenSet = true; m_microsoftSqlServerSettings = value; }
    inline void SetMicrosoftSqlServerSettings(MicrosoftSqlServerDataProviderSettings&& value) { m_microsoftSqlServerSettingsHasBeenSet = true; m_microsoftSqlServerSettings = std::move(value); }
    inline DataProviderSettings& WithMicrosoftSqlServerSettings(const MicrosoftSqlServerDataProviderSettings& value) { SetMicrosoftSqlServerSettings(value); return *this;}
    inline DataProviderSettings& WithMicrosoftSqlServerSettings(MicrosoftSqlServerDataProviderSettings&& value) { SetMicrosoftSqlServerSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const DocDbDataProviderSettings& GetDocDbSettings() const{ return m_docDbSettings; }
    inline bool DocDbSettingsHasBeenSet() const { return m_docDbSettingsHasBeenSet; }
    inline void SetDocDbSettings(const DocDbDataProviderSettings& value) { m_docDbSettingsHasBeenSet = true; m_docDbSettings = value; }
    inline void SetDocDbSettings(DocDbDataProviderSettings&& value) { m_docDbSettingsHasBeenSet = true; m_docDbSettings = std::move(value); }
    inline DataProviderSettings& WithDocDbSettings(const DocDbDataProviderSettings& value) { SetDocDbSettings(value); return *this;}
    inline DataProviderSettings& WithDocDbSettings(DocDbDataProviderSettings&& value) { SetDocDbSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information that defines a MariaDB data provider.</p>
     */
    inline const MariaDbDataProviderSettings& GetMariaDbSettings() const{ return m_mariaDbSettings; }
    inline bool MariaDbSettingsHasBeenSet() const { return m_mariaDbSettingsHasBeenSet; }
    inline void SetMariaDbSettings(const MariaDbDataProviderSettings& value) { m_mariaDbSettingsHasBeenSet = true; m_mariaDbSettings = value; }
    inline void SetMariaDbSettings(MariaDbDataProviderSettings&& value) { m_mariaDbSettingsHasBeenSet = true; m_mariaDbSettings = std::move(value); }
    inline DataProviderSettings& WithMariaDbSettings(const MariaDbDataProviderSettings& value) { SetMariaDbSettings(value); return *this;}
    inline DataProviderSettings& WithMariaDbSettings(MariaDbDataProviderSettings&& value) { SetMariaDbSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information that defines an IBM DB2 LUW data provider.</p>
     */
    inline const IbmDb2LuwDataProviderSettings& GetIbmDb2LuwSettings() const{ return m_ibmDb2LuwSettings; }
    inline bool IbmDb2LuwSettingsHasBeenSet() const { return m_ibmDb2LuwSettingsHasBeenSet; }
    inline void SetIbmDb2LuwSettings(const IbmDb2LuwDataProviderSettings& value) { m_ibmDb2LuwSettingsHasBeenSet = true; m_ibmDb2LuwSettings = value; }
    inline void SetIbmDb2LuwSettings(IbmDb2LuwDataProviderSettings&& value) { m_ibmDb2LuwSettingsHasBeenSet = true; m_ibmDb2LuwSettings = std::move(value); }
    inline DataProviderSettings& WithIbmDb2LuwSettings(const IbmDb2LuwDataProviderSettings& value) { SetIbmDb2LuwSettings(value); return *this;}
    inline DataProviderSettings& WithIbmDb2LuwSettings(IbmDb2LuwDataProviderSettings&& value) { SetIbmDb2LuwSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information that defines an IBM DB2 for z/OS data provider.</p>
     */
    inline const IbmDb2zOsDataProviderSettings& GetIbmDb2zOsSettings() const{ return m_ibmDb2zOsSettings; }
    inline bool IbmDb2zOsSettingsHasBeenSet() const { return m_ibmDb2zOsSettingsHasBeenSet; }
    inline void SetIbmDb2zOsSettings(const IbmDb2zOsDataProviderSettings& value) { m_ibmDb2zOsSettingsHasBeenSet = true; m_ibmDb2zOsSettings = value; }
    inline void SetIbmDb2zOsSettings(IbmDb2zOsDataProviderSettings&& value) { m_ibmDb2zOsSettingsHasBeenSet = true; m_ibmDb2zOsSettings = std::move(value); }
    inline DataProviderSettings& WithIbmDb2zOsSettings(const IbmDb2zOsDataProviderSettings& value) { SetIbmDb2zOsSettings(value); return *this;}
    inline DataProviderSettings& WithIbmDb2zOsSettings(IbmDb2zOsDataProviderSettings&& value) { SetIbmDb2zOsSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information that defines a MongoDB data provider.</p>
     */
    inline const MongoDbDataProviderSettings& GetMongoDbSettings() const{ return m_mongoDbSettings; }
    inline bool MongoDbSettingsHasBeenSet() const { return m_mongoDbSettingsHasBeenSet; }
    inline void SetMongoDbSettings(const MongoDbDataProviderSettings& value) { m_mongoDbSettingsHasBeenSet = true; m_mongoDbSettings = value; }
    inline void SetMongoDbSettings(MongoDbDataProviderSettings&& value) { m_mongoDbSettingsHasBeenSet = true; m_mongoDbSettings = std::move(value); }
    inline DataProviderSettings& WithMongoDbSettings(const MongoDbDataProviderSettings& value) { SetMongoDbSettings(value); return *this;}
    inline DataProviderSettings& WithMongoDbSettings(MongoDbDataProviderSettings&& value) { SetMongoDbSettings(std::move(value)); return *this;}
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
