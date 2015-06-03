/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/email/model/Destination.h>
#include <aws/email/model/Message.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /*
    <p>Represents a request instructing the service to send a single email message.</p> <p>This datatype can be used in application code to compose a message consisting of source, destination, message, reply-to, and return-path parts. This object can then be sent using the <code>SendEmail</code> action. </p>
  */
  class AWS_SES_API SendEmailRequest : public SESRequest
  {
  public:
    SendEmailRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The identity's email address.</p> <p> By default, the string must be 7-bit ASCII. If the text must contain any other characters, then you must use MIME encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>. For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC 2047</a>. </p>
    */
    inline const Aws::String& GetSource() const{ return m_source; }
    /*
     <p>The identity's email address.</p> <p> By default, the string must be 7-bit ASCII. If the text must contain any other characters, then you must use MIME encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>. For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC 2047</a>. </p>
    */
    inline void SetSource(const Aws::String& value) { m_source = value; }

    /*
     <p>The identity's email address.</p> <p> By default, the string must be 7-bit ASCII. If the text must contain any other characters, then you must use MIME encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>. For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC 2047</a>. </p>
    */
    inline void SetSource(const char* value) { m_source.assign(value); }

    /*
     <p>The identity's email address.</p> <p> By default, the string must be 7-bit ASCII. If the text must contain any other characters, then you must use MIME encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>. For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC 2047</a>. </p>
    */
    inline SendEmailRequest&  WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /*
     <p>The identity's email address.</p> <p> By default, the string must be 7-bit ASCII. If the text must contain any other characters, then you must use MIME encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>. For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC 2047</a>. </p>
    */
    inline SendEmailRequest& WithSource(const char* value) { SetSource(value); return *this;}

    /*
     <p>The destination for this email, composed of To:, CC:, and BCC: fields.</p>
    */
    inline const Destination& GetDestination() const{ return m_destination; }
    /*
     <p>The destination for this email, composed of To:, CC:, and BCC: fields.</p>
    */
    inline void SetDestination(const Destination& value) { m_destination = value; }

    /*
     <p>The destination for this email, composed of To:, CC:, and BCC: fields.</p>
    */
    inline SendEmailRequest&  WithDestination(const Destination& value) { SetDestination(value); return *this;}

    /*
     <p>The message to be sent.</p>
    */
    inline const Message& GetMessage() const{ return m_message; }
    /*
     <p>The message to be sent.</p>
    */
    inline void SetMessage(const Message& value) { m_message = value; }

    /*
     <p>The message to be sent.</p>
    */
    inline SendEmailRequest&  WithMessage(const Message& value) { SetMessage(value); return *this;}

    /*
     <p>The reply-to email address(es) for the message. If the recipient replies to the message, each reply-to address will receive the reply. </p>
    */
    inline const Aws::Vector<Aws::String>& GetReplyToAddresses() const{ return m_replyToAddresses; }
    /*
     <p>The reply-to email address(es) for the message. If the recipient replies to the message, each reply-to address will receive the reply. </p>
    */
    inline void SetReplyToAddresses(const Aws::Vector<Aws::String>& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses = value; }

    /*
     <p>The reply-to email address(es) for the message. If the recipient replies to the message, each reply-to address will receive the reply. </p>
    */
    inline SendEmailRequest&  WithReplyToAddresses(const Aws::Vector<Aws::String>& value) { SetReplyToAddresses(value); return *this;}

    /*
     <p>The reply-to email address(es) for the message. If the recipient replies to the message, each reply-to address will receive the reply. </p>
    */
    inline SendEmailRequest& AddReplyToAddresses(const Aws::String& value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(value); return *this; }

    /*
     <p>The reply-to email address(es) for the message. If the recipient replies to the message, each reply-to address will receive the reply. </p>
    */
    inline SendEmailRequest& AddReplyToAddresses(const char* value) { m_replyToAddressesHasBeenSet = true; m_replyToAddresses.push_back(value); return *this; }

    /*
     <p>The email address to which bounces and complaints are to be forwarded when feedback forwarding is enabled. If the message cannot be delivered to the recipient, then an error message will be returned from the recipient's ISP; this message will then be forwarded to the email address specified by the <code>ReturnPath</code> parameter. The <code>ReturnPath</code> parameter is never overwritten. This email address must be either individually verified with Amazon SES, or from a domain that has been verified with Amazon SES. </p>
    */
    inline const Aws::String& GetReturnPath() const{ return m_returnPath; }
    /*
     <p>The email address to which bounces and complaints are to be forwarded when feedback forwarding is enabled. If the message cannot be delivered to the recipient, then an error message will be returned from the recipient's ISP; this message will then be forwarded to the email address specified by the <code>ReturnPath</code> parameter. The <code>ReturnPath</code> parameter is never overwritten. This email address must be either individually verified with Amazon SES, or from a domain that has been verified with Amazon SES. </p>
    */
    inline void SetReturnPath(const Aws::String& value) { m_returnPathHasBeenSet = true; m_returnPath = value; }

    /*
     <p>The email address to which bounces and complaints are to be forwarded when feedback forwarding is enabled. If the message cannot be delivered to the recipient, then an error message will be returned from the recipient's ISP; this message will then be forwarded to the email address specified by the <code>ReturnPath</code> parameter. The <code>ReturnPath</code> parameter is never overwritten. This email address must be either individually verified with Amazon SES, or from a domain that has been verified with Amazon SES. </p>
    */
    inline void SetReturnPath(const char* value) { m_returnPathHasBeenSet = true; m_returnPath.assign(value); }

    /*
     <p>The email address to which bounces and complaints are to be forwarded when feedback forwarding is enabled. If the message cannot be delivered to the recipient, then an error message will be returned from the recipient's ISP; this message will then be forwarded to the email address specified by the <code>ReturnPath</code> parameter. The <code>ReturnPath</code> parameter is never overwritten. This email address must be either individually verified with Amazon SES, or from a domain that has been verified with Amazon SES. </p>
    */
    inline SendEmailRequest&  WithReturnPath(const Aws::String& value) { SetReturnPath(value); return *this;}

    /*
     <p>The email address to which bounces and complaints are to be forwarded when feedback forwarding is enabled. If the message cannot be delivered to the recipient, then an error message will be returned from the recipient's ISP; this message will then be forwarded to the email address specified by the <code>ReturnPath</code> parameter. The <code>ReturnPath</code> parameter is never overwritten. This email address must be either individually verified with Amazon SES, or from a domain that has been verified with Amazon SES. </p>
    */
    inline SendEmailRequest& WithReturnPath(const char* value) { SetReturnPath(value); return *this;}

  private:
    Aws::String m_source;
    Destination m_destination;
    Message m_message;
    Aws::Vector<Aws::String> m_replyToAddresses;
    bool m_replyToAddressesHasBeenSet;
    Aws::String m_returnPath;
    bool m_returnPathHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
