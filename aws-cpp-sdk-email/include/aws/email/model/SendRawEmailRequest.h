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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/RawMessage.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /*
    <p>Represents a request instructing the service to send a raw email message.</p> <p>This datatype can be used in application code to compose a message consisting of source, destination, and raw message text. This object can then be sent using the <code>SendRawEmail</code> action. </p>
  */
  class AWS_SES_API SendRawEmailRequest : public SESRequest
  {
  public:
    SendRawEmailRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The identity's email address. If you do not provide a value for this parameter, you must specify a "From" address in the raw text of the message. (You can also specify both.)</p> <p> By default, the string must be 7-bit ASCII. If the text must contain any other characters, then you must use MIME encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>. For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC 2047</a>. </p> <note>If you specify the <code>Source</code> parameter and have feedback forwarding enabled, then bounces and complaints will be sent to this email address. This takes precedence over any <i>Return-Path</i> header that you might include in the raw text of the message. </note>
    */
    inline const Aws::String& GetSource() const{ return m_source; }
    /*
     <p>The identity's email address. If you do not provide a value for this parameter, you must specify a "From" address in the raw text of the message. (You can also specify both.)</p> <p> By default, the string must be 7-bit ASCII. If the text must contain any other characters, then you must use MIME encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>. For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC 2047</a>. </p> <note>If you specify the <code>Source</code> parameter and have feedback forwarding enabled, then bounces and complaints will be sent to this email address. This takes precedence over any <i>Return-Path</i> header that you might include in the raw text of the message. </note>
    */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /*
     <p>The identity's email address. If you do not provide a value for this parameter, you must specify a "From" address in the raw text of the message. (You can also specify both.)</p> <p> By default, the string must be 7-bit ASCII. If the text must contain any other characters, then you must use MIME encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>. For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC 2047</a>. </p> <note>If you specify the <code>Source</code> parameter and have feedback forwarding enabled, then bounces and complaints will be sent to this email address. This takes precedence over any <i>Return-Path</i> header that you might include in the raw text of the message. </note>
    */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /*
     <p>The identity's email address. If you do not provide a value for this parameter, you must specify a "From" address in the raw text of the message. (You can also specify both.)</p> <p> By default, the string must be 7-bit ASCII. If the text must contain any other characters, then you must use MIME encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>. For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC 2047</a>. </p> <note>If you specify the <code>Source</code> parameter and have feedback forwarding enabled, then bounces and complaints will be sent to this email address. This takes precedence over any <i>Return-Path</i> header that you might include in the raw text of the message. </note>
    */
    inline SendRawEmailRequest&  WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /*
     <p>The identity's email address. If you do not provide a value for this parameter, you must specify a "From" address in the raw text of the message. (You can also specify both.)</p> <p> By default, the string must be 7-bit ASCII. If the text must contain any other characters, then you must use MIME encoded-word syntax (RFC 2047) instead of a literal string. MIME encoded-word syntax uses the following form: <code>=?charset?encoding?encoded-text?=</code>. For more information, see <a href="http://tools.ietf.org/html/rfc2047">RFC 2047</a>. </p> <note>If you specify the <code>Source</code> parameter and have feedback forwarding enabled, then bounces and complaints will be sent to this email address. This takes precedence over any <i>Return-Path</i> header that you might include in the raw text of the message. </note>
    */
    inline SendRawEmailRequest& WithSource(const char* value) { SetSource(value); return *this;}

    /*
     <p>A list of destinations for the message, consisting of To:, CC:, and BCC: addresses.</p>
    */
    inline const Aws::Vector<Aws::String>& GetDestinations() const{ return m_destinations; }
    /*
     <p>A list of destinations for the message, consisting of To:, CC:, and BCC: addresses.</p>
    */
    inline void SetDestinations(const Aws::Vector<Aws::String>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /*
     <p>A list of destinations for the message, consisting of To:, CC:, and BCC: addresses.</p>
    */
    inline SendRawEmailRequest&  WithDestinations(const Aws::Vector<Aws::String>& value) { SetDestinations(value); return *this;}

    /*
     <p>A list of destinations for the message, consisting of To:, CC:, and BCC: addresses.</p>
    */
    inline SendRawEmailRequest& AddDestinations(const Aws::String& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /*
     <p>A list of destinations for the message, consisting of To:, CC:, and BCC: addresses.</p>
    */
    inline SendRawEmailRequest& AddDestinations(const char* value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /*
     <p>The raw text of the message. The client is responsible for ensuring the following:</p> <p> <ul> <li>Message must contain a header and a body, separated by a blank line.</li> <li>All required header fields must be present.</li> <li>Each part of a multipart MIME message must be formatted properly.</li> <li>MIME content types must be among those supported by Amazon SES. For more information, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mime-types.html">Amazon SES Developer Guide</a>. </li> <li>Content must be base64-encoded, if MIME requires it.</li> </ul> </p>
    */
    inline const RawMessage& GetRawMessage() const{ return m_rawMessage; }
    /*
     <p>The raw text of the message. The client is responsible for ensuring the following:</p> <p> <ul> <li>Message must contain a header and a body, separated by a blank line.</li> <li>All required header fields must be present.</li> <li>Each part of a multipart MIME message must be formatted properly.</li> <li>MIME content types must be among those supported by Amazon SES. For more information, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mime-types.html">Amazon SES Developer Guide</a>. </li> <li>Content must be base64-encoded, if MIME requires it.</li> </ul> </p>
    */
    inline void SetRawMessage(const RawMessage& value) { m_rawMessage = value; }

    /*
     <p>The raw text of the message. The client is responsible for ensuring the following:</p> <p> <ul> <li>Message must contain a header and a body, separated by a blank line.</li> <li>All required header fields must be present.</li> <li>Each part of a multipart MIME message must be formatted properly.</li> <li>MIME content types must be among those supported by Amazon SES. For more information, go to the <a href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/mime-types.html">Amazon SES Developer Guide</a>. </li> <li>Content must be base64-encoded, if MIME requires it.</li> </ul> </p>
    */
    inline SendRawEmailRequest&  WithRawMessage(const RawMessage& value) { SetRawMessage(value); return *this;}

  private:
    Aws::String m_source;
    bool m_sourceHasBeenSet;
    Aws::Vector<Aws::String> m_destinations;
    bool m_destinationsHasBeenSet;
    RawMessage m_rawMessage;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
