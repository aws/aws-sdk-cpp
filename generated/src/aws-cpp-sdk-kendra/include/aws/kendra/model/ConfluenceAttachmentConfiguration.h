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
   * <p>Configuration of attachment settings for the Confluence data source.
   * Attachment settings are optional, if you don't specify settings attachments,
   * Amazon Kendra won't index them.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ConfluenceAttachmentConfiguration">AWS
   * API Reference</a></p>
   */
  class ConfluenceAttachmentConfiguration
  {
  public:
    AWS_KENDRA_API ConfluenceAttachmentConfiguration();
    AWS_KENDRA_API ConfluenceAttachmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ConfluenceAttachmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> <code>TRUE</code> to index attachments of pages and blogs in Confluence.</p>
     */
    inline bool GetCrawlAttachments() const{ return m_crawlAttachments; }

    /**
     * <p> <code>TRUE</code> to index attachments of pages and blogs in Confluence.</p>
     */
    inline bool CrawlAttachmentsHasBeenSet() const { return m_crawlAttachmentsHasBeenSet; }

    /**
     * <p> <code>TRUE</code> to index attachments of pages and blogs in Confluence.</p>
     */
    inline void SetCrawlAttachments(bool value) { m_crawlAttachmentsHasBeenSet = true; m_crawlAttachments = value; }

    /**
     * <p> <code>TRUE</code> to index attachments of pages and blogs in Confluence.</p>
     */
    inline ConfluenceAttachmentConfiguration& WithCrawlAttachments(bool value) { SetCrawlAttachments(value); return *this;}


    /**
     * <p>Maps attributes or field names of Confluence attachments to Amazon Kendra
     * index field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>AttachentFieldMappings</code> parameter, you must specify at least one
     * field mapping.</p>
     */
    inline const Aws::Vector<ConfluenceAttachmentToIndexFieldMapping>& GetAttachmentFieldMappings() const{ return m_attachmentFieldMappings; }

    /**
     * <p>Maps attributes or field names of Confluence attachments to Amazon Kendra
     * index field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>AttachentFieldMappings</code> parameter, you must specify at least one
     * field mapping.</p>
     */
    inline bool AttachmentFieldMappingsHasBeenSet() const { return m_attachmentFieldMappingsHasBeenSet; }

    /**
     * <p>Maps attributes or field names of Confluence attachments to Amazon Kendra
     * index field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>AttachentFieldMappings</code> parameter, you must specify at least one
     * field mapping.</p>
     */
    inline void SetAttachmentFieldMappings(const Aws::Vector<ConfluenceAttachmentToIndexFieldMapping>& value) { m_attachmentFieldMappingsHasBeenSet = true; m_attachmentFieldMappings = value; }

    /**
     * <p>Maps attributes or field names of Confluence attachments to Amazon Kendra
     * index field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>AttachentFieldMappings</code> parameter, you must specify at least one
     * field mapping.</p>
     */
    inline void SetAttachmentFieldMappings(Aws::Vector<ConfluenceAttachmentToIndexFieldMapping>&& value) { m_attachmentFieldMappingsHasBeenSet = true; m_attachmentFieldMappings = std::move(value); }

    /**
     * <p>Maps attributes or field names of Confluence attachments to Amazon Kendra
     * index field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>AttachentFieldMappings</code> parameter, you must specify at least one
     * field mapping.</p>
     */
    inline ConfluenceAttachmentConfiguration& WithAttachmentFieldMappings(const Aws::Vector<ConfluenceAttachmentToIndexFieldMapping>& value) { SetAttachmentFieldMappings(value); return *this;}

    /**
     * <p>Maps attributes or field names of Confluence attachments to Amazon Kendra
     * index field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>AttachentFieldMappings</code> parameter, you must specify at least one
     * field mapping.</p>
     */
    inline ConfluenceAttachmentConfiguration& WithAttachmentFieldMappings(Aws::Vector<ConfluenceAttachmentToIndexFieldMapping>&& value) { SetAttachmentFieldMappings(std::move(value)); return *this;}

    /**
     * <p>Maps attributes or field names of Confluence attachments to Amazon Kendra
     * index field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>AttachentFieldMappings</code> parameter, you must specify at least one
     * field mapping.</p>
     */
    inline ConfluenceAttachmentConfiguration& AddAttachmentFieldMappings(const ConfluenceAttachmentToIndexFieldMapping& value) { m_attachmentFieldMappingsHasBeenSet = true; m_attachmentFieldMappings.push_back(value); return *this; }

    /**
     * <p>Maps attributes or field names of Confluence attachments to Amazon Kendra
     * index field names. To create custom fields, use the <code>UpdateIndex</code> API
     * before you map to Confluence fields. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/field-mapping.html">Mapping
     * data source fields</a>. The Confluence data source field names must exist in
     * your Confluence custom metadata.</p> <p>If you specify the
     * <code>AttachentFieldMappings</code> parameter, you must specify at least one
     * field mapping.</p>
     */
    inline ConfluenceAttachmentConfiguration& AddAttachmentFieldMappings(ConfluenceAttachmentToIndexFieldMapping&& value) { m_attachmentFieldMappingsHasBeenSet = true; m_attachmentFieldMappings.push_back(std::move(value)); return *this; }

  private:

    bool m_crawlAttachments;
    bool m_crawlAttachmentsHasBeenSet = false;

    Aws::Vector<ConfluenceAttachmentToIndexFieldMapping> m_attachmentFieldMappings;
    bool m_attachmentFieldMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
