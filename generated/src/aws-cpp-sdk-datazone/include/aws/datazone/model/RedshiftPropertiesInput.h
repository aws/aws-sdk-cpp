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
   * <p>The Amazon Redshift properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/RedshiftPropertiesInput">AWS
   * API Reference</a></p>
   */
  class RedshiftPropertiesInput
  {
  public:
    AWS_DATAZONE_API RedshiftPropertiesInput();
    AWS_DATAZONE_API RedshiftPropertiesInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API RedshiftPropertiesInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amaon Redshift credentials.</p>
     */
    inline const RedshiftCredentials& GetCredentials() const{ return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    inline void SetCredentials(const RedshiftCredentials& value) { m_credentialsHasBeenSet = true; m_credentials = value; }
    inline void SetCredentials(RedshiftCredentials&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }
    inline RedshiftPropertiesInput& WithCredentials(const RedshiftCredentials& value) { SetCredentials(value); return *this;}
    inline RedshiftPropertiesInput& WithCredentials(RedshiftCredentials&& value) { SetCredentials(std::move(value)); return *this;}
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
    inline RedshiftPropertiesInput& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline RedshiftPropertiesInput& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline RedshiftPropertiesInput& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Redshift host.</p>
     */
    inline const Aws::String& GetHost() const{ return m_host; }
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
    inline void SetHost(const Aws::String& value) { m_hostHasBeenSet = true; m_host = value; }
    inline void SetHost(Aws::String&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }
    inline void SetHost(const char* value) { m_hostHasBeenSet = true; m_host.assign(value); }
    inline RedshiftPropertiesInput& WithHost(const Aws::String& value) { SetHost(value); return *this;}
    inline RedshiftPropertiesInput& WithHost(Aws::String&& value) { SetHost(std::move(value)); return *this;}
    inline RedshiftPropertiesInput& WithHost(const char* value) { SetHost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lineage sync of the Amazon Redshift.</p>
     */
    inline const RedshiftLineageSyncConfigurationInput& GetLineageSync() const{ return m_lineageSync; }
    inline bool LineageSyncHasBeenSet() const { return m_lineageSyncHasBeenSet; }
    inline void SetLineageSync(const RedshiftLineageSyncConfigurationInput& value) { m_lineageSyncHasBeenSet = true; m_lineageSync = value; }
    inline void SetLineageSync(RedshiftLineageSyncConfigurationInput&& value) { m_lineageSyncHasBeenSet = true; m_lineageSync = std::move(value); }
    inline RedshiftPropertiesInput& WithLineageSync(const RedshiftLineageSyncConfigurationInput& value) { SetLineageSync(value); return *this;}
    inline RedshiftPropertiesInput& WithLineageSync(RedshiftLineageSyncConfigurationInput&& value) { SetLineageSync(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amaon Redshift port.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline RedshiftPropertiesInput& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Redshift storage.</p>
     */
    inline const RedshiftStorageProperties& GetStorage() const{ return m_storage; }
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }
    inline void SetStorage(const RedshiftStorageProperties& value) { m_storageHasBeenSet = true; m_storage = value; }
    inline void SetStorage(RedshiftStorageProperties&& value) { m_storageHasBeenSet = true; m_storage = std::move(value); }
    inline RedshiftPropertiesInput& WithStorage(const RedshiftStorageProperties& value) { SetStorage(value); return *this;}
    inline RedshiftPropertiesInput& WithStorage(RedshiftStorageProperties&& value) { SetStorage(std::move(value)); return *this;}
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

    int m_port;
    bool m_portHasBeenSet = false;

    RedshiftStorageProperties m_storage;
    bool m_storageHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
