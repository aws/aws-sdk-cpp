/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The output properties of the data lake access configuration for your catalog
   * resource in the Glue Data Catalog.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataLakeAccessPropertiesOutput">AWS
   * API Reference</a></p>
   */
  class DataLakeAccessPropertiesOutput
  {
  public:
    AWS_GLUE_API DataLakeAccessPropertiesOutput();
    AWS_GLUE_API DataLakeAccessPropertiesOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataLakeAccessPropertiesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Turns on or off data lake access for Apache Spark applications that access
     * Amazon Redshift databases in the Data Catalog.</p>
     */
    inline bool GetDataLakeAccess() const{ return m_dataLakeAccess; }
    inline bool DataLakeAccessHasBeenSet() const { return m_dataLakeAccessHasBeenSet; }
    inline void SetDataLakeAccess(bool value) { m_dataLakeAccessHasBeenSet = true; m_dataLakeAccess = value; }
    inline DataLakeAccessPropertiesOutput& WithDataLakeAccess(bool value) { SetDataLakeAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A role that will be assumed by Glue for transferring data into/out of the
     * staging bucket during a query.</p>
     */
    inline const Aws::String& GetDataTransferRole() const{ return m_dataTransferRole; }
    inline bool DataTransferRoleHasBeenSet() const { return m_dataTransferRoleHasBeenSet; }
    inline void SetDataTransferRole(const Aws::String& value) { m_dataTransferRoleHasBeenSet = true; m_dataTransferRole = value; }
    inline void SetDataTransferRole(Aws::String&& value) { m_dataTransferRoleHasBeenSet = true; m_dataTransferRole = std::move(value); }
    inline void SetDataTransferRole(const char* value) { m_dataTransferRoleHasBeenSet = true; m_dataTransferRole.assign(value); }
    inline DataLakeAccessPropertiesOutput& WithDataTransferRole(const Aws::String& value) { SetDataTransferRole(value); return *this;}
    inline DataLakeAccessPropertiesOutput& WithDataTransferRole(Aws::String&& value) { SetDataTransferRole(std::move(value)); return *this;}
    inline DataLakeAccessPropertiesOutput& WithDataTransferRole(const char* value) { SetDataTransferRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An encryption key that will be used for the staging bucket that will be
     * created along with the catalog.</p>
     */
    inline const Aws::String& GetKmsKey() const{ return m_kmsKey; }
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
    inline void SetKmsKey(const Aws::String& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = value; }
    inline void SetKmsKey(Aws::String&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::move(value); }
    inline void SetKmsKey(const char* value) { m_kmsKeyHasBeenSet = true; m_kmsKey.assign(value); }
    inline DataLakeAccessPropertiesOutput& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}
    inline DataLakeAccessPropertiesOutput& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}
    inline DataLakeAccessPropertiesOutput& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed Redshift Serverless compute name that is created for your catalog
     * resource.</p>
     */
    inline const Aws::String& GetManagedWorkgroupName() const{ return m_managedWorkgroupName; }
    inline bool ManagedWorkgroupNameHasBeenSet() const { return m_managedWorkgroupNameHasBeenSet; }
    inline void SetManagedWorkgroupName(const Aws::String& value) { m_managedWorkgroupNameHasBeenSet = true; m_managedWorkgroupName = value; }
    inline void SetManagedWorkgroupName(Aws::String&& value) { m_managedWorkgroupNameHasBeenSet = true; m_managedWorkgroupName = std::move(value); }
    inline void SetManagedWorkgroupName(const char* value) { m_managedWorkgroupNameHasBeenSet = true; m_managedWorkgroupName.assign(value); }
    inline DataLakeAccessPropertiesOutput& WithManagedWorkgroupName(const Aws::String& value) { SetManagedWorkgroupName(value); return *this;}
    inline DataLakeAccessPropertiesOutput& WithManagedWorkgroupName(Aws::String&& value) { SetManagedWorkgroupName(std::move(value)); return *this;}
    inline DataLakeAccessPropertiesOutput& WithManagedWorkgroupName(const char* value) { SetManagedWorkgroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed Redshift Serverless compute status.</p>
     */
    inline const Aws::String& GetManagedWorkgroupStatus() const{ return m_managedWorkgroupStatus; }
    inline bool ManagedWorkgroupStatusHasBeenSet() const { return m_managedWorkgroupStatusHasBeenSet; }
    inline void SetManagedWorkgroupStatus(const Aws::String& value) { m_managedWorkgroupStatusHasBeenSet = true; m_managedWorkgroupStatus = value; }
    inline void SetManagedWorkgroupStatus(Aws::String&& value) { m_managedWorkgroupStatusHasBeenSet = true; m_managedWorkgroupStatus = std::move(value); }
    inline void SetManagedWorkgroupStatus(const char* value) { m_managedWorkgroupStatusHasBeenSet = true; m_managedWorkgroupStatus.assign(value); }
    inline DataLakeAccessPropertiesOutput& WithManagedWorkgroupStatus(const Aws::String& value) { SetManagedWorkgroupStatus(value); return *this;}
    inline DataLakeAccessPropertiesOutput& WithManagedWorkgroupStatus(Aws::String&& value) { SetManagedWorkgroupStatus(std::move(value)); return *this;}
    inline DataLakeAccessPropertiesOutput& WithManagedWorkgroupStatus(const char* value) { SetManagedWorkgroupStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default Redshift database resource name in the managed compute.</p>
     */
    inline const Aws::String& GetRedshiftDatabaseName() const{ return m_redshiftDatabaseName; }
    inline bool RedshiftDatabaseNameHasBeenSet() const { return m_redshiftDatabaseNameHasBeenSet; }
    inline void SetRedshiftDatabaseName(const Aws::String& value) { m_redshiftDatabaseNameHasBeenSet = true; m_redshiftDatabaseName = value; }
    inline void SetRedshiftDatabaseName(Aws::String&& value) { m_redshiftDatabaseNameHasBeenSet = true; m_redshiftDatabaseName = std::move(value); }
    inline void SetRedshiftDatabaseName(const char* value) { m_redshiftDatabaseNameHasBeenSet = true; m_redshiftDatabaseName.assign(value); }
    inline DataLakeAccessPropertiesOutput& WithRedshiftDatabaseName(const Aws::String& value) { SetRedshiftDatabaseName(value); return *this;}
    inline DataLakeAccessPropertiesOutput& WithRedshiftDatabaseName(Aws::String&& value) { SetRedshiftDatabaseName(std::move(value)); return *this;}
    inline DataLakeAccessPropertiesOutput& WithRedshiftDatabaseName(const char* value) { SetRedshiftDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that gives more detailed information about the managed workgroup
     * status.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline DataLakeAccessPropertiesOutput& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline DataLakeAccessPropertiesOutput& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline DataLakeAccessPropertiesOutput& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a federated catalog type for the native catalog resource. The
     * currently supported type is <code>aws:redshift</code>.</p>
     */
    inline const Aws::String& GetCatalogType() const{ return m_catalogType; }
    inline bool CatalogTypeHasBeenSet() const { return m_catalogTypeHasBeenSet; }
    inline void SetCatalogType(const Aws::String& value) { m_catalogTypeHasBeenSet = true; m_catalogType = value; }
    inline void SetCatalogType(Aws::String&& value) { m_catalogTypeHasBeenSet = true; m_catalogType = std::move(value); }
    inline void SetCatalogType(const char* value) { m_catalogTypeHasBeenSet = true; m_catalogType.assign(value); }
    inline DataLakeAccessPropertiesOutput& WithCatalogType(const Aws::String& value) { SetCatalogType(value); return *this;}
    inline DataLakeAccessPropertiesOutput& WithCatalogType(Aws::String&& value) { SetCatalogType(std::move(value)); return *this;}
    inline DataLakeAccessPropertiesOutput& WithCatalogType(const char* value) { SetCatalogType(value); return *this;}
    ///@}
  private:

    bool m_dataLakeAccess;
    bool m_dataLakeAccessHasBeenSet = false;

    Aws::String m_dataTransferRole;
    bool m_dataTransferRoleHasBeenSet = false;

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;

    Aws::String m_managedWorkgroupName;
    bool m_managedWorkgroupNameHasBeenSet = false;

    Aws::String m_managedWorkgroupStatus;
    bool m_managedWorkgroupStatusHasBeenSet = false;

    Aws::String m_redshiftDatabaseName;
    bool m_redshiftDatabaseNameHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_catalogType;
    bool m_catalogTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
