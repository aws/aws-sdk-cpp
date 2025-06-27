/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/IcebergSchema.h>
#include <aws/glue/model/IcebergPartitionSpec.h>
#include <aws/glue/model/IcebergSortOrder.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>The configuration parameters required to create a new Iceberg table in the
   * Glue Data Catalog, including table properties and metadata
   * specifications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateIcebergTableInput">AWS
   * API Reference</a></p>
   */
  class CreateIcebergTableInput
  {
  public:
    AWS_GLUE_API CreateIcebergTableInput() = default;
    AWS_GLUE_API CreateIcebergTableInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CreateIcebergTableInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 location where the Iceberg table data will be stored.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    CreateIcebergTableInput& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema definition that specifies the structure, field types, and metadata
     * for the Iceberg table.</p>
     */
    inline const IcebergSchema& GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = IcebergSchema>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = IcebergSchema>
    CreateIcebergTableInput& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The partitioning specification that defines how the Iceberg table data will
     * be organized and partitioned for optimal query performance.</p>
     */
    inline const IcebergPartitionSpec& GetPartitionSpec() const { return m_partitionSpec; }
    inline bool PartitionSpecHasBeenSet() const { return m_partitionSpecHasBeenSet; }
    template<typename PartitionSpecT = IcebergPartitionSpec>
    void SetPartitionSpec(PartitionSpecT&& value) { m_partitionSpecHasBeenSet = true; m_partitionSpec = std::forward<PartitionSpecT>(value); }
    template<typename PartitionSpecT = IcebergPartitionSpec>
    CreateIcebergTableInput& WithPartitionSpec(PartitionSpecT&& value) { SetPartitionSpec(std::forward<PartitionSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order specification that defines how data should be ordered within
     * each partition to optimize query performance.</p>
     */
    inline const IcebergSortOrder& GetWriteOrder() const { return m_writeOrder; }
    inline bool WriteOrderHasBeenSet() const { return m_writeOrderHasBeenSet; }
    template<typename WriteOrderT = IcebergSortOrder>
    void SetWriteOrder(WriteOrderT&& value) { m_writeOrderHasBeenSet = true; m_writeOrder = std::forward<WriteOrderT>(value); }
    template<typename WriteOrderT = IcebergSortOrder>
    CreateIcebergTableInput& WithWriteOrder(WriteOrderT&& value) { SetWriteOrder(std::forward<WriteOrderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs of additional table properties and configuration settings for
     * the Iceberg table.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
    CreateIcebergTableInput& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    template<typename PropertiesKeyT = Aws::String, typename PropertiesValueT = Aws::String>
    CreateIcebergTableInput& AddProperties(PropertiesKeyT&& key, PropertiesValueT&& value) {
      m_propertiesHasBeenSet = true; m_properties.emplace(std::forward<PropertiesKeyT>(key), std::forward<PropertiesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    IcebergSchema m_schema;
    bool m_schemaHasBeenSet = false;

    IcebergPartitionSpec m_partitionSpec;
    bool m_partitionSpecHasBeenSet = false;

    IcebergSortOrder m_writeOrder;
    bool m_writeOrderHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
