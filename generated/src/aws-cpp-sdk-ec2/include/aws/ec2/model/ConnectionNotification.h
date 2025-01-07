/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ConnectionNotification
  {
  public:
    AWS_EC2_API ConnectionNotification();
    AWS_EC2_API ConnectionNotification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ConnectionNotification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the notification.</p>
     */
    inline const Aws::String& GetConnectionNotificationId() const{ return m_connectionNotificationId; }
    inline bool ConnectionNotificationIdHasBeenSet() const { return m_connectionNotificationIdHasBeenSet; }
    inline void SetConnectionNotificationId(const Aws::String& value) { m_connectionNotificationIdHasBeenSet = true; m_connectionNotificationId = value; }
    inline void SetConnectionNotificationId(Aws::String&& value) { m_connectionNotificationIdHasBeenSet = true; m_connectionNotificationId = std::move(value); }
    inline void SetConnectionNotificationId(const char* value) { m_connectionNotificationIdHasBeenSet = true; m_connectionNotificationId.assign(value); }
    inline ConnectionNotification& WithConnectionNotificationId(const Aws::String& value) { SetConnectionNotificationId(value); return *this;}
    inline ConnectionNotification& WithConnectionNotificationId(Aws::String&& value) { SetConnectionNotificationId(std::move(value)); return *this;}
    inline ConnectionNotification& WithConnectionNotificationId(const char* value) { SetConnectionNotificationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }
    inline ConnectionNotification& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}
    inline ConnectionNotification& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}
    inline ConnectionNotification& WithServiceId(const char* value) { SetServiceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }
    inline ConnectionNotification& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}
    inline ConnectionNotification& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}
    inline ConnectionNotification& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of notification.</p>
     */
    inline const ConnectionNotificationType& GetConnectionNotificationType() const{ return m_connectionNotificationType; }
    inline bool ConnectionNotificationTypeHasBeenSet() const { return m_connectionNotificationTypeHasBeenSet; }
    inline void SetConnectionNotificationType(const ConnectionNotificationType& value) { m_connectionNotificationTypeHasBeenSet = true; m_connectionNotificationType = value; }
    inline void SetConnectionNotificationType(ConnectionNotificationType&& value) { m_connectionNotificationTypeHasBeenSet = true; m_connectionNotificationType = std::move(value); }
    inline ConnectionNotification& WithConnectionNotificationType(const ConnectionNotificationType& value) { SetConnectionNotificationType(value); return *this;}
    inline ConnectionNotification& WithConnectionNotificationType(ConnectionNotificationType&& value) { SetConnectionNotificationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the SNS topic for the notification.</p>
     */
    inline const Aws::String& GetConnectionNotificationArn() const{ return m_connectionNotificationArn; }
    inline bool ConnectionNotificationArnHasBeenSet() const { return m_connectionNotificationArnHasBeenSet; }
    inline void SetConnectionNotificationArn(const Aws::String& value) { m_connectionNotificationArnHasBeenSet = true; m_connectionNotificationArn = value; }
    inline void SetConnectionNotificationArn(Aws::String&& value) { m_connectionNotificationArnHasBeenSet = true; m_connectionNotificationArn = std::move(value); }
    inline void SetConnectionNotificationArn(const char* value) { m_connectionNotificationArnHasBeenSet = true; m_connectionNotificationArn.assign(value); }
    inline ConnectionNotification& WithConnectionNotificationArn(const Aws::String& value) { SetConnectionNotificationArn(value); return *this;}
    inline ConnectionNotification& WithConnectionNotificationArn(Aws::String&& value) { SetConnectionNotificationArn(std::move(value)); return *this;}
    inline ConnectionNotification& WithConnectionNotificationArn(const char* value) { SetConnectionNotificationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The events for the notification. Valid values are <code>Accept</code>,
     * <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectionEvents() const{ return m_connectionEvents; }
    inline bool ConnectionEventsHasBeenSet() const { return m_connectionEventsHasBeenSet; }
    inline void SetConnectionEvents(const Aws::Vector<Aws::String>& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents = value; }
    inline void SetConnectionEvents(Aws::Vector<Aws::String>&& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents = std::move(value); }
    inline ConnectionNotification& WithConnectionEvents(const Aws::Vector<Aws::String>& value) { SetConnectionEvents(value); return *this;}
    inline ConnectionNotification& WithConnectionEvents(Aws::Vector<Aws::String>&& value) { SetConnectionEvents(std::move(value)); return *this;}
    inline ConnectionNotification& AddConnectionEvents(const Aws::String& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents.push_back(value); return *this; }
    inline ConnectionNotification& AddConnectionEvents(Aws::String&& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents.push_back(std::move(value)); return *this; }
    inline ConnectionNotification& AddConnectionEvents(const char* value) { m_connectionEventsHasBeenSet = true; m_connectionEvents.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of the notification.</p>
     */
    inline const ConnectionNotificationState& GetConnectionNotificationState() const{ return m_connectionNotificationState; }
    inline bool ConnectionNotificationStateHasBeenSet() const { return m_connectionNotificationStateHasBeenSet; }
    inline void SetConnectionNotificationState(const ConnectionNotificationState& value) { m_connectionNotificationStateHasBeenSet = true; m_connectionNotificationState = value; }
    inline void SetConnectionNotificationState(ConnectionNotificationState&& value) { m_connectionNotificationStateHasBeenSet = true; m_connectionNotificationState = std::move(value); }
    inline ConnectionNotification& WithConnectionNotificationState(const ConnectionNotificationState& value) { SetConnectionNotificationState(value); return *this;}
    inline ConnectionNotification& WithConnectionNotificationState(ConnectionNotificationState&& value) { SetConnectionNotificationState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region for the endpoint service.</p>
     */
    inline const Aws::String& GetServiceRegion() const{ return m_serviceRegion; }
    inline bool ServiceRegionHasBeenSet() const { return m_serviceRegionHasBeenSet; }
    inline void SetServiceRegion(const Aws::String& value) { m_serviceRegionHasBeenSet = true; m_serviceRegion = value; }
    inline void SetServiceRegion(Aws::String&& value) { m_serviceRegionHasBeenSet = true; m_serviceRegion = std::move(value); }
    inline void SetServiceRegion(const char* value) { m_serviceRegionHasBeenSet = true; m_serviceRegion.assign(value); }
    inline ConnectionNotification& WithServiceRegion(const Aws::String& value) { SetServiceRegion(value); return *this;}
    inline ConnectionNotification& WithServiceRegion(Aws::String&& value) { SetServiceRegion(std::move(value)); return *this;}
    inline ConnectionNotification& WithServiceRegion(const char* value) { SetServiceRegion(value); return *this;}
    ///@}
  private:

    Aws::String m_connectionNotificationId;
    bool m_connectionNotificationIdHasBeenSet = false;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    ConnectionNotificationType m_connectionNotificationType;
    bool m_connectionNotificationTypeHasBeenSet = false;

    Aws::String m_connectionNotificationArn;
    bool m_connectionNotificationArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_connectionEvents;
    bool m_connectionEventsHasBeenSet = false;

    ConnectionNotificationState m_connectionNotificationState;
    bool m_connectionNotificationStateHasBeenSet = false;

    Aws::String m_serviceRegion;
    bool m_serviceRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
