/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents/model/RecipientDetail.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Contains the configuration information of SMS notifications.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/SMSConfiguration">AWS
   * API Reference</a></p>
   */
  class SMSConfiguration
  {
  public:
    AWS_IOTEVENTS_API SMSConfiguration() = default;
    AWS_IOTEVENTS_API SMSConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API SMSConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sender ID.</p>
     */
    inline const Aws::String& GetSenderId() const { return m_senderId; }
    inline bool SenderIdHasBeenSet() const { return m_senderIdHasBeenSet; }
    template<typename SenderIdT = Aws::String>
    void SetSenderId(SenderIdT&& value) { m_senderIdHasBeenSet = true; m_senderId = std::forward<SenderIdT>(value); }
    template<typename SenderIdT = Aws::String>
    SMSConfiguration& WithSenderId(SenderIdT&& value) { SetSenderId(std::forward<SenderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message that you want to send. The message can be up to 200
     * characters.</p>
     */
    inline const Aws::String& GetAdditionalMessage() const { return m_additionalMessage; }
    inline bool AdditionalMessageHasBeenSet() const { return m_additionalMessageHasBeenSet; }
    template<typename AdditionalMessageT = Aws::String>
    void SetAdditionalMessage(AdditionalMessageT&& value) { m_additionalMessageHasBeenSet = true; m_additionalMessage = std::forward<AdditionalMessageT>(value); }
    template<typename AdditionalMessageT = Aws::String>
    SMSConfiguration& WithAdditionalMessage(AdditionalMessageT&& value) { SetAdditionalMessage(std::forward<AdditionalMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies one or more recipients who receive the message.</p> 
     * <p>You must <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/userguide/addusers.html">add
     * the users that receive SMS messages to your AWS SSO store</a>.</p> 
     */
    inline const Aws::Vector<RecipientDetail>& GetRecipients() const { return m_recipients; }
    inline bool RecipientsHasBeenSet() const { return m_recipientsHasBeenSet; }
    template<typename RecipientsT = Aws::Vector<RecipientDetail>>
    void SetRecipients(RecipientsT&& value) { m_recipientsHasBeenSet = true; m_recipients = std::forward<RecipientsT>(value); }
    template<typename RecipientsT = Aws::Vector<RecipientDetail>>
    SMSConfiguration& WithRecipients(RecipientsT&& value) { SetRecipients(std::forward<RecipientsT>(value)); return *this;}
    template<typename RecipientsT = RecipientDetail>
    SMSConfiguration& AddRecipients(RecipientsT&& value) { m_recipientsHasBeenSet = true; m_recipients.emplace_back(std::forward<RecipientsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_senderId;
    bool m_senderIdHasBeenSet = false;

    Aws::String m_additionalMessage;
    bool m_additionalMessageHasBeenSet = false;

    Aws::Vector<RecipientDetail> m_recipients;
    bool m_recipientsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
