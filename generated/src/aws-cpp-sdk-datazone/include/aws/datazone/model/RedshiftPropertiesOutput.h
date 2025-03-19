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
    AWS_DATAZONE_API RedshiftPropertiesOutput() = default;
    AWS_DATAZONE_API RedshiftPropertiesOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RedshiftPropertiesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Redshift credentials.</p>
     */
    inline const RedshiftCredentials& GetCredentials() const { return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    template<typename CredentialsT = RedshiftCredentials>
    void SetCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials = std::forward<CredentialsT>(value); }
    template<typename CredentialsT = RedshiftCredentials>
    RedshiftPropertiesOutput& WithCredentials(CredentialsT&& value) { SetCredentials(std::forward<CredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Redshift database name.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    RedshiftPropertiesOutput& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether Amaon Redshift properties has a provisioned secret.</p>
     */
    inline bool GetIsProvisionedSecret() const { return m_isProvisionedSecret; }
    inline bool IsProvisionedSecretHasBeenSet() const { return m_isProvisionedSecretHasBeenSet; }
    inline void SetIsProvisionedSecret(bool value) { m_isProvisionedSecretHasBeenSet = true; m_isProvisionedSecret = value; }
    inline RedshiftPropertiesOutput& WithIsProvisionedSecret(bool value) { SetIsProvisionedSecret(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The jdbcIam URL of the Amazon Redshift properties.</p>
     */
    inline const Aws::String& GetJdbcIamUrl() const { return m_jdbcIamUrl; }
    inline bool JdbcIamUrlHasBeenSet() const { return m_jdbcIamUrlHasBeenSet; }
    template<typename JdbcIamUrlT = Aws::String>
    void SetJdbcIamUrl(JdbcIamUrlT&& value) { m_jdbcIamUrlHasBeenSet = true; m_jdbcIamUrl = std::forward<JdbcIamUrlT>(value); }
    template<typename JdbcIamUrlT = Aws::String>
    RedshiftPropertiesOutput& WithJdbcIamUrl(JdbcIamUrlT&& value) { SetJdbcIamUrl(std::forward<JdbcIamUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The jdbcURL of the Amazon Redshift properties. </p>
     */
    inline const Aws::String& GetJdbcUrl() const { return m_jdbcUrl; }
    inline bool JdbcUrlHasBeenSet() const { return m_jdbcUrlHasBeenSet; }
    template<typename JdbcUrlT = Aws::String>
    void SetJdbcUrl(JdbcUrlT&& value) { m_jdbcUrlHasBeenSet = true; m_jdbcUrl = std::forward<JdbcUrlT>(value); }
    template<typename JdbcUrlT = Aws::String>
    RedshiftPropertiesOutput& WithJdbcUrl(JdbcUrlT&& value) { SetJdbcUrl(std::forward<JdbcUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lineage syn of the Amazon Redshift properties.</p>
     */
    inline const RedshiftLineageSyncConfigurationOutput& GetLineageSync() const { return m_lineageSync; }
    inline bool LineageSyncHasBeenSet() const { return m_lineageSyncHasBeenSet; }
    template<typename LineageSyncT = RedshiftLineageSyncConfigurationOutput>
    void SetLineageSync(LineageSyncT&& value) { m_lineageSyncHasBeenSet = true; m_lineageSync = std::forward<LineageSyncT>(value); }
    template<typename LineageSyncT = RedshiftLineageSyncConfigurationOutput>
    RedshiftPropertiesOutput& WithLineageSync(LineageSyncT&& value) { SetLineageSync(std::forward<LineageSyncT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The redshiftTempDir of the Amazon Redshift properties.</p>
     */
    inline const Aws::String& GetRedshiftTempDir() const { return m_redshiftTempDir; }
    inline bool RedshiftTempDirHasBeenSet() const { return m_redshiftTempDirHasBeenSet; }
    template<typename RedshiftTempDirT = Aws::String>
    void SetRedshiftTempDir(RedshiftTempDirT&& value) { m_redshiftTempDirHasBeenSet = true; m_redshiftTempDir = std::forward<RedshiftTempDirT>(value); }
    template<typename RedshiftTempDirT = Aws::String>
    RedshiftPropertiesOutput& WithRedshiftTempDir(RedshiftTempDirT&& value) { SetRedshiftTempDir(std::forward<RedshiftTempDirT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status in the Amazon Redshift properties.</p>
     */
    inline ConnectionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ConnectionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RedshiftPropertiesOutput& WithStatus(ConnectionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage in the Amazon Redshift properties.</p>
     */
    inline const RedshiftStorageProperties& GetStorage() const { return m_storage; }
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }
    template<typename StorageT = RedshiftStorageProperties>
    void SetStorage(StorageT&& value) { m_storageHasBeenSet = true; m_storage = std::forward<StorageT>(value); }
    template<typename StorageT = RedshiftStorageProperties>
    RedshiftPropertiesOutput& WithStorage(StorageT&& value) { SetStorage(std::forward<StorageT>(value)); return *this;}
    ///@}
  private:

    RedshiftCredentials m_credentials;
    bool m_credentialsHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    bool m_isProvisionedSecret{false};
    bool m_isProvisionedSecretHasBeenSet = false;

    Aws::String m_jdbcIamUrl;
    bool m_jdbcIamUrlHasBeenSet = false;

    Aws::String m_jdbcUrl;
    bool m_jdbcUrlHasBeenSet = false;

    RedshiftLineageSyncConfigurationOutput m_lineageSync;
    bool m_lineageSyncHasBeenSet = false;

    Aws::String m_redshiftTempDir;
    bool m_redshiftTempDirHasBeenSet = false;

    ConnectionStatus m_status{ConnectionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    RedshiftStorageProperties m_storage;
    bool m_storageHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
