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
   * <p>Provides the configuration information for crawling service catalog items in
   * the ServiceNow site</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ServiceNowServiceCatalogConfiguration">AWS
   * API Reference</a></p>
   */
  class ServiceNowServiceCatalogConfiguration
  {
  public:
    AWS_KENDRA_API ServiceNowServiceCatalogConfiguration() = default;
    AWS_KENDRA_API ServiceNowServiceCatalogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ServiceNowServiceCatalogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> <code>TRUE</code> to index attachments to service catalog items.</p>
     */
    inline bool GetCrawlAttachments() const { return m_crawlAttachments; }
    inline bool CrawlAttachmentsHasBeenSet() const { return m_crawlAttachmentsHasBeenSet; }
    inline void SetCrawlAttachments(bool value) { m_crawlAttachmentsHasBeenSet = true; m_crawlAttachments = value; }
    inline ServiceNowServiceCatalogConfiguration& WithCrawlAttachments(bool value) { SetCrawlAttachments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to include certain attachments of
     * catalogs in your ServiceNow. Item that match the patterns are included in the
     * index. Items that don't match the patterns are excluded from the index. If an
     * item matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the item isn't included in the index.</p> <p>The regex is
     * applied to the file name of the attachment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeAttachmentFilePatterns() const { return m_includeAttachmentFilePatterns; }
    inline bool IncludeAttachmentFilePatternsHasBeenSet() const { return m_includeAttachmentFilePatternsHasBeenSet; }
    template<typename IncludeAttachmentFilePatternsT = Aws::Vector<Aws::String>>
    void SetIncludeAttachmentFilePatterns(IncludeAttachmentFilePatternsT&& value) { m_includeAttachmentFilePatternsHasBeenSet = true; m_includeAttachmentFilePatterns = std::forward<IncludeAttachmentFilePatternsT>(value); }
    template<typename IncludeAttachmentFilePatternsT = Aws::Vector<Aws::String>>
    ServiceNowServiceCatalogConfiguration& WithIncludeAttachmentFilePatterns(IncludeAttachmentFilePatternsT&& value) { SetIncludeAttachmentFilePatterns(std::forward<IncludeAttachmentFilePatternsT>(value)); return *this;}
    template<typename IncludeAttachmentFilePatternsT = Aws::String>
    ServiceNowServiceCatalogConfiguration& AddIncludeAttachmentFilePatterns(IncludeAttachmentFilePatternsT&& value) { m_includeAttachmentFilePatternsHasBeenSet = true; m_includeAttachmentFilePatterns.emplace_back(std::forward<IncludeAttachmentFilePatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of regular expression patterns to exclude certain attachments of
     * catalogs in your ServiceNow. Item that match the patterns are excluded from the
     * index. Items that don't match the patterns are included in the index. If an item
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the item isn't included in the index.</p> <p>The regex is applied
     * to the file name of the attachment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeAttachmentFilePatterns() const { return m_excludeAttachmentFilePatterns; }
    inline bool ExcludeAttachmentFilePatternsHasBeenSet() const { return m_excludeAttachmentFilePatternsHasBeenSet; }
    template<typename ExcludeAttachmentFilePatternsT = Aws::Vector<Aws::String>>
    void SetExcludeAttachmentFilePatterns(ExcludeAttachmentFilePatternsT&& value) { m_excludeAttachmentFilePatternsHasBeenSet = true; m_excludeAttachmentFilePatterns = std::forward<ExcludeAttachmentFilePatternsT>(value); }
    template<typename ExcludeAttachmentFilePatternsT = Aws::Vector<Aws::String>>
    ServiceNowServiceCatalogConfiguration& WithExcludeAttachmentFilePatterns(ExcludeAttachmentFilePatternsT&& value) { SetExcludeAttachmentFilePatterns(std::forward<ExcludeAttachmentFilePatternsT>(value)); return *this;}
    template<typename ExcludeAttachmentFilePatternsT = Aws::String>
    ServiceNowServiceCatalogConfiguration& AddExcludeAttachmentFilePatterns(ExcludeAttachmentFilePatternsT&& value) { m_excludeAttachmentFilePatternsHasBeenSet = true; m_excludeAttachmentFilePatterns.emplace_back(std::forward<ExcludeAttachmentFilePatternsT>(value)); return *this; }
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
    ServiceNowServiceCatalogConfiguration& WithDocumentDataFieldName(DocumentDataFieldNameT&& value) { SetDocumentDataFieldName(std::forward<DocumentDataFieldNameT>(value)); return *this;}
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
    ServiceNowServiceCatalogConfiguration& WithDocumentTitleFieldName(DocumentTitleFieldNameT&& value) { SetDocumentTitleFieldName(std::forward<DocumentTitleFieldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maps attributes or field names of catalogs to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to ServiceNow fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The ServiceNow data source field names must exist in
     * your ServiceNow custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFieldMappings() const { return m_fieldMappings; }
    inline bool FieldMappingsHasBeenSet() const { return m_fieldMappingsHasBeenSet; }
    template<typename FieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    void SetFieldMappings(FieldMappingsT&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = std::forward<FieldMappingsT>(value); }
    template<typename FieldMappingsT = Aws::Vector<DataSourceToIndexFieldMapping>>
    ServiceNowServiceCatalogConfiguration& WithFieldMappings(FieldMappingsT&& value) { SetFieldMappings(std::forward<FieldMappingsT>(value)); return *this;}
    template<typename FieldMappingsT = DataSourceToIndexFieldMapping>
    ServiceNowServiceCatalogConfiguration& AddFieldMappings(FieldMappingsT&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.emplace_back(std::forward<FieldMappingsT>(value)); return *this; }
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
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
