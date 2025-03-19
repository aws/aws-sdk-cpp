/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Provides the configuration information for crawling knowledge articles in the
   * ServiceNow site.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ServiceNowKnowledgeArticleConfiguration">AWS
   * API Reference</a></p>
   */
  class ServiceNowKnowledgeArticleConfiguration
  {
  public:
    AWS_KENDRA_API ServiceNowKnowledgeArticleConfiguration() = default;
    AWS_KENDRA_API ServiceNowKnowledgeArticleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ServiceNowKnowledgeArticleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> <code>TRUE</code> to index attachments to knowledge articles.</p>
     */
    inline bool GetCrawlAttachments() const { return m_crawlAttachments; }
    inline bool CrawlAttachmentsHasBeenSet() const { return m_crawlAttachmentsHasBeenSet; }
    inline void SetCrawlAttachments(bool value) { m_crawlAttachmentsHasBeenSet = true; m_crawlAttachments = value; }
    inline ServiceNowKnowledgeArticleConfiguration& WithCrawlAttachments(bool value) { SetCrawlAttachments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns applied to include knowledge article
     * attachments. Attachments that match the patterns are included in the index.
     * Items that don't match the patterns are excluded from the index. If an item
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the item isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeAttachmentFilePatterns() const { return m_includeAttachmentFilePatterns; }
    inline bool IncludeAttachmentFilePatternsHasBeenSet() const { return m_includeAttachmentFilePatternsHasBeenSet; }
    template<typename IncludeAttachmentFilePatternsT = Aws::Vector<Aws::String>>
    void SetIncludeAttachmentFilePatterns(IncludeAttachmentFilePatternsT&& value) { m_includeAttachmentFilePatternsHasBeenSet = true; m_includeAttachmentFilePatterns = std::forward<IncludeAttachmentFilePatternsT>(value); }
    template<typename IncludeAttachmentFilePatternsT = Aws::Vector<Aws::String>>
    ServiceNowKnowledgeArticleConfiguration& WithIncludeAttachmentFilePatterns(IncludeAttachmentFilePatternsT&& value) { SetIncludeAttachmentFilePatterns(std::forward<IncludeAttachmentFilePatternsT>(value)); return *this;}
    template<typename IncludeAttachmentFilePatternsT = Aws::String>
    ServiceNowKnowledgeArticleConfiguration& AddIncludeAttachmentFilePatterns(IncludeAttachmentFilePatternsT&& value) { m_includeAttachmentFilePatternsHasBeenSet = true; m_includeAttachmentFilePatterns.emplace_back(std::forward<IncludeAttachmentFilePatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns applied to exclude certain knowledge
     * article attachments. Attachments that match the patterns are excluded from the
     * index. Items that don't match the patterns are included in the index. If an item
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the item isn't included in the index.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeAttachmentFilePatterns() const { return m_excludeAttachmentFilePatterns; }
    inline bool ExcludeAttachmentFilePatternsHasBeenSet() const { return m_excludeAttachmentFilePatternsHasBeenSet; }
    template<typename ExcludeAttachmentFilePatternsT = Aws::Vector<Aws::String>>
    void SetExcludeAttachmentFilePatterns(ExcludeAttachmentFilePatternsT&& value) { m_excludeAttachmentFilePatternsHasBeenSet = true; m_excludeAttachmentFilePatterns = std::forward<ExcludeAttachmentFilePatternsT>(value); }
    template<typename ExcludeAttachmentFilePatternsT = Aws::Vector<Aws::String>>
    ServiceNowKnowledgeArticleConfiguration& WithExcludeAttachmentFilePatterns(ExcludeAttachmentFilePatternsT&& value) { SetExcludeAttachmentFilePatterns(std::forward<ExcludeAttachmentFilePatternsT>(value)); return *this;}
    template<typename ExcludeAttachmentFilePatternsT = Aws::String>
    ServiceNowKnowledgeArticleConfiguration& AddExcludeAttachmentFilePatterns(ExcludeAttachmentFilePatternsT&& value) { m_excludeAttachmentFilePatternsHasBeenSet = true; m_excludeAttachmentFilePatterns.emplace_back(std::forward<ExcludeAttachmentFilePatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the ServiceNow field that is mapped to the index document
     * contents field in the Amazon Kendra index.</p>
     */
    inline const Aws::String& GetDocumentDataFieldName() const { return m_documentDataFieldName; }
    inline bool DocumentDataFieldNameHasBeenSet() const { return m_documentDataFieldNameHasBeenSet; }
    template<typename DocumentDataFieldNameT = Aws::String>
    void SetDocumentDataFieldName(DocumentDataFieldNameT&& value) { m_documentDataFieldNameHasBeenSet = true; m_documentDataFieldName = std::forward<DocumentDataFieldNameT>(value); }
    template<typename DocumentDataFieldNameT = Aws::String>
    ServiceNowKnowledgeArticleConfiguration& WithDocumentDataFieldName(DocumentDataFieldNameT&& value) { SetDocumentDataFieldName(std::forward<DocumentDataFieldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the ServiceNow field that is mapped to the index document title
     * field.</p>
     */
    inline const Aws::String& GetDocumentTitleFieldName() const { return m_documentTitleFieldName; }
    inline bool DocumentTitleFieldNameHasBeenSet() const { return m_documentTitleFieldNameHasBeenSet; }
    template<typename DocumentTitleFieldNameT = Aws::String>
    void SetDocumentTitleFieldName(DocumentTitleFieldNameT&& value) { m_documentTitleFieldNameHasBeenSet = true; m_documentTitleFieldName = std::forward<DocumentTitleFieldNameT>(value); }
    template<typename DocumentTitleFieldNameT = Aws::String>
    ServiceNowKnowledgeArticleConfiguration& WithDocumentTitleFieldName(DocumentTitleFieldNameT&& value) { SetDocumentTitleFieldName(std::forward<DocumentTitleFieldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maps attributes or field names of knoweldge articles to Amazon Kendra index
     * field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to ServiceNow fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The ServiceNow data source field names must exist in
     * your ServiceNow custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFieldMappings() const { return m_fieldMappings; }
    inline bool FieldMappingsHasBeenSet() const { return m_fieldMappingsHasBeenSet; }
    template<typename FieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetFieldMappings(FieldMappingsT&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = std::forward<FieldMappingsT>(value); }
    template<typename FieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    ServiceNowKnowledgeArticleConfiguration& WithFieldMappings(FieldMappingsT&& value) { SetFieldMappings(std::forward<FieldMappingsT>(value)); return *this;}
    template<typename FieldMappingsT = DataSourceToIndexFieldMapping>
    ServiceNowKnowledgeArticleConfiguration& AddFieldMappings(FieldMappingsT&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.emplace_back(std::forward<FieldMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A query that selects the knowledge articles to index. The query can return
     * articles from multiple knowledge bases, and the knowledge bases can be public or
     * private.</p> <p>The query string must be one generated by the ServiceNow
     * console. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/servicenow-query.html">Specifying
     * documents to index with a query</a>. </p>
     */
    inline const Aws::String& GetFilterQuery() const { return m_filterQuery; }
    inline bool FilterQueryHasBeenSet() const { return m_filterQueryHasBeenSet; }
    template<typename FilterQueryT = Aws::String>
    void SetFilterQuery(FilterQueryT&& value) { m_filterQueryHasBeenSet = true; m_filterQuery = std::forward<FilterQueryT>(value); }
    template<typename FilterQueryT = Aws::String>
    ServiceNowKnowledgeArticleConfiguration& WithFilterQuery(FilterQueryT&& value) { SetFilterQuery(std::forward<FilterQueryT>(value)); return *this;}
    ///@}
  private:

    bool m_crawlAttachments{false};
    bool m_crawlAttachmentsHasBeenSet = false;

    Aws::Vector<Aws::String> m_includeAttachmentFilePatterns;
    bool m_includeAttachmentFilePatternsHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeAttachmentFilePatterns;
    bool m_excludeAttachmentFilePatternsHasBeenSet = false;

    Aws::String m_documentDataFieldName;
    bool m_documentDataFieldNameHasBeenSet = false;

    Aws::String m_documentTitleFieldName;
    bool m_documentTitleFieldNameHasBeenSet = false;

    Aws::Vector<DataSourceToIndexFieldMapping> m_fieldMappings;
    bool m_fieldMappingsHasBeenSet = false;

    Aws::String m_filterQuery;
    bool m_filterQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
