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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{

  /**
   * <p>Represents the raw data of the message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/RawMessage">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API RawMessage
  {
  public:
    RawMessage();
    RawMessage(const Aws::Utils::Xml::XmlNode& xmlNode);
    RawMessage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The raw data of the message. This data needs to base64-encoded if you are
     * accessing Amazon SES directly through the HTTPS interface. If you are accessing
     * Amazon SES using an AWS SDK, the SDK takes care of the base 64-encoding for you.
     * In all cases, the client must ensure that the message format complies with
     * Internet email standards regarding email header fields, MIME types, and MIME
     * encoding.</p> <p>The To:, CC:, and BCC: headers in the raw message can contain a
     * group list.</p> <p>If you are using <code>SendRawEmail</code> with sending
     * authorization, you can include X-headers in the raw message to specify the
     * "Source," "From," and "Return-Path" addresses. For more information, see the
     * documentation for <code>SendRawEmail</code>. </p> <important> <p>Do not include
     * these X-headers in the DKIM signature, because they are removed by Amazon SES
     * before sending the email.</p> </important> <p>For more information, go to the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-raw.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetData() const{ return m_data; }

    /**
     * <p>The raw data of the message. This data needs to base64-encoded if you are
     * accessing Amazon SES directly through the HTTPS interface. If you are accessing
     * Amazon SES using an AWS SDK, the SDK takes care of the base 64-encoding for you.
     * In all cases, the client must ensure that the message format complies with
     * Internet email standards regarding email header fields, MIME types, and MIME
     * encoding.</p> <p>The To:, CC:, and BCC: headers in the raw message can contain a
     * group list.</p> <p>If you are using <code>SendRawEmail</code> with sending
     * authorization, you can include X-headers in the raw message to specify the
     * "Source," "From," and "Return-Path" addresses. For more information, see the
     * documentation for <code>SendRawEmail</code>. </p> <important> <p>Do not include
     * these X-headers in the DKIM signature, because they are removed by Amazon SES
     * before sending the email.</p> </important> <p>For more information, go to the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-raw.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The raw data of the message. This data needs to base64-encoded if you are
     * accessing Amazon SES directly through the HTTPS interface. If you are accessing
     * Amazon SES using an AWS SDK, the SDK takes care of the base 64-encoding for you.
     * In all cases, the client must ensure that the message format complies with
     * Internet email standards regarding email header fields, MIME types, and MIME
     * encoding.</p> <p>The To:, CC:, and BCC: headers in the raw message can contain a
     * group list.</p> <p>If you are using <code>SendRawEmail</code> with sending
     * authorization, you can include X-headers in the raw message to specify the
     * "Source," "From," and "Return-Path" addresses. For more information, see the
     * documentation for <code>SendRawEmail</code>. </p> <important> <p>Do not include
     * these X-headers in the DKIM signature, because they are removed by Amazon SES
     * before sending the email.</p> </important> <p>For more information, go to the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-raw.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline void SetData(const Aws::Utils::ByteBuffer& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The raw data of the message. This data needs to base64-encoded if you are
     * accessing Amazon SES directly through the HTTPS interface. If you are accessing
     * Amazon SES using an AWS SDK, the SDK takes care of the base 64-encoding for you.
     * In all cases, the client must ensure that the message format complies with
     * Internet email standards regarding email header fields, MIME types, and MIME
     * encoding.</p> <p>The To:, CC:, and BCC: headers in the raw message can contain a
     * group list.</p> <p>If you are using <code>SendRawEmail</code> with sending
     * authorization, you can include X-headers in the raw message to specify the
     * "Source," "From," and "Return-Path" addresses. For more information, see the
     * documentation for <code>SendRawEmail</code>. </p> <important> <p>Do not include
     * these X-headers in the DKIM signature, because they are removed by Amazon SES
     * before sending the email.</p> </important> <p>For more information, go to the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-raw.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline void SetData(Aws::Utils::ByteBuffer&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The raw data of the message. This data needs to base64-encoded if you are
     * accessing Amazon SES directly through the HTTPS interface. If you are accessing
     * Amazon SES using an AWS SDK, the SDK takes care of the base 64-encoding for you.
     * In all cases, the client must ensure that the message format complies with
     * Internet email standards regarding email header fields, MIME types, and MIME
     * encoding.</p> <p>The To:, CC:, and BCC: headers in the raw message can contain a
     * group list.</p> <p>If you are using <code>SendRawEmail</code> with sending
     * authorization, you can include X-headers in the raw message to specify the
     * "Source," "From," and "Return-Path" addresses. For more information, see the
     * documentation for <code>SendRawEmail</code>. </p> <important> <p>Do not include
     * these X-headers in the DKIM signature, because they are removed by Amazon SES
     * before sending the email.</p> </important> <p>For more information, go to the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-raw.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline RawMessage& WithData(const Aws::Utils::ByteBuffer& value) { SetData(value); return *this;}

    /**
     * <p>The raw data of the message. This data needs to base64-encoded if you are
     * accessing Amazon SES directly through the HTTPS interface. If you are accessing
     * Amazon SES using an AWS SDK, the SDK takes care of the base 64-encoding for you.
     * In all cases, the client must ensure that the message format complies with
     * Internet email standards regarding email header fields, MIME types, and MIME
     * encoding.</p> <p>The To:, CC:, and BCC: headers in the raw message can contain a
     * group list.</p> <p>If you are using <code>SendRawEmail</code> with sending
     * authorization, you can include X-headers in the raw message to specify the
     * "Source," "From," and "Return-Path" addresses. For more information, see the
     * documentation for <code>SendRawEmail</code>. </p> <important> <p>Do not include
     * these X-headers in the DKIM signature, because they are removed by Amazon SES
     * before sending the email.</p> </important> <p>For more information, go to the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-raw.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline RawMessage& WithData(Aws::Utils::ByteBuffer&& value) { SetData(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_data;
    bool m_dataHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
