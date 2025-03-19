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
   * <p>Provides the configuration information for standard Salesforce knowledge
   * articles.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/SalesforceStandardKnowledgeArticleTypeConfiguration">AWS
   * API Reference</a></p>
   */
  class SalesforceStandardKnowledgeArticleTypeConfiguration
  {
  public:
    AWS_KENDRA_API SalesforceStandardKnowledgeArticleTypeConfiguration() = default;
    AWS_KENDRA_API SalesforceStandardKnowledgeArticleTypeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API SalesforceStandardKnowledgeArticleTypeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field that contains the document data to index.</p>
     */
    inline const Aws::String& GetDocumentDataFieldName() const { return m_documentDataFieldName; }
    inline bool DocumentDataFieldNameHasBeenSet() const { return m_documentDataFieldNameHasBeenSet; }
    template<typename DocumentDataFieldNameT = Aws::String>
    void SetDocumentDataFieldName(DocumentDataFieldNameT&& value) { m_documentDataFieldNameHasBeenSet = true; m_documentDataFieldName = std::forward<DocumentDataFieldNameT>(value); }
    template<typename DocumentDataFieldNameT = Aws::String>
    SalesforceStandardKnowledgeArticleTypeConfiguration& WithDocumentDataFieldName(DocumentDataFieldNameT&& value) { SetDocumentDataFieldName(std::forward<DocumentDataFieldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the field that contains the document title.</p>
     */
    inline const Aws::String& GetDocumentTitleFieldName() const { return m_documentTitleFieldName; }
    inline bool DocumentTitleFieldNameHasBeenSet() const { return m_documentTitleFieldNameHasBeenSet; }
    template<typename DocumentTitleFieldNameT = Aws::String>
    void SetDocumentTitleFieldName(DocumentTitleFieldNameT&& value) { m_documentTitleFieldNameHasBeenSet = true; m_documentTitleFieldName = std::forward<DocumentTitleFieldNameT>(value); }
    template<typename DocumentTitleFieldNameT = Aws::String>
    SalesforceStandardKnowledgeArticleTypeConfiguration& WithDocumentTitleFieldName(DocumentTitleFieldNameT&& value) { SetDocumentTitleFieldName(std::forward<DocumentTitleFieldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maps attributes or field names of the knowledge article to Amazon Kendra
     * index field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Salesforce fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Salesforce data source field names must exist in
     * your Salesforce custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFieldMappings() const { return m_fieldMappings; }
    inline bool FieldMappingsHasBeenSet() const { return m_fieldMappingsHasBeenSet; }
    template<typename FieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetFieldMappings(FieldMappingsT&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = std::forward<FieldMappingsT>(value); }
    template<typename FieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    SalesforceStandardKnowledgeArticleTypeConfiguration& WithFieldMappings(FieldMappingsT&& value) { SetFieldMappings(std::forward<FieldMappingsT>(value)); return *this;}
    template<typename FieldMappingsT = DataSourceToIndexFieldMapping>
    SalesforceStandardKnowledgeArticleTypeConfiguration& AddFieldMappings(FieldMappingsT&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.emplace_back(std::forward<FieldMappingsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_documentDataFieldName;
    bool m_documentDataFieldNameHasBeenSet = false;

    Aws::String m_documentTitleFieldName;
    bool m_documentTitleFieldNameHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_fieldMappings;
    bool m_fieldMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
