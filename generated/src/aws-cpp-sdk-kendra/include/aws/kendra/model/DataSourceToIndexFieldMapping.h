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
    AWS_KENDRA_API DataSourceToIndexFieldMapping() = default;
    AWS_KENDRA_API DataSourceToIndexFieldMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API DataSourceToIndexFieldMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field in the data source. You must first create the index
     * field using the <code>UpdateIndex</code> API.</p>
     */
    inline const Aws::String& GetDataSourceFieldName() const { return m_dataSourceFieldName; }
    inline bool DataSourceFieldNameHasBeenSet() const { return m_dataSourceFieldNameHasBeenSet; }
    template<typename DataSourceFieldNameT = Aws::String>
    void SetDataSourceFieldName(DataSourceFieldNameT&& value) { m_dataSourceFieldNameHasBeenSet = true; m_dataSourceFieldName = std::forward<DataSourceFieldNameT>(value); }
    template<typename DataSourceFieldNameT = Aws::String>
    DataSourceToIndexFieldMapping& WithDataSourceFieldName(DataSourceFieldNameT&& value) { SetDataSourceFieldName(std::forward<DataSourceFieldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format for date fields in the data source. If the field specified in
     * <code>DataSourceFieldName</code> is a date field, you must specify the date
     * format. If the field is not a date field, an exception is thrown.</p>
     */
    inline const Aws::String& GetDateFieldFormat() const { return m_dateFieldFormat; }
    inline bool DateFieldFormatHasBeenSet() const { return m_dateFieldFormatHasBeenSet; }
    template<typename DateFieldFormatT = Aws::String>
    void SetDateFieldFormat(DateFieldFormatT&& value) { m_dateFieldFormatHasBeenSet = true; m_dateFieldFormat = std::forward<DateFieldFormatT>(value); }
    template<typename DateFieldFormatT = Aws::String>
    DataSourceToIndexFieldMapping& WithDateFieldFormat(DateFieldFormatT&& value) { SetDateFieldFormat(std::forward<DateFieldFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the index field to map to the data source field. The index field
     * type must match the data source field type.</p>
     */
    inline const Aws::String& GetIndexFieldName() const { return m_indexFieldName; }
    inline bool IndexFieldNameHasBeenSet() const { return m_indexFieldNameHasBeenSet; }
    template<typename IndexFieldNameT = Aws::String>
    void SetIndexFieldName(IndexFieldNameT&& value) { m_indexFieldNameHasBeenSet = true; m_indexFieldName = std::forward<IndexFieldNameT>(value); }
    template<typename IndexFieldNameT = Aws::String>
    DataSourceToIndexFieldMapping& WithIndexFieldName(IndexFieldNameT&& value) { SetIndexFieldName(std::forward<IndexFieldNameT>(value)); return *this;}
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
