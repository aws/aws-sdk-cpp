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
   * <p>Maps a column or attribute in the data source to an index field. You must
   * first create the fields in the index using the <code>UpdateIndex</code>
   * API.</p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>The name of the column or attribute in the data source.</p>
     */
    inline const Aws::String& GetDataSourceFieldName() const{ return m_dataSourceFieldName; }

    /**
     * <p>The name of the column or attribute in the data source.</p>
     */
    inline bool DataSourceFieldNameHasBeenSet() const { return m_dataSourceFieldNameHasBeenSet; }

    /**
     * <p>The name of the column or attribute in the data source.</p>
     */
    inline void SetDataSourceFieldName(const Aws::String& value) { m_dataSourceFieldNameHasBeenSet = true; m_dataSourceFieldName = value; }

    /**
     * <p>The name of the column or attribute in the data source.</p>
     */
    inline void SetDataSourceFieldName(Aws::String&& value) { m_dataSourceFieldNameHasBeenSet = true; m_dataSourceFieldName = std::move(value); }

    /**
     * <p>The name of the column or attribute in the data source.</p>
     */
    inline void SetDataSourceFieldName(const char* value) { m_dataSourceFieldNameHasBeenSet = true; m_dataSourceFieldName.assign(value); }

    /**
     * <p>The name of the column or attribute in the data source.</p>
     */
    inline DataSourceToIndexFieldMapping& WithDataSourceFieldName(const Aws::String& value) { SetDataSourceFieldName(value); return *this;}

    /**
     * <p>The name of the column or attribute in the data source.</p>
     */
    inline DataSourceToIndexFieldMapping& WithDataSourceFieldName(Aws::String&& value) { SetDataSourceFieldName(std::move(value)); return *this;}

    /**
     * <p>The name of the column or attribute in the data source.</p>
     */
    inline DataSourceToIndexFieldMapping& WithDataSourceFieldName(const char* value) { SetDataSourceFieldName(value); return *this;}


    /**
     * <p>The type of data stored in the column or attribute.</p>
     */
    inline const Aws::String& GetDateFieldFormat() const{ return m_dateFieldFormat; }

    /**
     * <p>The type of data stored in the column or attribute.</p>
     */
    inline bool DateFieldFormatHasBeenSet() const { return m_dateFieldFormatHasBeenSet; }

    /**
     * <p>The type of data stored in the column or attribute.</p>
     */
    inline void SetDateFieldFormat(const Aws::String& value) { m_dateFieldFormatHasBeenSet = true; m_dateFieldFormat = value; }

    /**
     * <p>The type of data stored in the column or attribute.</p>
     */
    inline void SetDateFieldFormat(Aws::String&& value) { m_dateFieldFormatHasBeenSet = true; m_dateFieldFormat = std::move(value); }

    /**
     * <p>The type of data stored in the column or attribute.</p>
     */
    inline void SetDateFieldFormat(const char* value) { m_dateFieldFormatHasBeenSet = true; m_dateFieldFormat.assign(value); }

    /**
     * <p>The type of data stored in the column or attribute.</p>
     */
    inline DataSourceToIndexFieldMapping& WithDateFieldFormat(const Aws::String& value) { SetDateFieldFormat(value); return *this;}

    /**
     * <p>The type of data stored in the column or attribute.</p>
     */
    inline DataSourceToIndexFieldMapping& WithDateFieldFormat(Aws::String&& value) { SetDateFieldFormat(std::move(value)); return *this;}

    /**
     * <p>The type of data stored in the column or attribute.</p>
     */
    inline DataSourceToIndexFieldMapping& WithDateFieldFormat(const char* value) { SetDateFieldFormat(value); return *this;}


    /**
     * <p>The name of the field in the index.</p>
     */
    inline const Aws::String& GetIndexFieldName() const{ return m_indexFieldName; }

    /**
     * <p>The name of the field in the index.</p>
     */
    inline bool IndexFieldNameHasBeenSet() const { return m_indexFieldNameHasBeenSet; }

    /**
     * <p>The name of the field in the index.</p>
     */
    inline void SetIndexFieldName(const Aws::String& value) { m_indexFieldNameHasBeenSet = true; m_indexFieldName = value; }

    /**
     * <p>The name of the field in the index.</p>
     */
    inline void SetIndexFieldName(Aws::String&& value) { m_indexFieldNameHasBeenSet = true; m_indexFieldName = std::move(value); }

    /**
     * <p>The name of the field in the index.</p>
     */
    inline void SetIndexFieldName(const char* value) { m_indexFieldNameHasBeenSet = true; m_indexFieldName.assign(value); }

    /**
     * <p>The name of the field in the index.</p>
     */
    inline DataSourceToIndexFieldMapping& WithIndexFieldName(const Aws::String& value) { SetIndexFieldName(value); return *this;}

    /**
     * <p>The name of the field in the index.</p>
     */
    inline DataSourceToIndexFieldMapping& WithIndexFieldName(Aws::String&& value) { SetIndexFieldName(std::move(value)); return *this;}

    /**
     * <p>The name of the field in the index.</p>
     */
    inline DataSourceToIndexFieldMapping& WithIndexFieldName(const char* value) { SetIndexFieldName(value); return *this;}

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
