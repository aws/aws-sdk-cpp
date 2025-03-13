/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/MessageDsn.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/BouncedRecipientInfo.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to send a bounce message to the sender of an email you
   * received through Amazon SES.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/SendBounceRequest">AWS
   * API Reference</a></p>
   */
  class SendBounceRequest : public SESRequest
  {
  public:
    AWS_SES_API SendBounceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendBounce"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The message ID of the message to be bounced.</p>
     */
    inline const Aws::String& GetOriginalMessageId() const { return m_originalMessageId; }
    inline bool OriginalMessageIdHasBeenSet() const { return m_originalMessageIdHasBeenSet; }
    template<typename OriginalMessageIdT = Aws::String>
    void SetOriginalMessageId(OriginalMessageIdT&& value) { m_originalMessageIdHasBeenSet = true; m_originalMessageId = std::forward<OriginalMessageIdT>(value); }
    template<typename OriginalMessageIdT = Aws::String>
    SendBounceRequest& WithOriginalMessageId(OriginalMessageIdT&& value) { SetOriginalMessageId(std::forward<OriginalMessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address to use in the "From" header of the bounce message. This must be
     * an identity that you have verified with Amazon SES.</p>
     */
    inline const Aws::String& GetBounceSender() const { return m_bounceSender; }
    inline bool BounceSenderHasBeenSet() const { return m_bounceSenderHasBeenSet; }
    template<typename BounceSenderT = Aws::String>
    void SetBounceSender(BounceSenderT&& value) { m_bounceSenderHasBeenSet = true; m_bounceSender = std::forward<BounceSenderT>(value); }
    template<typename BounceSenderT = Aws::String>
    SendBounceRequest& WithBounceSender(BounceSenderT&& value) { SetBounceSender(std::forward<BounceSenderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Human-readable text for the bounce message to explain the failure. If not
     * specified, the text is auto-generated based on the bounced recipient
     * information.</p>
     */
    inline const Aws::String& GetExplanation() const { return m_explanation; }
    inline bool ExplanationHasBeenSet() const { return m_explanationHasBeenSet; }
    template<typename ExplanationT = Aws::String>
    void SetExplanation(ExplanationT&& value) { m_explanationHasBeenSet = true; m_explanation = std::forward<ExplanationT>(value); }
    template<typename ExplanationT = Aws::String>
    SendBounceRequest& WithExplanation(ExplanationT&& value) { SetExplanation(std::forward<ExplanationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message-related DSN fields. If not specified, Amazon SES chooses the
     * values.</p>
     */
    inline const MessageDsn& GetMessageDsn() const { return m_messageDsn; }
    inline bool MessageDsnHasBeenSet() const { return m_messageDsnHasBeenSet; }
    template<typename MessageDsnT = MessageDsn>
    void SetMessageDsn(MessageDsnT&& value) { m_messageDsnHasBeenSet = true; m_messageDsn = std::forward<MessageDsnT>(value); }
    template<typename MessageDsnT = MessageDsn>
    SendBounceRequest& WithMessageDsn(MessageDsnT&& value) { SetMessageDsn(std::forward<MessageDsnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of recipients of the bounced message, including the information
     * required to create the Delivery Status Notifications (DSNs) for the recipients.
     * You must specify at least one <code>BouncedRecipientInfo</code> in the list.</p>
     */
    inline const Aws::Vector<BouncedRecipientInfo>& GetBouncedRecipientInfoList() const { return m_bouncedRecipientInfoList; }
    inline bool BouncedRecipientInfoListHasBeenSet() const { return m_bouncedRecipientInfoListHasBeenSet; }
    template<typename BouncedRecipientInfoListT = Aws::Vector<BouncedRecipientInfo>>
    void SetBouncedRecipientInfoList(BouncedRecipientInfoListT&& value) { m_bouncedRecipientInfoListHasBeenSet = true; m_bouncedRecipientInfoList = std::forward<BouncedRecipientInfoListT>(value); }
    template<typename BouncedRecipientInfoListT = Aws::Vector<BouncedRecipientInfo>>
    SendBounceRequest& WithBouncedRecipientInfoList(BouncedRecipientInfoListT&& value) { SetBouncedRecipientInfoList(std::forward<BouncedRecipientInfoListT>(value)); return *this;}
    template<typename BouncedRecipientInfoListT = BouncedRecipientInfo>
    SendBounceRequest& AddBouncedRecipientInfoList(BouncedRecipientInfoListT&& value) { m_bouncedRecipientInfoListHasBeenSet = true; m_bouncedRecipientInfoList.emplace_back(std::forward<BouncedRecipientInfoListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the address in the "From" header of the bounce. For more information
     * about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline const Aws::String& GetBounceSenderArn() const { return m_bounceSenderArn; }
    inline bool BounceSenderArnHasBeenSet() const { return m_bounceSenderArnHasBeenSet; }
    template<typename BounceSenderArnT = Aws::String>
    void SetBounceSenderArn(BounceSenderArnT&& value) { m_bounceSenderArnHasBeenSet = true; m_bounceSenderArn = std::forward<BounceSenderArnT>(value); }
    template<typename BounceSenderArnT = Aws::String>
    SendBounceRequest& WithBounceSenderArn(BounceSenderArnT&& value) { SetBounceSenderArn(std::forward<BounceSenderArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_originalMessageId;
    bool m_originalMessageIdHasBeenSet = false;

    Aws::String m_bounceSender;
    bool m_bounceSenderHasBeenSet = false;

    Aws::String m_explanation;
    bool m_explanationHasBeenSet = false;

    MessageDsn m_messageDsn;
    bool m_messageDsnHasBeenSet = false;

    Aws::Vector<BouncedRecipientInfo> m_bouncedRecipientInfoList;
    bool m_bouncedRecipientInfoListHasBeenSet = false;

    Aws::String m_bounceSenderArn;
    bool m_bounceSenderArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
