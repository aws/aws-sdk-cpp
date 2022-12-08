/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/ConfluenceAttachmentFieldName.h>
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
   * <p>Maps attributes or field names of Confluence attachments to Amazon Kendra
   * index field names. To create custom fields, use the <code>UpdateIndex</code> API
   * before you map to Confluence fields. For more information, see <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
   * data source fields</a>. The Confuence data source field names must exist in your
   * Confluence custom metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ConfluenceAttachmentToIndexFieldMapping">AWS
   * API Reference</a></p>
   */
  class ConfluenceAttachmentToIndexFieldMapping
  {
  public:
    AWS_KENDRA_API ConfluenceAttachmentToIndexFieldMapping();
    AWS_KENDRA_API ConfluenceAttachmentToIndexFieldMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ConfluenceAttachmentToIndexFieldMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the field in the data source. </p> <p>You must first create the
     * index field using the <code>UpdateIndex</code> API. </p>
     */
    inline const ConfluenceAttachmentFieldName& GetDataSourceFieldName() const{ return m_dataSourceFieldName; }

    /**
     * <p>The name of the field in the data source. </p> <p>You must first create the
     * index field using the <code>UpdateIndex</code> API. </p>
     */
    inline bool DataSourceFieldNameHasBeenSet() const { return m_dataSourceFieldNameHasBeenSet; }

    /**
     * <p>The name of the field in the data source. </p> <p>You must first create the
     * index field using the <code>UpdateIndex</code> API. </p>
     */
    inline void SetDataSourceFieldName(const ConfluenceAttachmentFieldName& value) { m_dataSourceFieldNameHasBeenSet = true; m_dataSourceFieldName = value; }

    /**
     * <p>The name of the field in the data source. </p> <p>You must first create the
     * index field using the <code>UpdateIndex</code> API. </p>
     */
    inline void SetDataSourceFieldName(ConfluenceAttachmentFieldName&& value) { m_dataSourceFieldNameHasBeenSet = true; m_dataSourceFieldName = std::move(value); }

    /**
     * <p>The name of the field in the data source. </p> <p>You must first create the
     * index field using the <code>UpdateIndex</code> API. </p>
     */
    inline ConfluenceAttachmentToIndexFieldMapping& WithDataSourceFieldName(const ConfluenceAttachmentFieldName& value) { SetDataSourceFieldName(value); return *this;}

    /**
     * <p>The name of the field in the data source. </p> <p>You must first create the
     * index field using the <code>UpdateIndex</code> API. </p>
     */
    inline ConfluenceAttachmentToIndexFieldMapping& WithDataSourceFieldName(ConfluenceAttachmentFieldName&& value) { SetDataSourceFieldName(std::move(value)); return *this;}


    /**
     * <p>The format for date fields in the data source. If the field specified in
     * <code>DataSourceFieldName</code> is a date field you must specify the date
     * format. If the field is not a date field, an exception is thrown.</p>
     */
    inline const Aws::String& GetDateFieldFormat() const{ return m_dateFieldFormat; }

    /**
     * <p>The format for date fields in the data source. If the field specified in
     * <code>DataSourceFieldName</code> is a date field you must specify the date
     * format. If the field is not a date field, an exception is thrown.</p>
     */
    inline bool DateFieldFormatHasBeenSet() const { return m_dateFieldFormatHasBeenSet; }

    /**
     * <p>The format for date fields in the data source. If the field specified in
     * <code>DataSourceFieldName</code> is a date field you must specify the date
     * format. If the field is not a date field, an exception is thrown.</p>
     */
    inline void SetDateFieldFormat(const Aws::String& value) { m_dateFieldFormatHasBeenSet = true; m_dateFieldFormat = value; }

    /**
     * <p>The format for date fields in the data source. If the field specified in
     * <code>DataSourceFieldName</code> is a date field you must specify the date
     * format. If the field is not a date field, an exception is thrown.</p>
     */
    inline void SetDateFieldFormat(Aws::String&& value) { m_dateFieldFormatHasBeenSet = true; m_dateFieldFormat = std::move(value); }

    /**
     * <p>The format for date fields in the data source. If the field specified in
     * <code>DataSourceFieldName</code> is a date field you must specify the date
     * format. If the field is not a date field, an exception is thrown.</p>
     */
    inline void SetDateFieldFormat(const char* value) { m_dateFieldFormatHasBeenSet = true; m_dateFieldFormat.assign(value); }

    /**
     * <p>The format for date fields in the data source. If the field specified in
     * <code>DataSourceFieldName</code> is a date field you must specify the date
     * format. If the field is not a date field, an exception is thrown.</p>
     */
    inline ConfluenceAttachmentToIndexFieldMapping& WithDateFieldFormat(const Aws::String& value) { SetDateFieldFormat(value); return *this;}

    /**
     * <p>The format for date fields in the data source. If the field specified in
     * <code>DataSourceFieldName</code> is a date field you must specify the date
     * format. If the field is not a date field, an exception is thrown.</p>
     */
    inline ConfluenceAttachmentToIndexFieldMapping& WithDateFieldFormat(Aws::String&& value) { SetDateFieldFormat(std::move(value)); return *this;}

    /**
     * <p>The format for date fields in the data source. If the field specified in
     * <code>DataSourceFieldName</code> is a date field you must specify the date
     * format. If the field is not a date field, an exception is thrown.</p>
     */
    inline ConfluenceAttachmentToIndexFieldMapping& WithDateFieldFormat(const char* value) { SetDateFieldFormat(value); return *this;}


    /**
     * <p>The name of the index field to map to the Confluence data source field. The
     * index field type must match the Confluence field type.</p>
     */
    inline const Aws::String& GetIndexFieldName() const{ return m_indexFieldName; }

    /**
     * <p>The name of the index field to map to the Confluence data source field. The
     * index field type must match the Confluence field type.</p>
     */
    inline bool IndexFieldNameHasBeenSet() const { return m_indexFieldNameHasBeenSet; }

    /**
     * <p>The name of the index field to map to the Confluence data source field. The
     * index field type must match the Confluence field type.</p>
     */
    inline void SetIndexFieldName(const Aws::String& value) { m_indexFieldNameHasBeenSet = true; m_indexFieldName = value; }

    /**
     * <p>The name of the index field to map to the Confluence data source field. The
     * index field type must match the Confluence field type.</p>
     */
    inline void SetIndexFieldName(Aws::String&& value) { m_indexFieldNameHasBeenSet = true; m_indexFieldName = std::move(value); }

    /**
     * <p>The name of the index field to map to the Confluence data source field. The
     * index field type must match the Confluence field type.</p>
     */
    inline void SetIndexFieldName(const char* value) { m_indexFieldNameHasBeenSet = true; m_indexFieldName.assign(value); }

    /**
     * <p>The name of the index field to map to the Confluence data source field. The
     * index field type must match the Confluence field type.</p>
     */
    inline ConfluenceAttachmentToIndexFieldMapping& WithIndexFieldName(const Aws::String& value) { SetIndexFieldName(value); return *this;}

    /**
     * <p>The name of the index field to map to the Confluence data source field. The
     * index field type must match the Confluence field type.</p>
     */
    inline ConfluenceAttachmentToIndexFieldMapping& WithIndexFieldName(Aws::String&& value) { SetIndexFieldName(std::move(value)); return *this;}

    /**
     * <p>The name of the index field to map to the Confluence data source field. The
     * index field type must match the Confluence field type.</p>
     */
    inline ConfluenceAttachmentToIndexFieldMapping& WithIndexFieldName(const char* value) { SetIndexFieldName(value); return *this;}

  private:

    ConfluenceAttachmentFieldName m_dataSourceFieldName;
    bool m_dataSourceFieldNameHasBeenSet = false;

    Aws::String m_dateFieldFormat;
    bool m_dateFieldFormatHasBeenSet = false;

    Aws::String m_indexFieldName;
    bool m_indexFieldNameHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
