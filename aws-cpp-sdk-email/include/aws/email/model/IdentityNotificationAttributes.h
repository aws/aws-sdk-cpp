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
  class AWS_SES_API IdentityNotificationAttributes
  {
  public:
    IdentityNotificationAttributes();
    IdentityNotificationAttributes(const Aws::Utils::Xml::XmlNode& xmlNode);
    IdentityNotificationAttributes& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish bounce notifications.</p>
     */
    inline const Aws::String& GetBounceTopic() const{ return m_bounceTopic; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish bounce notifications.</p>
     */
    inline bool BounceTopicHasBeenSet() const { return m_bounceTopicHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish bounce notifications.</p>
     */
    inline void SetBounceTopic(const Aws::String& value) { m_bounceTopicHasBeenSet = true; m_bounceTopic = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish bounce notifications.</p>
     */
    inline void SetBounceTopic(Aws::String&& value) { m_bounceTopicHasBeenSet = true; m_bounceTopic = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish bounce notifications.</p>
     */
    inline void SetBounceTopic(const char* value) { m_bounceTopicHasBeenSet = true; m_bounceTopic.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish bounce notifications.</p>
     */
    inline IdentityNotificationAttributes& WithBounceTopic(const Aws::String& value) { SetBounceTopic(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish bounce notifications.</p>
     */
    inline IdentityNotificationAttributes& WithBounceTopic(Aws::String&& value) { SetBounceTopic(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish bounce notifications.</p>
     */
    inline IdentityNotificationAttributes& WithBounceTopic(const char* value) { SetBounceTopic(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish complaint notifications.</p>
     */
    inline const Aws::String& GetComplaintTopic() const{ return m_complaintTopic; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish complaint notifications.</p>
     */
    inline bool ComplaintTopicHasBeenSet() const { return m_complaintTopicHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish complaint notifications.</p>
     */
    inline void SetComplaintTopic(const Aws::String& value) { m_complaintTopicHasBeenSet = true; m_complaintTopic = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish complaint notifications.</p>
     */
    inline void SetComplaintTopic(Aws::String&& value) { m_complaintTopicHasBeenSet = true; m_complaintTopic = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish complaint notifications.</p>
     */
    inline void SetComplaintTopic(const char* value) { m_complaintTopicHasBeenSet = true; m_complaintTopic.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish complaint notifications.</p>
     */
    inline IdentityNotificationAttributes& WithComplaintTopic(const Aws::String& value) { SetComplaintTopic(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish complaint notifications.</p>
     */
    inline IdentityNotificationAttributes& WithComplaintTopic(Aws::String&& value) { SetComplaintTopic(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish complaint notifications.</p>
     */
    inline IdentityNotificationAttributes& WithComplaintTopic(const char* value) { SetComplaintTopic(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish delivery notifications.</p>
     */
    inline const Aws::String& GetDeliveryTopic() const{ return m_deliveryTopic; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish delivery notifications.</p>
     */
    inline bool DeliveryTopicHasBeenSet() const { return m_deliveryTopicHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish delivery notifications.</p>
     */
    inline void SetDeliveryTopic(const Aws::String& value) { m_deliveryTopicHasBeenSet = true; m_deliveryTopic = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish delivery notifications.</p>
     */
    inline void SetDeliveryTopic(Aws::String&& value) { m_deliveryTopicHasBeenSet = true; m_deliveryTopic = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish delivery notifications.</p>
     */
    inline void SetDeliveryTopic(const char* value) { m_deliveryTopicHasBeenSet = true; m_deliveryTopic.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish delivery notifications.</p>
     */
    inline IdentityNotificationAttributes& WithDeliveryTopic(const Aws::String& value) { SetDeliveryTopic(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish delivery notifications.</p>
     */
    inline IdentityNotificationAttributes& WithDeliveryTopic(Aws::String&& value) { SetDeliveryTopic(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic where Amazon SES will
     * publish delivery notifications.</p>
     */
    inline IdentityNotificationAttributes& WithDeliveryTopic(const char* value) { SetDeliveryTopic(value); return *this;}


    /**
     * <p>Describes whether Amazon SES will forward bounce and complaint notifications
     * as email. <code>true</code> indicates that Amazon SES will forward bounce and
     * complaint notifications as email, while <code>false</code> indicates that bounce
     * and complaint notifications will be published only to the specified bounce and
     * complaint Amazon SNS topics.</p>
     */
    inline bool GetForwardingEnabled() const{ return m_forwardingEnabled; }

    /**
     * <p>Describes whether Amazon SES will forward bounce and complaint notifications
     * as email. <code>true</code> indicates that Amazon SES will forward bounce and
     * complaint notifications as email, while <code>false</code> indicates that bounce
     * and complaint notifications will be published only to the specified bounce and
     * complaint Amazon SNS topics.</p>
     */
    inline bool ForwardingEnabledHasBeenSet() const { return m_forwardingEnabledHasBeenSet; }

    /**
     * <p>Describes whether Amazon SES will forward bounce and complaint notifications
     * as email. <code>true</code> indicates that Amazon SES will forward bounce and
     * complaint notifications as email, while <code>false</code> indicates that bounce
     * and complaint notifications will be published only to the specified bounce and
     * complaint Amazon SNS topics.</p>
     */
    inline void SetForwardingEnabled(bool value) { m_forwardingEnabledHasBeenSet = true; m_forwardingEnabled = value; }

    /**
     * <p>Describes whether Amazon SES will forward bounce and complaint notifications
     * as email. <code>true</code> indicates that Amazon SES will forward bounce and
     * complaint notifications as email, while <code>false</code> indicates that bounce
     * and complaint notifications will be published only to the specified bounce and
     * complaint Amazon SNS topics.</p>
     */
    inline IdentityNotificationAttributes& WithForwardingEnabled(bool value) { SetForwardingEnabled(value); return *this;}


    /**
     * <p>Describes whether Amazon SES includes the original email headers in Amazon
     * SNS notifications of type <code>Bounce</code>. A value of <code>true</code>
     * specifies that Amazon SES will include headers in bounce notifications, and a
     * value of <code>false</code> specifies that Amazon SES will not include headers
     * in bounce notifications.</p>
     */
    inline bool GetHeadersInBounceNotificationsEnabled() const{ return m_headersInBounceNotificationsEnabled; }

    /**
     * <p>Describes whether Amazon SES includes the original email headers in Amazon
     * SNS notifications of type <code>Bounce</code>. A value of <code>true</code>
     * specifies that Amazon SES will include headers in bounce notifications, and a
     * value of <code>false</code> specifies that Amazon SES will not include headers
     * in bounce notifications.</p>
     */
    inline bool HeadersInBounceNotificationsEnabledHasBeenSet() const { return m_headersInBounceNotificationsEnabledHasBeenSet; }

    /**
     * <p>Describes whether Amazon SES includes the original email headers in Amazon
     * SNS notifications of type <code>Bounce</code>. A value of <code>true</code>
     * specifies that Amazon SES will include headers in bounce notifications, and a
     * value of <code>false</code> specifies that Amazon SES will not include headers
     * in bounce notifications.</p>
     */
    inline void SetHeadersInBounceNotificationsEnabled(bool value) { m_headersInBounceNotificationsEnabledHasBeenSet = true; m_headersInBounceNotificationsEnabled = value; }

    /**
     * <p>Describes whether Amazon SES includes the original email headers in Amazon
     * SNS notifications of type <code>Bounce</code>. A value of <code>true</code>
     * specifies that Amazon SES will include headers in bounce notifications, and a
     * value of <code>false</code> specifies that Amazon SES will not include headers
     * in bounce notifications.</p>
     */
    inline IdentityNotificationAttributes& WithHeadersInBounceNotificationsEnabled(bool value) { SetHeadersInBounceNotificationsEnabled(value); return *this;}


    /**
     * <p>Describes whether Amazon SES includes the original email headers in Amazon
     * SNS notifications of type <code>Complaint</code>. A value of <code>true</code>
     * specifies that Amazon SES will include headers in complaint notifications, and a
     * value of <code>false</code> specifies that Amazon SES will not include headers
     * in complaint notifications.</p>
     */
    inline bool GetHeadersInComplaintNotificationsEnabled() const{ return m_headersInComplaintNotificationsEnabled; }

    /**
     * <p>Describes whether Amazon SES includes the original email headers in Amazon
     * SNS notifications of type <code>Complaint</code>. A value of <code>true</code>
     * specifies that Amazon SES will include headers in complaint notifications, and a
     * value of <code>false</code> specifies that Amazon SES will not include headers
     * in complaint notifications.</p>
     */
    inline bool HeadersInComplaintNotificationsEnabledHasBeenSet() const { return m_headersInComplaintNotificationsEnabledHasBeenSet; }

    /**
     * <p>Describes whether Amazon SES includes the original email headers in Amazon
     * SNS notifications of type <code>Complaint</code>. A value of <code>true</code>
     * specifies that Amazon SES will include headers in complaint notifications, and a
     * value of <code>false</code> specifies that Amazon SES will not include headers
     * in complaint notifications.</p>
     */
    inline void SetHeadersInComplaintNotificationsEnabled(bool value) { m_headersInComplaintNotificationsEnabledHasBeenSet = true; m_headersInComplaintNotificationsEnabled = value; }

    /**
     * <p>Describes whether Amazon SES includes the original email headers in Amazon
     * SNS notifications of type <code>Complaint</code>. A value of <code>true</code>
     * specifies that Amazon SES will include headers in complaint notifications, and a
     * value of <code>false</code> specifies that Amazon SES will not include headers
     * in complaint notifications.</p>
     */
    inline IdentityNotificationAttributes& WithHeadersInComplaintNotificationsEnabled(bool value) { SetHeadersInComplaintNotificationsEnabled(value); return *this;}


    /**
     * <p>Describes whether Amazon SES includes the original email headers in Amazon
     * SNS notifications of type <code>Delivery</code>. A value of <code>true</code>
     * specifies that Amazon SES will include headers in delivery notifications, and a
     * value of <code>false</code> specifies that Amazon SES will not include headers
     * in delivery notifications.</p>
     */
    inline bool GetHeadersInDeliveryNotificationsEnabled() const{ return m_headersInDeliveryNotificationsEnabled; }

    /**
     * <p>Describes whether Amazon SES includes the original email headers in Amazon
     * SNS notifications of type <code>Delivery</code>. A value of <code>true</code>
     * specifies that Amazon SES will include headers in delivery notifications, and a
     * value of <code>false</code> specifies that Amazon SES will not include headers
     * in delivery notifications.</p>
     */
    inline bool HeadersInDeliveryNotificationsEnabledHasBeenSet() const { return m_headersInDeliveryNotificationsEnabledHasBeenSet; }

    /**
     * <p>Describes whether Amazon SES includes the original email headers in Amazon
     * SNS notifications of type <code>Delivery</code>. A value of <code>true</code>
     * specifies that Amazon SES will include headers in delivery notifications, and a
     * value of <code>false</code> specifies that Amazon SES will not include headers
     * in delivery notifications.</p>
     */
    inline void SetHeadersInDeliveryNotificationsEnabled(bool value) { m_headersInDeliveryNotificationsEnabledHasBeenSet = true; m_headersInDeliveryNotificationsEnabled = value; }

    /**
     * <p>Describes whether Amazon SES includes the original email headers in Amazon
     * SNS notifications of type <code>Delivery</code>. A value of <code>true</code>
     * specifies that Amazon SES will include headers in delivery notifications, and a
     * value of <code>false</code> specifies that Amazon SES will not include headers
     * in delivery notifications.</p>
     */
    inline IdentityNotificationAttributes& WithHeadersInDeliveryNotificationsEnabled(bool value) { SetHeadersInDeliveryNotificationsEnabled(value); return *this;}

  private:

    Aws::String m_bounceTopic;
    bool m_bounceTopicHasBeenSet;

    Aws::String m_complaintTopic;
    bool m_complaintTopicHasBeenSet;

    Aws::String m_deliveryTopic;
    bool m_deliveryTopicHasBeenSet;

    bool m_forwardingEnabled;
    bool m_forwardingEnabledHasBeenSet;

    bool m_headersInBounceNotificationsEnabled;
    bool m_headersInBounceNotificationsEnabledHasBeenSet;

    bool m_headersInComplaintNotificationsEnabled;
    bool m_headersInComplaintNotificationsEnabledHasBeenSet;

    bool m_headersInDeliveryNotificationsEnabled;
    bool m_headersInDeliveryNotificationsEnabledHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
