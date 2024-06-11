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
    AWS_GLUE_API StorageDescriptor();
    AWS_GLUE_API StorageDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API StorageDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of the <code>Columns</code> in the table.</p>
     */
    inline const Aws::Vector<Column>& GetColumns() const{ return m_columns; }
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }
    inline void SetColumns(const Aws::Vector<Column>& value) { m_columnsHasBeenSet = true; m_columns = value; }
    inline void SetColumns(Aws::Vector<Column>&& value) { m_columnsHasBeenSet = true; m_columns = std::move(value); }
    inline StorageDescriptor& WithColumns(const Aws::Vector<Column>& value) { SetColumns(value); return *this;}
    inline StorageDescriptor& WithColumns(Aws::Vector<Column>&& value) { SetColumns(std::move(value)); return *this;}
    inline StorageDescriptor& AddColumns(const Column& value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }
    inline StorageDescriptor& AddColumns(Column&& value) { m_columnsHasBeenSet = true; m_columns.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The physical location of the table. By default, this takes the form of the
     * warehouse location, followed by the database location in the warehouse, followed
     * by the table name.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline StorageDescriptor& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline StorageDescriptor& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline StorageDescriptor& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of locations that point to the path where a Delta table is
     * located.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalLocations() const{ return m_additionalLocations; }
    inline bool AdditionalLocationsHasBeenSet() const { return m_additionalLocationsHasBeenSet; }
    inline void SetAdditionalLocations(const Aws::Vector<Aws::String>& value) { m_additionalLocationsHasBeenSet = true; m_additionalLocations = value; }
    inline void SetAdditionalLocations(Aws::Vector<Aws::String>&& value) { m_additionalLocationsHasBeenSet = true; m_additionalLocations = std::move(value); }
    inline StorageDescriptor& WithAdditionalLocations(const Aws::Vector<Aws::String>& value) { SetAdditionalLocations(value); return *this;}
    inline StorageDescriptor& WithAdditionalLocations(Aws::Vector<Aws::String>&& value) { SetAdditionalLocations(std::move(value)); return *this;}
    inline StorageDescriptor& AddAdditionalLocations(const Aws::String& value) { m_additionalLocationsHasBeenSet = true; m_additionalLocations.push_back(value); return *this; }
    inline StorageDescriptor& AddAdditionalLocations(Aws::String&& value) { m_additionalLocationsHasBeenSet = true; m_additionalLocations.push_back(std::move(value)); return *this; }
    inline StorageDescriptor& AddAdditionalLocations(const char* value) { m_additionalLocationsHasBeenSet = true; m_additionalLocations.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The input format: <code>SequenceFileInputFormat</code> (binary), or
     * <code>TextInputFormat</code>, or a custom format.</p>
     */
    inline const Aws::String& GetInputFormat() const{ return m_inputFormat; }
    inline bool InputFormatHasBeenSet() const { return m_inputFormatHasBeenSet; }
    inline void SetInputFormat(const Aws::String& value) { m_inputFormatHasBeenSet = true; m_inputFormat = value; }
    inline void SetInputFormat(Aws::String&& value) { m_inputFormatHasBeenSet = true; m_inputFormat = std::move(value); }
    inline void SetInputFormat(const char* value) { m_inputFormatHasBeenSet = true; m_inputFormat.assign(value); }
    inline StorageDescriptor& WithInputFormat(const Aws::String& value) { SetInputFormat(value); return *this;}
    inline StorageDescriptor& WithInputFormat(Aws::String&& value) { SetInputFormat(std::move(value)); return *this;}
    inline StorageDescriptor& WithInputFormat(const char* value) { SetInputFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output format: <code>SequenceFileOutputFormat</code> (binary), or
     * <code>IgnoreKeyTextOutputFormat</code>, or a custom format.</p>
     */
    inline const Aws::String& GetOutputFormat() const{ return m_outputFormat; }
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
    inline void SetOutputFormat(const Aws::String& value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }
    inline void SetOutputFormat(Aws::String&& value) { m_outputFormatHasBeenSet = true; m_outputFormat = std::move(value); }
    inline void SetOutputFormat(const char* value) { m_outputFormatHasBeenSet = true; m_outputFormat.assign(value); }
    inline StorageDescriptor& WithOutputFormat(const Aws::String& value) { SetOutputFormat(value); return *this;}
    inline StorageDescriptor& WithOutputFormat(Aws::String&& value) { SetOutputFormat(std::move(value)); return *this;}
    inline StorageDescriptor& WithOutputFormat(const char* value) { SetOutputFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>True</code> if the data in the table is compressed, or
     * <code>False</code> if not.</p>
     */
    inline bool GetCompressed() const{ return m_compressed; }
    inline bool CompressedHasBeenSet() const { return m_compressedHasBeenSet; }
    inline void SetCompressed(bool value) { m_compressedHasBeenSet = true; m_compressed = value; }
    inline StorageDescriptor& WithCompressed(bool value) { SetCompressed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Must be specified if the table contains any dimension columns.</p>
     */
    inline int GetNumberOfBuckets() const{ return m_numberOfBuckets; }
    inline bool NumberOfBucketsHasBeenSet() const { return m_numberOfBucketsHasBeenSet; }
    inline void SetNumberOfBuckets(int value) { m_numberOfBucketsHasBeenSet = true; m_numberOfBuckets = value; }
    inline StorageDescriptor& WithNumberOfBuckets(int value) { SetNumberOfBuckets(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serialization/deserialization (SerDe) information.</p>
     */
    inline const SerDeInfo& GetSerdeInfo() const{ return m_serdeInfo; }
    inline bool SerdeInfoHasBeenSet() const { return m_serdeInfoHasBeenSet; }
    inline void SetSerdeInfo(const SerDeInfo& value) { m_serdeInfoHasBeenSet = true; m_serdeInfo = value; }
    inline void SetSerdeInfo(SerDeInfo&& value) { m_serdeInfoHasBeenSet = true; m_serdeInfo = std::move(value); }
    inline StorageDescriptor& WithSerdeInfo(const SerDeInfo& value) { SetSerdeInfo(value); return *this;}
    inline StorageDescriptor& WithSerdeInfo(SerDeInfo&& value) { SetSerdeInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of reducer grouping columns, clustering columns, and bucketing columns
     * in the table.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBucketColumns() const{ return m_bucketColumns; }
    inline bool BucketColumnsHasBeenSet() const { return m_bucketColumnsHasBeenSet; }
    inline void SetBucketColumns(const Aws::Vector<Aws::String>& value) { m_bucketColumnsHasBeenSet = true; m_bucketColumns = value; }
    inline void SetBucketColumns(Aws::Vector<Aws::String>&& value) { m_bucketColumnsHasBeenSet = true; m_bucketColumns = std::move(value); }
    inline StorageDescriptor& WithBucketColumns(const Aws::Vector<Aws::String>& value) { SetBucketColumns(value); return *this;}
    inline StorageDescriptor& WithBucketColumns(Aws::Vector<Aws::String>&& value) { SetBucketColumns(std::move(value)); return *this;}
    inline StorageDescriptor& AddBucketColumns(const Aws::String& value) { m_bucketColumnsHasBeenSet = true; m_bucketColumns.push_back(value); return *this; }
    inline StorageDescriptor& AddBucketColumns(Aws::String&& value) { m_bucketColumnsHasBeenSet = true; m_bucketColumns.push_back(std::move(value)); return *this; }
    inline StorageDescriptor& AddBucketColumns(const char* value) { m_bucketColumnsHasBeenSet = true; m_bucketColumns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list specifying the sort order of each bucket in the table.</p>
     */
    inline const Aws::Vector<Order>& GetSortColumns() const{ return m_sortColumns; }
    inline bool SortColumnsHasBeenSet() const { return m_sortColumnsHasBeenSet; }
    inline void SetSortColumns(const Aws::Vector<Order>& value) { m_sortColumnsHasBeenSet = true; m_sortColumns = value; }
    inline void SetSortColumns(Aws::Vector<Order>&& value) { m_sortColumnsHasBeenSet = true; m_sortColumns = std::move(value); }
    inline StorageDescriptor& WithSortColumns(const Aws::Vector<Order>& value) { SetSortColumns(value); return *this;}
    inline StorageDescriptor& WithSortColumns(Aws::Vector<Order>&& value) { SetSortColumns(std::move(value)); return *this;}
    inline StorageDescriptor& AddSortColumns(const Order& value) { m_sortColumnsHasBeenSet = true; m_sortColumns.push_back(value); return *this; }
    inline StorageDescriptor& AddSortColumns(Order&& value) { m_sortColumnsHasBeenSet = true; m_sortColumns.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user-supplied properties in key-value form.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline StorageDescriptor& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline StorageDescriptor& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline StorageDescriptor& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline StorageDescriptor& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline StorageDescriptor& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline StorageDescriptor& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline StorageDescriptor& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline StorageDescriptor& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline StorageDescriptor& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The information about values that appear frequently in a column (skewed
     * values).</p>
     */
    inline const SkewedInfo& GetSkewedInfo() const{ return m_skewedInfo; }
    inline bool SkewedInfoHasBeenSet() const { return m_skewedInfoHasBeenSet; }
    inline void SetSkewedInfo(const SkewedInfo& value) { m_skewedInfoHasBeenSet = true; m_skewedInfo = value; }
    inline void SetSkewedInfo(SkewedInfo&& value) { m_skewedInfoHasBeenSet = true; m_skewedInfo = std::move(value); }
    inline StorageDescriptor& WithSkewedInfo(const SkewedInfo& value) { SetSkewedInfo(value); return *this;}
    inline StorageDescriptor& WithSkewedInfo(SkewedInfo&& value) { SetSkewedInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>True</code> if the table data is stored in subdirectories, or
     * <code>False</code> if not.</p>
     */
    inline bool GetStoredAsSubDirectories() const{ return m_storedAsSubDirectories; }
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
    inline const SchemaReference& GetSchemaReference() const{ return m_schemaReference; }
    inline bool SchemaReferenceHasBeenSet() const { return m_schemaReferenceHasBeenSet; }
    inline void SetSchemaReference(const SchemaReference& value) { m_schemaReferenceHasBeenSet = true; m_schemaReference = value; }
    inline void SetSchemaReference(SchemaReference&& value) { m_schemaReferenceHasBeenSet = true; m_schemaReference = std::move(value); }
    inline StorageDescriptor& WithSchemaReference(const SchemaReference& value) { SetSchemaReference(value); return *this;}
    inline StorageDescriptor& WithSchemaReference(SchemaReference&& value) { SetSchemaReference(std::move(value)); return *this;}
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

    bool m_compressed;
    bool m_compressedHasBeenSet = false;

    int m_numberOfBuckets;
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

    bool m_storedAsSubDirectories;
    bool m_storedAsSubDirectoriesHasBeenSet = false;

    SchemaReference m_schemaReference;
    bool m_schemaReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
