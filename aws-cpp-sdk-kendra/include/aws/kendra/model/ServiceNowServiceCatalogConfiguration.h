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
    AWS_KENDRA_API ServiceNowServiceCatalogConfiguration();
    AWS_KENDRA_API ServiceNowServiceCatalogConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ServiceNowServiceCatalogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> <code>TRUE</code> to index attachments to service catalog items.</p>
     */
    inline bool GetCrawlAttachments() const{ return m_crawlAttachments; }

    /**
     * <p> <code>TRUE</code> to index attachments to service catalog items.</p>
     */
    inline bool CrawlAttachmentsHasBeenSet() const { return m_crawlAttachmentsHasBeenSet; }

    /**
     * <p> <code>TRUE</code> to index attachments to service catalog items.</p>
     */
    inline void SetCrawlAttachments(bool value) { m_crawlAttachmentsHasBeenSet = true; m_crawlAttachments = value; }

    /**
     * <p> <code>TRUE</code> to index attachments to service catalog items.</p>
     */
    inline ServiceNowServiceCatalogConfiguration& WithCrawlAttachments(bool value) { SetCrawlAttachments(value); return *this;}


    /**
     * <p>A list of regular expression patterns to include certain attachments of
     * catalogs in your ServiceNow. Item that match the patterns are included in the
     * index. Items that don't match the patterns are excluded from the index. If an
     * item matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the item isn't included in the index.</p> <p>The regex is
     * applied to the file name of the attachment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludeAttachmentFilePatterns() const{ return m_includeAttachmentFilePatterns; }

    /**
     * <p>A list of regular expression patterns to include certain attachments of
     * catalogs in your ServiceNow. Item that match the patterns are included in the
     * index. Items that don't match the patterns are excluded from the index. If an
     * item matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the item isn't included in the index.</p> <p>The regex is
     * applied to the file name of the attachment.</p>
     */
    inline bool IncludeAttachmentFilePatternsHasBeenSet() const { return m_includeAttachmentFilePatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to include certain attachments of
     * catalogs in your ServiceNow. Item that match the patterns are included in the
     * index. Items that don't match the patterns are excluded from the index. If an
     * item matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the item isn't included in the index.</p> <p>The regex is
     * applied to the file name of the attachment.</p>
     */
    inline void SetIncludeAttachmentFilePatterns(const Aws::Vector<Aws::String>& value) { m_includeAttachmentFilePatternsHasBeenSet = true; m_includeAttachmentFilePatterns = value; }

    /**
     * <p>A list of regular expression patterns to include certain attachments of
     * catalogs in your ServiceNow. Item that match the patterns are included in the
     * index. Items that don't match the patterns are excluded from the index. If an
     * item matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the item isn't included in the index.</p> <p>The regex is
     * applied to the file name of the attachment.</p>
     */
    inline void SetIncludeAttachmentFilePatterns(Aws::Vector<Aws::String>&& value) { m_includeAttachmentFilePatternsHasBeenSet = true; m_includeAttachmentFilePatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to include certain attachments of
     * catalogs in your ServiceNow. Item that match the patterns are included in the
     * index. Items that don't match the patterns are excluded from the index. If an
     * item matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the item isn't included in the index.</p> <p>The regex is
     * applied to the file name of the attachment.</p>
     */
    inline ServiceNowServiceCatalogConfiguration& WithIncludeAttachmentFilePatterns(const Aws::Vector<Aws::String>& value) { SetIncludeAttachmentFilePatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain attachments of
     * catalogs in your ServiceNow. Item that match the patterns are included in the
     * index. Items that don't match the patterns are excluded from the index. If an
     * item matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the item isn't included in the index.</p> <p>The regex is
     * applied to the file name of the attachment.</p>
     */
    inline ServiceNowServiceCatalogConfiguration& WithIncludeAttachmentFilePatterns(Aws::Vector<Aws::String>&& value) { SetIncludeAttachmentFilePatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to include certain attachments of
     * catalogs in your ServiceNow. Item that match the patterns are included in the
     * index. Items that don't match the patterns are excluded from the index. If an
     * item matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the item isn't included in the index.</p> <p>The regex is
     * applied to the file name of the attachment.</p>
     */
    inline ServiceNowServiceCatalogConfiguration& AddIncludeAttachmentFilePatterns(const Aws::String& value) { m_includeAttachmentFilePatternsHasBeenSet = true; m_includeAttachmentFilePatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain attachments of
     * catalogs in your ServiceNow. Item that match the patterns are included in the
     * index. Items that don't match the patterns are excluded from the index. If an
     * item matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the item isn't included in the index.</p> <p>The regex is
     * applied to the file name of the attachment.</p>
     */
    inline ServiceNowServiceCatalogConfiguration& AddIncludeAttachmentFilePatterns(Aws::String&& value) { m_includeAttachmentFilePatternsHasBeenSet = true; m_includeAttachmentFilePatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to include certain attachments of
     * catalogs in your ServiceNow. Item that match the patterns are included in the
     * index. Items that don't match the patterns are excluded from the index. If an
     * item matches both an inclusion and exclusion pattern, the exclusion pattern
     * takes precedence and the item isn't included in the index.</p> <p>The regex is
     * applied to the file name of the attachment.</p>
     */
    inline ServiceNowServiceCatalogConfiguration& AddIncludeAttachmentFilePatterns(const char* value) { m_includeAttachmentFilePatternsHasBeenSet = true; m_includeAttachmentFilePatterns.push_back(value); return *this; }


    /**
     * <p>A list of regular expression patterns to exclude certain attachments of
     * catalogs in your ServiceNow. Item that match the patterns are excluded from the
     * index. Items that don't match the patterns are included in the index. If an item
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the item isn't included in the index.</p> <p>The regex is applied
     * to the file name of the attachment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeAttachmentFilePatterns() const{ return m_excludeAttachmentFilePatterns; }

    /**
     * <p>A list of regular expression patterns to exclude certain attachments of
     * catalogs in your ServiceNow. Item that match the patterns are excluded from the
     * index. Items that don't match the patterns are included in the index. If an item
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the item isn't included in the index.</p> <p>The regex is applied
     * to the file name of the attachment.</p>
     */
    inline bool ExcludeAttachmentFilePatternsHasBeenSet() const { return m_excludeAttachmentFilePatternsHasBeenSet; }

    /**
     * <p>A list of regular expression patterns to exclude certain attachments of
     * catalogs in your ServiceNow. Item that match the patterns are excluded from the
     * index. Items that don't match the patterns are included in the index. If an item
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the item isn't included in the index.</p> <p>The regex is applied
     * to the file name of the attachment.</p>
     */
    inline void SetExcludeAttachmentFilePatterns(const Aws::Vector<Aws::String>& value) { m_excludeAttachmentFilePatternsHasBeenSet = true; m_excludeAttachmentFilePatterns = value; }

    /**
     * <p>A list of regular expression patterns to exclude certain attachments of
     * catalogs in your ServiceNow. Item that match the patterns are excluded from the
     * index. Items that don't match the patterns are included in the index. If an item
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the item isn't included in the index.</p> <p>The regex is applied
     * to the file name of the attachment.</p>
     */
    inline void SetExcludeAttachmentFilePatterns(Aws::Vector<Aws::String>&& value) { m_excludeAttachmentFilePatternsHasBeenSet = true; m_excludeAttachmentFilePatterns = std::move(value); }

    /**
     * <p>A list of regular expression patterns to exclude certain attachments of
     * catalogs in your ServiceNow. Item that match the patterns are excluded from the
     * index. Items that don't match the patterns are included in the index. If an item
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the item isn't included in the index.</p> <p>The regex is applied
     * to the file name of the attachment.</p>
     */
    inline ServiceNowServiceCatalogConfiguration& WithExcludeAttachmentFilePatterns(const Aws::Vector<Aws::String>& value) { SetExcludeAttachmentFilePatterns(value); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain attachments of
     * catalogs in your ServiceNow. Item that match the patterns are excluded from the
     * index. Items that don't match the patterns are included in the index. If an item
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the item isn't included in the index.</p> <p>The regex is applied
     * to the file name of the attachment.</p>
     */
    inline ServiceNowServiceCatalogConfiguration& WithExcludeAttachmentFilePatterns(Aws::Vector<Aws::String>&& value) { SetExcludeAttachmentFilePatterns(std::move(value)); return *this;}

    /**
     * <p>A list of regular expression patterns to exclude certain attachments of
     * catalogs in your ServiceNow. Item that match the patterns are excluded from the
     * index. Items that don't match the patterns are included in the index. If an item
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the item isn't included in the index.</p> <p>The regex is applied
     * to the file name of the attachment.</p>
     */
    inline ServiceNowServiceCatalogConfiguration& AddExcludeAttachmentFilePatterns(const Aws::String& value) { m_excludeAttachmentFilePatternsHasBeenSet = true; m_excludeAttachmentFilePatterns.push_back(value); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain attachments of
     * catalogs in your ServiceNow. Item that match the patterns are excluded from the
     * index. Items that don't match the patterns are included in the index. If an item
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the item isn't included in the index.</p> <p>The regex is applied
     * to the file name of the attachment.</p>
     */
    inline ServiceNowServiceCatalogConfiguration& AddExcludeAttachmentFilePatterns(Aws::String&& value) { m_excludeAttachmentFilePatternsHasBeenSet = true; m_excludeAttachmentFilePatterns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of regular expression patterns to exclude certain attachments of
     * catalogs in your ServiceNow. Item that match the patterns are excluded from the
     * index. Items that don't match the patterns are included in the index. If an item
     * matches both an inclusion and exclusion pattern, the exclusion pattern takes
     * precedence and the item isn't included in the index.</p> <p>The regex is applied
     * to the file name of the attachment.</p>
     */
    inline ServiceNowServiceCatalogConfiguration& AddExcludeAttachmentFilePatterns(const char* value) { m_excludeAttachmentFilePatternsHasBeenSet = true; m_excludeAttachmentFilePatterns.push_back(value); return *this; }


    /**
     * <p>The name of the ServiceNow field that is mapped to the index document
     * contents field in the Amazon Kendra index.</p>
     */
    inline const Aws::String& GetDocumentDataFieldName() const{ return m_documentDataFieldName; }

    /**
     * <p>The name of the ServiceNow field that is mapped to the index document
     * contents field in the Amazon Kendra index.</p>
     */
    inline bool DocumentDataFieldNameHasBeenSet() const { return m_documentDataFieldNameHasBeenSet; }

    /**
     * <p>The name of the ServiceNow field that is mapped to the index document
     * contents field in the Amazon Kendra index.</p>
     */
    inline void SetDocumentDataFieldName(const Aws::String& value) { m_documentDataFieldNameHasBeenSet = true; m_documentDataFieldName = value; }

    /**
     * <p>The name of the ServiceNow field that is mapped to the index document
     * contents field in the Amazon Kendra index.</p>
     */
    inline void SetDocumentDataFieldName(Aws::String&& value) { m_documentDataFieldNameHasBeenSet = true; m_documentDataFieldName = std::move(value); }

    /**
     * <p>The name of the ServiceNow field that is mapped to the index document
     * contents field in the Amazon Kendra index.</p>
     */
    inline void SetDocumentDataFieldName(const char* value) { m_documentDataFieldNameHasBeenSet = true; m_documentDataFieldName.assign(value); }

    /**
     * <p>The name of the ServiceNow field that is mapped to the index document
     * contents field in the Amazon Kendra index.</p>
     */
    inline ServiceNowServiceCatalogConfiguration& WithDocumentDataFieldName(const Aws::String& value) { SetDocumentDataFieldName(value); return *this;}

    /**
     * <p>The name of the ServiceNow field that is mapped to the index document
     * contents field in the Amazon Kendra index.</p>
     */
    inline ServiceNowServiceCatalogConfiguration& WithDocumentDataFieldName(Aws::String&& value) { SetDocumentDataFieldName(std::move(value)); return *this;}

    /**
     * <p>The name of the ServiceNow field that is mapped to the index document
     * contents field in the Amazon Kendra index.</p>
     */
    inline ServiceNowServiceCatalogConfiguration& WithDocumentDataFieldName(const char* value) { SetDocumentDataFieldName(value); return *this;}


    /**
     * <p>The name of the ServiceNow field that is mapped to the index document title
     * field.</p>
     */
    inline const Aws::String& GetDocumentTitleFieldName() const{ return m_documentTitleFieldName; }

    /**
     * <p>The name of the ServiceNow field that is mapped to the index document title
     * field.</p>
     */
    inline bool DocumentTitleFieldNameHasBeenSet() const { return m_documentTitleFieldNameHasBeenSet; }

    /**
     * <p>The name of the ServiceNow field that is mapped to the index document title
     * field.</p>
     */
    inline void SetDocumentTitleFieldName(const Aws::String& value) { m_documentTitleFieldNameHasBeenSet = true; m_documentTitleFieldName = value; }

    /**
     * <p>The name of the ServiceNow field that is mapped to the index document title
     * field.</p>
     */
    inline void SetDocumentTitleFieldName(Aws::String&& value) { m_documentTitleFieldNameHasBeenSet = true; m_documentTitleFieldName = std::move(value); }

    /**
     * <p>The name of the ServiceNow field that is mapped to the index document title
     * field.</p>
     */
    inline void SetDocumentTitleFieldName(const char* value) { m_documentTitleFieldNameHasBeenSet = true; m_documentTitleFieldName.assign(value); }

    /**
     * <p>The name of the ServiceNow field that is mapped to the index document title
     * field.</p>
     */
    inline ServiceNowServiceCatalogConfiguration& WithDocumentTitleFieldName(const Aws::String& value) { SetDocumentTitleFieldName(value); return *this;}

    /**
     * <p>The name of the ServiceNow field that is mapped to the index document title
     * field.</p>
     */
    inline ServiceNowServiceCatalogConfiguration& WithDocumentTitleFieldName(Aws::String&& value) { SetDocumentTitleFieldName(std::move(value)); return *this;}

    /**
     * <p>The name of the ServiceNow field that is mapped to the index document title
     * field.</p>
     */
    inline ServiceNowServiceCatalogConfiguration& WithDocumentTitleFieldName(const char* value) { SetDocumentTitleFieldName(value); return *this;}


    /**
     * <p>Maps attributes or field names of catalogs to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to ServiceNow fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The ServiceNow data source field names must exist in
     * your ServiceNow custom metadata.</p>
     */
    inline const Aws::Vector<DataSourceToIndexFieldMapping>& GetFieldMappings() const{ return m_fieldMappings; }

    /**
     * <p>Maps attributes or field names of catalogs to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to ServiceNow fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The ServiceNow data source field names must exist in
     * your ServiceNow custom metadata.</p>
     */
    inline bool FieldMappingsHasBeenSet() const { return m_fieldMappingsHasBeenSet; }

    /**
     * <p>Maps attributes or field names of catalogs to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to ServiceNow fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The ServiceNow data source field names must exist in
     * your ServiceNow custom metadata.</p>
     */
    inline void SetFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = value; }

    /**
     * <p>Maps attributes or field names of catalogs to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to ServiceNow fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The ServiceNow data source field names must exist in
     * your ServiceNow custom metadata.</p>
     */
    inline void SetFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings = std::move(value); }

    /**
     * <p>Maps attributes or field names of catalogs to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to ServiceNow fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The ServiceNow data source field names must exist in
     * your ServiceNow custom metadata.</p>
     */
    inline ServiceNowServiceCatalogConfiguration& WithFieldMappings(const Aws::Vector<DataSourceToIndexFieldMapping>& value) { SetFieldMappings(value); return *this;}

    /**
     * <p>Maps attributes or field names of catalogs to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to ServiceNow fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The ServiceNow data source field names must exist in
     * your ServiceNow custom metadata.</p>
     */
    inline ServiceNowServiceCatalogConfiguration& WithFieldMappings(Aws::Vector<DataSourceToIndexFieldMapping>&& value) { SetFieldMappings(std::move(value)); return *this;}

    /**
     * <p>Maps attributes or field names of catalogs to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to ServiceNow fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The ServiceNow data source field names must exist in
     * your ServiceNow custom metadata.</p>
     */
    inline ServiceNowServiceCatalogConfiguration& AddFieldMappings(const DataSourceToIndexFieldMapping& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(value); return *this; }

    /**
     * <p>Maps attributes or field names of catalogs to Amazon Kendra index field
     * names. To create custom fields, use the <code>UpdateIndex</code> API before you
     * map to ServiceNow fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The ServiceNow data source field names must exist in
     * your ServiceNow custom metadata.</p>
     */
    inline ServiceNowServiceCatalogConfiguration& AddFieldMappings(DataSourceToIndexFieldMapping&& value) { m_fieldMappingsHasBeenSet = true; m_fieldMappings.push_back(std::move(value)); return *this; }

  private:

    bool m_crawlAttachments;
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
