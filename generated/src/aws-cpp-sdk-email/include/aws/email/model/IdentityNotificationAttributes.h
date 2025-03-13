/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Represents the notification attributes of an identity, including whether an
   * identity has Amazon Simple Notification Service (Amazon SNS) topics set for
   * bounce, complaint, and/or delivery notifications, and whether feedback
   * forwarding is enabled for bounce and complaint notifications.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/IdentityNotificationAttributes">AWS
   * API Reference</a></p>
   */
  class IdentityNotificationAttributes
  {
  public:
    AWS_SES_API IdentityNotificationAttributes() = default;
    AWS_SES_API IdentityNotificationAttributes(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API IdentityNotificationAttributes& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES
     * publishes bounce notifications.</p>
     */
    inline const Aws::String& GetBounceTopic() const { return m_bounceTopic; }
    inline bool BounceTopicHasBeenSet() const { return m_bounceTopicHasBeenSet; }
    template<typename BounceTopicT = Aws::String>
    void SetBounceTopic(BounceTopicT&& value) { m_bounceTopicHasBeenSet = true; m_bounceTopic = std::forward<BounceTopicT>(value); }
    template<typename BounceTopicT = Aws::String>
    IdentityNotificationAttributes& WithBounceTopic(BounceTopicT&& value) { SetBounceTopic(std::forward<BounceTopicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES
     * publishes complaint notifications.</p>
     */
    inline const Aws::String& GetComplaintTopic() const { return m_complaintTopic; }
    inline bool ComplaintTopicHasBeenSet() const { return m_complaintTopicHasBeenSet; }
    template<typename ComplaintTopicT = Aws::String>
    void SetComplaintTopic(ComplaintTopicT&& value) { m_complaintTopicHasBeenSet = true; m_complaintTopic = std::forward<ComplaintTopicT>(value); }
    template<typename ComplaintTopicT = Aws::String>
    IdentityNotificationAttributes& WithComplaintTopic(ComplaintTopicT&& value) { SetComplaintTopic(std::forward<ComplaintTopicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES
     * publishes delivery notifications.</p>
     */
    inline const Aws::String& GetDeliveryTopic() const { return m_deliveryTopic; }
    inline bool DeliveryTopicHasBeenSet() const { return m_deliveryTopicHasBeenSet; }
    template<typename DeliveryTopicT = Aws::String>
    void SetDeliveryTopic(DeliveryTopicT&& value) { m_deliveryTopicHasBeenSet = true; m_deliveryTopic = std::forward<DeliveryTopicT>(value); }
    template<typename DeliveryTopicT = Aws::String>
    IdentityNotificationAttributes& WithDeliveryTopic(DeliveryTopicT&& value) { SetDeliveryTopic(std::forward<DeliveryTopicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether Amazon SES forwards bounce and complaint notifications as
     * email. <code>true</code> indicates that Amazon SES forwards bounce and complaint
     * notifications as email, while <code>false</code> indicates that bounce and
     * complaint notifications are published only to the specified bounce and complaint
     * Amazon SNS topics.</p>
     */
    inline bool GetForwardingEnabled() const { return m_forwardingEnabled; }
    inline bool ForwardingEnabledHasBeenSet() const { return m_forwardingEnabledHasBeenSet; }
    inline void SetForwardingEnabled(bool value) { m_forwardingEnabledHasBeenSet = true; m_forwardingEnabled = value; }
    inline IdentityNotificationAttributes& WithForwardingEnabled(bool value) { SetForwardingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether Amazon SES includes the original email headers in Amazon
     * SNS notifications of type <code>Bounce</code>. A value of <code>true</code>
     * specifies that Amazon SES includes headers in bounce notifications, and a value
     * of <code>false</code> specifies that Amazon SES does not include headers in
     * bounce notifications.</p>
     */
    inline bool GetHeadersInBounceNotificationsEnabled() const { return m_headersInBounceNotificationsEnabled; }
    inline bool HeadersInBounceNotificationsEnabledHasBeenSet() const { return m_headersInBounceNotificationsEnabledHasBeenSet; }
    inline void SetHeadersInBounceNotificationsEnabled(bool value) { m_headersInBounceNotificationsEnabledHasBeenSet = true; m_headersInBounceNotificationsEnabled = value; }
    inline IdentityNotificationAttributes& WithHeadersInBounceNotificationsEnabled(bool value) { SetHeadersInBounceNotificationsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether Amazon SES includes the original email headers in Amazon
     * SNS notifications of type <code>Complaint</code>. A value of <code>true</code>
     * specifies that Amazon SES includes headers in complaint notifications, and a
     * value of <code>false</code> specifies that Amazon SES does not include headers
     * in complaint notifications.</p>
     */
    inline bool GetHeadersInComplaintNotificationsEnabled() const { return m_headersInComplaintNotificationsEnabled; }
    inline bool HeadersInComplaintNotificationsEnabledHasBeenSet() const { return m_headersInComplaintNotificationsEnabledHasBeenSet; }
    inline void SetHeadersInComplaintNotificationsEnabled(bool value) { m_headersInComplaintNotificationsEnabledHasBeenSet = true; m_headersInComplaintNotificationsEnabled = value; }
    inline IdentityNotificationAttributes& WithHeadersInComplaintNotificationsEnabled(bool value) { SetHeadersInComplaintNotificationsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether Amazon SES includes the original email headers in Amazon
     * SNS notifications of type <code>Delivery</code>. A value of <code>true</code>
     * specifies that Amazon SES includes headers in delivery notifications, and a
     * value of <code>false</code> specifies that Amazon SES does not include headers
     * in delivery notifications.</p>
     */
    inline bool GetHeadersInDeliveryNotificationsEnabled() const { return m_headersInDeliveryNotificationsEnabled; }
    inline bool HeadersInDeliveryNotificationsEnabledHasBeenSet() const { return m_headersInDeliveryNotificationsEnabledHasBeenSet; }
    inline void SetHeadersInDeliveryNotificationsEnabled(bool value) { m_headersInDeliveryNotificationsEnabledHasBeenSet = true; m_headersInDeliveryNotificationsEnabled = value; }
    inline IdentityNotificationAttributes& WithHeadersInDeliveryNotificationsEnabled(bool value) { SetHeadersInDeliveryNotificationsEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_bounceTopic;
    bool m_bounceTopicHasBeenSet = false;

    Aws::String m_complaintTopic;
    bool m_complaintTopicHasBeenSet = false;

    Aws::String m_deliveryTopic;
    bool m_deliveryTopicHasBeenSet = false;

    bool m_forwardingEnabled{false};
    bool m_forwardingEnabledHasBeenSet = false;

    bool m_headersInBounceNotificationsEnabled{false};
    bool m_headersInBounceNotificationsEnabledHasBeenSet = false;

    bool m_headersInComplaintNotificationsEnabled{false};
    bool m_headersInComplaintNotificationsEnabledHasBeenSet = false;

    bool m_headersInDeliveryNotificationsEnabled{false};
    bool m_headersInDeliveryNotificationsEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
