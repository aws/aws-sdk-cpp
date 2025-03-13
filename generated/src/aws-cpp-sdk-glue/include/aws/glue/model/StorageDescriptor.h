/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/SerDeInfo.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/SkewedInfo.h>
#include <aws/glue/model/SchemaReference.h>
#include <aws/glue/model/Column.h>
#include <aws/glue/model/Order.h>
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
   * <p>Describes the physical storage of table data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StorageDescriptor">AWS
   * API Reference</a></p>
   */
  class StorageDescriptor
  {
  public:
    AWS_GLUE_API StorageDescriptor() = default;
    AWS_GLUE_API StorageDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API StorageDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of the <code>Columns</code> in the table.</p>
     */
    inline const Aws::Vector<Column>& GetColumns() const { return m_columns; }
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }
    template<typename ColumnsT = Aws::Vector<Column>>
    void SetColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns = std::forward<ColumnsT>(value); }
    template<typename ColumnsT = Aws::Vector<Column>>
    StorageDescriptor& WithColumns(ColumnsT&& value) { SetColumns(std::forward<ColumnsT>(value)); return *this;}
    template<typename ColumnsT = Column>
    StorageDescriptor& AddColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns.emplace_back(std::forward<ColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The physical location of the table. By default, this takes the form of the
     * warehouse location, followed by the database location in the warehouse, followed
     * by the table name.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    StorageDescriptor& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of locations that point to the path where a Delta table is
     * located.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalLocations() const { return m_additionalLocations; }
    inline bool AdditionalLocationsHasBeenSet() const { return m_additionalLocationsHasBeenSet; }
    template<typename AdditionalLocationsT = Aws::Vector<Aws::String>>
    void SetAdditionalLocations(AdditionalLocationsT&& value) { m_additionalLocationsHasBeenSet = true; m_additionalLocations = std::forward<AdditionalLocationsT>(value); }
    template<typename AdditionalLocationsT = Aws::Vector<Aws::String>>
    StorageDescriptor& WithAdditionalLocations(AdditionalLocationsT&& value) { SetAdditionalLocations(std::forward<AdditionalLocationsT>(value)); return *this;}
    template<typename AdditionalLocationsT = Aws::String>
    StorageDescriptor& AddAdditionalLocations(AdditionalLocationsT&& value) { m_additionalLocationsHasBeenSet = true; m_additionalLocations.emplace_back(std::forward<AdditionalLocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The input format: <code>SequenceFileInputFormat</code> (binary), or
     * <code>TextInputFormat</code>, or a custom format.</p>
     */
    inline const Aws::String& GetInputFormat() const { return m_inputFormat; }
    inline bool InputFormatHasBeenSet() const { return m_inputFormatHasBeenSet; }
    template<typename InputFormatT = Aws::String>
    void SetInputFormat(InputFormatT&& value) { m_inputFormatHasBeenSet = true; m_inputFormat = std::forward<InputFormatT>(value); }
    template<typename InputFormatT = Aws::String>
    StorageDescriptor& WithInputFormat(InputFormatT&& value) { SetInputFormat(std::forward<InputFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output format: <code>SequenceFileOutputFormat</code> (binary), or
     * <code>IgnoreKeyTextOutputFormat</code>, or a custom format.</p>
     */
    inline const Aws::String& GetOutputFormat() const { return m_outputFormat; }
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
    template<typename OutputFormatT = Aws::String>
    void SetOutputFormat(OutputFormatT&& value) { m_outputFormatHasBeenSet = true; m_outputFormat = std::forward<OutputFormatT>(value); }
    template<typename OutputFormatT = Aws::String>
    StorageDescriptor& WithOutputFormat(OutputFormatT&& value) { SetOutputFormat(std::forward<OutputFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>True</code> if the data in the table is compressed, or
     * <code>False</code> if not.</p>
     */
    inline bool GetCompressed() const { return m_compressed; }
    inline bool CompressedHasBeenSet() const { return m_compressedHasBeenSet; }
    inline void SetCompressed(bool value) { m_compressedHasBeenSet = true; m_compressed = value; }
    inline StorageDescriptor& WithCompressed(bool value) { SetCompressed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Must be specified if the table contains any dimension columns.</p>
     */
    inline int GetNumberOfBuckets() const { return m_numberOfBuckets; }
    inline bool NumberOfBucketsHasBeenSet() const { return m_numberOfBucketsHasBeenSet; }
    inline void SetNumberOfBuckets(int value) { m_numberOfBucketsHasBeenSet = true; m_numberOfBuckets = value; }
    inline StorageDescriptor& WithNumberOfBuckets(int value) { SetNumberOfBuckets(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serialization/deserialization (SerDe) information.</p>
     */
    inline const SerDeInfo& GetSerdeInfo() const { return m_serdeInfo; }
    inline bool SerdeInfoHasBeenSet() const { return m_serdeInfoHasBeenSet; }
    template<typename SerdeInfoT = SerDeInfo>
    void SetSerdeInfo(SerdeInfoT&& value) { m_serdeInfoHasBeenSet = true; m_serdeInfo = std::forward<SerdeInfoT>(value); }
    template<typename SerdeInfoT = SerDeInfo>
    StorageDescriptor& WithSerdeInfo(SerdeInfoT&& value) { SetSerdeInfo(std::forward<SerdeInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of reducer grouping columns, clustering columns, and bucketing columns
     * in the table.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBucketColumns() const { return m_bucketColumns; }
    inline bool BucketColumnsHasBeenSet() const { return m_bucketColumnsHasBeenSet; }
    template<typename BucketColumnsT = Aws::Vector<Aws::String>>
    void SetBucketColumns(BucketColumnsT&& value) { m_bucketColumnsHasBeenSet = true; m_bucketColumns = std::forward<BucketColumnsT>(value); }
    template<typename BucketColumnsT = Aws::Vector<Aws::String>>
    StorageDescriptor& WithBucketColumns(BucketColumnsT&& value) { SetBucketColumns(std::forward<BucketColumnsT>(value)); return *this;}
    template<typename BucketColumnsT = Aws::String>
    StorageDescriptor& AddBucketColumns(BucketColumnsT&& value) { m_bucketColumnsHasBeenSet = true; m_bucketColumns.emplace_back(std::forward<BucketColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list specifying the sort order of each bucket in the table.</p>
     */
    inline const Aws::Vector<Order>& GetSortColumns() const { return m_sortColumns; }
    inline bool SortColumnsHasBeenSet() const { return m_sortColumnsHasBeenSet; }
    template<typename SortColumnsT = Aws::Vector<Order>>
    void SetSortColumns(SortColumnsT&& value) { m_sortColumnsHasBeenSet = true; m_sortColumns = std::forward<SortColumnsT>(value); }
    template<typename SortColumnsT = Aws::Vector<Order>>
    StorageDescriptor& WithSortColumns(SortColumnsT&& value) { SetSortColumns(std::forward<SortColumnsT>(value)); return *this;}
    template<typename SortColumnsT = Order>
    StorageDescriptor& AddSortColumns(SortColumnsT&& value) { m_sortColumnsHasBeenSet = true; m_sortColumns.emplace_back(std::forward<SortColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user-supplied properties in key-value form.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    StorageDescriptor& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    StorageDescriptor& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The information about values that appear frequently in a column (skewed
     * values).</p>
     */
    inline const SkewedInfo& GetSkewedInfo() const { return m_skewedInfo; }
    inline bool SkewedInfoHasBeenSet() const { return m_skewedInfoHasBeenSet; }
    template<typename SkewedInfoT = SkewedInfo>
    void SetSkewedInfo(SkewedInfoT&& value) { m_skewedInfoHasBeenSet = true; m_skewedInfo = std::forward<SkewedInfoT>(value); }
    template<typename SkewedInfoT = SkewedInfo>
    StorageDescriptor& WithSkewedInfo(SkewedInfoT&& value) { SetSkewedInfo(std::forward<SkewedInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>True</code> if the table data is stored in subdirectories, or
     * <code>False</code> if not.</p>
     */
    inline bool GetStoredAsSubDirectories() const { return m_storedAsSubDirectories; }
    inline bool StoredAsSubDirectoriesHasBeenSet() const { return m_storedAsSubDirectoriesHasBeenSet; }
    inline void SetStoredAsSubDirectories(bool value) { m_storedAsSubDirectoriesHasBeenSet = true; m_storedAsSubDirectories = value; }
    inline StorageDescriptor& WithStoredAsSubDirectories(bool value) { SetStoredAsSubDirectories(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that references a schema stored in the Glue Schema Registry.</p>
     * <p>When creating a table, you can pass an empty list of columns for the schema,
     * and instead use a schema reference.</p>
     */
    inline const SchemaReference& GetSchemaReference() const { return m_schemaReference; }
    inline bool SchemaReferenceHasBeenSet() const { return m_schemaReferenceHasBeenSet; }
    template<typename SchemaReferenceT = SchemaReference>
    void SetSchemaReference(SchemaReferenceT&& value) { m_schemaReferenceHasBeenSet = true; m_schemaReference = std::forward<SchemaReferenceT>(value); }
    template<typename SchemaReferenceT = SchemaReference>
    StorageDescriptor& WithSchemaReference(SchemaReferenceT&& value) { SetSchemaReference(std::forward<SchemaReferenceT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Column> m_columns;
    bool m_columnsHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalLocations;
    bool m_additionalLocationsHasBeenSet = false;

    Aws::String m_inputFormat;
    bool m_inputFormatHasBeenSet = false;

    Aws::String m_outputFormat;
    bool m_outputFormatHasBeenSet = false;

    bool m_compressed{false};
    bool m_compressedHasBeenSet = false;

    int m_numberOfBuckets{0};
    bool m_numberOfBucketsHasBeenSet = false;

    SerDeInfo m_serdeInfo;
    bool m_serdeInfoHasBeenSet = false;

    Aws::Vector<Aws::String> m_bucketColumns;
    bool m_bucketColumnsHasBeenSet = false;

    Aws::Vector<Order> m_sortColumns;
    bool m_sortColumnsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;

    SkewedInfo m_skewedInfo;
    bool m_skewedInfoHasBeenSet = false;

    bool m_storedAsSubDirectories{false};
    bool m_storedAsSubDirectoriesHasBeenSet = false;

    SchemaReference m_schemaReference;
    bool m_schemaReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
