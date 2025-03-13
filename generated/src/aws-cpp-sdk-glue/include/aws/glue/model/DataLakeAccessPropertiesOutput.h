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
    AWS_GLUE_API DataLakeAccessPropertiesOutput() = default;
    AWS_GLUE_API DataLakeAccessPropertiesOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataLakeAccessPropertiesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Turns on or off data lake access for Apache Spark applications that access
     * Amazon Redshift databases in the Data Catalog.</p>
     */
    inline bool GetDataLakeAccess() const { return m_dataLakeAccess; }
    inline bool DataLakeAccessHasBeenSet() const { return m_dataLakeAccessHasBeenSet; }
    inline void SetDataLakeAccess(bool value) { m_dataLakeAccessHasBeenSet = true; m_dataLakeAccess = value; }
    inline DataLakeAccessPropertiesOutput& WithDataLakeAccess(bool value) { SetDataLakeAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A role that will be assumed by Glue for transferring data into/out of the
     * staging bucket during a query.</p>
     */
    inline const Aws::String& GetDataTransferRole() const { return m_dataTransferRole; }
    inline bool DataTransferRoleHasBeenSet() const { return m_dataTransferRoleHasBeenSet; }
    template<typename DataTransferRoleT = Aws::String>
    void SetDataTransferRole(DataTransferRoleT&& value) { m_dataTransferRoleHasBeenSet = true; m_dataTransferRole = std::forward<DataTransferRoleT>(value); }
    template<typename DataTransferRoleT = Aws::String>
    DataLakeAccessPropertiesOutput& WithDataTransferRole(DataTransferRoleT&& value) { SetDataTransferRole(std::forward<DataTransferRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An encryption key that will be used for the staging bucket that will be
     * created along with the catalog.</p>
     */
    inline const Aws::String& GetKmsKey() const { return m_kmsKey; }
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
    template<typename KmsKeyT = Aws::String>
    void SetKmsKey(KmsKeyT&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::forward<KmsKeyT>(value); }
    template<typename KmsKeyT = Aws::String>
    DataLakeAccessPropertiesOutput& WithKmsKey(KmsKeyT&& value) { SetKmsKey(std::forward<KmsKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed Redshift Serverless compute name that is created for your catalog
     * resource.</p>
     */
    inline const Aws::String& GetManagedWorkgroupName() const { return m_managedWorkgroupName; }
    inline bool ManagedWorkgroupNameHasBeenSet() const { return m_managedWorkgroupNameHasBeenSet; }
    template<typename ManagedWorkgroupNameT = Aws::String>
    void SetManagedWorkgroupName(ManagedWorkgroupNameT&& value) { m_managedWorkgroupNameHasBeenSet = true; m_managedWorkgroupName = std::forward<ManagedWorkgroupNameT>(value); }
    template<typename ManagedWorkgroupNameT = Aws::String>
    DataLakeAccessPropertiesOutput& WithManagedWorkgroupName(ManagedWorkgroupNameT&& value) { SetManagedWorkgroupName(std::forward<ManagedWorkgroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed Redshift Serverless compute status.</p>
     */
    inline const Aws::String& GetManagedWorkgroupStatus() const { return m_managedWorkgroupStatus; }
    inline bool ManagedWorkgroupStatusHasBeenSet() const { return m_managedWorkgroupStatusHasBeenSet; }
    template<typename ManagedWorkgroupStatusT = Aws::String>
    void SetManagedWorkgroupStatus(ManagedWorkgroupStatusT&& value) { m_managedWorkgroupStatusHasBeenSet = true; m_managedWorkgroupStatus = std::forward<ManagedWorkgroupStatusT>(value); }
    template<typename ManagedWorkgroupStatusT = Aws::String>
    DataLakeAccessPropertiesOutput& WithManagedWorkgroupStatus(ManagedWorkgroupStatusT&& value) { SetManagedWorkgroupStatus(std::forward<ManagedWorkgroupStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default Redshift database resource name in the managed compute.</p>
     */
    inline const Aws::String& GetRedshiftDatabaseName() const { return m_redshiftDatabaseName; }
    inline bool RedshiftDatabaseNameHasBeenSet() const { return m_redshiftDatabaseNameHasBeenSet; }
    template<typename RedshiftDatabaseNameT = Aws::String>
    void SetRedshiftDatabaseName(RedshiftDatabaseNameT&& value) { m_redshiftDatabaseNameHasBeenSet = true; m_redshiftDatabaseName = std::forward<RedshiftDatabaseNameT>(value); }
    template<typename RedshiftDatabaseNameT = Aws::String>
    DataLakeAccessPropertiesOutput& WithRedshiftDatabaseName(RedshiftDatabaseNameT&& value) { SetRedshiftDatabaseName(std::forward<RedshiftDatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that gives more detailed information about the managed workgroup
     * status.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    DataLakeAccessPropertiesOutput& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a federated catalog type for the native catalog resource. The
     * currently supported type is <code>aws:redshift</code>.</p>
     */
    inline const Aws::String& GetCatalogType() const { return m_catalogType; }
    inline bool CatalogTypeHasBeenSet() const { return m_catalogTypeHasBeenSet; }
    template<typename CatalogTypeT = Aws::String>
    void SetCatalogType(CatalogTypeT&& value) { m_catalogTypeHasBeenSet = true; m_catalogType = std::forward<CatalogTypeT>(value); }
    template<typename CatalogTypeT = Aws::String>
    DataLakeAccessPropertiesOutput& WithCatalogType(CatalogTypeT&& value) { SetCatalogType(std::forward<CatalogTypeT>(value)); return *this;}
    ///@}
  private:

    bool m_dataLakeAccess{false};
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
