﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class RawMessage
  {
  public:
    AWS_SES_API RawMessage() = default;
    AWS_SES_API RawMessage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API RawMessage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The raw data of the message. This data needs to base64-encoded if you are
     * accessing Amazon SES directly through the HTTPS interface. If you are accessing
     * Amazon SES using an Amazon Web Services SDK, the SDK takes care of the base
     * 64-encoding for you. In all cases, the client must ensure that the message
     * format complies with Internet email standards regarding email header fields,
     * MIME types, and MIME encoding.</p> <p>The To:, CC:, and BCC: headers in the raw
     * message can contain a group list.</p> <p>If you are using
     * <code>SendRawEmail</code> with sending authorization, you can include X-headers
     * in the raw message to specify the "Source," "From," and "Return-Path" addresses.
     * For more information, see the documentation for <code>SendRawEmail</code>. </p>
     *  <p>Do not include these X-headers in the DKIM signature, because
     * they are removed by Amazon SES before sending the email.</p>  <p>For
     * more information, go to the <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/send-email-raw.html">Amazon SES
     * Developer Guide</a>.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = Aws::Utils::ByteBuffer>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = Aws::Utils::ByteBuffer>
    RawMessage& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_data{};
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
