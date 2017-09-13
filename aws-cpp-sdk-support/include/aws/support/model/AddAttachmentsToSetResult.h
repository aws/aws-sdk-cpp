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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Support
{
namespace Model
{
  /**
   * <p>The ID and expiry time of the attachment set returned by the
   * <a>AddAttachmentsToSet</a> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/AddAttachmentsToSetResponse">AWS
   * API Reference</a></p>
   */
  class AWS_SUPPORT_API AddAttachmentsToSetResult
  {
  public:
    AddAttachmentsToSetResult();
    AddAttachmentsToSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AddAttachmentsToSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the attachment set. If an <code>attachmentSetId</code> was not
     * specified, a new attachment set is created, and the ID of the set is returned in
     * the response. If an <code>attachmentSetId</code> was specified, the attachments
     * are added to the specified set, if it exists.</p>
     */
    inline const Aws::String& GetAttachmentSetId() const{ return m_attachmentSetId; }

    /**
     * <p>The ID of the attachment set. If an <code>attachmentSetId</code> was not
     * specified, a new attachment set is created, and the ID of the set is returned in
     * the response. If an <code>attachmentSetId</code> was specified, the attachments
     * are added to the specified set, if it exists.</p>
     */
    inline void SetAttachmentSetId(const Aws::String& value) { m_attachmentSetId = value; }

    /**
     * <p>The ID of the attachment set. If an <code>attachmentSetId</code> was not
     * specified, a new attachment set is created, and the ID of the set is returned in
     * the response. If an <code>attachmentSetId</code> was specified, the attachments
     * are added to the specified set, if it exists.</p>
     */
    inline void SetAttachmentSetId(Aws::String&& value) { m_attachmentSetId = std::move(value); }

    /**
     * <p>The ID of the attachment set. If an <code>attachmentSetId</code> was not
     * specified, a new attachment set is created, and the ID of the set is returned in
     * the response. If an <code>attachmentSetId</code> was specified, the attachments
     * are added to the specified set, if it exists.</p>
     */
    inline void SetAttachmentSetId(const char* value) { m_attachmentSetId.assign(value); }

    /**
     * <p>The ID of the attachment set. If an <code>attachmentSetId</code> was not
     * specified, a new attachment set is created, and the ID of the set is returned in
     * the response. If an <code>attachmentSetId</code> was specified, the attachments
     * are added to the specified set, if it exists.</p>
     */
    inline AddAttachmentsToSetResult& WithAttachmentSetId(const Aws::String& value) { SetAttachmentSetId(value); return *this;}

    /**
     * <p>The ID of the attachment set. If an <code>attachmentSetId</code> was not
     * specified, a new attachment set is created, and the ID of the set is returned in
     * the response. If an <code>attachmentSetId</code> was specified, the attachments
     * are added to the specified set, if it exists.</p>
     */
    inline AddAttachmentsToSetResult& WithAttachmentSetId(Aws::String&& value) { SetAttachmentSetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the attachment set. If an <code>attachmentSetId</code> was not
     * specified, a new attachment set is created, and the ID of the set is returned in
     * the response. If an <code>attachmentSetId</code> was specified, the attachments
     * are added to the specified set, if it exists.</p>
     */
    inline AddAttachmentsToSetResult& WithAttachmentSetId(const char* value) { SetAttachmentSetId(value); return *this;}


    /**
     * <p>The time and date when the attachment set expires.</p>
     */
    inline const Aws::String& GetExpiryTime() const{ return m_expiryTime; }

    /**
     * <p>The time and date when the attachment set expires.</p>
     */
    inline void SetExpiryTime(const Aws::String& value) { m_expiryTime = value; }

    /**
     * <p>The time and date when the attachment set expires.</p>
     */
    inline void SetExpiryTime(Aws::String&& value) { m_expiryTime = std::move(value); }

    /**
     * <p>The time and date when the attachment set expires.</p>
     */
    inline void SetExpiryTime(const char* value) { m_expiryTime.assign(value); }

    /**
     * <p>The time and date when the attachment set expires.</p>
     */
    inline AddAttachmentsToSetResult& WithExpiryTime(const Aws::String& value) { SetExpiryTime(value); return *this;}

    /**
     * <p>The time and date when the attachment set expires.</p>
     */
    inline AddAttachmentsToSetResult& WithExpiryTime(Aws::String&& value) { SetExpiryTime(std::move(value)); return *this;}

    /**
     * <p>The time and date when the attachment set expires.</p>
     */
    inline AddAttachmentsToSetResult& WithExpiryTime(const char* value) { SetExpiryTime(value); return *this;}

  private:

    Aws::String m_attachmentSetId;

    Aws::String m_expiryTime;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
