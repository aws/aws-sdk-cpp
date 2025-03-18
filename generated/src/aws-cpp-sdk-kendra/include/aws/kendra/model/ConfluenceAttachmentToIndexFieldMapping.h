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
    AWS_KENDRA_API ConfluenceAttachmentToIndexFieldMapping() = default;
    AWS_KENDRA_API ConfluenceAttachmentToIndexFieldMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ConfluenceAttachmentToIndexFieldMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field in the data source. </p> <p>You must first create the
     * index field using the <code>UpdateIndex</code> API. </p>
     */
    inline ConfluenceAttachmentFieldName GetDataSourceFieldName() const { return m_dataSourceFieldName; }
    inline bool DataSourceFieldNameHasBeenSet() const { return m_dataSourceFieldNameHasBeenSet; }
    inline void SetDataSourceFieldName(ConfluenceAttachmentFieldName value) { m_dataSourceFieldNameHasBeenSet = true; m_dataSourceFieldName = value; }
    inline ConfluenceAttachmentToIndexFieldMapping& WithDataSourceFieldName(ConfluenceAttachmentFieldName value) { SetDataSourceFieldName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format for date fields in the data source. If the field specified in
     * <code>DataSourceFieldName</code> is a date field you must specify the date
     * format. If the field is not a date field, an exception is thrown.</p>
     */
    inline const Aws::String& GetDateFieldFormat() const { return m_dateFieldFormat; }
    inline bool DateFieldFormatHasBeenSet() const { return m_dateFieldFormatHasBeenSet; }
    template<typename DateFieldFormatT = Aws::String>
    void SetDateFieldFormat(DateFieldFormatT&& value) { m_dateFieldFormatHasBeenSet = true; m_dateFieldFormat = std::forward<DateFieldFormatT>(value); }
    template<typename DateFieldFormatT = Aws::String>
    ConfluenceAttachmentToIndexFieldMapping& WithDateFieldFormat(DateFieldFormatT&& value) { SetDateFieldFormat(std::forward<DateFieldFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the index field to map to the Confluence data source field. The
     * index field type must match the Confluence field type.</p>
     */
    inline const Aws::String& GetIndexFieldName() const { return m_indexFieldName; }
    inline bool IndexFieldNameHasBeenSet() const { return m_indexFieldNameHasBeenSet; }
    template<typename IndexFieldNameT = Aws::String>
    void SetIndexFieldName(IndexFieldNameT&& value) { m_indexFieldNameHasBeenSet = true; m_indexFieldName = std::forward<IndexFieldNameT>(value); }
    template<typename IndexFieldNameT = Aws::String>
    ConfluenceAttachmentToIndexFieldMapping& WithIndexFieldName(IndexFieldNameT&& value) { SetIndexFieldName(std::forward<IndexFieldNameT>(value)); return *this;}
    ///@}
  private:

    ConfluenceAttachmentFieldName m_dataSourceFieldName{ConfluenceAttachmentFieldName::NOT_SET};
    bool m_dataSourceFieldNameHasBeenSet = false;

    Aws::String m_dateFieldFormat;
    bool m_dateFieldFormatHasBeenSet = false;

    Aws::String m_indexFieldName;
    bool m_indexFieldNameHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
