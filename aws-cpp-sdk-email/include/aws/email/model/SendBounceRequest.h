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
  class AWS_SES_API SendBounceRequest : public SESRequest
  {
  public:
    SendBounceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendBounce"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The message ID of the message to be bounced.</p>
     */
    inline const Aws::String& GetOriginalMessageId() const{ return m_originalMessageId; }

    /**
     * <p>The message ID of the message to be bounced.</p>
     */
    inline bool OriginalMessageIdHasBeenSet() const { return m_originalMessageIdHasBeenSet; }

    /**
     * <p>The message ID of the message to be bounced.</p>
     */
    inline void SetOriginalMessageId(const Aws::String& value) { m_originalMessageIdHasBeenSet = true; m_originalMessageId = value; }

    /**
     * <p>The message ID of the message to be bounced.</p>
     */
    inline void SetOriginalMessageId(Aws::String&& value) { m_originalMessageIdHasBeenSet = true; m_originalMessageId = std::move(value); }

    /**
     * <p>The message ID of the message to be bounced.</p>
     */
    inline void SetOriginalMessageId(const char* value) { m_originalMessageIdHasBeenSet = true; m_originalMessageId.assign(value); }

    /**
     * <p>The message ID of the message to be bounced.</p>
     */
    inline SendBounceRequest& WithOriginalMessageId(const Aws::String& value) { SetOriginalMessageId(value); return *this;}

    /**
     * <p>The message ID of the message to be bounced.</p>
     */
    inline SendBounceRequest& WithOriginalMessageId(Aws::String&& value) { SetOriginalMessageId(std::move(value)); return *this;}

    /**
     * <p>The message ID of the message to be bounced.</p>
     */
    inline SendBounceRequest& WithOriginalMessageId(const char* value) { SetOriginalMessageId(value); return *this;}


    /**
     * <p>The address to use in the "From" header of the bounce message. This must be
     * an identity that you have verified with Amazon SES.</p>
     */
    inline const Aws::String& GetBounceSender() const{ return m_bounceSender; }

    /**
     * <p>The address to use in the "From" header of the bounce message. This must be
     * an identity that you have verified with Amazon SES.</p>
     */
    inline bool BounceSenderHasBeenSet() const { return m_bounceSenderHasBeenSet; }

    /**
     * <p>The address to use in the "From" header of the bounce message. This must be
     * an identity that you have verified with Amazon SES.</p>
     */
    inline void SetBounceSender(const Aws::String& value) { m_bounceSenderHasBeenSet = true; m_bounceSender = value; }

    /**
     * <p>The address to use in the "From" header of the bounce message. This must be
     * an identity that you have verified with Amazon SES.</p>
     */
    inline void SetBounceSender(Aws::String&& value) { m_bounceSenderHasBeenSet = true; m_bounceSender = std::move(value); }

    /**
     * <p>The address to use in the "From" header of the bounce message. This must be
     * an identity that you have verified with Amazon SES.</p>
     */
    inline void SetBounceSender(const char* value) { m_bounceSenderHasBeenSet = true; m_bounceSender.assign(value); }

    /**
     * <p>The address to use in the "From" header of the bounce message. This must be
     * an identity that you have verified with Amazon SES.</p>
     */
    inline SendBounceRequest& WithBounceSender(const Aws::String& value) { SetBounceSender(value); return *this;}

    /**
     * <p>The address to use in the "From" header of the bounce message. This must be
     * an identity that you have verified with Amazon SES.</p>
     */
    inline SendBounceRequest& WithBounceSender(Aws::String&& value) { SetBounceSender(std::move(value)); return *this;}

    /**
     * <p>The address to use in the "From" header of the bounce message. This must be
     * an identity that you have verified with Amazon SES.</p>
     */
    inline SendBounceRequest& WithBounceSender(const char* value) { SetBounceSender(value); return *this;}


    /**
     * <p>Human-readable text for the bounce message to explain the failure. If not
     * specified, the text will be auto-generated based on the bounced recipient
     * information.</p>
     */
    inline const Aws::String& GetExplanation() const{ return m_explanation; }

    /**
     * <p>Human-readable text for the bounce message to explain the failure. If not
     * specified, the text will be auto-generated based on the bounced recipient
     * information.</p>
     */
    inline bool ExplanationHasBeenSet() const { return m_explanationHasBeenSet; }

    /**
     * <p>Human-readable text for the bounce message to explain the failure. If not
     * specified, the text will be auto-generated based on the bounced recipient
     * information.</p>
     */
    inline void SetExplanation(const Aws::String& value) { m_explanationHasBeenSet = true; m_explanation = value; }

    /**
     * <p>Human-readable text for the bounce message to explain the failure. If not
     * specified, the text will be auto-generated based on the bounced recipient
     * information.</p>
     */
    inline void SetExplanation(Aws::String&& value) { m_explanationHasBeenSet = true; m_explanation = std::move(value); }

    /**
     * <p>Human-readable text for the bounce message to explain the failure. If not
     * specified, the text will be auto-generated based on the bounced recipient
     * information.</p>
     */
    inline void SetExplanation(const char* value) { m_explanationHasBeenSet = true; m_explanation.assign(value); }

    /**
     * <p>Human-readable text for the bounce message to explain the failure. If not
     * specified, the text will be auto-generated based on the bounced recipient
     * information.</p>
     */
    inline SendBounceRequest& WithExplanation(const Aws::String& value) { SetExplanation(value); return *this;}

    /**
     * <p>Human-readable text for the bounce message to explain the failure. If not
     * specified, the text will be auto-generated based on the bounced recipient
     * information.</p>
     */
    inline SendBounceRequest& WithExplanation(Aws::String&& value) { SetExplanation(std::move(value)); return *this;}

    /**
     * <p>Human-readable text for the bounce message to explain the failure. If not
     * specified, the text will be auto-generated based on the bounced recipient
     * information.</p>
     */
    inline SendBounceRequest& WithExplanation(const char* value) { SetExplanation(value); return *this;}


    /**
     * <p>Message-related DSN fields. If not specified, Amazon SES will choose the
     * values.</p>
     */
    inline const MessageDsn& GetMessageDsn() const{ return m_messageDsn; }

    /**
     * <p>Message-related DSN fields. If not specified, Amazon SES will choose the
     * values.</p>
     */
    inline bool MessageDsnHasBeenSet() const { return m_messageDsnHasBeenSet; }

    /**
     * <p>Message-related DSN fields. If not specified, Amazon SES will choose the
     * values.</p>
     */
    inline void SetMessageDsn(const MessageDsn& value) { m_messageDsnHasBeenSet = true; m_messageDsn = value; }

    /**
     * <p>Message-related DSN fields. If not specified, Amazon SES will choose the
     * values.</p>
     */
    inline void SetMessageDsn(MessageDsn&& value) { m_messageDsnHasBeenSet = true; m_messageDsn = std::move(value); }

    /**
     * <p>Message-related DSN fields. If not specified, Amazon SES will choose the
     * values.</p>
     */
    inline SendBounceRequest& WithMessageDsn(const MessageDsn& value) { SetMessageDsn(value); return *this;}

    /**
     * <p>Message-related DSN fields. If not specified, Amazon SES will choose the
     * values.</p>
     */
    inline SendBounceRequest& WithMessageDsn(MessageDsn&& value) { SetMessageDsn(std::move(value)); return *this;}


    /**
     * <p>A list of recipients of the bounced message, including the information
     * required to create the Delivery Status Notifications (DSNs) for the recipients.
     * You must specify at least one <code>BouncedRecipientInfo</code> in the list.</p>
     */
    inline const Aws::Vector<BouncedRecipientInfo>& GetBouncedRecipientInfoList() const{ return m_bouncedRecipientInfoList; }

    /**
     * <p>A list of recipients of the bounced message, including the information
     * required to create the Delivery Status Notifications (DSNs) for the recipients.
     * You must specify at least one <code>BouncedRecipientInfo</code> in the list.</p>
     */
    inline bool BouncedRecipientInfoListHasBeenSet() const { return m_bouncedRecipientInfoListHasBeenSet; }

    /**
     * <p>A list of recipients of the bounced message, including the information
     * required to create the Delivery Status Notifications (DSNs) for the recipients.
     * You must specify at least one <code>BouncedRecipientInfo</code> in the list.</p>
     */
    inline void SetBouncedRecipientInfoList(const Aws::Vector<BouncedRecipientInfo>& value) { m_bouncedRecipientInfoListHasBeenSet = true; m_bouncedRecipientInfoList = value; }

    /**
     * <p>A list of recipients of the bounced message, including the information
     * required to create the Delivery Status Notifications (DSNs) for the recipients.
     * You must specify at least one <code>BouncedRecipientInfo</code> in the list.</p>
     */
    inline void SetBouncedRecipientInfoList(Aws::Vector<BouncedRecipientInfo>&& value) { m_bouncedRecipientInfoListHasBeenSet = true; m_bouncedRecipientInfoList = std::move(value); }

    /**
     * <p>A list of recipients of the bounced message, including the information
     * required to create the Delivery Status Notifications (DSNs) for the recipients.
     * You must specify at least one <code>BouncedRecipientInfo</code> in the list.</p>
     */
    inline SendBounceRequest& WithBouncedRecipientInfoList(const Aws::Vector<BouncedRecipientInfo>& value) { SetBouncedRecipientInfoList(value); return *this;}

    /**
     * <p>A list of recipients of the bounced message, including the information
     * required to create the Delivery Status Notifications (DSNs) for the recipients.
     * You must specify at least one <code>BouncedRecipientInfo</code> in the list.</p>
     */
    inline SendBounceRequest& WithBouncedRecipientInfoList(Aws::Vector<BouncedRecipientInfo>&& value) { SetBouncedRecipientInfoList(std::move(value)); return *this;}

    /**
     * <p>A list of recipients of the bounced message, including the information
     * required to create the Delivery Status Notifications (DSNs) for the recipients.
     * You must specify at least one <code>BouncedRecipientInfo</code> in the list.</p>
     */
    inline SendBounceRequest& AddBouncedRecipientInfoList(const BouncedRecipientInfo& value) { m_bouncedRecipientInfoListHasBeenSet = true; m_bouncedRecipientInfoList.push_back(value); return *this; }

    /**
     * <p>A list of recipients of the bounced message, including the information
     * required to create the Delivery Status Notifications (DSNs) for the recipients.
     * You must specify at least one <code>BouncedRecipientInfo</code> in the list.</p>
     */
    inline SendBounceRequest& AddBouncedRecipientInfoList(BouncedRecipientInfo&& value) { m_bouncedRecipientInfoListHasBeenSet = true; m_bouncedRecipientInfoList.push_back(std::move(value)); return *this; }


    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the address in the "From" header of the bounce. For more information
     * about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline const Aws::String& GetBounceSenderArn() const{ return m_bounceSenderArn; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the address in the "From" header of the bounce. For more information
     * about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline bool BounceSenderArnHasBeenSet() const { return m_bounceSenderArnHasBeenSet; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the address in the "From" header of the bounce. For more information
     * about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline void SetBounceSenderArn(const Aws::String& value) { m_bounceSenderArnHasBeenSet = true; m_bounceSenderArn = value; }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the address in the "From" header of the bounce. For more information
     * about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline void SetBounceSenderArn(Aws::String&& value) { m_bounceSenderArnHasBeenSet = true; m_bounceSenderArn = std::move(value); }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the address in the "From" header of the bounce. For more information
     * about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline void SetBounceSenderArn(const char* value) { m_bounceSenderArnHasBeenSet = true; m_bounceSenderArn.assign(value); }

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the address in the "From" header of the bounce. For more information
     * about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline SendBounceRequest& WithBounceSenderArn(const Aws::String& value) { SetBounceSenderArn(value); return *this;}

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the address in the "From" header of the bounce. For more information
     * about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline SendBounceRequest& WithBounceSenderArn(Aws::String&& value) { SetBounceSenderArn(std::move(value)); return *this;}

    /**
     * <p>This parameter is used only for sending authorization. It is the ARN of the
     * identity that is associated with the sending authorization policy that permits
     * you to use the address in the "From" header of the bounce. For more information
     * about sending authorization, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/sending-authorization.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline SendBounceRequest& WithBounceSenderArn(const char* value) { SetBounceSenderArn(value); return *this;}

  private:

    Aws::String m_originalMessageId;
    bool m_originalMessageIdHasBeenSet;

    Aws::String m_bounceSender;
    bool m_bounceSenderHasBeenSet;

    Aws::String m_explanation;
    bool m_explanationHasBeenSet;

    MessageDsn m_messageDsn;
    bool m_messageDsnHasBeenSet;

    Aws::Vector<BouncedRecipientInfo> m_bouncedRecipientInfoList;
    bool m_bouncedRecipientInfoListHasBeenSet;

    Aws::String m_bounceSenderArn;
    bool m_bounceSenderArnHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
