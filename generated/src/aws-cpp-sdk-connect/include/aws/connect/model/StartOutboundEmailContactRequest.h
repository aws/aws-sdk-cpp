/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/EmailAddressInfo.h>
#include <aws/connect/model/OutboundAdditionalRecipients.h>
#include <aws/connect/model/OutboundEmailContent.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class StartOutboundEmailContactRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API StartOutboundEmailContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartOutboundEmailContact"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline StartOutboundEmailContactRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline StartOutboundEmailContactRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline StartOutboundEmailContactRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the contact in this instance of Amazon Connect. </p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }
    inline StartOutboundEmailContactRequest& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}
    inline StartOutboundEmailContactRequest& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}
    inline StartOutboundEmailContactRequest& WithContactId(const char* value) { SetContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address associated with the instance.</p>
     */
    inline const EmailAddressInfo& GetFromEmailAddress() const{ return m_fromEmailAddress; }
    inline bool FromEmailAddressHasBeenSet() const { return m_fromEmailAddressHasBeenSet; }
    inline void SetFromEmailAddress(const EmailAddressInfo& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = value; }
    inline void SetFromEmailAddress(EmailAddressInfo&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::move(value); }
    inline StartOutboundEmailContactRequest& WithFromEmailAddress(const EmailAddressInfo& value) { SetFromEmailAddress(value); return *this;}
    inline StartOutboundEmailContactRequest& WithFromEmailAddress(EmailAddressInfo&& value) { SetFromEmailAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the customer.</p>
     */
    inline const EmailAddressInfo& GetDestinationEmailAddress() const{ return m_destinationEmailAddress; }
    inline bool DestinationEmailAddressHasBeenSet() const { return m_destinationEmailAddressHasBeenSet; }
    inline void SetDestinationEmailAddress(const EmailAddressInfo& value) { m_destinationEmailAddressHasBeenSet = true; m_destinationEmailAddress = value; }
    inline void SetDestinationEmailAddress(EmailAddressInfo&& value) { m_destinationEmailAddressHasBeenSet = true; m_destinationEmailAddress = std::move(value); }
    inline StartOutboundEmailContactRequest& WithDestinationEmailAddress(const EmailAddressInfo& value) { SetDestinationEmailAddress(value); return *this;}
    inline StartOutboundEmailContactRequest& WithDestinationEmailAddress(EmailAddressInfo&& value) { SetDestinationEmailAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The addtional recipients address of email in CC.</p>
     */
    inline const OutboundAdditionalRecipients& GetAdditionalRecipients() const{ return m_additionalRecipients; }
    inline bool AdditionalRecipientsHasBeenSet() const { return m_additionalRecipientsHasBeenSet; }
    inline void SetAdditionalRecipients(const OutboundAdditionalRecipients& value) { m_additionalRecipientsHasBeenSet = true; m_additionalRecipients = value; }
    inline void SetAdditionalRecipients(OutboundAdditionalRecipients&& value) { m_additionalRecipientsHasBeenSet = true; m_additionalRecipients = std::move(value); }
    inline StartOutboundEmailContactRequest& WithAdditionalRecipients(const OutboundAdditionalRecipients& value) { SetAdditionalRecipients(value); return *this;}
    inline StartOutboundEmailContactRequest& WithAdditionalRecipients(OutboundAdditionalRecipients&& value) { SetAdditionalRecipients(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email message body to be sent to the newly created email.</p>
     */
    inline const OutboundEmailContent& GetEmailMessage() const{ return m_emailMessage; }
    inline bool EmailMessageHasBeenSet() const { return m_emailMessageHasBeenSet; }
    inline void SetEmailMessage(const OutboundEmailContent& value) { m_emailMessageHasBeenSet = true; m_emailMessage = value; }
    inline void SetEmailMessage(OutboundEmailContent&& value) { m_emailMessageHasBeenSet = true; m_emailMessage = std::move(value); }
    inline StartOutboundEmailContactRequest& WithEmailMessage(const OutboundEmailContent& value) { SetEmailMessage(value); return *this;}
    inline StartOutboundEmailContactRequest& WithEmailMessage(OutboundEmailContent&& value) { SetEmailMessage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline StartOutboundEmailContactRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline StartOutboundEmailContactRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline StartOutboundEmailContactRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    EmailAddressInfo m_fromEmailAddress;
    bool m_fromEmailAddressHasBeenSet = false;

    EmailAddressInfo m_destinationEmailAddress;
    bool m_destinationEmailAddressHasBeenSet = false;

    OutboundAdditionalRecipients m_additionalRecipients;
    bool m_additionalRecipientsHasBeenSet = false;

    OutboundEmailContent m_emailMessage;
    bool m_emailMessageHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
