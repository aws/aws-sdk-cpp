/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/DataSourceToIndexFieldMapping.h>
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
   * <p>Provides information about how Amazon Kendra should use the columns of a
   * database in an index.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ColumnConfiguration">AWS
   * API Reference</a></p>
   */
  class ColumnConfiguration
  {
  public:
    AWS_KENDRA_API ColumnConfiguration() = default;
    AWS_KENDRA_API ColumnConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ColumnConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The column that provides the document's identifier.</p>
     */
    inline const Aws::String& GetDocumentIdColumnName() const { return m_documentIdColumnName; }
    inline bool DocumentIdColumnNameHasBeenSet() const { return m_documentIdColumnNameHasBeenSet; }
    template<typename DocumentIdColumnNameT = Aws::String>
    void SetDocumentIdColumnName(DocumentIdColumnNameT&& value) { m_documentIdColumnNameHasBeenSet = true; m_documentIdColumnName = std::forward<DocumentIdColumnNameT>(value); }
    template<typename DocumentIdColumnNameT = Aws::String>
    ColumnConfiguration& WithDocumentIdColumnName(DocumentIdColumnNameT&& value) { SetDocumentIdColumnName(std::forward<DocumentIdColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column that contains the contents of the document.</p>
     */
    inline const Aws::String& GetDocumentDataColumnName() const { return m_documentDataColumnName; }
    inline bool DocumentDataColumnNameHasBeenSet() const { return m_documentDataColumnNameHasBeenSet; }
    template<typename DocumentDataColumnNameT = Aws::String>
    void SetDocumentDataColumnName(DocumentDataColumnNameT&& value) { m_documentDataColumnNameHasBeenSet = true; m_documentDataColumnName = std::forward<DocumentDataColumnNameT>(value); }
    template<typename DocumentDataColumnNameT = Aws::String>
    ColumnConfiguration& WithDocumentDataColumnName(DocumentDataColumnNameT&& value) { SetDocumentDataColumnName(std::forward<DocumentDataColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column that contains the title of the document.</p>
     */
    inline const Aws::String& GetDocumentTitleColumnName() const { return m_documentTitleColumnName; }
    inline bool DocumentTitleColumnNameHasBeenSet() const { return m_documentTitleColumnNameHasBeenSet; }
    template<typename DocumentTitleColumnNameT = Aws::String>
    void SetDocumentTitleColumnName(DocumentTitleColumnNameT&& value) { m_documentTitleColumnNameHasBeenSet = true; m_documentTitleColumnName = std::forward<DocumentTitleColumnNameT>(value); }
    template<typename DocumentTitleColumnNameT = Aws::String>
    ColumnConfiguration& WithDocumentTitleColumnName(DocumentTitleColumnNameT&& value) { SetDocumentTitleColumnName(std::forward<DocumentTitleColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that map database column names to the corresponding
     * fields in an index. You must first create the fields in the index using the
     * <code>UpdateIndex</code> API.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFieldMappings() const { return m_fieldMappings; }
    inline bool FieldMappingsHasBeenSet() const { return m_fieldMappingsHasBeenSet; }
    template<typename FieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetFieldMappings(FieldMappingsT&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = std::forward<FieldMappingsT>(value); }
    template<typename FieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    ColumnConfiguration& WithFieldMappings(FieldMappingsT&& value) { SetFieldMappings(std::forward<FieldMappingsT>(value)); return *this;}
    template<typename FieldMappingsT = DataSourceToIndexFieldMapping>
    ColumnConfiguration& AddFieldMappings(FieldMappingsT&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.emplace_back(std::forward<FieldMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One to five columns that indicate when a document in the database has
     * changed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetChangeDetectingColumns() const { return m_changeDetectingColumns; }
    inline bool ChangeDetectingColumnsHasBeenSet() const { return m_changeDetectingColumnsHasBeenSet; }
    template<typename ChangeDetectingColumnsT = Aws::Vector<Aws::String>>
    void SetChangeDetectingColumns(ChangeDetectingColumnsT&& value) { m_changeDetectingColumnsHasBeenSet = true; m_changeDetectingColumns = std::forward<ChangeDetectingColumnsT>(value); }
    template<typename ChangeDetectingColumnsT = Aws::Vector<Aws::String>>
    ColumnConfiguration& WithChangeDetectingColumns(ChangeDetectingColumnsT&& value) { SetChangeDetectingColumns(std::forward<ChangeDetectingColumnsT>(value)); return *this;}
    template<typename ChangeDetectingColumnsT = Aws::String>
    ColumnConfiguration& AddChangeDetectingColumns(ChangeDetectingColumnsT&& value) { m_changeDetectingColumnsHasBeenSet = true; m_changeDetectingColumns.emplace_back(std::forward<ChangeDetectingColumnsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_documentIdColumnName;
    bool m_documentIdColumnNameHasBeenSet = false;

    Aws::String m_documentDataColumnName;
    bool m_documentDataColumnNameHasBeenSet = false;

    Aws::String m_documentTitleColumnName;
    bool m_documentTitleColumnNameHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_fieldMappings;
    bool m_fieldMappingsHasBeenSet = false;

    Aws::Vector<Aws::String> m_changeDetectingColumns;
    bool m_changeDetectingColumnsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
