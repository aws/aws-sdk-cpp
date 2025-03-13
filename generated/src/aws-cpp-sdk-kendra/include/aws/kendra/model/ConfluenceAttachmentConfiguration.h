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
    AWS_KENDRA_API ConfluenceAttachmentConfiguration() = default;
    AWS_KENDRA_API ConfluenceAttachmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ConfluenceAttachmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> <code>TRUE</code> to index attachments of pages and blogs in Confluence.</p>
     */
    inline bool GetCrawlAttachments() const { return m_crawlAttachments; }
    inline bool CrawlAttachmentsHasBeenSet() const { return m_crawlAttachmentsHasBeenSet; }
    inline void SetCrawlAttachments(bool value) { m_crawlAttachmentsHasBeenSet = true; m_crawlAttachments = value; }
    inline ConfluenceAttachmentConfiguration& WithCrawlAttachments(bool value) { SetCrawlAttachments(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Vector<ConfluenceAttachmentToIndexFieldMapping>& GetAttachmentFieldMappings() const { return m_attachmentFieldMappings; }
    inline bool AttachmentFieldMappingsHasBeenSet() const { return m_attachmentFieldMappingsHasBeenSet; }
    template<typename AttachmentFieldMappingsT = Aws::Vector<ConfluenceAttachmentToIndexFieldMapping>>
    void SetAttachmentFieldMappings(AttachmentFieldMappingsT&& value) { m_attachmentFieldMappingsHasBeenSet = true; m_attachmentFieldMappings = std::forward<AttachmentFieldMappingsT>(value); }
    template<typename AttachmentFieldMappingsT = Aws::Vector<ConfluenceAttachmentToIndexFieldMapping>>
    ConfluenceAttachmentConfiguration& WithAttachmentFieldMappings(AttachmentFieldMappingsT&& value) { SetAttachmentFieldMappings(std::forward<AttachmentFieldMappingsT>(value)); return *this;}
    template<typename AttachmentFieldMappingsT = ConfluenceAttachmentToIndexFieldMapping>
    ConfluenceAttachmentConfiguration& AddAttachmentFieldMappings(AttachmentFieldMappingsT&& value) { m_attachmentFieldMappingsHasBeenSet = true; m_attachmentFieldMappings.emplace_back(std::forward<AttachmentFieldMappingsT>(value)); return *this; }
    ///@}
  private:

    bool m_crawlAttachments{false};
    bool m_crawlAttachmentsHasBeenSet = false;

    Aws::Vector<ConfluenceAttachmentToIndexFieldMapping> m_attachmentFieldMappings;
    bool m_attachmentFieldMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
