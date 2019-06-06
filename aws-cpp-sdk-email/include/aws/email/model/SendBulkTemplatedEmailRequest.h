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
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/MessageTag.h>
#include <aws/email/model/BulkEmailDestination.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to send a templated email to multiple destinations using
   * Amazon SES. For more information, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-personalized-email-api.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendBulkTemplatedEmailRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API SendBulkTemplatedEmailRequest : public SESRequest
  {
  public:
    SendBulkTemplatedEmailRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendBulkTemplatedEmail"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The email address that is sending the email. This email address must be
     * either individually verified with Amazon SES, or from a domain that has been
     * verified with Amazon SES. For information about verifying identities, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon
     * SES Developer Guide</a>.</p> <p>If you are sending on behalf of another user and
     * have been permitted to do so by a sending authorization policy, then you must
     * also specify the <code>SourceArn</code> parameter. For more information about
     * sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p> <note> <p>Amazon SES does not support the SMTPUTF8
     * extension, as described in <a
     * href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this reason, the
     * <i>local part</i> of a source email address (the part of the email address that
     * precedes the @ sign) may only contain <a
     * href="https://en.wikipedia.org/wiki/Email_address#Local-part">7-bit ASCII
     * characters</a>. If the <i>domain part</i> of an address (the part after the @
     * sign) contains non-ASCII characters, they must be encoded using Punycode, as
     * described in <a href="https://tools.ietf.org/html/rfc3492.html">RFC3492</a>. The
     * sender name (also known as the <i>friendly name</i>) may contain non-ASCII
     * characters. These characters must be encoded using MIME encoded-word syntax, as
     * described in <a href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>. MIME
     * encoded-word syntax uses the following form:
     * <code>=?charset?encoding?encoded-text?=</code>.</p> </note>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The email address that is sending the email. This email address must be
     * either individually verified with Amazon SES, or from a domain that has been
     * verified with Amazon SES. For information about verifying identities, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon
     * SES Developer Guide</a>.</p> <p>If you are sending on behalf of another user and
     * have been permitted to do so by a sending authorization policy, then you must
     * also specify the <code>SourceArn</code> parameter. For more information about
     * sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p> <note> <p>Amazon SES does not support the SMTPUTF8
     * extension, as described in <a
     * href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this reason, the
     * <i>local part</i> of a source email address (the part of the email address that
     * precedes the @ sign) may only contain <a
     * href="https://en.wikipedia.org/wiki/Email_address#Local-part">7-bit ASCII
     * characters</a>. If the <i>domain part</i> of an address (the part after the @
     * sign) contains non-ASCII characters, they must be encoded using Punycode, as
     * described in <a href="https://tools.ietf.org/html/rfc3492.html">RFC3492</a>. The
     * sender name (also known as the <i>friendly name</i>) may contain non-ASCII
     * characters. These characters must be encoded using MIME encoded-word syntax, as
     * described in <a href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>. MIME
     * encoded-word syntax uses the following form:
     * <code>=?charset?encoding?encoded-text?=</code>.</p> </note>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The email address that is sending the email. This email address must be
     * either individually verified with Amazon SES, or from a domain that has been
     * verified with Amazon SES. For information about verifying identities, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon
     * SES Developer Guide</a>.</p> <p>If you are sending on behalf of another user and
     * have been permitted to do so by a sending authorization policy, then you must
     * also specify the <code>SourceArn</code> parameter. For more information about
     * sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p> <note> <p>Amazon SES does not support the SMTPUTF8
     * extension, as described in <a
     * href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this reason, the
     * <i>local part</i> of a source email address (the part of the email address that
     * precedes the @ sign) may only contain <a
     * href="https://en.wikipedia.org/wiki/Email_address#Local-part">7-bit ASCII
     * characters</a>. If the <i>domain part</i> of an address (the part after the @
     * sign) contains non-ASCII characters, they must be encoded using Punycode, as
     * described in <a href="https://tools.ietf.org/html/rfc3492.html">RFC3492</a>. The
     * sender name (also known as the <i>friendly name</i>) may contain non-ASCII
     * characters. These characters must be encoded using MIME encoded-word syntax, as
     * described in <a href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>. MIME
     * encoded-word syntax uses the following form:
     * <code>=?charset?encoding?encoded-text?=</code>.</p> </note>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The email address that is sending the email. This email address must be
     * either individually verified with Amazon SES, or from a domain that has been
     * verified with Amazon SES. For information about verifying identities, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon
     * SES Developer Guide</a>.</p> <p>If you are sending on behalf of another user and
     * have been permitted to do so by a sending authorization policy, then you must
     * also specify the <code>SourceArn</code> parameter. For more information about
     * sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p> <note> <p>Amazon SES does not support the SMTPUTF8
     * extension, as described in <a
     * href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this reason, the
     * <i>local part</i> of a source email address (the part of the email address that
     * precedes the @ sign) may only contain <a
     * href="https://en.wikipedia.org/wiki/Email_address#Local-part">7-bit ASCII
     * characters</a>. If the <i>domain part</i> of an address (the part after the @
     * sign) contains non-ASCII characters, they must be encoded using Punycode, as
     * described in <a href="https://tools.ietf.org/html/rfc3492.html">RFC3492</a>. The
     * sender name (also known as the <i>friendly name</i>) may contain non-ASCII
     * characters. These characters must be encoded using MIME encoded-word syntax, as
     * described in <a href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>. MIME
     * encoded-word syntax uses the following form:
     * <code>=?charset?encoding?encoded-text?=</code>.</p> </note>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The email address that is sending the email. This email address must be
     * either individually verified with Amazon SES, or from a domain that has been
     * verified with Amazon SES. For information about verifying identities, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon
     * SES Developer Guide</a>.</p> <p>If you are sending on behalf of another user and
     * have been permitted to do so by a sending authorization policy, then you must
     * also specify the <code>SourceArn</code> parameter. For more information about
     * sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p> <note> <p>Amazon SES does not support the SMTPUTF8
     * extension, as described in <a
     * href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this reason, the
     * <i>local part</i> of a source email address (the part of the email address that
     * precedes the @ sign) may only contain <a
     * href="https://en.wikipedia.org/wiki/Email_address#Local-part">7-bit ASCII
     * characters</a>. If the <i>domain part</i> of an address (the part after the @
     * sign) contains non-ASCII characters, they must be encoded using Punycode, as
     * described in <a href="https://tools.ietf.org/html/rfc3492.html">RFC3492</a>. The
     * sender name (also known as the <i>friendly name</i>) may contain non-ASCII
     * characters. These characters must be encoded using MIME encoded-word syntax, as
     * described in <a href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>. MIME
     * encoded-word syntax uses the following form:
     * <code>=?charset?encoding?encoded-text?=</code>.</p> </note>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The email address that is sending the email. This email address must be
     * either individually verified with Amazon SES, or from a domain that has been
     * verified with Amazon SES. For information about verifying identities, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon
     * SES Developer Guide</a>.</p> <p>If you are sending on behalf of another user and
     * have been permitted to do so by a sending authorization policy, then you must
     * also specify the <code>SourceArn</code> parameter. For more information about
     * sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p> <note> <p>Amazon SES does not support the SMTPUTF8
     * extension, as described in <a
     * href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this reason, the
     * <i>local part</i> of a source email address (the part of the email address that
     * precedes the @ sign) may only contain <a
     * href="https://en.wikipedia.org/wiki/Email_address#Local-part">7-bit ASCII
     * characters</a>. If the <i>domain part</i> of an address (the part after the @
     * sign) contains non-ASCII characters, they must be encoded using Punycode, as
     * described in <a href="https://tools.ietf.org/html/rfc3492.html">RFC3492</a>. The
     * sender name (also known as the <i>friendly name</i>) may contain non-ASCII
     * characters. These characters must be encoded using MIME encoded-word syntax, as
     * described in <a href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>. MIME
     * encoded-word syntax uses the following form:
     * <code>=?charset?encoding?encoded-text?=</code>.</p> </note>
     */
    inline SendBulkTemplatedEmailRequest& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The email address that is sending the email. This email address must be
     * either individually verified with Amazon SES, or from a domain that has been
     * verified with Amazon SES. For information about verifying identities, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon
     * SES Developer Guide</a>.</p> <p>If you are sending on behalf of another user and
     * have been permitted to do so by a sending authorization policy, then you must
     * also specify the <code>SourceArn</code> parameter. For more information about
     * sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p> <note> <p>Amazon SES does not support the SMTPUTF8
     * extension, as described in <a
     * href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this reason, the
     * <i>local part</i> of a source email address (the part of the email address that
     * precedes the @ sign) may only contain <a
     * href="https://en.wikipedia.org/wiki/Email_address#Local-part">7-bit ASCII
     * characters</a>. If the <i>domain part</i> of an address (the part after the @
     * sign) contains non-ASCII characters, they must be encoded using Punycode, as
     * described in <a href="https://tools.ietf.org/html/rfc3492.html">RFC3492</a>. The
     * sender name (also known as the <i>friendly name</i>) may contain non-ASCII
     * characters. These characters must be encoded using MIME encoded-word syntax, as
     * described in <a href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>. MIME
     * encoded-word syntax uses the following form:
     * <code>=?charset?encoding?encoded-text?=</code>.</p> </note>
     */
    inline SendBulkTemplatedEmailRequest& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The email address that is sending the email. This email address must be
     * either individually verified with Amazon SES, or from a domain that has been
     * verified with Amazon SES. For information about verifying identities, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/verify-addresses-and-domains.html">Amazon
     * SES Developer Guide</a>.</p> <p>If you are sending on behalf of another user and
     * have been permitted to do so by a sending authorization policy, then you must
     * also specify the <code>SourceArn</code> parameter. For more information about
     * sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p> <note> <p>Amazon SES does not support the SMTPUTF8
     * extension, as described in <a
     * href="https://tools.ietf.org/html/rfc6531">RFC6531</a>. For this reason, the
     * <i>local part</i> of a source email address (the part of the email address that
     * precedes the @ sign) may only contain <a
     * href="https://en.wikipedia.org/wiki/Email_address#Local-part">7-bit ASCII
     * characters</a>. If the <i>domain part</i> of an address (the part after the @
     * sign) contains non-ASCII characters, they must be encoded using Punycode, as
     * described in <a href="https://tools.ietf.org/html/rfc3492.html">RFC3492</a>. The
     * sender name (also known as the <i>friendly name</i>) may contain non-ASCII
     * characters. These characters must be encoded using MIME encoded-word syntax, as
     * described in <a href="https://tools.ietf.org/html/rfc2047">RFC 2047</a>. MIME
     * encoded-word syntax uses the following form:
     * <code>=?charset?encoding?encoded-text?=</code>.</p> </note>
     */
    inline SendBulkTemplatedEmailRequest& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to send for the email address specified in the <code>Source</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to send from
     * <code>user@example.com</code>, then you would specify the <code>SourceArn</code>
     * to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to send for the email address specified in the <code>Source</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to send from
     * <code>user@example.com</code>, then you would specify the <code>SourceArn</code>
     * to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to send for the email address specified in the <code>Source</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to send from
     * <code>user@example.com</code>, then you would specify the <code>SourceArn</code>
     * to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to send for the email address specified in the <code>Source</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to send from
     * <code>user@example.com</code>, then you would specify the <code>SourceArn</code>
     * to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to send for the email address specified in the <code>Source</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to send from
     * <code>user@example.com</code>, then you would specify the <code>SourceArn</code>
     * to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to send for the email address specified in the <code>Source</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to send from
     * <code>user@example.com</code>, then you would specify the <code>SourceArn</code>
     * to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to send for the email address specified in the <code>Source</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to send from
     * <code>user@example.com</code>, then you would specify the <code>SourceArn</code>
     * to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to send for the email address specified in the <code>Source</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to send from
     * <code>user@example.com</code>, then you would specify the <code>SourceArn</code>
     * to be <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and
     * the <code>Source</code> to be <code>user@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>The reply-to email address(es) for the message. If the recipient replies to
     * the message, each reply-to address will receive the reply.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplyToAddresses() const{ return m_replyToAddresses; }

    /**
     * <p>The reply-to email address(es) for the message. If the recipient replies to
     * the message, each reply-to address will receive the reply.</p>
     */
    inline bool ReplyToAddressesHasBeenSet() const { return m_replyToAddressesHasBeenSet; }

    /**
     * <p>The reply-to email address(es) for the message. If the recipient replies to
     * the message, each reply-to address will receive the reply.</p>
     */
    inline void SetReplyToAddresses(const Aws::Vector<Aws::String>& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses = value; }

    /**
     * <p>The reply-to email address(es) for the message. If the recipient replies to
     * the message, each reply-to address will receive the reply.</p>
     */
    inline void SetReplyToAddresses(Aws::Vector<Aws::String>&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses = std::move(value); }

    /**
     * <p>The reply-to email address(es) for the message. If the recipient replies to
     * the message, each reply-to address will receive the reply.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithReplyToAddresses(const Aws::Vector<Aws::String>& value) { SetReplyToAddresses(value); return *this;}

    /**
     * <p>The reply-to email address(es) for the message. If the recipient replies to
     * the message, each reply-to address will receive the reply.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithReplyToAddresses(Aws::Vector<Aws::String>&& value) { SetReplyToAddresses(std::move(value)); return *this;}

    /**
     * <p>The reply-to email address(es) for the message. If the recipient replies to
     * the message, each reply-to address will receive the reply.</p>
     */
    inline SendBulkTemplatedEmailRequest& AddReplyToAddresses(const Aws::String& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(value); return *this; }

    /**
     * <p>The reply-to email address(es) for the message. If the recipient replies to
     * the message, each reply-to address will receive the reply.</p>
     */
    inline SendBulkTemplatedEmailRequest& AddReplyToAddresses(Aws::String&& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The reply-to email address(es) for the message. If the recipient replies to
     * the message, each reply-to address will receive the reply.</p>
     */
    inline SendBulkTemplatedEmailRequest& AddReplyToAddresses(const char* value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(value); return *this; }


    /**
     * <p>The email address that bounces and complaints will be forwarded to when
     * feedback forwarding is enabled. If the message cannot be delivered to the
     * recipient, then an error message will be returned from the recipient's ISP; this
     * message will then be forwarded to the email address specified by the
     * <code>ReturnPath</code> parameter. The <code>ReturnPath</code> parameter is
     * never overwritten. This email address must be either individually verified with
     * Amazon SES, or from a domain that has been verified with Amazon SES. </p>
     */
    inline const Aws::String& GetReturnPath() const{ return m_returnPath; }

    /**
     * <p>The email address that bounces and complaints will be forwarded to when
     * feedback forwarding is enabled. If the message cannot be delivered to the
     * recipient, then an error message will be returned from the recipient's ISP; this
     * message will then be forwarded to the email address specified by the
     * <code>ReturnPath</code> parameter. The <code>ReturnPath</code> parameter is
     * never overwritten. This email address must be either individually verified with
     * Amazon SES, or from a domain that has been verified with Amazon SES. </p>
     */
    inline bool ReturnPathHasBeenSet() const { return m_returnPathHasBeenSet; }

    /**
     * <p>The email address that bounces and complaints will be forwarded to when
     * feedback forwarding is enabled. If the message cannot be delivered to the
     * recipient, then an error message will be returned from the recipient's ISP; this
     * message will then be forwarded to the email address specified by the
     * <code>ReturnPath</code> parameter. The <code>ReturnPath</code> parameter is
     * never overwritten. This email address must be either individually verified with
     * Amazon SES, or from a domain that has been verified with Amazon SES. </p>
     */
    inline void SetReturnPath(const Aws::String& value) { m_returnPathHasBeenSet = true; m_returnPath = value; }

    /**
     * <p>The email address that bounces and complaints will be forwarded to when
     * feedback forwarding is enabled. If the message cannot be delivered to the
     * recipient, then an error message will be returned from the recipient's ISP; this
     * message will then be forwarded to the email address specified by the
     * <code>ReturnPath</code> parameter. The <code>ReturnPath</code> parameter is
     * never overwritten. This email address must be either individually verified with
     * Amazon SES, or from a domain that has been verified with Amazon SES. </p>
     */
    inline void SetReturnPath(Aws::String&& value) { m_returnPathHasBeenSet = true; m_returnPath = std::move(value); }

    /**
     * <p>The email address that bounces and complaints will be forwarded to when
     * feedback forwarding is enabled. If the message cannot be delivered to the
     * recipient, then an error message will be returned from the recipient's ISP; this
     * message will then be forwarded to the email address specified by the
     * <code>ReturnPath</code> parameter. The <code>ReturnPath</code> parameter is
     * never overwritten. This email address must be either individually verified with
     * Amazon SES, or from a domain that has been verified with Amazon SES. </p>
     */
    inline void SetReturnPath(const char* value) { m_returnPathHasBeenSet = true; m_returnPath.assign(value); }

    /**
     * <p>The email address that bounces and complaints will be forwarded to when
     * feedback forwarding is enabled. If the message cannot be delivered to the
     * recipient, then an error message will be returned from the recipient's ISP; this
     * message will then be forwarded to the email address specified by the
     * <code>ReturnPath</code> parameter. The <code>ReturnPath</code> parameter is
     * never overwritten. This email address must be either individually verified with
     * Amazon SES, or from a domain that has been verified with Amazon SES. </p>
     */
    inline SendBulkTemplatedEmailRequest& WithReturnPath(const Aws::String& value) { SetReturnPath(value); return *this;}

    /**
     * <p>The email address that bounces and complaints will be forwarded to when
     * feedback forwarding is enabled. If the message cannot be delivered to the
     * recipient, then an error message will be returned from the recipient's ISP; this
     * message will then be forwarded to the email address specified by the
     * <code>ReturnPath</code> parameter. The <code>ReturnPath</code> parameter is
     * never overwritten. This email address must be either individually verified with
     * Amazon SES, or from a domain that has been verified with Amazon SES. </p>
     */
    inline SendBulkTemplatedEmailRequest& WithReturnPath(Aws::String&& value) { SetReturnPath(std::move(value)); return *this;}

    /**
     * <p>The email address that bounces and complaints will be forwarded to when
     * feedback forwarding is enabled. If the message cannot be delivered to the
     * recipient, then an error message will be returned from the recipient's ISP; this
     * message will then be forwarded to the email address specified by the
     * <code>ReturnPath</code> parameter. The <code>ReturnPath</code> parameter is
     * never overwritten. This email address must be either individually verified with
     * Amazon SES, or from a domain that has been verified with Amazon SES. </p>
     */
    inline SendBulkTemplatedEmailRequest& WithReturnPath(const char* value) { SetReturnPath(value); return *this;}


    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the email address specified in the <code>ReturnPath</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to use
     * <code>feedback@example.com</code>, then you would specify the
     * <code>ReturnPathArn</code> to be
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and the
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline const Aws::String& GetReturnPathArn() const{ return m_returnPathArn; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the email address specified in the <code>ReturnPath</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to use
     * <code>feedback@example.com</code>, then you would specify the
     * <code>ReturnPathArn</code> to be
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and the
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline bool ReturnPathArnHasBeenSet() const { return m_returnPathArnHasBeenSet; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the email address specified in the <code>ReturnPath</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to use
     * <code>feedback@example.com</code>, then you would specify the
     * <code>ReturnPathArn</code> to be
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and the
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline void SetReturnPathArn(const Aws::String& value) { m_returnPathArnHasBeenSet = true; m_returnPathArn = value; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the email address specified in the <code>ReturnPath</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to use
     * <code>feedback@example.com</code>, then you would specify the
     * <code>ReturnPathArn</code> to be
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and the
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline void SetReturnPathArn(Aws::String&& value) { m_returnPathArnHasBeenSet = true; m_returnPathArn = std::move(value); }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the email address specified in the <code>ReturnPath</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to use
     * <code>feedback@example.com</code>, then you would specify the
     * <code>ReturnPathArn</code> to be
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and the
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline void SetReturnPathArn(const char* value) { m_returnPathArnHasBeenSet = true; m_returnPathArn.assign(value); }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the email address specified in the <code>ReturnPath</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to use
     * <code>feedback@example.com</code>, then you would specify the
     * <code>ReturnPathArn</code> to be
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and the
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithReturnPathArn(const Aws::String& value) { SetReturnPathArn(value); return *this;}

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the email address specified in the <code>ReturnPath</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to use
     * <code>feedback@example.com</code>, then you would specify the
     * <code>ReturnPathArn</code> to be
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and the
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithReturnPathArn(Aws::String&& value) { SetReturnPathArn(std::move(value)); return *this;}

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the email address specified in the <code>ReturnPath</code>
     * parameter.</p> <p>For example, if the owner of <code>example.com</code> (which
     * has ARN <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>)
     * attaches a policy to it that authorizes you to use
     * <code>feedback@example.com</code>, then you would specify the
     * <code>ReturnPathArn</code> to be
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>, and the
     * <code>ReturnPath</code> to be <code>feedback@example.com</code>.</p> <p>For more
     * information about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithReturnPathArn(const char* value) { SetReturnPathArn(value); return *this;}


    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendBulkTemplatedEmail</code>.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendBulkTemplatedEmail</code>.</p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendBulkTemplatedEmail</code>.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendBulkTemplatedEmail</code>.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendBulkTemplatedEmail</code>.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendBulkTemplatedEmail</code>.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendBulkTemplatedEmail</code>.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set to use when you send an email using
     * <code>SendBulkTemplatedEmail</code>.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send to a destination using <code>SendBulkTemplatedEmail</code>.</p>
     */
    inline const Aws::Vector<MessageTag>& GetDefaultTags() const{ return m_defaultTags; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send to a destination using <code>SendBulkTemplatedEmail</code>.</p>
     */
    inline bool DefaultTagsHasBeenSet() const { return m_defaultTagsHasBeenSet; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send to a destination using <code>SendBulkTemplatedEmail</code>.</p>
     */
    inline void SetDefaultTags(const Aws::Vector<MessageTag>& value) { m_defaultTagsHasBeenSet = true; m_defaultTags = value; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send to a destination using <code>SendBulkTemplatedEmail</code>.</p>
     */
    inline void SetDefaultTags(Aws::Vector<MessageTag>&& value) { m_defaultTagsHasBeenSet = true; m_defaultTags = std::move(value); }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send to a destination using <code>SendBulkTemplatedEmail</code>.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithDefaultTags(const Aws::Vector<MessageTag>& value) { SetDefaultTags(value); return *this;}

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send to a destination using <code>SendBulkTemplatedEmail</code>.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithDefaultTags(Aws::Vector<MessageTag>&& value) { SetDefaultTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send to a destination using <code>SendBulkTemplatedEmail</code>.</p>
     */
    inline SendBulkTemplatedEmailRequest& AddDefaultTags(const MessageTag& value) { m_defaultTagsHasBeenSet = true; m_defaultTags.push_back(value); return *this; }

    /**
     * <p>A list of tags, in the form of name/value pairs, to apply to an email that
     * you send to a destination using <code>SendBulkTemplatedEmail</code>.</p>
     */
    inline SendBulkTemplatedEmailRequest& AddDefaultTags(MessageTag&& value) { m_defaultTagsHasBeenSet = true; m_defaultTags.push_back(std::move(value)); return *this; }


    /**
     * <p>The template to use when sending this email.</p>
     */
    inline const Aws::String& GetTemplate() const{ return m_template; }

    /**
     * <p>The template to use when sending this email.</p>
     */
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }

    /**
     * <p>The template to use when sending this email.</p>
     */
    inline void SetTemplate(const Aws::String& value) { m_templateHasBeenSet = true; m_template = value; }

    /**
     * <p>The template to use when sending this email.</p>
     */
    inline void SetTemplate(Aws::String&& value) { m_templateHasBeenSet = true; m_template = std::move(value); }

    /**
     * <p>The template to use when sending this email.</p>
     */
    inline void SetTemplate(const char* value) { m_templateHasBeenSet = true; m_template.assign(value); }

    /**
     * <p>The template to use when sending this email.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithTemplate(const Aws::String& value) { SetTemplate(value); return *this;}

    /**
     * <p>The template to use when sending this email.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithTemplate(Aws::String&& value) { SetTemplate(std::move(value)); return *this;}

    /**
     * <p>The template to use when sending this email.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithTemplate(const char* value) { SetTemplate(value); return *this;}


    /**
     * <p>The ARN of the template to use when sending this email.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }

    /**
     * <p>The ARN of the template to use when sending this email.</p>
     */
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }

    /**
     * <p>The ARN of the template to use when sending this email.</p>
     */
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }

    /**
     * <p>The ARN of the template to use when sending this email.</p>
     */
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }

    /**
     * <p>The ARN of the template to use when sending this email.</p>
     */
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }

    /**
     * <p>The ARN of the template to use when sending this email.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}

    /**
     * <p>The ARN of the template to use when sending this email.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the template to use when sending this email.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}


    /**
     * <p>A list of replacement values to apply to the template when replacement data
     * is not specified in a Destination object. These values act as a default or
     * fallback option when no other data is available.</p> <p>The template data is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline const Aws::String& GetDefaultTemplateData() const{ return m_defaultTemplateData; }

    /**
     * <p>A list of replacement values to apply to the template when replacement data
     * is not specified in a Destination object. These values act as a default or
     * fallback option when no other data is available.</p> <p>The template data is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline bool DefaultTemplateDataHasBeenSet() const { return m_defaultTemplateDataHasBeenSet; }

    /**
     * <p>A list of replacement values to apply to the template when replacement data
     * is not specified in a Destination object. These values act as a default or
     * fallback option when no other data is available.</p> <p>The template data is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline void SetDefaultTemplateData(const Aws::String& value) { m_defaultTemplateDataHasBeenSet = true; m_defaultTemplateData = value; }

    /**
     * <p>A list of replacement values to apply to the template when replacement data
     * is not specified in a Destination object. These values act as a default or
     * fallback option when no other data is available.</p> <p>The template data is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline void SetDefaultTemplateData(Aws::String&& value) { m_defaultTemplateDataHasBeenSet = true; m_defaultTemplateData = std::move(value); }

    /**
     * <p>A list of replacement values to apply to the template when replacement data
     * is not specified in a Destination object. These values act as a default or
     * fallback option when no other data is available.</p> <p>The template data is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline void SetDefaultTemplateData(const char* value) { m_defaultTemplateDataHasBeenSet = true; m_defaultTemplateData.assign(value); }

    /**
     * <p>A list of replacement values to apply to the template when replacement data
     * is not specified in a Destination object. These values act as a default or
     * fallback option when no other data is available.</p> <p>The template data is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithDefaultTemplateData(const Aws::String& value) { SetDefaultTemplateData(value); return *this;}

    /**
     * <p>A list of replacement values to apply to the template when replacement data
     * is not specified in a Destination object. These values act as a default or
     * fallback option when no other data is available.</p> <p>The template data is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithDefaultTemplateData(Aws::String&& value) { SetDefaultTemplateData(std::move(value)); return *this;}

    /**
     * <p>A list of replacement values to apply to the template when replacement data
     * is not specified in a Destination object. These values act as a default or
     * fallback option when no other data is available.</p> <p>The template data is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithDefaultTemplateData(const char* value) { SetDefaultTemplateData(value); return *this;}


    /**
     * <p>One or more <code>Destination</code> objects. All of the recipients in a
     * <code>Destination</code> will receive the same version of the email. You can
     * specify up to 50 <code>Destination</code> objects within a
     * <code>Destinations</code> array.</p>
     */
    inline const Aws::Vector<BulkEmailDestination>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>One or more <code>Destination</code> objects. All of the recipients in a
     * <code>Destination</code> will receive the same version of the email. You can
     * specify up to 50 <code>Destination</code> objects within a
     * <code>Destinations</code> array.</p>
     */
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    /**
     * <p>One or more <code>Destination</code> objects. All of the recipients in a
     * <code>Destination</code> will receive the same version of the email. You can
     * specify up to 50 <code>Destination</code> objects within a
     * <code>Destinations</code> array.</p>
     */
    inline void SetDestinations(const Aws::Vector<BulkEmailDestination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>One or more <code>Destination</code> objects. All of the recipients in a
     * <code>Destination</code> will receive the same version of the email. You can
     * specify up to 50 <code>Destination</code> objects within a
     * <code>Destinations</code> array.</p>
     */
    inline void SetDestinations(Aws::Vector<BulkEmailDestination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * <p>One or more <code>Destination</code> objects. All of the recipients in a
     * <code>Destination</code> will receive the same version of the email. You can
     * specify up to 50 <code>Destination</code> objects within a
     * <code>Destinations</code> array.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithDestinations(const Aws::Vector<BulkEmailDestination>& value) { SetDestinations(value); return *this;}

    /**
     * <p>One or more <code>Destination</code> objects. All of the recipients in a
     * <code>Destination</code> will receive the same version of the email. You can
     * specify up to 50 <code>Destination</code> objects within a
     * <code>Destinations</code> array.</p>
     */
    inline SendBulkTemplatedEmailRequest& WithDestinations(Aws::Vector<BulkEmailDestination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>One or more <code>Destination</code> objects. All of the recipients in a
     * <code>Destination</code> will receive the same version of the email. You can
     * specify up to 50 <code>Destination</code> objects within a
     * <code>Destinations</code> array.</p>
     */
    inline SendBulkTemplatedEmailRequest& AddDestinations(const BulkEmailDestination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>One or more <code>Destination</code> objects. All of the recipients in a
     * <code>Destination</code> will receive the same version of the email. You can
     * specify up to 50 <code>Destination</code> objects within a
     * <code>Destinations</code> array.</p>
     */
    inline SendBulkTemplatedEmailRequest& AddDestinations(BulkEmailDestination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet;

    Aws::Vector<Aws::String> m_replyToAddresses;
    bool m_replyToAddressesHasBeenSet;

    Aws::String m_returnPath;
    bool m_returnPathHasBeenSet;

    Aws::String m_returnPathArn;
    bool m_returnPathArnHasBeenSet;

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet;

    Aws::Vector<MessageTag> m_defaultTags;
    bool m_defaultTagsHasBeenSet;

    Aws::String m_template;
    bool m_templateHasBeenSet;

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet;

    Aws::String m_defaultTemplateData;
    bool m_defaultTemplateDataHasBeenSet;

    Aws::Vector<BulkEmailDestination> m_destinations;
    bool m_destinationsHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
