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
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/model/Content.h>
#include <aws/pinpoint-email/model/Body.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>Represents the email message that you're sending. The <code>Message</code>
   * object consists of a subject line and a message body.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/Message">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINTEMAIL_API Message
  {
  public:
    Message();
    Message(Aws::Utils::Json::JsonView jsonValue);
    Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The subject line of the email. The subject line can only contain 7-bit ASCII
     * characters. However, you can specify non-ASCII characters in the subject line by
     * using encoded-word syntax, as described in <a
     * href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>.</p>
     */
    inline const Content& GetSubject() const{ return m_subject; }

    /**
     * <p>The subject line of the email. The subject line can only contain 7-bit ASCII
     * characters. However, you can specify non-ASCII characters in the subject line by
     * using encoded-word syntax, as described in <a
     * href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>.</p>
     */
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }

    /**
     * <p>The subject line of the email. The subject line can only contain 7-bit ASCII
     * characters. However, you can specify non-ASCII characters in the subject line by
     * using encoded-word syntax, as described in <a
     * href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>.</p>
     */
    inline void SetSubject(const Content& value) { m_subjectHasBeenSet = true; m_subject = value; }

    /**
     * <p>The subject line of the email. The subject line can only contain 7-bit ASCII
     * characters. However, you can specify non-ASCII characters in the subject line by
     * using encoded-word syntax, as described in <a
     * href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>.</p>
     */
    inline void SetSubject(Content&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }

    /**
     * <p>The subject line of the email. The subject line can only contain 7-bit ASCII
     * characters. However, you can specify non-ASCII characters in the subject line by
     * using encoded-word syntax, as described in <a
     * href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>.</p>
     */
    inline Message& WithSubject(const Content& value) { SetSubject(value); return *this;}

    /**
     * <p>The subject line of the email. The subject line can only contain 7-bit ASCII
     * characters. However, you can specify non-ASCII characters in the subject line by
     * using encoded-word syntax, as described in <a
     * href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>.</p>
     */
    inline Message& WithSubject(Content&& value) { SetSubject(std::move(value)); return *this;}


    /**
     * <p>The body of the message. You can specify an HTML version of the message, a
     * text-only version of the message, or both.</p>
     */
    inline const Body& GetBody() const{ return m_body; }

    /**
     * <p>The body of the message. You can specify an HTML version of the message, a
     * text-only version of the message, or both.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>The body of the message. You can specify an HTML version of the message, a
     * text-only version of the message, or both.</p>
     */
    inline void SetBody(const Body& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>The body of the message. You can specify an HTML version of the message, a
     * text-only version of the message, or both.</p>
     */
    inline void SetBody(Body&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>The body of the message. You can specify an HTML version of the message, a
     * text-only version of the message, or both.</p>
     */
    inline Message& WithBody(const Body& value) { SetBody(value); return *this;}

    /**
     * <p>The body of the message. You can specify an HTML version of the message, a
     * text-only version of the message, or both.</p>
     */
    inline Message& WithBody(Body&& value) { SetBody(std::move(value)); return *this;}

  private:

    Content m_subject;
    bool m_subjectHasBeenSet;

    Body m_body;
    bool m_bodyHasBeenSet;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
