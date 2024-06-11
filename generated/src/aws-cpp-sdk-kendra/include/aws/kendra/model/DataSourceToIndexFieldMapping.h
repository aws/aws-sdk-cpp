/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Maps attributes or field names of the documents synced from the data source
   * to Amazon Kendra index field names. You can set up field mappings for each data
   * source when calling <a
   * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_CreateDataSource.html">CreateDataSource</a>
   * or <a
   * href="https://docs.aws.amazon.com/kendra/latest/APIReference/API_UpdateDataSource.html">UpdateDataSource</a>
   * API. To create custom fields, use the <code>UpdateIndex</code> API to first
   * create an index field and then map to the data source field. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
   * data source fields</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DataSourceToIndexFieldMapping">AWS
   * API Reference</a></p>
   */
  class DataSourceToIndexFieldMapping
  {
  public:
    AWS_KENDRA_API DataSourceToIndexFieldMapping();
    AWS_KENDRA_API DataSourceToIndexFieldMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API DataSourceToIndexFieldMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field in the data source. You must first create the index
     * field using the <code>UpdateIndex</code> API.</p>
     */
    inline const Aws::String& GetDataSourceFieldName() const{ return m_dataSourceFieldName; }
    inline bool DataSourceFieldNameHasBeenSet() const { return m_dataSourceFieldNameHasBeenSet; }
    inline void SetDataSourceFieldName(const Aws::String& value) { m_dataSourceFieldNameHasBeenSet = true; m_dataSourceFieldName = value; }
    inline void SetDataSourceFieldName(Aws::String&& value) { m_dataSourceFieldNameHasBeenSet = true; m_dataSourceFieldName = std::move(value); }
    inline void SetDataSourceFieldName(const char* value) { m_dataSourceFieldNameHasBeenSet = true; m_dataSourceFieldName.assign(value); }
    inline DataSourceToIndexFieldMapping& WithDataSourceFieldName(const Aws::String& value) { SetDataSourceFieldName(value); return *this;}
    inline DataSourceToIndexFieldMapping& WithDataSourceFieldName(Aws::String&& value) { SetDataSourceFieldName(std::move(value)); return *this;}
    inline DataSourceToIndexFieldMapping& WithDataSourceFieldName(const char* value) { SetDataSourceFieldName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format for date fields in the data source. If the field specified in
     * <code>DataSourceFieldName</code> is a date field, you must specify the date
     * format. If the field is not a date field, an exception is thrown.</p>
     */
    inline const Aws::String& GetDateFieldFormat() const{ return m_dateFieldFormat; }
    inline bool DateFieldFormatHasBeenSet() const { return m_dateFieldFormatHasBeenSet; }
    inline void SetDateFieldFormat(const Aws::String& value) { m_dateFieldFormatHasBeenSet = true; m_dateFieldFormat = value; }
    inline void SetDateFieldFormat(Aws::String&& value) { m_dateFieldFormatHasBeenSet = true; m_dateFieldFormat = std::move(value); }
    inline void SetDateFieldFormat(const char* value) { m_dateFieldFormatHasBeenSet = true; m_dateFieldFormat.assign(value); }
    inline DataSourceToIndexFieldMapping& WithDateFieldFormat(const Aws::String& value) { SetDateFieldFormat(value); return *this;}
    inline DataSourceToIndexFieldMapping& WithDateFieldFormat(Aws::String&& value) { SetDateFieldFormat(std::move(value)); return *this;}
    inline DataSourceToIndexFieldMapping& WithDateFieldFormat(const char* value) { SetDateFieldFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the index field to map to the data source field. The index field
     * type must match the data source field type.</p>
     */
    inline const Aws::String& GetIndexFieldName() const{ return m_indexFieldName; }
    inline bool IndexFieldNameHasBeenSet() const { return m_indexFieldNameHasBeenSet; }
    inline void SetIndexFieldName(const Aws::String& value) { m_indexFieldNameHasBeenSet = true; m_indexFieldName = value; }
    inline void SetIndexFieldName(Aws::String&& value) { m_indexFieldNameHasBeenSet = true; m_indexFieldName = std::move(value); }
    inline void SetIndexFieldName(const char* value) { m_indexFieldNameHasBeenSet = true; m_indexFieldName.assign(value); }
    inline DataSourceToIndexFieldMapping& WithIndexFieldName(const Aws::String& value) { SetIndexFieldName(value); return *this;}
    inline DataSourceToIndexFieldMapping& WithIndexFieldName(Aws::String&& value) { SetIndexFieldName(std::move(value)); return *this;}
    inline DataSourceToIndexFieldMapping& WithIndexFieldName(const char* value) { SetIndexFieldName(value); return *this;}
    ///@}
  private:

    Aws::String m_dataSourceFieldName;
    bool m_dataSourceFieldNameHasBeenSet = false;

    Aws::String m_dateFieldFormat;
    bool m_dateFieldFormatHasBeenSet = false;

    Aws::String m_indexFieldName;
    bool m_indexFieldNameHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
