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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SQS
{
namespace Model
{

  /**
   * <p>Encloses a message ID for successfully enqueued message of a
   * <a>SendMessageBatch</a>.</p>
   */
  class AWS_SQS_API SendMessageBatchResultEntry
  {
  public:
    SendMessageBatchResultEntry();
    SendMessageBatchResultEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
    SendMessageBatchResultEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>An identifier for the message in this batch.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>An identifier for the message in this batch.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>An identifier for the message in this batch.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>An identifier for the message in this batch.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>An identifier for the message in this batch.</p>
     */
    inline SendMessageBatchResultEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>An identifier for the message in this batch.</p>
     */
    inline SendMessageBatchResultEntry& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>An identifier for the message in this batch.</p>
     */
    inline SendMessageBatchResultEntry& WithId(const char* value) { SetId(value); return *this;}

    /**
     * <p>An identifier for the message.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>An identifier for the message.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>An identifier for the message.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>An identifier for the message.</p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>An identifier for the message.</p>
     */
    inline SendMessageBatchResultEntry& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>An identifier for the message.</p>
     */
    inline SendMessageBatchResultEntry& WithMessageId(Aws::String&& value) { SetMessageId(value); return *this;}

    /**
     * <p>An identifier for the message.</p>
     */
    inline SendMessageBatchResultEntry& WithMessageId(const char* value) { SetMessageId(value); return *this;}

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
    inline void SetMD5OfMessageBody(const Aws::String& value) { m_mD5OfMessageBodyHasBeenSet = true; m_mD5OfMessageBody = value; }

    /**
     * <p>An MD5 digest of the non-URL-encoded message body string. This can be used to
     * verify that Amazon SQS received the message correctly. Amazon SQS first URL
     * decodes the message before creating the MD5 digest. For information about MD5,
     * go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline void SetMD5OfMessageBody(Aws::String&& value) { m_mD5OfMessageBodyHasBeenSet = true; m_mD5OfMessageBody = value; }

    /**
     * <p>An MD5 digest of the non-URL-encoded message body string. This can be used to
     * verify that Amazon SQS received the message correctly. Amazon SQS first URL
     * decodes the message before creating the MD5 digest. For information about MD5,
     * go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline void SetMD5OfMessageBody(const char* value) { m_mD5OfMessageBodyHasBeenSet = true; m_mD5OfMessageBody.assign(value); }

    /**
     * <p>An MD5 digest of the non-URL-encoded message body string. This can be used to
     * verify that Amazon SQS received the message correctly. Amazon SQS first URL
     * decodes the message before creating the MD5 digest. For information about MD5,
     * go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline SendMessageBatchResultEntry& WithMD5OfMessageBody(const Aws::String& value) { SetMD5OfMessageBody(value); return *this;}

    /**
     * <p>An MD5 digest of the non-URL-encoded message body string. This can be used to
     * verify that Amazon SQS received the message correctly. Amazon SQS first URL
     * decodes the message before creating the MD5 digest. For information about MD5,
     * go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline SendMessageBatchResultEntry& WithMD5OfMessageBody(Aws::String&& value) { SetMD5OfMessageBody(value); return *this;}

    /**
     * <p>An MD5 digest of the non-URL-encoded message body string. This can be used to
     * verify that Amazon SQS received the message correctly. Amazon SQS first URL
     * decodes the message before creating the MD5 digest. For information about MD5,
     * go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline SendMessageBatchResultEntry& WithMD5OfMessageBody(const char* value) { SetMD5OfMessageBody(value); return *this;}

    /**
     * <p>An MD5 digest of the non-URL-encoded message attribute string. This can be
     * used to verify that Amazon SQS received the message batch correctly. Amazon SQS
     * first URL decodes the message before creating the MD5 digest. For information
     * about MD5, go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline const Aws::String& GetMD5OfMessageAttributes() const{ return m_mD5OfMessageAttributes; }

    /**
     * <p>An MD5 digest of the non-URL-encoded message attribute string. This can be
     * used to verify that Amazon SQS received the message batch correctly. Amazon SQS
     * first URL decodes the message before creating the MD5 digest. For information
     * about MD5, go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline void SetMD5OfMessageAttributes(const Aws::String& value) { m_mD5OfMessageAttributesHasBeenSet = true; m_mD5OfMessageAttributes = value; }

    /**
     * <p>An MD5 digest of the non-URL-encoded message attribute string. This can be
     * used to verify that Amazon SQS received the message batch correctly. Amazon SQS
     * first URL decodes the message before creating the MD5 digest. For information
     * about MD5, go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline void SetMD5OfMessageAttributes(Aws::String&& value) { m_mD5OfMessageAttributesHasBeenSet = true; m_mD5OfMessageAttributes = value; }

    /**
     * <p>An MD5 digest of the non-URL-encoded message attribute string. This can be
     * used to verify that Amazon SQS received the message batch correctly. Amazon SQS
     * first URL decodes the message before creating the MD5 digest. For information
     * about MD5, go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline void SetMD5OfMessageAttributes(const char* value) { m_mD5OfMessageAttributesHasBeenSet = true; m_mD5OfMessageAttributes.assign(value); }

    /**
     * <p>An MD5 digest of the non-URL-encoded message attribute string. This can be
     * used to verify that Amazon SQS received the message batch correctly. Amazon SQS
     * first URL decodes the message before creating the MD5 digest. For information
     * about MD5, go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline SendMessageBatchResultEntry& WithMD5OfMessageAttributes(const Aws::String& value) { SetMD5OfMessageAttributes(value); return *this;}

    /**
     * <p>An MD5 digest of the non-URL-encoded message attribute string. This can be
     * used to verify that Amazon SQS received the message batch correctly. Amazon SQS
     * first URL decodes the message before creating the MD5 digest. For information
     * about MD5, go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline SendMessageBatchResultEntry& WithMD5OfMessageAttributes(Aws::String&& value) { SetMD5OfMessageAttributes(value); return *this;}

    /**
     * <p>An MD5 digest of the non-URL-encoded message attribute string. This can be
     * used to verify that Amazon SQS received the message batch correctly. Amazon SQS
     * first URL decodes the message before creating the MD5 digest. For information
     * about MD5, go to <a
     * href="http://www.faqs.org/rfcs/rfc1321.html">http://www.faqs.org/rfcs/rfc1321.html</a>.</p>
     */
    inline SendMessageBatchResultEntry& WithMD5OfMessageAttributes(const char* value) { SetMD5OfMessageAttributes(value); return *this;}

  private:
    Aws::String m_id;
    bool m_idHasBeenSet;
    Aws::String m_messageId;
    bool m_messageIdHasBeenSet;
    Aws::String m_mD5OfMessageBody;
    bool m_mD5OfMessageBodyHasBeenSet;
    Aws::String m_mD5OfMessageAttributes;
    bool m_mD5OfMessageAttributesHasBeenSet;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
