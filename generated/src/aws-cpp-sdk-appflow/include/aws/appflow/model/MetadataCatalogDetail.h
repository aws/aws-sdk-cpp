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
    AWS_APPFLOW_API MetadataCatalogDetail();
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
    inline const CatalogType& GetCatalogType() const{ return m_catalogType; }
    inline bool CatalogTypeHasBeenSet() const { return m_catalogTypeHasBeenSet; }
    inline void SetCatalogType(const CatalogType& value) { m_catalogTypeHasBeenSet = true; m_catalogType = value; }
    inline void SetCatalogType(CatalogType&& value) { m_catalogTypeHasBeenSet = true; m_catalogType = std::move(value); }
    inline MetadataCatalogDetail& WithCatalogType(const CatalogType& value) { SetCatalogType(value); return *this;}
    inline MetadataCatalogDetail& WithCatalogType(CatalogType&& value) { SetCatalogType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table that stores the metadata for the associated flow run.
     * The table stores metadata that represents the data that the flow transferred.
     * Amazon AppFlow stores the table in the metadata catalog.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline MetadataCatalogDetail& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline MetadataCatalogDetail& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline MetadataCatalogDetail& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the status of the attempt from Amazon AppFlow to register the
     * metadata table with the metadata catalog. Amazon AppFlow creates or updates this
     * table for the associated flow run.</p>
     */
    inline const RegistrationOutput& GetTableRegistrationOutput() const{ return m_tableRegistrationOutput; }
    inline bool TableRegistrationOutputHasBeenSet() const { return m_tableRegistrationOutputHasBeenSet; }
    inline void SetTableRegistrationOutput(const RegistrationOutput& value) { m_tableRegistrationOutputHasBeenSet = true; m_tableRegistrationOutput = value; }
    inline void SetTableRegistrationOutput(RegistrationOutput&& value) { m_tableRegistrationOutputHasBeenSet = true; m_tableRegistrationOutput = std::move(value); }
    inline MetadataCatalogDetail& WithTableRegistrationOutput(const RegistrationOutput& value) { SetTableRegistrationOutput(value); return *this;}
    inline MetadataCatalogDetail& WithTableRegistrationOutput(RegistrationOutput&& value) { SetTableRegistrationOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the status of the attempt from Amazon AppFlow to register the data
     * partitions with the metadata catalog. The data partitions organize the flow
     * output into a hierarchical path, such as a folder path in an S3 bucket. Amazon
     * AppFlow creates the partitions (if they don't already exist) based on your flow
     * configuration.</p>
     */
    inline const RegistrationOutput& GetPartitionRegistrationOutput() const{ return m_partitionRegistrationOutput; }
    inline bool PartitionRegistrationOutputHasBeenSet() const { return m_partitionRegistrationOutputHasBeenSet; }
    inline void SetPartitionRegistrationOutput(const RegistrationOutput& value) { m_partitionRegistrationOutputHasBeenSet = true; m_partitionRegistrationOutput = value; }
    inline void SetPartitionRegistrationOutput(RegistrationOutput&& value) { m_partitionRegistrationOutputHasBeenSet = true; m_partitionRegistrationOutput = std::move(value); }
    inline MetadataCatalogDetail& WithPartitionRegistrationOutput(const RegistrationOutput& value) { SetPartitionRegistrationOutput(value); return *this;}
    inline MetadataCatalogDetail& WithPartitionRegistrationOutput(RegistrationOutput&& value) { SetPartitionRegistrationOutput(std::move(value)); return *this;}
    ///@}
  private:

    CatalogType m_catalogType;
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
