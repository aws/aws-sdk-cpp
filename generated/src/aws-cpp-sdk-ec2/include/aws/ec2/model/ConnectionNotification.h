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
    AWS_EC2_API ConnectionNotification() = default;
    AWS_EC2_API ConnectionNotification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ConnectionNotification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the notification.</p>
     */
    inline const Aws::String& GetConnectionNotificationId() const { return m_connectionNotificationId; }
    inline bool ConnectionNotificationIdHasBeenSet() const { return m_connectionNotificationIdHasBeenSet; }
    template<typename ConnectionNotificationIdT = Aws::String>
    void SetConnectionNotificationId(ConnectionNotificationIdT&& value) { m_connectionNotificationIdHasBeenSet = true; m_connectionNotificationId = std::forward<ConnectionNotificationIdT>(value); }
    template<typename ConnectionNotificationIdT = Aws::String>
    ConnectionNotification& WithConnectionNotificationId(ConnectionNotificationIdT&& value) { SetConnectionNotificationId(std::forward<ConnectionNotificationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the endpoint service.</p>
     */
    inline const Aws::String& GetServiceId() const { return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    template<typename ServiceIdT = Aws::String>
    void SetServiceId(ServiceIdT&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::forward<ServiceIdT>(value); }
    template<typename ServiceIdT = Aws::String>
    ConnectionNotification& WithServiceId(ServiceIdT&& value) { SetServiceId(std::forward<ServiceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
    template<typename VpcEndpointIdT = Aws::String>
    void SetVpcEndpointId(VpcEndpointIdT&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::forward<VpcEndpointIdT>(value); }
    template<typename VpcEndpointIdT = Aws::String>
    ConnectionNotification& WithVpcEndpointId(VpcEndpointIdT&& value) { SetVpcEndpointId(std::forward<VpcEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of notification.</p>
     */
    inline ConnectionNotificationType GetConnectionNotificationType() const { return m_connectionNotificationType; }
    inline bool ConnectionNotificationTypeHasBeenSet() const { return m_connectionNotificationTypeHasBeenSet; }
    inline void SetConnectionNotificationType(ConnectionNotificationType value) { m_connectionNotificationTypeHasBeenSet = true; m_connectionNotificationType = value; }
    inline ConnectionNotification& WithConnectionNotificationType(ConnectionNotificationType value) { SetConnectionNotificationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the SNS topic for the notification.</p>
     */
    inline const Aws::String& GetConnectionNotificationArn() const { return m_connectionNotificationArn; }
    inline bool ConnectionNotificationArnHasBeenSet() const { return m_connectionNotificationArnHasBeenSet; }
    template<typename ConnectionNotificationArnT = Aws::String>
    void SetConnectionNotificationArn(ConnectionNotificationArnT&& value) { m_connectionNotificationArnHasBeenSet = true; m_connectionNotificationArn = std::forward<ConnectionNotificationArnT>(value); }
    template<typename ConnectionNotificationArnT = Aws::String>
    ConnectionNotification& WithConnectionNotificationArn(ConnectionNotificationArnT&& value) { SetConnectionNotificationArn(std::forward<ConnectionNotificationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The events for the notification. Valid values are <code>Accept</code>,
     * <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectionEvents() const { return m_connectionEvents; }
    inline bool ConnectionEventsHasBeenSet() const { return m_connectionEventsHasBeenSet; }
    template<typename ConnectionEventsT = Aws::Vector<Aws::String>>
    void SetConnectionEvents(ConnectionEventsT&& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents = std::forward<ConnectionEventsT>(value); }
    template<typename ConnectionEventsT = Aws::Vector<Aws::String>>
    ConnectionNotification& WithConnectionEvents(ConnectionEventsT&& value) { SetConnectionEvents(std::forward<ConnectionEventsT>(value)); return *this;}
    template<typename ConnectionEventsT = Aws::String>
    ConnectionNotification& AddConnectionEvents(ConnectionEventsT&& value) { m_connectionEventsHasBeenSet = true; m_connectionEvents.emplace_back(std::forward<ConnectionEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The state of the notification.</p>
     */
    inline ConnectionNotificationState GetConnectionNotificationState() const { return m_connectionNotificationState; }
    inline bool ConnectionNotificationStateHasBeenSet() const { return m_connectionNotificationStateHasBeenSet; }
    inline void SetConnectionNotificationState(ConnectionNotificationState value) { m_connectionNotificationStateHasBeenSet = true; m_connectionNotificationState = value; }
    inline ConnectionNotification& WithConnectionNotificationState(ConnectionNotificationState value) { SetConnectionNotificationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region for the endpoint service.</p>
     */
    inline const Aws::String& GetServiceRegion() const { return m_serviceRegion; }
    inline bool ServiceRegionHasBeenSet() const { return m_serviceRegionHasBeenSet; }
    template<typename ServiceRegionT = Aws::String>
    void SetServiceRegion(ServiceRegionT&& value) { m_serviceRegionHasBeenSet = true; m_serviceRegion = std::forward<ServiceRegionT>(value); }
    template<typename ServiceRegionT = Aws::String>
    ConnectionNotification& WithServiceRegion(ServiceRegionT&& value) { SetServiceRegion(std::forward<ServiceRegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionNotificationId;
    bool m_connectionNotificationIdHasBeenSet = false;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    ConnectionNotificationType m_connectionNotificationType{ConnectionNotificationType::NOT_SET};
    bool m_connectionNotificationTypeHasBeenSet = false;

    Aws::String m_connectionNotificationArn;
    bool m_connectionNotificationArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_connectionEvents;
    bool m_connectionEventsHasBeenSet = false;

    ConnectionNotificationState m_connectionNotificationState{ConnectionNotificationState::NOT_SET};
    bool m_connectionNotificationStateHasBeenSet = false;

    Aws::String m_serviceRegion;
    bool m_serviceRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
