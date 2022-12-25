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
    AWS_KENDRA_API ColumnConfiguration();
    AWS_KENDRA_API ColumnConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ColumnConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The column that provides the document's identifier.</p>
     */
    inline const Aws::String& GetDocumentIdColumnName() const{ return m_documentIdColumnName; }

    /**
     * <p>The column that provides the document's identifier.</p>
     */
    inline bool DocumentIdColumnNameHasBeenSet() const { return m_documentIdColumnNameHasBeenSet; }

    /**
     * <p>The column that provides the document's identifier.</p>
     */
    inline void SetDocumentIdColumnName(const Aws::String& value) { m_documentIdColumnNameHasBeenSet = true; m_documentIdColumnName = value; }

    /**
     * <p>The column that provides the document's identifier.</p>
     */
    inline void SetDocumentIdColumnName(Aws::String&& value) { m_documentIdColumnNameHasBeenSet = true; m_documentIdColumnName = std::move(value); }

    /**
     * <p>The column that provides the document's identifier.</p>
     */
    inline void SetDocumentIdColumnName(const char* value) { m_documentIdColumnNameHasBeenSet = true; m_documentIdColumnName.assign(value); }

    /**
     * <p>The column that provides the document's identifier.</p>
     */
    inline ColumnConfiguration& WithDocumentIdColumnName(const Aws::String& value) { SetDocumentIdColumnName(value); return *this;}

    /**
     * <p>The column that provides the document's identifier.</p>
     */
    inline ColumnConfiguration& WithDocumentIdColumnName(Aws::String&& value) { SetDocumentIdColumnName(std::move(value)); return *this;}

    /**
     * <p>The column that provides the document's identifier.</p>
     */
    inline ColumnConfiguration& WithDocumentIdColumnName(const char* value) { SetDocumentIdColumnName(value); return *this;}


    /**
     * <p>The column that contains the contents of the document.</p>
     */
    inline const Aws::String& GetDocumentDataColumnName() const{ return m_documentDataColumnName; }

    /**
     * <p>The column that contains the contents of the document.</p>
     */
    inline bool DocumentDataColumnNameHasBeenSet() const { return m_documentDataColumnNameHasBeenSet; }

    /**
     * <p>The column that contains the contents of the document.</p>
     */
    inline void SetDocumentDataColumnName(const Aws::String& value) { m_documentDataColumnNameHasBeenSet = true; m_documentDataColumnName = value; }

    /**
     * <p>The column that contains the contents of the document.</p>
     */
    inline void SetDocumentDataColumnName(Aws::String&& value) { m_documentDataColumnNameHasBeenSet = true; m_documentDataColumnName = std::move(value); }

    /**
     * <p>The column that contains the contents of the document.</p>
     */
    inline void SetDocumentDataColumnName(const char* value) { m_documentDataColumnNameHasBeenSet = true; m_documentDataColumnName.assign(value); }

    /**
     * <p>The column that contains the contents of the document.</p>
     */
    inline ColumnConfiguration& WithDocumentDataColumnName(const Aws::String& value) { SetDocumentDataColumnName(value); return *this;}

    /**
     * <p>The column that contains the contents of the document.</p>
     */
    inline ColumnConfiguration& WithDocumentDataColumnName(Aws::String&& value) { SetDocumentDataColumnName(std::move(value)); return *this;}

    /**
     * <p>The column that contains the contents of the document.</p>
     */
    inline ColumnConfiguration& WithDocumentDataColumnName(const char* value) { SetDocumentDataColumnName(value); return *this;}


    /**
     * <p>The column that contains the title of the document.</p>
     */
    inline const Aws::String& GetDocumentTitleColumnName() const{ return m_documentTitleColumnName; }

    /**
     * <p>The column that contains the title of the document.</p>
     */
    inline bool DocumentTitleColumnNameHasBeenSet() const { return m_documentTitleColumnNameHasBeenSet; }

    /**
     * <p>The column that contains the title of the document.</p>
     */
    inline void SetDocumentTitleColumnName(const Aws::String& value) { m_documentTitleColumnNameHasBeenSet = true; m_documentTitleColumnName = value; }

    /**
     * <p>The column that contains the title of the document.</p>
     */
    inline void SetDocumentTitleColumnName(Aws::String&& value) { m_documentTitleColumnNameHasBeenSet = true; m_documentTitleColumnName = std::move(value); }

    /**
     * <p>The column that contains the title of the document.</p>
     */
    inline void SetDocumentTitleColumnName(const char* value) { m_documentTitleColumnNameHasBeenSet = true; m_documentTitleColumnName.assign(value); }

    /**
     * <p>The column that contains the title of the document.</p>
     */
    inline ColumnConfiguration& WithDocumentTitleColumnName(const Aws::String& value) { SetDocumentTitleColumnName(value); return *this;}

    /**
     * <p>The column that contains the title of the document.</p>
     */
    inline ColumnConfiguration& WithDocumentTitleColumnName(Aws::String&& value) { SetDocumentTitleColumnName(std::move(value)); return *this;}

    /**
     * <p>The column that contains the title of the document.</p>
     */
    inline ColumnConfiguration& WithDocumentTitleColumnName(const char* value) { SetDocumentTitleColumnName(value); return *this;}


    /**
     * <p>An array of objects that map database column names to the corresponding
     * fields in an index. You must first create the fields in the index using the
     * <code>UpdateIndex</code> API.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFieldMappings() const{ return m_fieldMappings; }

    /**
     * <p>An array of objects that map database column names to the corresponding
     * fields in an index. You must first create the fields in the index using the
     * <code>UpdateIndex</code> API.</p>
     */
    inline bool FieldMappingsHasBeenSet() const { return m_fieldMappingsHasBeenSet; }

    /**
     * <p>An array of objects that map database column names to the corresponding
     * fields in an index. You must first create the fields in the index using the
     * <code>UpdateIndex</code> API.</p>
     */
    inline void SetFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = value; }

    /**
     * <p>An array of objects that map database column names to the corresponding
     * fields in an index. You must first create the fields in the index using the
     * <code>UpdateIndex</code> API.</p>
     */
    inline void SetFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = std::move(value); }

    /**
     * <p>An array of objects that map database column names to the corresponding
     * fields in an index. You must first create the fields in the index using the
     * <code>UpdateIndex</code> API.</p>
     */
    inline ColumnConfiguration& WithFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetFieldMappings(value); return *this;}

    /**
     * <p>An array of objects that map database column names to the corresponding
     * fields in an index. You must first create the fields in the index using the
     * <code>UpdateIndex</code> API.</p>
     */
    inline ColumnConfiguration& WithFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetFieldMappings(std::move(value)); return *this;}

    /**
     * <p>An array of objects that map database column names to the corresponding
     * fields in an index. You must first create the fields in the index using the
     * <code>UpdateIndex</code> API.</p>
     */
    inline ColumnConfiguration& AddFieldMappings(const DataSourceToIndexFieldMapping& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(value); return *this; }

    /**
     * <p>An array of objects that map database column names to the corresponding
     * fields in an index. You must first create the fields in the index using the
     * <code>UpdateIndex</code> API.</p>
     */
    inline ColumnConfiguration& AddFieldMappings(DataSourceToIndexFieldMapping&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>One to five columns that indicate when a document in the database has
     * changed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetChangeDetectingColumns() const{ return m_changeDetectingColumns; }

    /**
     * <p>One to five columns that indicate when a document in the database has
     * changed.</p>
     */
    inline bool ChangeDetectingColumnsHasBeenSet() const { return m_changeDetectingColumnsHasBeenSet; }

    /**
     * <p>One to five columns that indicate when a document in the database has
     * changed.</p>
     */
    inline void SetChangeDetectingColumns(const Aws::Vector<Aws::String>& value) { m_changeDetectingColumnsHasBeenSet = true; m_changeDetectingColumns = value; }

    /**
     * <p>One to five columns that indicate when a document in the database has
     * changed.</p>
     */
    inline void SetChangeDetectingColumns(Aws::Vector<Aws::String>&& value) { m_changeDetectingColumnsHasBeenSet = true; m_changeDetectingColumns = std::move(value); }

    /**
     * <p>One to five columns that indicate when a document in the database has
     * changed.</p>
     */
    inline ColumnConfiguration& WithChangeDetectingColumns(const Aws::Vector<Aws::String>& value) { SetChangeDetectingColumns(value); return *this;}

    /**
     * <p>One to five columns that indicate when a document in the database has
     * changed.</p>
     */
    inline ColumnConfiguration& WithChangeDetectingColumns(Aws::Vector<Aws::String>&& value) { SetChangeDetectingColumns(std::move(value)); return *this;}

    /**
     * <p>One to five columns that indicate when a document in the database has
     * changed.</p>
     */
    inline ColumnConfiguration& AddChangeDetectingColumns(const Aws::String& value) { m_changeDetectingColumnsHasBeenSet = true; m_changeDetectingColumns.push_back(value); return *this; }

    /**
     * <p>One to five columns that indicate when a document in the database has
     * changed.</p>
     */
    inline ColumnConfiguration& AddChangeDetectingColumns(Aws::String&& value) { m_changeDetectingColumnsHasBeenSet = true; m_changeDetectingColumns.push_back(std::move(value)); return *this; }

    /**
     * <p>One to five columns that indicate when a document in the database has
     * changed.</p>
     */
    inline ColumnConfiguration& AddChangeDetectingColumns(const char* value) { m_changeDetectingColumnsHasBeenSet = true; m_changeDetectingColumns.push_back(value); return *this; }

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
