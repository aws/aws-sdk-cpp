/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/SupportRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support/model/Attachment.h>

namespace Aws
{
namespace Support
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_SUPPORT_API AddAttachmentsToSetRequest : public SupportRequest
  {
  public:
    AddAttachmentsToSetRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ID of the attachment set. If an <code>attachmentSetId</code> is not
     * specified, a new attachment set is created, and the ID of the set is returned in
     * the response. If an <code>attachmentSetId</code> is specified, the attachments
     * are added to the specified set, if it exists.</p>
     */
    inline const Aws::String& GetAttachmentSetId() const{ return m_attachmentSetId; }

    /**
     * <p>The ID of the attachment set. If an <code>attachmentSetId</code> is not
     * specified, a new attachment set is created, and the ID of the set is returned in
     * the response. If an <code>attachmentSetId</code> is specified, the attachments
     * are added to the specified set, if it exists.</p>
     */
    inline void SetAttachmentSetId(const Aws::String& value) { m_attachmentSetIdHasBeenSet = true; m_attachmentSetId = value; }

    /**
     * <p>The ID of the attachment set. If an <code>attachmentSetId</code> is not
     * specified, a new attachment set is created, and the ID of the set is returned in
     * the response. If an <code>attachmentSetId</code> is specified, the attachments
     * are added to the specified set, if it exists.</p>
     */
    inline void SetAttachmentSetId(Aws::String&& value) { m_attachmentSetIdHasBeenSet = true; m_attachmentSetId = value; }

    /**
     * <p>The ID of the attachment set. If an <code>attachmentSetId</code> is not
     * specified, a new attachment set is created, and the ID of the set is returned in
     * the response. If an <code>attachmentSetId</code> is specified, the attachments
     * are added to the specified set, if it exists.</p>
     */
    inline void SetAttachmentSetId(const char* value) { m_attachmentSetIdHasBeenSet = true; m_attachmentSetId.assign(value); }

    /**
     * <p>The ID of the attachment set. If an <code>attachmentSetId</code> is not
     * specified, a new attachment set is created, and the ID of the set is returned in
     * the response. If an <code>attachmentSetId</code> is specified, the attachments
     * are added to the specified set, if it exists.</p>
     */
    inline AddAttachmentsToSetRequest& WithAttachmentSetId(const Aws::String& value) { SetAttachmentSetId(value); return *this;}

    /**
     * <p>The ID of the attachment set. If an <code>attachmentSetId</code> is not
     * specified, a new attachment set is created, and the ID of the set is returned in
     * the response. If an <code>attachmentSetId</code> is specified, the attachments
     * are added to the specified set, if it exists.</p>
     */
    inline AddAttachmentsToSetRequest& WithAttachmentSetId(Aws::String&& value) { SetAttachmentSetId(value); return *this;}

    /**
     * <p>The ID of the attachment set. If an <code>attachmentSetId</code> is not
     * specified, a new attachment set is created, and the ID of the set is returned in
     * the response. If an <code>attachmentSetId</code> is specified, the attachments
     * are added to the specified set, if it exists.</p>
     */
    inline AddAttachmentsToSetRequest& WithAttachmentSetId(const char* value) { SetAttachmentSetId(value); return *this;}

    /**
     * <p>One or more attachments to add to the set. The limit is 3 attachments per
     * set, and the size limit is 5 MB per attachment.</p>
     */
    inline const Aws::Vector<Attachment>& GetAttachments() const{ return m_attachments; }

    /**
     * <p>One or more attachments to add to the set. The limit is 3 attachments per
     * set, and the size limit is 5 MB per attachment.</p>
     */
    inline void SetAttachments(const Aws::Vector<Attachment>& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }

    /**
     * <p>One or more attachments to add to the set. The limit is 3 attachments per
     * set, and the size limit is 5 MB per attachment.</p>
     */
    inline void SetAttachments(Aws::Vector<Attachment>&& value) { m_attachmentsHasBeenSet = true; m_attachments = value; }

    /**
     * <p>One or more attachments to add to the set. The limit is 3 attachments per
     * set, and the size limit is 5 MB per attachment.</p>
     */
    inline AddAttachmentsToSetRequest& WithAttachments(const Aws::Vector<Attachment>& value) { SetAttachments(value); return *this;}

    /**
     * <p>One or more attachments to add to the set. The limit is 3 attachments per
     * set, and the size limit is 5 MB per attachment.</p>
     */
    inline AddAttachmentsToSetRequest& WithAttachments(Aws::Vector<Attachment>&& value) { SetAttachments(value); return *this;}

    /**
     * <p>One or more attachments to add to the set. The limit is 3 attachments per
     * set, and the size limit is 5 MB per attachment.</p>
     */
    inline AddAttachmentsToSetRequest& AddAttachments(const Attachment& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }

    /**
     * <p>One or more attachments to add to the set. The limit is 3 attachments per
     * set, and the size limit is 5 MB per attachment.</p>
     */
    inline AddAttachmentsToSetRequest& AddAttachments(Attachment&& value) { m_attachmentsHasBeenSet = true; m_attachments.push_back(value); return *this; }

  private:
    Aws::String m_attachmentSetId;
    bool m_attachmentSetIdHasBeenSet;
    Aws::Vector<Attachment> m_attachments;
    bool m_attachmentsHasBeenSet;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
