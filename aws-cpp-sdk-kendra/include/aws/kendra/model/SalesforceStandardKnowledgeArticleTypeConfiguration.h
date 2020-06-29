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
   * <p>Provides configuration information for standard Salesforce knowledge
   * articles.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SalesforceStandardKnowledgeArticleTypeConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API SalesforceStandardKnowledgeArticleTypeConfiguration
  {
  public:
    SalesforceStandardKnowledgeArticleTypeConfiguration();
    SalesforceStandardKnowledgeArticleTypeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    SalesforceStandardKnowledgeArticleTypeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the field that contains the document data to index.</p>
     */
    inline const Aws::String& GetDocumentDataFieldName() const{ return m_documentDataFieldName; }

    /**
     * <p>The name of the field that contains the document data to index.</p>
     */
    inline bool DocumentDataFieldNameHasBeenSet() const { return m_documentDataFieldNameHasBeenSet; }

    /**
     * <p>The name of the field that contains the document data to index.</p>
     */
    inline void SetDocumentDataFieldName(const Aws::String& value) { m_documentDataFieldNameHasBeenSet = true; m_documentDataFieldName = value; }

    /**
     * <p>The name of the field that contains the document data to index.</p>
     */
    inline void SetDocumentDataFieldName(Aws::String&& value) { m_documentDataFieldNameHasBeenSet = true; m_documentDataFieldName = std::move(value); }

    /**
     * <p>The name of the field that contains the document data to index.</p>
     */
    inline void SetDocumentDataFieldName(const char* value) { m_documentDataFieldNameHasBeenSet = true; m_documentDataFieldName.assign(value); }

    /**
     * <p>The name of the field that contains the document data to index.</p>
     */
    inline SalesforceStandardKnowledgeArticleTypeConfiguration& WithDocumentDataFieldName(const Aws::String& value) { SetDocumentDataFieldName(value); return *this;}

    /**
     * <p>The name of the field that contains the document data to index.</p>
     */
    inline SalesforceStandardKnowledgeArticleTypeConfiguration& WithDocumentDataFieldName(Aws::String&& value) { SetDocumentDataFieldName(std::move(value)); return *this;}

    /**
     * <p>The name of the field that contains the document data to index.</p>
     */
    inline SalesforceStandardKnowledgeArticleTypeConfiguration& WithDocumentDataFieldName(const char* value) { SetDocumentDataFieldName(value); return *this;}


    /**
     * <p>The name of the field that contains the document title.</p>
     */
    inline const Aws::String& GetDocumentTitleFieldName() const{ return m_documentTitleFieldName; }

    /**
     * <p>The name of the field that contains the document title.</p>
     */
    inline bool DocumentTitleFieldNameHasBeenSet() const { return m_documentTitleFieldNameHasBeenSet; }

    /**
     * <p>The name of the field that contains the document title.</p>
     */
    inline void SetDocumentTitleFieldName(const Aws::String& value) { m_documentTitleFieldNameHasBeenSet = true; m_documentTitleFieldName = value; }

    /**
     * <p>The name of the field that contains the document title.</p>
     */
    inline void SetDocumentTitleFieldName(Aws::String&& value) { m_documentTitleFieldNameHasBeenSet = true; m_documentTitleFieldName = std::move(value); }

    /**
     * <p>The name of the field that contains the document title.</p>
     */
    inline void SetDocumentTitleFieldName(const char* value) { m_documentTitleFieldNameHasBeenSet = true; m_documentTitleFieldName.assign(value); }

    /**
     * <p>The name of the field that contains the document title.</p>
     */
    inline SalesforceStandardKnowledgeArticleTypeConfiguration& WithDocumentTitleFieldName(const Aws::String& value) { SetDocumentTitleFieldName(value); return *this;}

    /**
     * <p>The name of the field that contains the document title.</p>
     */
    inline SalesforceStandardKnowledgeArticleTypeConfiguration& WithDocumentTitleFieldName(Aws::String&& value) { SetDocumentTitleFieldName(std::move(value)); return *this;}

    /**
     * <p>The name of the field that contains the document title.</p>
     */
    inline SalesforceStandardKnowledgeArticleTypeConfiguration& WithDocumentTitleFieldName(const char* value) { SetDocumentTitleFieldName(value); return *this;}


    /**
     * <p>One or more objects that map fields in the knowledge article to Amazon Kendra
     * index fields. The index field must exist before you can map a Salesforce field
     * to it.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFieldMappings() const{ return m_fieldMappings; }

    /**
     * <p>One or more objects that map fields in the knowledge article to Amazon Kendra
     * index fields. The index field must exist before you can map a Salesforce field
     * to it.</p>
     */
    inline bool FieldMappingsHasBeenSet() const { return m_fieldMappingsHasBeenSet; }

    /**
     * <p>One or more objects that map fields in the knowledge article to Amazon Kendra
     * index fields. The index field must exist before you can map a Salesforce field
     * to it.</p>
     */
    inline void SetFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = value; }

    /**
     * <p>One or more objects that map fields in the knowledge article to Amazon Kendra
     * index fields. The index field must exist before you can map a Salesforce field
     * to it.</p>
     */
    inline void SetFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = std::move(value); }

    /**
     * <p>One or more objects that map fields in the knowledge article to Amazon Kendra
     * index fields. The index field must exist before you can map a Salesforce field
     * to it.</p>
     */
    inline SalesforceStandardKnowledgeArticleTypeConfiguration& WithFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetFieldMappings(value); return *this;}

    /**
     * <p>One or more objects that map fields in the knowledge article to Amazon Kendra
     * index fields. The index field must exist before you can map a Salesforce field
     * to it.</p>
     */
    inline SalesforceStandardKnowledgeArticleTypeConfiguration& WithFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetFieldMappings(std::move(value)); return *this;}

    /**
     * <p>One or more objects that map fields in the knowledge article to Amazon Kendra
     * index fields. The index field must exist before you can map a Salesforce field
     * to it.</p>
     */
    inline SalesforceStandardKnowledgeArticleTypeConfiguration& AddFieldMappings(const DataSourceToIndexFieldMapping& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(value); return *this; }

    /**
     * <p>One or more objects that map fields in the knowledge article to Amazon Kendra
     * index fields. The index field must exist before you can map a Salesforce field
     * to it.</p>
     */
    inline SalesforceStandardKnowledgeArticleTypeConfiguration& AddFieldMappings(DataSourceToIndexFieldMapping&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_documentDataFieldName;
    bool m_documentDataFieldNameHasBeenSet;

    Aws::String m_documentTitleFieldName;
    bool m_documentTitleFieldNameHasBeenSet;

    Aws::Vector<DataSourceToIndexFieldMapping> m_fieldMappings;
    bool m_fieldMappingsHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
