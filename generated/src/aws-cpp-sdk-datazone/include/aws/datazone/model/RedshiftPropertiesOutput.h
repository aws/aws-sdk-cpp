/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/RedshiftCredentials.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/RedshiftLineageSyncConfigurationOutput.h>
#include <aws/datazone/model/ConnectionStatus.h>
#include <aws/datazone/model/RedshiftStorageProperties.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The Amazon Redshift properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RedshiftPropertiesOutput">AWS
   * API Reference</a></p>
   */
  class RedshiftPropertiesOutput
  {
  public:
    AWS_DATAZONE_API RedshiftPropertiesOutput();
    AWS_DATAZONE_API RedshiftPropertiesOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RedshiftPropertiesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Redshift credentials.</p>
     */
    inline const RedshiftCredentials& GetCredentials() const{ return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    inline void SetCredentials(const RedshiftCredentials& value) { m_credentialsHasBeenSet = true; m_credentials = value; }
    inline void SetCredentials(RedshiftCredentials&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }
    inline RedshiftPropertiesOutput& WithCredentials(const RedshiftCredentials& value) { SetCredentials(value); return *this;}
    inline RedshiftPropertiesOutput& WithCredentials(RedshiftCredentials&& value) { SetCredentials(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Redshift database name.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline RedshiftPropertiesOutput& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline RedshiftPropertiesOutput& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline RedshiftPropertiesOutput& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether Amaon Redshift properties has a provisioned secret.</p>
     */
    inline bool GetIsProvisionedSecret() const{ return m_isProvisionedSecret; }
    inline bool IsProvisionedSecretHasBeenSet() const { return m_isProvisionedSecretHasBeenSet; }
    inline void SetIsProvisionedSecret(bool value) { m_isProvisionedSecretHasBeenSet = true; m_isProvisionedSecret = value; }
    inline RedshiftPropertiesOutput& WithIsProvisionedSecret(bool value) { SetIsProvisionedSecret(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The jdbcIam URL of the Amazon Redshift properties.</p>
     */
    inline const Aws::String& GetJdbcIamUrl() const{ return m_jdbcIamUrl; }
    inline bool JdbcIamUrlHasBeenSet() const { return m_jdbcIamUrlHasBeenSet; }
    inline void SetJdbcIamUrl(const Aws::String& value) { m_jdbcIamUrlHasBeenSet = true; m_jdbcIamUrl = value; }
    inline void SetJdbcIamUrl(Aws::String&& value) { m_jdbcIamUrlHasBeenSet = true; m_jdbcIamUrl = std::move(value); }
    inline void SetJdbcIamUrl(const char* value) { m_jdbcIamUrlHasBeenSet = true; m_jdbcIamUrl.assign(value); }
    inline RedshiftPropertiesOutput& WithJdbcIamUrl(const Aws::String& value) { SetJdbcIamUrl(value); return *this;}
    inline RedshiftPropertiesOutput& WithJdbcIamUrl(Aws::String&& value) { SetJdbcIamUrl(std::move(value)); return *this;}
    inline RedshiftPropertiesOutput& WithJdbcIamUrl(const char* value) { SetJdbcIamUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The jdbcURL of the Amazon Redshift properties. </p>
     */
    inline const Aws::String& GetJdbcUrl() const{ return m_jdbcUrl; }
    inline bool JdbcUrlHasBeenSet() const { return m_jdbcUrlHasBeenSet; }
    inline void SetJdbcUrl(const Aws::String& value) { m_jdbcUrlHasBeenSet = true; m_jdbcUrl = value; }
    inline void SetJdbcUrl(Aws::String&& value) { m_jdbcUrlHasBeenSet = true; m_jdbcUrl = std::move(value); }
    inline void SetJdbcUrl(const char* value) { m_jdbcUrlHasBeenSet = true; m_jdbcUrl.assign(value); }
    inline RedshiftPropertiesOutput& WithJdbcUrl(const Aws::String& value) { SetJdbcUrl(value); return *this;}
    inline RedshiftPropertiesOutput& WithJdbcUrl(Aws::String&& value) { SetJdbcUrl(std::move(value)); return *this;}
    inline RedshiftPropertiesOutput& WithJdbcUrl(const char* value) { SetJdbcUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lineage syn of the Amazon Redshift properties.</p>
     */
    inline const RedshiftLineageSyncConfigurationOutput& GetLineageSync() const{ return m_lineageSync; }
    inline bool LineageSyncHasBeenSet() const { return m_lineageSyncHasBeenSet; }
    inline void SetLineageSync(const RedshiftLineageSyncConfigurationOutput& value) { m_lineageSyncHasBeenSet = true; m_lineageSync = value; }
    inline void SetLineageSync(RedshiftLineageSyncConfigurationOutput&& value) { m_lineageSyncHasBeenSet = true; m_lineageSync = std::move(value); }
    inline RedshiftPropertiesOutput& WithLineageSync(const RedshiftLineageSyncConfigurationOutput& value) { SetLineageSync(value); return *this;}
    inline RedshiftPropertiesOutput& WithLineageSync(RedshiftLineageSyncConfigurationOutput&& value) { SetLineageSync(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The redshiftTempDir of the Amazon Redshift properties.</p>
     */
    inline const Aws::String& GetRedshiftTempDir() const{ return m_redshiftTempDir; }
    inline bool RedshiftTempDirHasBeenSet() const { return m_redshiftTempDirHasBeenSet; }
    inline void SetRedshiftTempDir(const Aws::String& value) { m_redshiftTempDirHasBeenSet = true; m_redshiftTempDir = value; }
    inline void SetRedshiftTempDir(Aws::String&& value) { m_redshiftTempDirHasBeenSet = true; m_redshiftTempDir = std::move(value); }
    inline void SetRedshiftTempDir(const char* value) { m_redshiftTempDirHasBeenSet = true; m_redshiftTempDir.assign(value); }
    inline RedshiftPropertiesOutput& WithRedshiftTempDir(const Aws::String& value) { SetRedshiftTempDir(value); return *this;}
    inline RedshiftPropertiesOutput& WithRedshiftTempDir(Aws::String&& value) { SetRedshiftTempDir(std::move(value)); return *this;}
    inline RedshiftPropertiesOutput& WithRedshiftTempDir(const char* value) { SetRedshiftTempDir(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status in the Amazon Redshift properties.</p>
     */
    inline const ConnectionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ConnectionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ConnectionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline RedshiftPropertiesOutput& WithStatus(const ConnectionStatus& value) { SetStatus(value); return *this;}
    inline RedshiftPropertiesOutput& WithStatus(ConnectionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage in the Amazon Redshift properties.</p>
     */
    inline const RedshiftStorageProperties& GetStorage() const{ return m_storage; }
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }
    inline void SetStorage(const RedshiftStorageProperties& value) { m_storageHasBeenSet = true; m_storage = value; }
    inline void SetStorage(RedshiftStorageProperties&& value) { m_storageHasBeenSet = true; m_storage = std::move(value); }
    inline RedshiftPropertiesOutput& WithStorage(const RedshiftStorageProperties& value) { SetStorage(value); return *this;}
    inline RedshiftPropertiesOutput& WithStorage(RedshiftStorageProperties&& value) { SetStorage(std::move(value)); return *this;}
    ///@}
  private:

    RedshiftCredentials m_credentials;
    bool m_credentialsHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    bool m_isProvisionedSecret;
    bool m_isProvisionedSecretHasBeenSet = false;

    Aws::String m_jdbcIamUrl;
    bool m_jdbcIamUrlHasBeenSet = false;

    Aws::String m_jdbcUrl;
    bool m_jdbcUrlHasBeenSet = false;

    RedshiftLineageSyncConfigurationOutput m_lineageSync;
    bool m_lineageSyncHasBeenSet = false;

    Aws::String m_redshiftTempDir;
    bool m_redshiftTempDirHasBeenSet = false;

    ConnectionStatus m_status;
    bool m_statusHasBeenSet = false;

    RedshiftStorageProperties m_storage;
    bool m_storageHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
