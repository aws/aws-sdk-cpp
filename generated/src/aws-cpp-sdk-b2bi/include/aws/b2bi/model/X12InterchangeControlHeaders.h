/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace B2BI
{
namespace Model
{

  /**
   * <p>In X12, the Interchange Control Header is the first segment of an EDI
   * document and is part of the Interchange Envelope. It contains information about
   * the sender and receiver, the date and time of transmission, and the X12 version
   * being used. It also includes delivery information, such as the sender and
   * receiver IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/X12InterchangeControlHeaders">AWS
   * API Reference</a></p>
   */
  class X12InterchangeControlHeaders
  {
  public:
    AWS_B2BI_API X12InterchangeControlHeaders();
    AWS_B2BI_API X12InterchangeControlHeaders(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API X12InterchangeControlHeaders& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Located at position ISA-05 in the header. Qualifier for the sender ID.
     * Together, the ID and qualifier uniquely identify the sending trading
     * partner.</p>
     */
    inline const Aws::String& GetSenderIdQualifier() const{ return m_senderIdQualifier; }
    inline bool SenderIdQualifierHasBeenSet() const { return m_senderIdQualifierHasBeenSet; }
    inline void SetSenderIdQualifier(const Aws::String& value) { m_senderIdQualifierHasBeenSet = true; m_senderIdQualifier = value; }
    inline void SetSenderIdQualifier(Aws::String&& value) { m_senderIdQualifierHasBeenSet = true; m_senderIdQualifier = std::move(value); }
    inline void SetSenderIdQualifier(const char* value) { m_senderIdQualifierHasBeenSet = true; m_senderIdQualifier.assign(value); }
    inline X12InterchangeControlHeaders& WithSenderIdQualifier(const Aws::String& value) { SetSenderIdQualifier(value); return *this;}
    inline X12InterchangeControlHeaders& WithSenderIdQualifier(Aws::String&& value) { SetSenderIdQualifier(std::move(value)); return *this;}
    inline X12InterchangeControlHeaders& WithSenderIdQualifier(const char* value) { SetSenderIdQualifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Located at position ISA-06 in the header. This value (along with the
     * <code>senderIdQualifier</code>) identifies the sender of the interchange. </p>
     */
    inline const Aws::String& GetSenderId() const{ return m_senderId; }
    inline bool SenderIdHasBeenSet() const { return m_senderIdHasBeenSet; }
    inline void SetSenderId(const Aws::String& value) { m_senderIdHasBeenSet = true; m_senderId = value; }
    inline void SetSenderId(Aws::String&& value) { m_senderIdHasBeenSet = true; m_senderId = std::move(value); }
    inline void SetSenderId(const char* value) { m_senderIdHasBeenSet = true; m_senderId.assign(value); }
    inline X12InterchangeControlHeaders& WithSenderId(const Aws::String& value) { SetSenderId(value); return *this;}
    inline X12InterchangeControlHeaders& WithSenderId(Aws::String&& value) { SetSenderId(std::move(value)); return *this;}
    inline X12InterchangeControlHeaders& WithSenderId(const char* value) { SetSenderId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Located at position ISA-07 in the header. Qualifier for the receiver ID.
     * Together, the ID and qualifier uniquely identify the receiving trading
     * partner.</p>
     */
    inline const Aws::String& GetReceiverIdQualifier() const{ return m_receiverIdQualifier; }
    inline bool ReceiverIdQualifierHasBeenSet() const { return m_receiverIdQualifierHasBeenSet; }
    inline void SetReceiverIdQualifier(const Aws::String& value) { m_receiverIdQualifierHasBeenSet = true; m_receiverIdQualifier = value; }
    inline void SetReceiverIdQualifier(Aws::String&& value) { m_receiverIdQualifierHasBeenSet = true; m_receiverIdQualifier = std::move(value); }
    inline void SetReceiverIdQualifier(const char* value) { m_receiverIdQualifierHasBeenSet = true; m_receiverIdQualifier.assign(value); }
    inline X12InterchangeControlHeaders& WithReceiverIdQualifier(const Aws::String& value) { SetReceiverIdQualifier(value); return *this;}
    inline X12InterchangeControlHeaders& WithReceiverIdQualifier(Aws::String&& value) { SetReceiverIdQualifier(std::move(value)); return *this;}
    inline X12InterchangeControlHeaders& WithReceiverIdQualifier(const char* value) { SetReceiverIdQualifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Located at position ISA-08 in the header. This value (along with the
     * <code>receiverIdQualifier</code>) identifies the intended recipient of the
     * interchange. </p>
     */
    inline const Aws::String& GetReceiverId() const{ return m_receiverId; }
    inline bool ReceiverIdHasBeenSet() const { return m_receiverIdHasBeenSet; }
    inline void SetReceiverId(const Aws::String& value) { m_receiverIdHasBeenSet = true; m_receiverId = value; }
    inline void SetReceiverId(Aws::String&& value) { m_receiverIdHasBeenSet = true; m_receiverId = std::move(value); }
    inline void SetReceiverId(const char* value) { m_receiverIdHasBeenSet = true; m_receiverId.assign(value); }
    inline X12InterchangeControlHeaders& WithReceiverId(const Aws::String& value) { SetReceiverId(value); return *this;}
    inline X12InterchangeControlHeaders& WithReceiverId(Aws::String&& value) { SetReceiverId(std::move(value)); return *this;}
    inline X12InterchangeControlHeaders& WithReceiverId(const char* value) { SetReceiverId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Located at position ISA-11 in the header. This string makes it easier when
     * you need to group similar adjacent element values together without using extra
     * segments.</p>  <p>This parameter is only honored for version greater than
     * 401 (<code>VERSION_4010</code> and higher).</p> <p>For versions less than 401,
     * this field is called <a
     * href="https://www.stedi.com/edi/x12-004010/segment/ISA#ISA-11">StandardsId</a>,
     * in which case our service sets the value to <code>U</code>.</p> 
     */
    inline const Aws::String& GetRepetitionSeparator() const{ return m_repetitionSeparator; }
    inline bool RepetitionSeparatorHasBeenSet() const { return m_repetitionSeparatorHasBeenSet; }
    inline void SetRepetitionSeparator(const Aws::String& value) { m_repetitionSeparatorHasBeenSet = true; m_repetitionSeparator = value; }
    inline void SetRepetitionSeparator(Aws::String&& value) { m_repetitionSeparatorHasBeenSet = true; m_repetitionSeparator = std::move(value); }
    inline void SetRepetitionSeparator(const char* value) { m_repetitionSeparatorHasBeenSet = true; m_repetitionSeparator.assign(value); }
    inline X12InterchangeControlHeaders& WithRepetitionSeparator(const Aws::String& value) { SetRepetitionSeparator(value); return *this;}
    inline X12InterchangeControlHeaders& WithRepetitionSeparator(Aws::String&& value) { SetRepetitionSeparator(std::move(value)); return *this;}
    inline X12InterchangeControlHeaders& WithRepetitionSeparator(const char* value) { SetRepetitionSeparator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Located at position ISA-14 in the header. The value "1" indicates that the
     * sender is requesting an interchange acknowledgment at receipt of the
     * interchange. The value "0" is used otherwise.</p>
     */
    inline const Aws::String& GetAcknowledgmentRequestedCode() const{ return m_acknowledgmentRequestedCode; }
    inline bool AcknowledgmentRequestedCodeHasBeenSet() const { return m_acknowledgmentRequestedCodeHasBeenSet; }
    inline void SetAcknowledgmentRequestedCode(const Aws::String& value) { m_acknowledgmentRequestedCodeHasBeenSet = true; m_acknowledgmentRequestedCode = value; }
    inline void SetAcknowledgmentRequestedCode(Aws::String&& value) { m_acknowledgmentRequestedCodeHasBeenSet = true; m_acknowledgmentRequestedCode = std::move(value); }
    inline void SetAcknowledgmentRequestedCode(const char* value) { m_acknowledgmentRequestedCodeHasBeenSet = true; m_acknowledgmentRequestedCode.assign(value); }
    inline X12InterchangeControlHeaders& WithAcknowledgmentRequestedCode(const Aws::String& value) { SetAcknowledgmentRequestedCode(value); return *this;}
    inline X12InterchangeControlHeaders& WithAcknowledgmentRequestedCode(Aws::String&& value) { SetAcknowledgmentRequestedCode(std::move(value)); return *this;}
    inline X12InterchangeControlHeaders& WithAcknowledgmentRequestedCode(const char* value) { SetAcknowledgmentRequestedCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Located at position ISA-15 in the header. Specifies how this interchange is
     * being used:</p> <ul> <li> <p> <code>T</code> indicates this interchange is for
     * testing.</p> </li> <li> <p> <code>P</code> indicates this interchange is for
     * production.</p> </li> <li> <p> <code>I</code> indicates this interchange is
     * informational.</p> </li> </ul>
     */
    inline const Aws::String& GetUsageIndicatorCode() const{ return m_usageIndicatorCode; }
    inline bool UsageIndicatorCodeHasBeenSet() const { return m_usageIndicatorCodeHasBeenSet; }
    inline void SetUsageIndicatorCode(const Aws::String& value) { m_usageIndicatorCodeHasBeenSet = true; m_usageIndicatorCode = value; }
    inline void SetUsageIndicatorCode(Aws::String&& value) { m_usageIndicatorCodeHasBeenSet = true; m_usageIndicatorCode = std::move(value); }
    inline void SetUsageIndicatorCode(const char* value) { m_usageIndicatorCodeHasBeenSet = true; m_usageIndicatorCode.assign(value); }
    inline X12InterchangeControlHeaders& WithUsageIndicatorCode(const Aws::String& value) { SetUsageIndicatorCode(value); return *this;}
    inline X12InterchangeControlHeaders& WithUsageIndicatorCode(Aws::String&& value) { SetUsageIndicatorCode(std::move(value)); return *this;}
    inline X12InterchangeControlHeaders& WithUsageIndicatorCode(const char* value) { SetUsageIndicatorCode(value); return *this;}
    ///@}
  private:

    Aws::String m_senderIdQualifier;
    bool m_senderIdQualifierHasBeenSet = false;

    Aws::String m_senderId;
    bool m_senderIdHasBeenSet = false;

    Aws::String m_receiverIdQualifier;
    bool m_receiverIdQualifierHasBeenSet = false;

    Aws::String m_receiverId;
    bool m_receiverIdHasBeenSet = false;

    Aws::String m_repetitionSeparator;
    bool m_repetitionSeparatorHasBeenSet = false;

    Aws::String m_acknowledgmentRequestedCode;
    bool m_acknowledgmentRequestedCodeHasBeenSet = false;

    Aws::String m_usageIndicatorCode;
    bool m_usageIndicatorCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
