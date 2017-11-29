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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ConnectionNotificationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ConnectionNotificationState.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a connection notification for a VPC endpoint or VPC endpoint
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ConnectionNotification">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ConnectionNotification
  {
  public:
    ConnectionNotification();
    ConnectionNotification(const Aws::Utils::Xml::XmlNode& xmlNode);
    ConnectionNotification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the notification.</p>
     */
    inline const Aws::String& GetConnectionNotificationId() const{ return m_connectionNotificationId; }

    /**
     * <p>The ID of the notification.</p>
     */
    inline void SetConnectionNotificationId(const Aws::String& value) { m_connectionNotificationIdHasBeenSet = true; m_connectionNotificationId = value; }

    /**
     * <p>The ID of the notification.</p>
     */
    inline void SetConnectionNotificationId(Aws::String&& value) { m_connectionNotificationIdHasBeenSet = true; m_connectionNotificationId = std::move(value); }

    /**
     * <p>The ID of the notification.</p>
     */
    inline void SetConnectionNotificationId(const char* value) { m_connectionNotificationIdHasBeenSet = true; m_connectionNotificationId.assign(value); }

    /**
     * <p>The ID of the notification.</p>
     */
    inline ConnectionNotification& WithConnectionNotificationId(const Aws::String& value) { SetConnectionNotificationId(value); return *this;}

    /**
     * <p>The ID of the notification.</p>
     */
    inline ConnectionNotification& WithConnectionNotificationId(Aws::String&& value) { SetConnectionNotificationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the notification.</p>
     */
    inline ConnectionNotification& WithConnectionNotificationId(const char* value) { SetConnectionNotificationId(value); return *this;}


    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }

    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline ConnectionNotification& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline ConnectionNotification& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline ConnectionNotification& WithServiceId(const char* value) { SetServiceId(value); return *this;}


    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline ConnectionNotification& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline ConnectionNotification& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline ConnectionNotification& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}


    /**
     * <p>The type of notification.</p>
     */
    inline const ConnectionNotificationType& GetConnectionNotificationType() const{ return m_connectionNotificationType; }

    /**
     * <p>The type of notification.</p>
     */
    inline void SetConnectionNotificationType(const ConnectionNotificationType& value) { m_connectionNotificationTypeHasBeenSet = true; m_connectionNotificationType = value; }

    /**
     * <p>The type of notification.</p>
     */
    inline void SetConnectionNotificationType(ConnectionNotificationType&& value) { m_connectionNotificationTypeHasBeenSet = true; m_connectionNotificationType = std::move(value); }

    /**
     * <p>The type of notification.</p>
     */
    inline ConnectionNotification& WithConnectionNotificationType(const ConnectionNotificationType& value) { SetConnectionNotificationType(value); return *this;}

    /**
     * <p>The type of notification.</p>
     */
    inline ConnectionNotification& WithConnectionNotificationType(ConnectionNotificationType&& value) { SetConnectionNotificationType(std::move(value)); return *this;}


    /**
     * <p>The ARN of the SNS topic for the notification.</p>
     */
    inline const Aws::String& GetConnectionNotificationArn() const{ return m_connectionNotificationArn; }

    /**
     * <p>The ARN of the SNS topic for the notification.</p>
     */
    inline void SetConnectionNotificationArn(const Aws::String& value) { m_connectionNotificationArnHasBeenSet = true; m_connectionNotificationArn = value; }

    /**
     * <p>The ARN of the SNS topic for the notification.</p>
     */
    inline void SetConnectionNotificationArn(Aws::String&& value) { m_connectionNotificationArnHasBeenSet = true; m_connectionNotificationArn = std::move(value); }

    /**
     * <p>The ARN of the SNS topic for the notification.</p>
     */
    inline void SetConnectionNotificationArn(const char* value) { m_connectionNotificationArnHasBeenSet = true; m_connectionNotificationArn.assign(value); }

    /**
     * <p>The ARN of the SNS topic for the notification.</p>
     */
    inline ConnectionNotification& WithConnectionNotificationArn(const Aws::String& value) { SetConnectionNotificationArn(value); return *this;}

    /**
     * <p>The ARN of the SNS topic for the notification.</p>
     */
    inline ConnectionNotification& WithConnectionNotificationArn(Aws::String&& value) { SetConnectionNotificationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the SNS topic for the notification.</p>
     */
    inline ConnectionNotification& WithConnectionNotificationArn(const char* value) { SetConnectionNotificationArn(value); return *this;}


    /**
     * <p>The events for the notification. Valid values are <code>Accept</code>,
     * <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectionEvents() const{ return m_connectionEvents; }

    /**
     * <p>The events for the notification. Valid values are <code>Accept</code>,
     * <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
     */
    inline void SetConnectionEvents(const Aws::Vector<Aws::String>& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents = value; }

    /**
     * <p>The events for the notification. Valid values are <code>Accept</code>,
     * <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
     */
    inline void SetConnectionEvents(Aws::Vector<Aws::String>&& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents = std::move(value); }

    /**
     * <p>The events for the notification. Valid values are <code>Accept</code>,
     * <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
     */
    inline ConnectionNotification& WithConnectionEvents(const Aws::Vector<Aws::String>& value) { SetConnectionEvents(value); return *this;}

    /**
     * <p>The events for the notification. Valid values are <code>Accept</code>,
     * <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
     */
    inline ConnectionNotification& WithConnectionEvents(Aws::Vector<Aws::String>&& value) { SetConnectionEvents(std::move(value)); return *this;}

    /**
     * <p>The events for the notification. Valid values are <code>Accept</code>,
     * <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
     */
    inline ConnectionNotification& AddConnectionEvents(const Aws::String& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents.push_back(value); return *this; }

    /**
     * <p>The events for the notification. Valid values are <code>Accept</code>,
     * <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
     */
    inline ConnectionNotification& AddConnectionEvents(Aws::String&& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents.push_back(std::move(value)); return *this; }

    /**
     * <p>The events for the notification. Valid values are <code>Accept</code>,
     * <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
     */
    inline ConnectionNotification& AddConnectionEvents(const char* value) { m_connectionEventsHasBeenSet = true; m_connectionEvents.push_back(value); return *this; }


    /**
     * <p>The state of the notification.</p>
     */
    inline const ConnectionNotificationState& GetConnectionNotificationState() const{ return m_connectionNotificationState; }

    /**
     * <p>The state of the notification.</p>
     */
    inline void SetConnectionNotificationState(const ConnectionNotificationState& value) { m_connectionNotificationStateHasBeenSet = true; m_connectionNotificationState = value; }

    /**
     * <p>The state of the notification.</p>
     */
    inline void SetConnectionNotificationState(ConnectionNotificationState&& value) { m_connectionNotificationStateHasBeenSet = true; m_connectionNotificationState = std::move(value); }

    /**
     * <p>The state of the notification.</p>
     */
    inline ConnectionNotification& WithConnectionNotificationState(const ConnectionNotificationState& value) { SetConnectionNotificationState(value); return *this;}

    /**
     * <p>The state of the notification.</p>
     */
    inline ConnectionNotification& WithConnectionNotificationState(ConnectionNotificationState&& value) { SetConnectionNotificationState(std::move(value)); return *this;}

  private:

    Aws::String m_connectionNotificationId;
    bool m_connectionNotificationIdHasBeenSet;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet;

    ConnectionNotificationType m_connectionNotificationType;
    bool m_connectionNotificationTypeHasBeenSet;

    Aws::String m_connectionNotificationArn;
    bool m_connectionNotificationArnHasBeenSet;

    Aws::Vector<Aws::String> m_connectionEvents;
    bool m_connectionEventsHasBeenSet;

    ConnectionNotificationState m_connectionNotificationState;
    bool m_connectionNotificationStateHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
