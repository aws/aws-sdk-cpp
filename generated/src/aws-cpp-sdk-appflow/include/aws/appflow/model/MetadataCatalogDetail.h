/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/model/CatalogType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/RegistrationOutput.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p>Describes the metadata catalog, metadata table, and data partitions that
   * Amazon AppFlow used for the associated flow run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/MetadataCatalogDetail">AWS
   * API Reference</a></p>
   */
  class MetadataCatalogDetail
  {
  public:
    AWS_APPFLOW_API MetadataCatalogDetail() = default;
    AWS_APPFLOW_API MetadataCatalogDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API MetadataCatalogDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of metadata catalog that Amazon AppFlow used for the associated flow
     * run. This parameter returns the following value:</p> <dl> <dt>GLUE</dt> <dd>
     * <p>The metadata catalog is provided by the Glue Data Catalog. Glue includes the
     * Glue Data Catalog as a component.</p> </dd> </dl>
     */
    inline CatalogType GetCatalogType() const { return m_catalogType; }
    inline bool CatalogTypeHasBeenSet() const { return m_catalogTypeHasBeenSet; }
    inline void SetCatalogType(CatalogType value) { m_catalogTypeHasBeenSet = true; m_catalogType = value; }
    inline MetadataCatalogDetail& WithCatalogType(CatalogType value) { SetCatalogType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table that stores the metadata for the associated flow run.
     * The table stores metadata that represents the data that the flow transferred.
     * Amazon AppFlow stores the table in the metadata catalog.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    MetadataCatalogDetail& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the status of the attempt from Amazon AppFlow to register the
     * metadata table with the metadata catalog. Amazon AppFlow creates or updates this
     * table for the associated flow run.</p>
     */
    inline const RegistrationOutput& GetTableRegistrationOutput() const { return m_tableRegistrationOutput; }
    inline bool TableRegistrationOutputHasBeenSet() const { return m_tableRegistrationOutputHasBeenSet; }
    template<typename TableRegistrationOutputT = RegistrationOutput>
    void SetTableRegistrationOutput(TableRegistrationOutputT&& value) { m_tableRegistrationOutputHasBeenSet = true; m_tableRegistrationOutput = std::forward<TableRegistrationOutputT>(value); }
    template<typename TableRegistrationOutputT = RegistrationOutput>
    MetadataCatalogDetail& WithTableRegistrationOutput(TableRegistrationOutputT&& value) { SetTableRegistrationOutput(std::forward<TableRegistrationOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the status of the attempt from Amazon AppFlow to register the data
     * partitions with the metadata catalog. The data partitions organize the flow
     * output into a hierarchical path, such as a folder path in an S3 bucket. Amazon
     * AppFlow creates the partitions (if they don't already exist) based on your flow
     * configuration.</p>
     */
    inline const RegistrationOutput& GetPartitionRegistrationOutput() const { return m_partitionRegistrationOutput; }
    inline bool PartitionRegistrationOutputHasBeenSet() const { return m_partitionRegistrationOutputHasBeenSet; }
    template<typename PartitionRegistrationOutputT = RegistrationOutput>
    void SetPartitionRegistrationOutput(PartitionRegistrationOutputT&& value) { m_partitionRegistrationOutputHasBeenSet = true; m_partitionRegistrationOutput = std::forward<PartitionRegistrationOutputT>(value); }
    template<typename PartitionRegistrationOutputT = RegistrationOutput>
    MetadataCatalogDetail& WithPartitionRegistrationOutput(PartitionRegistrationOutputT&& value) { SetPartitionRegistrationOutput(std::forward<PartitionRegistrationOutputT>(value)); return *this;}
    ///@}
  private:

    CatalogType m_catalogType{CatalogType::NOT_SET};
    bool m_catalogTypeHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    RegistrationOutput m_tableRegistrationOutput;
    bool m_tableRegistrationOutputHasBeenSet = false;

    RegistrationOutput m_partitionRegistrationOutput;
    bool m_partitionRegistrationOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
