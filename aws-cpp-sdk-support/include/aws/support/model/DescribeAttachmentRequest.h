/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <utility>

namespace Aws
{
namespace Support
{
namespace Model
{

  /**
   */
  class AWS_SUPPORT_API DescribeAttachmentRequest : public SupportRequest
  {
  public:
    DescribeAttachmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAttachment"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the attachment to return. Attachment IDs are returned by the
     * <a>DescribeCommunications</a> operation.</p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }

    /**
     * <p>The ID of the attachment to return. Attachment IDs are returned by the
     * <a>DescribeCommunications</a> operation.</p>
     */
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }

    /**
     * <p>The ID of the attachment to return. Attachment IDs are returned by the
     * <a>DescribeCommunications</a> operation.</p>
     */
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }

    /**
     * <p>The ID of the attachment to return. Attachment IDs are returned by the
     * <a>DescribeCommunications</a> operation.</p>
     */
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::move(value); }

    /**
     * <p>The ID of the attachment to return. Attachment IDs are returned by the
     * <a>DescribeCommunications</a> operation.</p>
     */
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }

    /**
     * <p>The ID of the attachment to return. Attachment IDs are returned by the
     * <a>DescribeCommunications</a> operation.</p>
     */
    inline DescribeAttachmentRequest& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}

    /**
     * <p>The ID of the attachment to return. Attachment IDs are returned by the
     * <a>DescribeCommunications</a> operation.</p>
     */
    inline DescribeAttachmentRequest& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the attachment to return. Attachment IDs are returned by the
     * <a>DescribeCommunications</a> operation.</p>
     */
    inline DescribeAttachmentRequest& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}

  private:

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
