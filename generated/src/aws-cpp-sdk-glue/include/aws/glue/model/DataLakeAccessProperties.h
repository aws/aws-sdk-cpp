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
   * <p>Input properties to configure data lake access for your catalog resource in
   * the Glue Data Catalog.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataLakeAccessProperties">AWS
   * API Reference</a></p>
   */
  class DataLakeAccessProperties
  {
  public:
    AWS_GLUE_API DataLakeAccessProperties() = default;
    AWS_GLUE_API DataLakeAccessProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataLakeAccessProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Turns on or off data lake access for Apache Spark applications that access
     * Amazon Redshift databases in the Data Catalog from any non-Redshift engine, such
     * as Amazon Athena, Amazon EMR, or Glue ETL.</p>
     */
    inline bool GetDataLakeAccess() const { return m_dataLakeAccess; }
    inline bool DataLakeAccessHasBeenSet() const { return m_dataLakeAccessHasBeenSet; }
    inline void SetDataLakeAccess(bool value) { m_dataLakeAccessHasBeenSet = true; m_dataLakeAccess = value; }
    inline DataLakeAccessProperties& WithDataLakeAccess(bool value) { SetDataLakeAccess(value); return *this;}
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
    DataLakeAccessProperties& WithDataTransferRole(DataTransferRoleT&& value) { SetDataTransferRole(std::forward<DataTransferRoleT>(value)); return *this;}
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
    DataLakeAccessProperties& WithKmsKey(KmsKeyT&& value) { SetKmsKey(std::forward<KmsKeyT>(value)); return *this;}
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
    DataLakeAccessProperties& WithCatalogType(CatalogTypeT&& value) { SetCatalogType(std::forward<CatalogTypeT>(value)); return *this;}
    ///@}
  private:

    bool m_dataLakeAccess{false};
    bool m_dataLakeAccessHasBeenSet = false;

    Aws::String m_dataTransferRole;
    bool m_dataTransferRoleHasBeenSet = false;

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;

    Aws::String m_catalogType;
    bool m_catalogTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
