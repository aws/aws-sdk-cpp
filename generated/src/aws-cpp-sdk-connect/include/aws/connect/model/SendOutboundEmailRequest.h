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
#include <aws/connect/model/TrafficType.h>
#include <aws/connect/model/SourceCampaign.h>
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
  class SendOutboundEmailRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API SendOutboundEmailRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendOutboundEmail"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    SendOutboundEmailRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address to be used for sending email.</p>
     */
    inline const EmailAddressInfo& GetFromEmailAddress() const { return m_fromEmailAddress; }
    inline bool FromEmailAddressHasBeenSet() const { return m_fromEmailAddressHasBeenSet; }
    template<typename FromEmailAddressT = EmailAddressInfo>
    void SetFromEmailAddress(FromEmailAddressT&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::forward<FromEmailAddressT>(value); }
    template<typename FromEmailAddressT = EmailAddressInfo>
    SendOutboundEmailRequest& WithFromEmailAddress(FromEmailAddressT&& value) { SetFromEmailAddress(std::forward<FromEmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address to send the email to.</p>
     */
    inline const EmailAddressInfo& GetDestinationEmailAddress() const { return m_destinationEmailAddress; }
    inline bool DestinationEmailAddressHasBeenSet() const { return m_destinationEmailAddressHasBeenSet; }
    template<typename DestinationEmailAddressT = EmailAddressInfo>
    void SetDestinationEmailAddress(DestinationEmailAddressT&& value) { m_destinationEmailAddressHasBeenSet = true; m_destinationEmailAddress = std::forward<DestinationEmailAddressT>(value); }
    template<typename DestinationEmailAddressT = EmailAddressInfo>
    SendOutboundEmailRequest& WithDestinationEmailAddress(DestinationEmailAddressT&& value) { SetDestinationEmailAddress(std::forward<DestinationEmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional recipients address of the email in CC.</p>
     */
    inline const OutboundAdditionalRecipients& GetAdditionalRecipients() const { return m_additionalRecipients; }
    inline bool AdditionalRecipientsHasBeenSet() const { return m_additionalRecipientsHasBeenSet; }
    template<typename AdditionalRecipientsT = OutboundAdditionalRecipients>
    void SetAdditionalRecipients(AdditionalRecipientsT&& value) { m_additionalRecipientsHasBeenSet = true; m_additionalRecipients = std::forward<AdditionalRecipientsT>(value); }
    template<typename AdditionalRecipientsT = OutboundAdditionalRecipients>
    SendOutboundEmailRequest& WithAdditionalRecipients(AdditionalRecipientsT&& value) { SetAdditionalRecipients(std::forward<AdditionalRecipientsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email message body to be sent to the newly created email.</p>
     */
    inline const OutboundEmailContent& GetEmailMessage() const { return m_emailMessage; }
    inline bool EmailMessageHasBeenSet() const { return m_emailMessageHasBeenSet; }
    template<typename EmailMessageT = OutboundEmailContent>
    void SetEmailMessage(EmailMessageT&& value) { m_emailMessageHasBeenSet = true; m_emailMessage = std::forward<EmailMessageT>(value); }
    template<typename EmailMessageT = OutboundEmailContent>
    SendOutboundEmailRequest& WithEmailMessage(EmailMessageT&& value) { SetEmailMessage(std::forward<EmailMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Denotes the class of traffic.</p>  <p>Only the CAMPAIGN traffic type is
     * supported.</p> 
     */
    inline TrafficType GetTrafficType() const { return m_trafficType; }
    inline bool TrafficTypeHasBeenSet() const { return m_trafficTypeHasBeenSet; }
    inline void SetTrafficType(TrafficType value) { m_trafficTypeHasBeenSet = true; m_trafficType = value; }
    inline SendOutboundEmailRequest& WithTrafficType(TrafficType value) { SetTrafficType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Campaign object need for Campaign traffic type.</p>
     */
    inline const SourceCampaign& GetSourceCampaign() const { return m_sourceCampaign; }
    inline bool SourceCampaignHasBeenSet() const { return m_sourceCampaignHasBeenSet; }
    template<typename SourceCampaignT = SourceCampaign>
    void SetSourceCampaign(SourceCampaignT&& value) { m_sourceCampaignHasBeenSet = true; m_sourceCampaign = std::forward<SourceCampaignT>(value); }
    template<typename SourceCampaignT = SourceCampaign>
    SendOutboundEmailRequest& WithSourceCampaign(SourceCampaignT&& value) { SetSourceCampaign(std::forward<SourceCampaignT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    SendOutboundEmailRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    EmailAddressInfo m_fromEmailAddress;
    bool m_fromEmailAddressHasBeenSet = false;

    EmailAddressInfo m_destinationEmailAddress;
    bool m_destinationEmailAddressHasBeenSet = false;

    OutboundAdditionalRecipients m_additionalRecipients;
    bool m_additionalRecipientsHasBeenSet = false;

    OutboundEmailContent m_emailMessage;
    bool m_emailMessageHasBeenSet = false;

    TrafficType m_trafficType{TrafficType::NOT_SET};
    bool m_trafficTypeHasBeenSet = false;

    SourceCampaign m_sourceCampaign;
    bool m_sourceCampaignHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
