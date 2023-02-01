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


    /**
     * <p>A list of the <code>Columns</code> in the table.</p>
     */
    inline const Aws::Vector<Column>& GetColumns() const{ return m_columns; }

    /**
     * <p>A list of the <code>Columns</code> in the table.</p>
     */
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }

    /**
     * <p>A list of the <code>Columns</code> in the table.</p>
     */
    inline void SetColumns(const Aws::Vector<Column>& value) { m_columnsHasBeenSet = true; m_columns = value; }

    /**
     * <p>A list of the <code>Columns</code> in the table.</p>
     */
    inline void SetColumns(Aws::Vector<Column>&& value) { m_columnsHasBeenSet = true; m_columns = std::move(value); }

    /**
     * <p>A list of the <code>Columns</code> in the table.</p>
     */
    inline StorageDescriptor& WithColumns(const Aws::Vector<Column>& value) { SetColumns(value); return *this;}

    /**
     * <p>A list of the <code>Columns</code> in the table.</p>
     */
    inline StorageDescriptor& WithColumns(Aws::Vector<Column>&& value) { SetColumns(std::move(value)); return *this;}

    /**
     * <p>A list of the <code>Columns</code> in the table.</p>
     */
    inline StorageDescriptor& AddColumns(const Column& value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }

    /**
     * <p>A list of the <code>Columns</code> in the table.</p>
     */
    inline StorageDescriptor& AddColumns(Column&& value) { m_columnsHasBeenSet = true; m_columns.push_back(std::move(value)); return *this; }


    /**
     * <p>The physical location of the table. By default, this takes the form of the
     * warehouse location, followed by the database location in the warehouse, followed
     * by the table name.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The physical location of the table. By default, this takes the form of the
     * warehouse location, followed by the database location in the warehouse, followed
     * by the table name.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The physical location of the table. By default, this takes the form of the
     * warehouse location, followed by the database location in the warehouse, followed
     * by the table name.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The physical location of the table. By default, this takes the form of the
     * warehouse location, followed by the database location in the warehouse, followed
     * by the table name.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The physical location of the table. By default, this takes the form of the
     * warehouse location, followed by the database location in the warehouse, followed
     * by the table name.</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>The physical location of the table. By default, this takes the form of the
     * warehouse location, followed by the database location in the warehouse, followed
     * by the table name.</p>
     */
    inline StorageDescriptor& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The physical location of the table. By default, this takes the form of the
     * warehouse location, followed by the database location in the warehouse, followed
     * by the table name.</p>
     */
    inline StorageDescriptor& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The physical location of the table. By default, this takes the form of the
     * warehouse location, followed by the database location in the warehouse, followed
     * by the table name.</p>
     */
    inline StorageDescriptor& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>A list of locations that point to the path where a Delta table is
     * located.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalLocations() const{ return m_additionalLocations; }

    /**
     * <p>A list of locations that point to the path where a Delta table is
     * located.</p>
     */
    inline bool AdditionalLocationsHasBeenSet() const { return m_additionalLocationsHasBeenSet; }

    /**
     * <p>A list of locations that point to the path where a Delta table is
     * located.</p>
     */
    inline void SetAdditionalLocations(const Aws::Vector<Aws::String>& value) { m_additionalLocationsHasBeenSet = true; m_additionalLocations = value; }

    /**
     * <p>A list of locations that point to the path where a Delta table is
     * located.</p>
     */
    inline void SetAdditionalLocations(Aws::Vector<Aws::String>&& value) { m_additionalLocationsHasBeenSet = true; m_additionalLocations = std::move(value); }

    /**
     * <p>A list of locations that point to the path where a Delta table is
     * located.</p>
     */
    inline StorageDescriptor& WithAdditionalLocations(const Aws::Vector<Aws::String>& value) { SetAdditionalLocations(value); return *this;}

    /**
     * <p>A list of locations that point to the path where a Delta table is
     * located.</p>
     */
    inline StorageDescriptor& WithAdditionalLocations(Aws::Vector<Aws::String>&& value) { SetAdditionalLocations(std::move(value)); return *this;}

    /**
     * <p>A list of locations that point to the path where a Delta table is
     * located.</p>
     */
    inline StorageDescriptor& AddAdditionalLocations(const Aws::String& value) { m_additionalLocationsHasBeenSet = true; m_additionalLocations.push_back(value); return *this; }

    /**
     * <p>A list of locations that point to the path where a Delta table is
     * located.</p>
     */
    inline StorageDescriptor& AddAdditionalLocations(Aws::String&& value) { m_additionalLocationsHasBeenSet = true; m_additionalLocations.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of locations that point to the path where a Delta table is
     * located.</p>
     */
    inline StorageDescriptor& AddAdditionalLocations(const char* value) { m_additionalLocationsHasBeenSet = true; m_additionalLocations.push_back(value); return *this; }


    /**
     * <p>The input format: <code>SequenceFileInputFormat</code> (binary), or
     * <code>TextInputFormat</code>, or a custom format.</p>
     */
    inline const Aws::String& GetInputFormat() const{ return m_inputFormat; }

    /**
     * <p>The input format: <code>SequenceFileInputFormat</code> (binary), or
     * <code>TextInputFormat</code>, or a custom format.</p>
     */
    inline bool InputFormatHasBeenSet() const { return m_inputFormatHasBeenSet; }

    /**
     * <p>The input format: <code>SequenceFileInputFormat</code> (binary), or
     * <code>TextInputFormat</code>, or a custom format.</p>
     */
    inline void SetInputFormat(const Aws::String& value) { m_inputFormatHasBeenSet = true; m_inputFormat = value; }

    /**
     * <p>The input format: <code>SequenceFileInputFormat</code> (binary), or
     * <code>TextInputFormat</code>, or a custom format.</p>
     */
    inline void SetInputFormat(Aws::String&& value) { m_inputFormatHasBeenSet = true; m_inputFormat = std::move(value); }

    /**
     * <p>The input format: <code>SequenceFileInputFormat</code> (binary), or
     * <code>TextInputFormat</code>, or a custom format.</p>
     */
    inline void SetInputFormat(const char* value) { m_inputFormatHasBeenSet = true; m_inputFormat.assign(value); }

    /**
     * <p>The input format: <code>SequenceFileInputFormat</code> (binary), or
     * <code>TextInputFormat</code>, or a custom format.</p>
     */
    inline StorageDescriptor& WithInputFormat(const Aws::String& value) { SetInputFormat(value); return *this;}

    /**
     * <p>The input format: <code>SequenceFileInputFormat</code> (binary), or
     * <code>TextInputFormat</code>, or a custom format.</p>
     */
    inline StorageDescriptor& WithInputFormat(Aws::String&& value) { SetInputFormat(std::move(value)); return *this;}

    /**
     * <p>The input format: <code>SequenceFileInputFormat</code> (binary), or
     * <code>TextInputFormat</code>, or a custom format.</p>
     */
    inline StorageDescriptor& WithInputFormat(const char* value) { SetInputFormat(value); return *this;}


    /**
     * <p>The output format: <code>SequenceFileOutputFormat</code> (binary), or
     * <code>IgnoreKeyTextOutputFormat</code>, or a custom format.</p>
     */
    inline const Aws::String& GetOutputFormat() const{ return m_outputFormat; }

    /**
     * <p>The output format: <code>SequenceFileOutputFormat</code> (binary), or
     * <code>IgnoreKeyTextOutputFormat</code>, or a custom format.</p>
     */
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }

    /**
     * <p>The output format: <code>SequenceFileOutputFormat</code> (binary), or
     * <code>IgnoreKeyTextOutputFormat</code>, or a custom format.</p>
     */
    inline void SetOutputFormat(const Aws::String& value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }

    /**
     * <p>The output format: <code>SequenceFileOutputFormat</code> (binary), or
     * <code>IgnoreKeyTextOutputFormat</code>, or a custom format.</p>
     */
    inline void SetOutputFormat(Aws::String&& value) { m_outputFormatHasBeenSet = true; m_outputFormat = std::move(value); }

    /**
     * <p>The output format: <code>SequenceFileOutputFormat</code> (binary), or
     * <code>IgnoreKeyTextOutputFormat</code>, or a custom format.</p>
     */
    inline void SetOutputFormat(const char* value) { m_outputFormatHasBeenSet = true; m_outputFormat.assign(value); }

    /**
     * <p>The output format: <code>SequenceFileOutputFormat</code> (binary), or
     * <code>IgnoreKeyTextOutputFormat</code>, or a custom format.</p>
     */
    inline StorageDescriptor& WithOutputFormat(const Aws::String& value) { SetOutputFormat(value); return *this;}

    /**
     * <p>The output format: <code>SequenceFileOutputFormat</code> (binary), or
     * <code>IgnoreKeyTextOutputFormat</code>, or a custom format.</p>
     */
    inline StorageDescriptor& WithOutputFormat(Aws::String&& value) { SetOutputFormat(std::move(value)); return *this;}

    /**
     * <p>The output format: <code>SequenceFileOutputFormat</code> (binary), or
     * <code>IgnoreKeyTextOutputFormat</code>, or a custom format.</p>
     */
    inline StorageDescriptor& WithOutputFormat(const char* value) { SetOutputFormat(value); return *this;}


    /**
     * <p> <code>True</code> if the data in the table is compressed, or
     * <code>False</code> if not.</p>
     */
    inline bool GetCompressed() const{ return m_compressed; }

    /**
     * <p> <code>True</code> if the data in the table is compressed, or
     * <code>False</code> if not.</p>
     */
    inline bool CompressedHasBeenSet() const { return m_compressedHasBeenSet; }

    /**
     * <p> <code>True</code> if the data in the table is compressed, or
     * <code>False</code> if not.</p>
     */
    inline void SetCompressed(bool value) { m_compressedHasBeenSet = true; m_compressed = value; }

    /**
     * <p> <code>True</code> if the data in the table is compressed, or
     * <code>False</code> if not.</p>
     */
    inline StorageDescriptor& WithCompressed(bool value) { SetCompressed(value); return *this;}


    /**
     * <p>Must be specified if the table contains any dimension columns.</p>
     */
    inline int GetNumberOfBuckets() const{ return m_numberOfBuckets; }

    /**
     * <p>Must be specified if the table contains any dimension columns.</p>
     */
    inline bool NumberOfBucketsHasBeenSet() const { return m_numberOfBucketsHasBeenSet; }

    /**
     * <p>Must be specified if the table contains any dimension columns.</p>
     */
    inline void SetNumberOfBuckets(int value) { m_numberOfBucketsHasBeenSet = true; m_numberOfBuckets = value; }

    /**
     * <p>Must be specified if the table contains any dimension columns.</p>
     */
    inline StorageDescriptor& WithNumberOfBuckets(int value) { SetNumberOfBuckets(value); return *this;}


    /**
     * <p>The serialization/deserialization (SerDe) information.</p>
     */
    inline const SerDeInfo& GetSerdeInfo() const{ return m_serdeInfo; }

    /**
     * <p>The serialization/deserialization (SerDe) information.</p>
     */
    inline bool SerdeInfoHasBeenSet() const { return m_serdeInfoHasBeenSet; }

    /**
     * <p>The serialization/deserialization (SerDe) information.</p>
     */
    inline void SetSerdeInfo(const SerDeInfo& value) { m_serdeInfoHasBeenSet = true; m_serdeInfo = value; }

    /**
     * <p>The serialization/deserialization (SerDe) information.</p>
     */
    inline void SetSerdeInfo(SerDeInfo&& value) { m_serdeInfoHasBeenSet = true; m_serdeInfo = std::move(value); }

    /**
     * <p>The serialization/deserialization (SerDe) information.</p>
     */
    inline StorageDescriptor& WithSerdeInfo(const SerDeInfo& value) { SetSerdeInfo(value); return *this;}

    /**
     * <p>The serialization/deserialization (SerDe) information.</p>
     */
    inline StorageDescriptor& WithSerdeInfo(SerDeInfo&& value) { SetSerdeInfo(std::move(value)); return *this;}


    /**
     * <p>A list of reducer grouping columns, clustering columns, and bucketing columns
     * in the table.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBucketColumns() const{ return m_bucketColumns; }

    /**
     * <p>A list of reducer grouping columns, clustering columns, and bucketing columns
     * in the table.</p>
     */
    inline bool BucketColumnsHasBeenSet() const { return m_bucketColumnsHasBeenSet; }

    /**
     * <p>A list of reducer grouping columns, clustering columns, and bucketing columns
     * in the table.</p>
     */
    inline void SetBucketColumns(const Aws::Vector<Aws::String>& value) { m_bucketColumnsHasBeenSet = true; m_bucketColumns = value; }

    /**
     * <p>A list of reducer grouping columns, clustering columns, and bucketing columns
     * in the table.</p>
     */
    inline void SetBucketColumns(Aws::Vector<Aws::String>&& value) { m_bucketColumnsHasBeenSet = true; m_bucketColumns = std::move(value); }

    /**
     * <p>A list of reducer grouping columns, clustering columns, and bucketing columns
     * in the table.</p>
     */
    inline StorageDescriptor& WithBucketColumns(const Aws::Vector<Aws::String>& value) { SetBucketColumns(value); return *this;}

    /**
     * <p>A list of reducer grouping columns, clustering columns, and bucketing columns
     * in the table.</p>
     */
    inline StorageDescriptor& WithBucketColumns(Aws::Vector<Aws::String>&& value) { SetBucketColumns(std::move(value)); return *this;}

    /**
     * <p>A list of reducer grouping columns, clustering columns, and bucketing columns
     * in the table.</p>
     */
    inline StorageDescriptor& AddBucketColumns(const Aws::String& value) { m_bucketColumnsHasBeenSet = true; m_bucketColumns.push_back(value); return *this; }

    /**
     * <p>A list of reducer grouping columns, clustering columns, and bucketing columns
     * in the table.</p>
     */
    inline StorageDescriptor& AddBucketColumns(Aws::String&& value) { m_bucketColumnsHasBeenSet = true; m_bucketColumns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of reducer grouping columns, clustering columns, and bucketing columns
     * in the table.</p>
     */
    inline StorageDescriptor& AddBucketColumns(const char* value) { m_bucketColumnsHasBeenSet = true; m_bucketColumns.push_back(value); return *this; }


    /**
     * <p>A list specifying the sort order of each bucket in the table.</p>
     */
    inline const Aws::Vector<Order>& GetSortColumns() const{ return m_sortColumns; }

    /**
     * <p>A list specifying the sort order of each bucket in the table.</p>
     */
    inline bool SortColumnsHasBeenSet() const { return m_sortColumnsHasBeenSet; }

    /**
     * <p>A list specifying the sort order of each bucket in the table.</p>
     */
    inline void SetSortColumns(const Aws::Vector<Order>& value) { m_sortColumnsHasBeenSet = true; m_sortColumns = value; }

    /**
     * <p>A list specifying the sort order of each bucket in the table.</p>
     */
    inline void SetSortColumns(Aws::Vector<Order>&& value) { m_sortColumnsHasBeenSet = true; m_sortColumns = std::move(value); }

    /**
     * <p>A list specifying the sort order of each bucket in the table.</p>
     */
    inline StorageDescriptor& WithSortColumns(const Aws::Vector<Order>& value) { SetSortColumns(value); return *this;}

    /**
     * <p>A list specifying the sort order of each bucket in the table.</p>
     */
    inline StorageDescriptor& WithSortColumns(Aws::Vector<Order>&& value) { SetSortColumns(std::move(value)); return *this;}

    /**
     * <p>A list specifying the sort order of each bucket in the table.</p>
     */
    inline StorageDescriptor& AddSortColumns(const Order& value) { m_sortColumnsHasBeenSet = true; m_sortColumns.push_back(value); return *this; }

    /**
     * <p>A list specifying the sort order of each bucket in the table.</p>
     */
    inline StorageDescriptor& AddSortColumns(Order&& value) { m_sortColumnsHasBeenSet = true; m_sortColumns.push_back(std::move(value)); return *this; }


    /**
     * <p>The user-supplied properties in key-value form.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The user-supplied properties in key-value form.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The user-supplied properties in key-value form.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The user-supplied properties in key-value form.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The user-supplied properties in key-value form.</p>
     */
    inline StorageDescriptor& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>The user-supplied properties in key-value form.</p>
     */
    inline StorageDescriptor& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The user-supplied properties in key-value form.</p>
     */
    inline StorageDescriptor& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The user-supplied properties in key-value form.</p>
     */
    inline StorageDescriptor& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The user-supplied properties in key-value form.</p>
     */
    inline StorageDescriptor& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The user-supplied properties in key-value form.</p>
     */
    inline StorageDescriptor& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The user-supplied properties in key-value form.</p>
     */
    inline StorageDescriptor& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The user-supplied properties in key-value form.</p>
     */
    inline StorageDescriptor& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The user-supplied properties in key-value form.</p>
     */
    inline StorageDescriptor& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }


    /**
     * <p>The information about values that appear frequently in a column (skewed
     * values).</p>
     */
    inline const SkewedInfo& GetSkewedInfo() const{ return m_skewedInfo; }

    /**
     * <p>The information about values that appear frequently in a column (skewed
     * values).</p>
     */
    inline bool SkewedInfoHasBeenSet() const { return m_skewedInfoHasBeenSet; }

    /**
     * <p>The information about values that appear frequently in a column (skewed
     * values).</p>
     */
    inline void SetSkewedInfo(const SkewedInfo& value) { m_skewedInfoHasBeenSet = true; m_skewedInfo = value; }

    /**
     * <p>The information about values that appear frequently in a column (skewed
     * values).</p>
     */
    inline void SetSkewedInfo(SkewedInfo&& value) { m_skewedInfoHasBeenSet = true; m_skewedInfo = std::move(value); }

    /**
     * <p>The information about values that appear frequently in a column (skewed
     * values).</p>
     */
    inline StorageDescriptor& WithSkewedInfo(const SkewedInfo& value) { SetSkewedInfo(value); return *this;}

    /**
     * <p>The information about values that appear frequently in a column (skewed
     * values).</p>
     */
    inline StorageDescriptor& WithSkewedInfo(SkewedInfo&& value) { SetSkewedInfo(std::move(value)); return *this;}


    /**
     * <p> <code>True</code> if the table data is stored in subdirectories, or
     * <code>False</code> if not.</p>
     */
    inline bool GetStoredAsSubDirectories() const{ return m_storedAsSubDirectories; }

    /**
     * <p> <code>True</code> if the table data is stored in subdirectories, or
     * <code>False</code> if not.</p>
     */
    inline bool StoredAsSubDirectoriesHasBeenSet() const { return m_storedAsSubDirectoriesHasBeenSet; }

    /**
     * <p> <code>True</code> if the table data is stored in subdirectories, or
     * <code>False</code> if not.</p>
     */
    inline void SetStoredAsSubDirectories(bool value) { m_storedAsSubDirectoriesHasBeenSet = true; m_storedAsSubDirectories = value; }

    /**
     * <p> <code>True</code> if the table data is stored in subdirectories, or
     * <code>False</code> if not.</p>
     */
    inline StorageDescriptor& WithStoredAsSubDirectories(bool value) { SetStoredAsSubDirectories(value); return *this;}


    /**
     * <p>An object that references a schema stored in the Glue Schema Registry.</p>
     * <p>When creating a table, you can pass an empty list of columns for the schema,
     * and instead use a schema reference.</p>
     */
    inline const SchemaReference& GetSchemaReference() const{ return m_schemaReference; }

    /**
     * <p>An object that references a schema stored in the Glue Schema Registry.</p>
     * <p>When creating a table, you can pass an empty list of columns for the schema,
     * and instead use a schema reference.</p>
     */
    inline bool SchemaReferenceHasBeenSet() const { return m_schemaReferenceHasBeenSet; }

    /**
     * <p>An object that references a schema stored in the Glue Schema Registry.</p>
     * <p>When creating a table, you can pass an empty list of columns for the schema,
     * and instead use a schema reference.</p>
     */
    inline void SetSchemaReference(const SchemaReference& value) { m_schemaReferenceHasBeenSet = true; m_schemaReference = value; }

    /**
     * <p>An object that references a schema stored in the Glue Schema Registry.</p>
     * <p>When creating a table, you can pass an empty list of columns for the schema,
     * and instead use a schema reference.</p>
     */
    inline void SetSchemaReference(SchemaReference&& value) { m_schemaReferenceHasBeenSet = true; m_schemaReference = std::move(value); }

    /**
     * <p>An object that references a schema stored in the Glue Schema Registry.</p>
     * <p>When creating a table, you can pass an empty list of columns for the schema,
     * and instead use a schema reference.</p>
     */
    inline StorageDescriptor& WithSchemaReference(const SchemaReference& value) { SetSchemaReference(value); return *this;}

    /**
     * <p>An object that references a schema stored in the Glue Schema Registry.</p>
     * <p>When creating a table, you can pass an empty list of columns for the schema,
     * and instead use a schema reference.</p>
     */
    inline StorageDescriptor& WithSchemaReference(SchemaReference&& value) { SetSchemaReference(std::move(value)); return *this;}

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
