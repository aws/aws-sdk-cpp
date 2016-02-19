/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * Request object for sending a simple/complex bounce. It contains all of the
   * information needed to generate a basic DSN or a fully-customized DSN.
   */
  class AWS_SES_API SendBounceRequest : public SESRequest
  {
  public:
    SendBounceRequest();
    Aws::String SerializePayload() const override;


    /**
     * Message id of the message received through SES Inbound that should be bounced.
     * This is required and needs to be received by the same account as the caller of
     * this API.
     */
    inline const Aws::String& GetOriginalMessageId() const{ return m_originalMessageId; }

    /**
     * Message id of the message received through SES Inbound that should be bounced.
     * This is required and needs to be received by the same account as the caller of
     * this API.
     */
    inline void SetOriginalMessageId(const Aws::String& value) { m_originalMessageIdHasBeenSet = true; m_originalMessageId = value; }

    /**
     * Message id of the message received through SES Inbound that should be bounced.
     * This is required and needs to be received by the same account as the caller of
     * this API.
     */
    inline void SetOriginalMessageId(Aws::String&& value) { m_originalMessageIdHasBeenSet = true; m_originalMessageId = value; }

    /**
     * Message id of the message received through SES Inbound that should be bounced.
     * This is required and needs to be received by the same account as the caller of
     * this API.
     */
    inline void SetOriginalMessageId(const char* value) { m_originalMessageIdHasBeenSet = true; m_originalMessageId.assign(value); }

    /**
     * Message id of the message received through SES Inbound that should be bounced.
     * This is required and needs to be received by the same account as the caller of
     * this API.
     */
    inline SendBounceRequest& WithOriginalMessageId(const Aws::String& value) { SetOriginalMessageId(value); return *this;}

    /**
     * Message id of the message received through SES Inbound that should be bounced.
     * This is required and needs to be received by the same account as the caller of
     * this API.
     */
    inline SendBounceRequest& WithOriginalMessageId(Aws::String&& value) { SetOriginalMessageId(value); return *this;}

    /**
     * Message id of the message received through SES Inbound that should be bounced.
     * This is required and needs to be received by the same account as the caller of
     * this API.
     */
    inline SendBounceRequest& WithOriginalMessageId(const char* value) { SetOriginalMessageId(value); return *this;}

    /**
     * The address to use in the bounces From header. This is required and must use a
     * verified identity.
     */
    inline const Aws::String& GetBounceSender() const{ return m_bounceSender; }

    /**
     * The address to use in the bounces From header. This is required and must use a
     * verified identity.
     */
    inline void SetBounceSender(const Aws::String& value) { m_bounceSenderHasBeenSet = true; m_bounceSender = value; }

    /**
     * The address to use in the bounces From header. This is required and must use a
     * verified identity.
     */
    inline void SetBounceSender(Aws::String&& value) { m_bounceSenderHasBeenSet = true; m_bounceSender = value; }

    /**
     * The address to use in the bounces From header. This is required and must use a
     * verified identity.
     */
    inline void SetBounceSender(const char* value) { m_bounceSenderHasBeenSet = true; m_bounceSender.assign(value); }

    /**
     * The address to use in the bounces From header. This is required and must use a
     * verified identity.
     */
    inline SendBounceRequest& WithBounceSender(const Aws::String& value) { SetBounceSender(value); return *this;}

    /**
     * The address to use in the bounces From header. This is required and must use a
     * verified identity.
     */
    inline SendBounceRequest& WithBounceSender(Aws::String&& value) { SetBounceSender(value); return *this;}

    /**
     * The address to use in the bounces From header. This is required and must use a
     * verified identity.
     */
    inline SendBounceRequest& WithBounceSender(const char* value) { SetBounceSender(value); return *this;}

    /**
     * Human-readable text for the bounce message to explain the failure. If not
     * specified, one will be auto-generated based on the bounced recipients (and
     * BounceTypes, if provided).
     */
    inline const Aws::String& GetExplanation() const{ return m_explanation; }

    /**
     * Human-readable text for the bounce message to explain the failure. If not
     * specified, one will be auto-generated based on the bounced recipients (and
     * BounceTypes, if provided).
     */
    inline void SetExplanation(const Aws::String& value) { m_explanationHasBeenSet = true; m_explanation = value; }

    /**
     * Human-readable text for the bounce message to explain the failure. If not
     * specified, one will be auto-generated based on the bounced recipients (and
     * BounceTypes, if provided).
     */
    inline void SetExplanation(Aws::String&& value) { m_explanationHasBeenSet = true; m_explanation = value; }

    /**
     * Human-readable text for the bounce message to explain the failure. If not
     * specified, one will be auto-generated based on the bounced recipients (and
     * BounceTypes, if provided).
     */
    inline void SetExplanation(const char* value) { m_explanationHasBeenSet = true; m_explanation.assign(value); }

    /**
     * Human-readable text for the bounce message to explain the failure. If not
     * specified, one will be auto-generated based on the bounced recipients (and
     * BounceTypes, if provided).
     */
    inline SendBounceRequest& WithExplanation(const Aws::String& value) { SetExplanation(value); return *this;}

    /**
     * Human-readable text for the bounce message to explain the failure. If not
     * specified, one will be auto-generated based on the bounced recipients (and
     * BounceTypes, if provided).
     */
    inline SendBounceRequest& WithExplanation(Aws::String&& value) { SetExplanation(value); return *this;}

    /**
     * Human-readable text for the bounce message to explain the failure. If not
     * specified, one will be auto-generated based on the bounced recipients (and
     * BounceTypes, if provided).
     */
    inline SendBounceRequest& WithExplanation(const char* value) { SetExplanation(value); return *this;}

    /**
     * Message level DSN fields. If not specified, a reasonable default chosen.
     */
    inline const MessageDsn& GetMessageDsn() const{ return m_messageDsn; }

    /**
     * Message level DSN fields. If not specified, a reasonable default chosen.
     */
    inline void SetMessageDsn(const MessageDsn& value) { m_messageDsnHasBeenSet = true; m_messageDsn = value; }

    /**
     * Message level DSN fields. If not specified, a reasonable default chosen.
     */
    inline void SetMessageDsn(MessageDsn&& value) { m_messageDsnHasBeenSet = true; m_messageDsn = value; }

    /**
     * Message level DSN fields. If not specified, a reasonable default chosen.
     */
    inline SendBounceRequest& WithMessageDsn(const MessageDsn& value) { SetMessageDsn(value); return *this;}

    /**
     * Message level DSN fields. If not specified, a reasonable default chosen.
     */
    inline SendBounceRequest& WithMessageDsn(MessageDsn&& value) { SetMessageDsn(value); return *this;}

    /**
     * Recipients of the original message that bounced and information about them
     * needed to create their DSNs. This is a required field - you must have at least
     * one BouncedRecipientInfo in the list.
     */
    inline const Aws::Vector<BouncedRecipientInfo>& GetBouncedRecipientInfoList() const{ return m_bouncedRecipientInfoList; }

    /**
     * Recipients of the original message that bounced and information about them
     * needed to create their DSNs. This is a required field - you must have at least
     * one BouncedRecipientInfo in the list.
     */
    inline void SetBouncedRecipientInfoList(const Aws::Vector<BouncedRecipientInfo>& value) { m_bouncedRecipientInfoListHasBeenSet = true; m_bouncedRecipientInfoList = value; }

    /**
     * Recipients of the original message that bounced and information about them
     * needed to create their DSNs. This is a required field - you must have at least
     * one BouncedRecipientInfo in the list.
     */
    inline void SetBouncedRecipientInfoList(Aws::Vector<BouncedRecipientInfo>&& value) { m_bouncedRecipientInfoListHasBeenSet = true; m_bouncedRecipientInfoList = value; }

    /**
     * Recipients of the original message that bounced and information about them
     * needed to create their DSNs. This is a required field - you must have at least
     * one BouncedRecipientInfo in the list.
     */
    inline SendBounceRequest& WithBouncedRecipientInfoList(const Aws::Vector<BouncedRecipientInfo>& value) { SetBouncedRecipientInfoList(value); return *this;}

    /**
     * Recipients of the original message that bounced and information about them
     * needed to create their DSNs. This is a required field - you must have at least
     * one BouncedRecipientInfo in the list.
     */
    inline SendBounceRequest& WithBouncedRecipientInfoList(Aws::Vector<BouncedRecipientInfo>&& value) { SetBouncedRecipientInfoList(value); return *this;}

    /**
     * Recipients of the original message that bounced and information about them
     * needed to create their DSNs. This is a required field - you must have at least
     * one BouncedRecipientInfo in the list.
     */
    inline SendBounceRequest& AddBouncedRecipientInfoList(const BouncedRecipientInfo& value) { m_bouncedRecipientInfoListHasBeenSet = true; m_bouncedRecipientInfoList.push_back(value); return *this; }

    /**
     * Recipients of the original message that bounced and information about them
     * needed to create their DSNs. This is a required field - you must have at least
     * one BouncedRecipientInfo in the list.
     */
    inline SendBounceRequest& AddBouncedRecipientInfoList(BouncedRecipientInfo&& value) { m_bouncedRecipientInfoListHasBeenSet = true; m_bouncedRecipientInfoList.push_back(value); return *this; }

    /**
     * The ARN for the identity of the address to use in the bounce's From header. This
     * is only necessary if the caller's account doesn't own the identity and is using
     * sending authorization policies to send on behalf of another account's identity.
     */
    inline const Aws::String& GetBounceSenderArn() const{ return m_bounceSenderArn; }

    /**
     * The ARN for the identity of the address to use in the bounce's From header. This
     * is only necessary if the caller's account doesn't own the identity and is using
     * sending authorization policies to send on behalf of another account's identity.
     */
    inline void SetBounceSenderArn(const Aws::String& value) { m_bounceSenderArnHasBeenSet = true; m_bounceSenderArn = value; }

    /**
     * The ARN for the identity of the address to use in the bounce's From header. This
     * is only necessary if the caller's account doesn't own the identity and is using
     * sending authorization policies to send on behalf of another account's identity.
     */
    inline void SetBounceSenderArn(Aws::String&& value) { m_bounceSenderArnHasBeenSet = true; m_bounceSenderArn = value; }

    /**
     * The ARN for the identity of the address to use in the bounce's From header. This
     * is only necessary if the caller's account doesn't own the identity and is using
     * sending authorization policies to send on behalf of another account's identity.
     */
    inline void SetBounceSenderArn(const char* value) { m_bounceSenderArnHasBeenSet = true; m_bounceSenderArn.assign(value); }

    /**
     * The ARN for the identity of the address to use in the bounce's From header. This
     * is only necessary if the caller's account doesn't own the identity and is using
     * sending authorization policies to send on behalf of another account's identity.
     */
    inline SendBounceRequest& WithBounceSenderArn(const Aws::String& value) { SetBounceSenderArn(value); return *this;}

    /**
     * The ARN for the identity of the address to use in the bounce's From header. This
     * is only necessary if the caller's account doesn't own the identity and is using
     * sending authorization policies to send on behalf of another account's identity.
     */
    inline SendBounceRequest& WithBounceSenderArn(Aws::String&& value) { SetBounceSenderArn(value); return *this;}

    /**
     * The ARN for the identity of the address to use in the bounce's From header. This
     * is only necessary if the caller's account doesn't own the identity and is using
     * sending authorization policies to send on behalf of another account's identity.
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
