/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/ConfluenceAttachmentToIndexFieldMapping.h>
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
   * <p>Specifies the attachment settings for the Confluence data source. Attachment
   * settings are optional, if you don't specify settings attachments, Amazon Kendra
   * won't index them.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ConfluenceAttachmentConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API ConfluenceAttachmentConfiguration
  {
  public:
    ConfluenceAttachmentConfiguration();
    ConfluenceAttachmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ConfluenceAttachmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether Amazon Kendra indexes attachments to the pages and blogs in
     * the Confluence data source. </p>
     */
    inline bool GetCrawlAttachments() const{ return m_crawlAttachments; }

    /**
     * <p>Indicates whether Amazon Kendra indexes attachments to the pages and blogs in
     * the Confluence data source. </p>
     */
    inline bool CrawlAttachmentsHasBeenSet() const { return m_crawlAttachmentsHasBeenSet; }

    /**
     * <p>Indicates whether Amazon Kendra indexes attachments to the pages and blogs in
     * the Confluence data source. </p>
     */
    inline void SetCrawlAttachments(bool value) { m_crawlAttachmentsHasBeenSet = true; m_crawlAttachments = value; }

    /**
     * <p>Indicates whether Amazon Kendra indexes attachments to the pages and blogs in
     * the Confluence data source. </p>
     */
    inline ConfluenceAttachmentConfiguration& WithCrawlAttachments(bool value) { SetCrawlAttachments(value); return *this;}


    /**
     * <p>Defines how attachment metadata fields should be mapped to index fields.
     * Before you can map a field, you must first create an index field with a matching
     * type using the console or the <code>UpdateIndex</code> operation.</p> <p>If you
     * specify the <code>AttachentFieldMappings</code> parameter, you must specify at
     * least one field mapping.</p>
     */
    inline const Aws::Vector<ConfluenceAttachmentToIndexFieldMapping>& GetAttachmentFieldMappings() const{ return m_attachmentFieldMappings; }

    /**
     * <p>Defines how attachment metadata fields should be mapped to index fields.
     * Before you can map a field, you must first create an index field with a matching
     * type using the console or the <code>UpdateIndex</code> operation.</p> <p>If you
     * specify the <code>AttachentFieldMappings</code> parameter, you must specify at
     * least one field mapping.</p>
     */
    inline bool AttachmentFieldMappingsHasBeenSet() const { return m_attachmentFieldMappingsHasBeenSet; }

    /**
     * <p>Defines how attachment metadata fields should be mapped to index fields.
     * Before you can map a field, you must first create an index field with a matching
     * type using the console or the <code>UpdateIndex</code> operation.</p> <p>If you
     * specify the <code>AttachentFieldMappings</code> parameter, you must specify at
     * least one field mapping.</p>
     */
    inline void SetAttachmentFieldMappings(const Aws::Vector<ConfluenceAttachmentToIndexFieldMapping>& value) { m_attachmentFieldMappingsHasBeenSet = true; m_attachmentFieldMappings = value; }

    /**
     * <p>Defines how attachment metadata fields should be mapped to index fields.
     * Before you can map a field, you must first create an index field with a matching
     * type using the console or the <code>UpdateIndex</code> operation.</p> <p>If you
     * specify the <code>AttachentFieldMappings</code> parameter, you must specify at
     * least one field mapping.</p>
     */
    inline void SetAttachmentFieldMappings(Aws::Vector<ConfluenceAttachmentToIndexFieldMapping>&& value) { m_attachmentFieldMappingsHasBeenSet = true; m_attachmentFieldMappings = std::move(value); }

    /**
     * <p>Defines how attachment metadata fields should be mapped to index fields.
     * Before you can map a field, you must first create an index field with a matching
     * type using the console or the <code>UpdateIndex</code> operation.</p> <p>If you
     * specify the <code>AttachentFieldMappings</code> parameter, you must specify at
     * least one field mapping.</p>
     */
    inline ConfluenceAttachmentConfiguration& WithAttachmentFieldMappings(const Aws::Vector<ConfluenceAttachmentToIndexFieldMapping>& value) { SetAttachmentFieldMappings(value); return *this;}

    /**
     * <p>Defines how attachment metadata fields should be mapped to index fields.
     * Before you can map a field, you must first create an index field with a matching
     * type using the console or the <code>UpdateIndex</code> operation.</p> <p>If you
     * specify the <code>AttachentFieldMappings</code> parameter, you must specify at
     * least one field mapping.</p>
     */
    inline ConfluenceAttachmentConfiguration& WithAttachmentFieldMappings(Aws::Vector<ConfluenceAttachmentToIndexFieldMapping>&& value) { SetAttachmentFieldMappings(std::move(value)); return *this;}

    /**
     * <p>Defines how attachment metadata fields should be mapped to index fields.
     * Before you can map a field, you must first create an index field with a matching
     * type using the console or the <code>UpdateIndex</code> operation.</p> <p>If you
     * specify the <code>AttachentFieldMappings</code> parameter, you must specify at
     * least one field mapping.</p>
     */
    inline ConfluenceAttachmentConfiguration& AddAttachmentFieldMappings(const ConfluenceAttachmentToIndexFieldMapping& value) { m_attachmentFieldMappingsHasBeenSet = true; m_attachmentFieldMappings.push_back(value); return *this; }

    /**
     * <p>Defines how attachment metadata fields should be mapped to index fields.
     * Before you can map a field, you must first create an index field with a matching
     * type using the console or the <code>UpdateIndex</code> operation.</p> <p>If you
     * specify the <code>AttachentFieldMappings</code> parameter, you must specify at
     * least one field mapping.</p>
     */
    inline ConfluenceAttachmentConfiguration& AddAttachmentFieldMappings(ConfluenceAttachmentToIndexFieldMapping&& value) { m_attachmentFieldMappingsHasBeenSet = true; m_attachmentFieldMappings.push_back(std::move(value)); return *this; }

  private:

    bool m_crawlAttachments;
    bool m_crawlAttachmentsHasBeenSet;

    Aws::Vector<ConfluenceAttachmentToIndexFieldMapping> m_attachmentFieldMappings;
    bool m_attachmentFieldMappingsHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
