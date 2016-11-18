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
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sqs/model/ResponseMetadata.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SQS
{
namespace Model
{
  /**
   * <p>The MD5OfMessageBody and MessageId elements.</p>
   */
  class AWS_SQS_API SendMessageResult
  {
  public:
    SendMessageResult();
    SendMessageResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    SendMessageResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>An MD5 digest of the non-URL-encoded message body string. This can be used to
     * verify that Amazon SQS received the message correctly. Amazon SQS first URL
     * decodes the message before creating the MD5 digest. For information about MD5,
     * go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline const Aws::String& GetMD5OfMessageBody() const{ return m_mD5OfMessageBody; }

    /**
     * <p>An MD5 digest of the non-URL-encoded message body string. This can be used to
     * verify that Amazon SQS received the message correctly. Amazon SQS first URL
     * decodes the message before creating the MD5 digest. For information about MD5,
     * go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline void SetMD5OfMessageBody(const Aws::String& value) { m_mD5OfMessageBody = value; }

    /**
     * <p>An MD5 digest of the non-URL-encoded message body string. This can be used to
     * verify that Amazon SQS received the message correctly. Amazon SQS first URL
     * decodes the message before creating the MD5 digest. For information about MD5,
     * go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline void SetMD5OfMessageBody(Aws::String&& value) { m_mD5OfMessageBody = value; }

    /**
     * <p>An MD5 digest of the non-URL-encoded message body string. This can be used to
     * verify that Amazon SQS received the message correctly. Amazon SQS first URL
     * decodes the message before creating the MD5 digest. For information about MD5,
     * go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline void SetMD5OfMessageBody(const char* value) { m_mD5OfMessageBody.assign(value); }

    /**
     * <p>An MD5 digest of the non-URL-encoded message body string. This can be used to
     * verify that Amazon SQS received the message correctly. Amazon SQS first URL
     * decodes the message before creating the MD5 digest. For information about MD5,
     * go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline SendMessageResult& WithMD5OfMessageBody(const Aws::String& value) { SetMD5OfMessageBody(value); return *this;}

    /**
     * <p>An MD5 digest of the non-URL-encoded message body string. This can be used to
     * verify that Amazon SQS received the message correctly. Amazon SQS first URL
     * decodes the message before creating the MD5 digest. For information about MD5,
     * go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline SendMessageResult& WithMD5OfMessageBody(Aws::String&& value) { SetMD5OfMessageBody(value); return *this;}

    /**
     * <p>An MD5 digest of the non-URL-encoded message body string. This can be used to
     * verify that Amazon SQS received the message correctly. Amazon SQS first URL
     * decodes the message before creating the MD5 digest. For information about MD5,
     * go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline SendMessageResult& WithMD5OfMessageBody(const char* value) { SetMD5OfMessageBody(value); return *this;}

    /**
     * <p>An MD5 digest of the non-URL-encoded message attribute string. This can be
     * used to verify that Amazon SQS received the message correctly. Amazon SQS first
     * URL decodes the message before creating the MD5 digest. For information about
     * MD5, go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline const Aws::String& GetMD5OfMessageAttributes() const{ return m_mD5OfMessageAttributes; }

    /**
     * <p>An MD5 digest of the non-URL-encoded message attribute string. This can be
     * used to verify that Amazon SQS received the message correctly. Amazon SQS first
     * URL decodes the message before creating the MD5 digest. For information about
     * MD5, go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline void SetMD5OfMessageAttributes(const Aws::String& value) { m_mD5OfMessageAttributes = value; }

    /**
     * <p>An MD5 digest of the non-URL-encoded message attribute string. This can be
     * used to verify that Amazon SQS received the message correctly. Amazon SQS first
     * URL decodes the message before creating the MD5 digest. For information about
     * MD5, go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline void SetMD5OfMessageAttributes(Aws::String&& value) { m_mD5OfMessageAttributes = value; }

    /**
     * <p>An MD5 digest of the non-URL-encoded message attribute string. This can be
     * used to verify that Amazon SQS received the message correctly. Amazon SQS first
     * URL decodes the message before creating the MD5 digest. For information about
     * MD5, go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline void SetMD5OfMessageAttributes(const char* value) { m_mD5OfMessageAttributes.assign(value); }

    /**
     * <p>An MD5 digest of the non-URL-encoded message attribute string. This can be
     * used to verify that Amazon SQS received the message correctly. Amazon SQS first
     * URL decodes the message before creating the MD5 digest. For information about
     * MD5, go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline SendMessageResult& WithMD5OfMessageAttributes(const Aws::String& value) { SetMD5OfMessageAttributes(value); return *this;}

    /**
     * <p>An MD5 digest of the non-URL-encoded message attribute string. This can be
     * used to verify that Amazon SQS received the message correctly. Amazon SQS first
     * URL decodes the message before creating the MD5 digest. For information about
     * MD5, go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline SendMessageResult& WithMD5OfMessageAttributes(Aws::String&& value) { SetMD5OfMessageAttributes(value); return *this;}

    /**
     * <p>An MD5 digest of the non-URL-encoded message attribute string. This can be
     * used to verify that Amazon SQS received the message correctly. Amazon SQS first
     * URL decodes the message before creating the MD5 digest. For information about
     * MD5, go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline SendMessageResult& WithMD5OfMessageAttributes(const char* value) { SetMD5OfMessageAttributes(value); return *this;}

    /**
     * <p> An element containing the message ID of the message sent to the queue. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ImportantIdentifiers.html">Queue
     * and Message Identifiers</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p> An element containing the message ID of the message sent to the queue. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ImportantIdentifiers.html">Queue
     * and Message Identifiers</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageId = value; }

    /**
     * <p> An element containing the message ID of the message sent to the queue. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ImportantIdentifiers.html">Queue
     * and Message Identifiers</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageId = value; }

    /**
     * <p> An element containing the message ID of the message sent to the queue. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ImportantIdentifiers.html">Queue
     * and Message Identifiers</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     */
    inline void SetMessageId(const char* value) { m_messageId.assign(value); }

    /**
     * <p> An element containing the message ID of the message sent to the queue. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ImportantIdentifiers.html">Queue
     * and Message Identifiers</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     */
    inline SendMessageResult& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p> An element containing the message ID of the message sent to the queue. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ImportantIdentifiers.html">Queue
     * and Message Identifiers</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     */
    inline SendMessageResult& WithMessageId(Aws::String&& value) { SetMessageId(value); return *this;}

    /**
     * <p> An element containing the message ID of the message sent to the queue. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/AWSSimpleQueueService/latest/SQSDeveloperGuide/ImportantIdentifiers.html">Queue
     * and Message Identifiers</a> in the <i>Amazon SQS Developer Guide</i>. </p>
     */
    inline SendMessageResult& WithMessageId(const char* value) { SetMessageId(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline SendMessageResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline SendMessageResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_mD5OfMessageBody;
    Aws::String m_mD5OfMessageAttributes;
    Aws::String m_messageId;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws