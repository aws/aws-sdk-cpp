/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/UrlReference.h>
#include <aws/connect/model/AttachmentReference.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains summary information about a reference. <code>ReferenceSummary</code>
   * contains only one non null field between the URL and attachment based on the
   * reference type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ReferenceSummary">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API ReferenceSummary
  {
  public:
    ReferenceSummary();
    ReferenceSummary(Aws::Utils::Json::JsonView jsonValue);
    ReferenceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the URL reference if the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null.</p>
     */
    inline const UrlReference& GetUrl() const{ return m_url; }

    /**
     * <p>Information about the URL reference if the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>Information about the URL reference if the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null.</p>
     */
    inline void SetUrl(const UrlReference& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>Information about the URL reference if the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null.</p>
     */
    inline void SetUrl(UrlReference&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>Information about the URL reference if the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null.</p>
     */
    inline ReferenceSummary& WithUrl(const UrlReference& value) { SetUrl(value); return *this;}

    /**
     * <p>Information about the URL reference if the <code>referenceType</code> is
     * <code>URL</code>. Otherwise, null.</p>
     */
    inline ReferenceSummary& WithUrl(UrlReference&& value) { SetUrl(std::move(value)); return *this;}


    /**
     * <p>Information about the attachment reference if the <code>referenceType</code>
     * is <code>ATTACHMENT</code>. Otherwise, null.</p>
     */
    inline const AttachmentReference& GetAttachment() const{ return m_attachment; }

    /**
     * <p>Information about the attachment reference if the <code>referenceType</code>
     * is <code>ATTACHMENT</code>. Otherwise, null.</p>
     */
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }

    /**
     * <p>Information about the attachment reference if the <code>referenceType</code>
     * is <code>ATTACHMENT</code>. Otherwise, null.</p>
     */
    inline void SetAttachment(const AttachmentReference& value) { m_attachmentHasBeenSet = true; m_attachment = value; }

    /**
     * <p>Information about the attachment reference if the <code>referenceType</code>
     * is <code>ATTACHMENT</code>. Otherwise, null.</p>
     */
    inline void SetAttachment(AttachmentReference&& value) { m_attachmentHasBeenSet = true; m_attachment = std::move(value); }

    /**
     * <p>Information about the attachment reference if the <code>referenceType</code>
     * is <code>ATTACHMENT</code>. Otherwise, null.</p>
     */
    inline ReferenceSummary& WithAttachment(const AttachmentReference& value) { SetAttachment(value); return *this;}

    /**
     * <p>Information about the attachment reference if the <code>referenceType</code>
     * is <code>ATTACHMENT</code>. Otherwise, null.</p>
     */
    inline ReferenceSummary& WithAttachment(AttachmentReference&& value) { SetAttachment(std::move(value)); return *this;}

  private:

    UrlReference m_url;
    bool m_urlHasBeenSet;

    AttachmentReference m_attachment;
    bool m_attachmentHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
