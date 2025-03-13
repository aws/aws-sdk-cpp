/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/RedshiftCredentials.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/RedshiftLineageSyncConfigurationInput.h>
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
   * <p>Amazon Redshift properties patch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RedshiftPropertiesPatch">AWS
   * API Reference</a></p>
   */
  class RedshiftPropertiesPatch
  {
  public:
    AWS_DATAZONE_API RedshiftPropertiesPatch() = default;
    AWS_DATAZONE_API RedshiftPropertiesPatch(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RedshiftPropertiesPatch& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The credentials in the Amazon Redshift properties patch.</p>
     */
    inline const RedshiftCredentials& GetCredentials() const { return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    template<typename CredentialsT = RedshiftCredentials>
    void SetCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials = std::forward<CredentialsT>(value); }
    template<typename CredentialsT = RedshiftCredentials>
    RedshiftPropertiesPatch& WithCredentials(CredentialsT&& value) { SetCredentials(std::forward<CredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name in the Amazon Redshift properties patch.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    RedshiftPropertiesPatch& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The host in the Amazon Redshift properties patch.</p>
     */
    inline const Aws::String& GetHost() const { return m_host; }
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
    template<typename HostT = Aws::String>
    void SetHost(HostT&& value) { m_hostHasBeenSet = true; m_host = std::forward<HostT>(value); }
    template<typename HostT = Aws::String>
    RedshiftPropertiesPatch& WithHost(HostT&& value) { SetHost(std::forward<HostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lineage sync in the Amazon Redshift properties patch.</p>
     */
    inline const RedshiftLineageSyncConfigurationInput& GetLineageSync() const { return m_lineageSync; }
    inline bool LineageSyncHasBeenSet() const { return m_lineageSyncHasBeenSet; }
    template<typename LineageSyncT = RedshiftLineageSyncConfigurationInput>
    void SetLineageSync(LineageSyncT&& value) { m_lineageSyncHasBeenSet = true; m_lineageSync = std::forward<LineageSyncT>(value); }
    template<typename LineageSyncT = RedshiftLineageSyncConfigurationInput>
    RedshiftPropertiesPatch& WithLineageSync(LineageSyncT&& value) { SetLineageSync(std::forward<LineageSyncT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port in the Amazon Redshift properties patch.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline RedshiftPropertiesPatch& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage in the Amazon Redshift properties patch.</p>
     */
    inline const RedshiftStorageProperties& GetStorage() const { return m_storage; }
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }
    template<typename StorageT = RedshiftStorageProperties>
    void SetStorage(StorageT&& value) { m_storageHasBeenSet = true; m_storage = std::forward<StorageT>(value); }
    template<typename StorageT = RedshiftStorageProperties>
    RedshiftPropertiesPatch& WithStorage(StorageT&& value) { SetStorage(std::forward<StorageT>(value)); return *this;}
    ///@}
  private:

    RedshiftCredentials m_credentials;
    bool m_credentialsHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    RedshiftLineageSyncConfigurationInput m_lineageSync;
    bool m_lineageSyncHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    RedshiftStorageProperties m_storage;
    bool m_storageHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
