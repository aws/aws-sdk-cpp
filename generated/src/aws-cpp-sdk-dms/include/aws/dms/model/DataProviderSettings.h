/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/PostgreSqlDataProviderSettings.h>
#include <aws/dms/model/MySqlDataProviderSettings.h>
#include <aws/dms/model/OracleDataProviderSettings.h>
#include <aws/dms/model/MicrosoftSqlServerDataProviderSettings.h>
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


    
    inline const PostgreSqlDataProviderSettings& GetPostgreSqlSettings() const{ return m_postgreSqlSettings; }

    
    inline bool PostgreSqlSettingsHasBeenSet() const { return m_postgreSqlSettingsHasBeenSet; }

    
    inline void SetPostgreSqlSettings(const PostgreSqlDataProviderSettings& value) { m_postgreSqlSettingsHasBeenSet = true; m_postgreSqlSettings = value; }

    
    inline void SetPostgreSqlSettings(PostgreSqlDataProviderSettings&& value) { m_postgreSqlSettingsHasBeenSet = true; m_postgreSqlSettings = std::move(value); }

    
    inline DataProviderSettings& WithPostgreSqlSettings(const PostgreSqlDataProviderSettings& value) { SetPostgreSqlSettings(value); return *this;}

    
    inline DataProviderSettings& WithPostgreSqlSettings(PostgreSqlDataProviderSettings&& value) { SetPostgreSqlSettings(std::move(value)); return *this;}


    
    inline const MySqlDataProviderSettings& GetMySqlSettings() const{ return m_mySqlSettings; }

    
    inline bool MySqlSettingsHasBeenSet() const { return m_mySqlSettingsHasBeenSet; }

    
    inline void SetMySqlSettings(const MySqlDataProviderSettings& value) { m_mySqlSettingsHasBeenSet = true; m_mySqlSettings = value; }

    
    inline void SetMySqlSettings(MySqlDataProviderSettings&& value) { m_mySqlSettingsHasBeenSet = true; m_mySqlSettings = std::move(value); }

    
    inline DataProviderSettings& WithMySqlSettings(const MySqlDataProviderSettings& value) { SetMySqlSettings(value); return *this;}

    
    inline DataProviderSettings& WithMySqlSettings(MySqlDataProviderSettings&& value) { SetMySqlSettings(std::move(value)); return *this;}


    
    inline const OracleDataProviderSettings& GetOracleSettings() const{ return m_oracleSettings; }

    
    inline bool OracleSettingsHasBeenSet() const { return m_oracleSettingsHasBeenSet; }

    
    inline void SetOracleSettings(const OracleDataProviderSettings& value) { m_oracleSettingsHasBeenSet = true; m_oracleSettings = value; }

    
    inline void SetOracleSettings(OracleDataProviderSettings&& value) { m_oracleSettingsHasBeenSet = true; m_oracleSettings = std::move(value); }

    
    inline DataProviderSettings& WithOracleSettings(const OracleDataProviderSettings& value) { SetOracleSettings(value); return *this;}

    
    inline DataProviderSettings& WithOracleSettings(OracleDataProviderSettings&& value) { SetOracleSettings(std::move(value)); return *this;}


    
    inline const MicrosoftSqlServerDataProviderSettings& GetMicrosoftSqlServerSettings() const{ return m_microsoftSqlServerSettings; }

    
    inline bool MicrosoftSqlServerSettingsHasBeenSet() const { return m_microsoftSqlServerSettingsHasBeenSet; }

    
    inline void SetMicrosoftSqlServerSettings(const MicrosoftSqlServerDataProviderSettings& value) { m_microsoftSqlServerSettingsHasBeenSet = true; m_microsoftSqlServerSettings = value; }

    
    inline void SetMicrosoftSqlServerSettings(MicrosoftSqlServerDataProviderSettings&& value) { m_microsoftSqlServerSettingsHasBeenSet = true; m_microsoftSqlServerSettings = std::move(value); }

    
    inline DataProviderSettings& WithMicrosoftSqlServerSettings(const MicrosoftSqlServerDataProviderSettings& value) { SetMicrosoftSqlServerSettings(value); return *this;}

    
    inline DataProviderSettings& WithMicrosoftSqlServerSettings(MicrosoftSqlServerDataProviderSettings&& value) { SetMicrosoftSqlServerSettings(std::move(value)); return *this;}

  private:

    PostgreSqlDataProviderSettings m_postgreSqlSettings;
    bool m_postgreSqlSettingsHasBeenSet = false;

    MySqlDataProviderSettings m_mySqlSettings;
    bool m_mySqlSettingsHasBeenSet = false;

    OracleDataProviderSettings m_oracleSettings;
    bool m_oracleSettingsHasBeenSet = false;

    MicrosoftSqlServerDataProviderSettings m_microsoftSqlServerSettings;
    bool m_microsoftSqlServerSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
