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
    AWS_B2BI_API X12InterchangeControlHeaders() = default;
    AWS_B2BI_API X12InterchangeControlHeaders(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API X12InterchangeControlHeaders& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Located at position ISA-05 in the header. Qualifier for the sender ID.
     * Together, the ID and qualifier uniquely identify the sending trading
     * partner.</p>
     */
    inline const Aws::String& GetSenderIdQualifier() const { return m_senderIdQualifier; }
    inline bool SenderIdQualifierHasBeenSet() const { return m_senderIdQualifierHasBeenSet; }
    template<typename SenderIdQualifierT = Aws::String>
    void SetSenderIdQualifier(SenderIdQualifierT&& value) { m_senderIdQualifierHasBeenSet = true; m_senderIdQualifier = std::forward<SenderIdQualifierT>(value); }
    template<typename SenderIdQualifierT = Aws::String>
    X12InterchangeControlHeaders& WithSenderIdQualifier(SenderIdQualifierT&& value) { SetSenderIdQualifier(std::forward<SenderIdQualifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Located at position ISA-06 in the header. This value (along with the
     * <code>senderIdQualifier</code>) identifies the sender of the interchange. </p>
     */
    inline const Aws::String& GetSenderId() const { return m_senderId; }
    inline bool SenderIdHasBeenSet() const { return m_senderIdHasBeenSet; }
    template<typename SenderIdT = Aws::String>
    void SetSenderId(SenderIdT&& value) { m_senderIdHasBeenSet = true; m_senderId = std::forward<SenderIdT>(value); }
    template<typename SenderIdT = Aws::String>
    X12InterchangeControlHeaders& WithSenderId(SenderIdT&& value) { SetSenderId(std::forward<SenderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Located at position ISA-07 in the header. Qualifier for the receiver ID.
     * Together, the ID and qualifier uniquely identify the receiving trading
     * partner.</p>
     */
    inline const Aws::String& GetReceiverIdQualifier() const { return m_receiverIdQualifier; }
    inline bool ReceiverIdQualifierHasBeenSet() const { return m_receiverIdQualifierHasBeenSet; }
    template<typename ReceiverIdQualifierT = Aws::String>
    void SetReceiverIdQualifier(ReceiverIdQualifierT&& value) { m_receiverIdQualifierHasBeenSet = true; m_receiverIdQualifier = std::forward<ReceiverIdQualifierT>(value); }
    template<typename ReceiverIdQualifierT = Aws::String>
    X12InterchangeControlHeaders& WithReceiverIdQualifier(ReceiverIdQualifierT&& value) { SetReceiverIdQualifier(std::forward<ReceiverIdQualifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Located at position ISA-08 in the header. This value (along with the
     * <code>receiverIdQualifier</code>) identifies the intended recipient of the
     * interchange. </p>
     */
    inline const Aws::String& GetReceiverId() const { return m_receiverId; }
    inline bool ReceiverIdHasBeenSet() const { return m_receiverIdHasBeenSet; }
    template<typename ReceiverIdT = Aws::String>
    void SetReceiverId(ReceiverIdT&& value) { m_receiverIdHasBeenSet = true; m_receiverId = std::forward<ReceiverIdT>(value); }
    template<typename ReceiverIdT = Aws::String>
    X12InterchangeControlHeaders& WithReceiverId(ReceiverIdT&& value) { SetReceiverId(std::forward<ReceiverIdT>(value)); return *this;}
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
    inline const Aws::String& GetRepetitionSeparator() const { return m_repetitionSeparator; }
    inline bool RepetitionSeparatorHasBeenSet() const { return m_repetitionSeparatorHasBeenSet; }
    template<typename RepetitionSeparatorT = Aws::String>
    void SetRepetitionSeparator(RepetitionSeparatorT&& value) { m_repetitionSeparatorHasBeenSet = true; m_repetitionSeparator = std::forward<RepetitionSeparatorT>(value); }
    template<typename RepetitionSeparatorT = Aws::String>
    X12InterchangeControlHeaders& WithRepetitionSeparator(RepetitionSeparatorT&& value) { SetRepetitionSeparator(std::forward<RepetitionSeparatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Located at position ISA-14 in the header. The value "1" indicates that the
     * sender is requesting an interchange acknowledgment at receipt of the
     * interchange. The value "0" is used otherwise.</p>
     */
    inline const Aws::String& GetAcknowledgmentRequestedCode() const { return m_acknowledgmentRequestedCode; }
    inline bool AcknowledgmentRequestedCodeHasBeenSet() const { return m_acknowledgmentRequestedCodeHasBeenSet; }
    template<typename AcknowledgmentRequestedCodeT = Aws::String>
    void SetAcknowledgmentRequestedCode(AcknowledgmentRequestedCodeT&& value) { m_acknowledgmentRequestedCodeHasBeenSet = true; m_acknowledgmentRequestedCode = std::forward<AcknowledgmentRequestedCodeT>(value); }
    template<typename AcknowledgmentRequestedCodeT = Aws::String>
    X12InterchangeControlHeaders& WithAcknowledgmentRequestedCode(AcknowledgmentRequestedCodeT&& value) { SetAcknowledgmentRequestedCode(std::forward<AcknowledgmentRequestedCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Located at position ISA-15 in the header. Specifies how this interchange is
     * being used:</p> <ul> <li> <p> <code>T</code> indicates this interchange is for
     * testing.</p> </li> <li> <p> <code>P</code> indicates this interchange is for
     * production.</p> </li> <li> <p> <code>I</code> indicates this interchange is
     * informational.</p> </li> </ul>
     */
    inline const Aws::String& GetUsageIndicatorCode() const { return m_usageIndicatorCode; }
    inline bool UsageIndicatorCodeHasBeenSet() const { return m_usageIndicatorCodeHasBeenSet; }
    template<typename UsageIndicatorCodeT = Aws::String>
    void SetUsageIndicatorCode(UsageIndicatorCodeT&& value) { m_usageIndicatorCodeHasBeenSet = true; m_usageIndicatorCode = std::forward<UsageIndicatorCodeT>(value); }
    template<typename UsageIndicatorCodeT = Aws::String>
    X12InterchangeControlHeaders& WithUsageIndicatorCode(UsageIndicatorCodeT&& value) { SetUsageIndicatorCode(std::forward<UsageIndicatorCodeT>(value)); return *this;}
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
