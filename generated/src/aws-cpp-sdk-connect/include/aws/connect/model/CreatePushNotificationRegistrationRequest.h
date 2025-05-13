/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/DeviceType.h>
#include <aws/connect/model/ContactConfiguration.h>
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
  class CreatePushNotificationRegistrationRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API CreatePushNotificationRegistrationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePushNotificationRegistration"; }

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
    CreatePushNotificationRegistrationRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
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
    CreatePushNotificationRegistrationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Pinpoint application.</p>
     */
    inline const Aws::String& GetPinpointAppArn() const { return m_pinpointAppArn; }
    inline bool PinpointAppArnHasBeenSet() const { return m_pinpointAppArnHasBeenSet; }
    template<typename PinpointAppArnT = Aws::String>
    void SetPinpointAppArn(PinpointAppArnT&& value) { m_pinpointAppArnHasBeenSet = true; m_pinpointAppArn = std::forward<PinpointAppArnT>(value); }
    template<typename PinpointAppArnT = Aws::String>
    CreatePushNotificationRegistrationRequest& WithPinpointAppArn(PinpointAppArnT&& value) { SetPinpointAppArn(std::forward<PinpointAppArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The push notification token issued by the Apple or Google gateways.</p>
     */
    inline const Aws::String& GetDeviceToken() const { return m_deviceToken; }
    inline bool DeviceTokenHasBeenSet() const { return m_deviceTokenHasBeenSet; }
    template<typename DeviceTokenT = Aws::String>
    void SetDeviceToken(DeviceTokenT&& value) { m_deviceTokenHasBeenSet = true; m_deviceToken = std::forward<DeviceTokenT>(value); }
    template<typename DeviceTokenT = Aws::String>
    CreatePushNotificationRegistrationRequest& WithDeviceToken(DeviceTokenT&& value) { SetDeviceToken(std::forward<DeviceTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device type to use when sending the message.</p>
     */
    inline DeviceType GetDeviceType() const { return m_deviceType; }
    inline bool DeviceTypeHasBeenSet() const { return m_deviceTypeHasBeenSet; }
    inline void SetDeviceType(DeviceType value) { m_deviceTypeHasBeenSet = true; m_deviceType = value; }
    inline CreatePushNotificationRegistrationRequest& WithDeviceType(DeviceType value) { SetDeviceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact configuration for push notification registration.</p>
     */
    inline const ContactConfiguration& GetContactConfiguration() const { return m_contactConfiguration; }
    inline bool ContactConfigurationHasBeenSet() const { return m_contactConfigurationHasBeenSet; }
    template<typename ContactConfigurationT = ContactConfiguration>
    void SetContactConfiguration(ContactConfigurationT&& value) { m_contactConfigurationHasBeenSet = true; m_contactConfiguration = std::forward<ContactConfigurationT>(value); }
    template<typename ContactConfigurationT = ContactConfiguration>
    CreatePushNotificationRegistrationRequest& WithContactConfiguration(ContactConfigurationT&& value) { SetContactConfiguration(std::forward<ContactConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_pinpointAppArn;
    bool m_pinpointAppArnHasBeenSet = false;

    Aws::String m_deviceToken;
    bool m_deviceTokenHasBeenSet = false;

    DeviceType m_deviceType{DeviceType::NOT_SET};
    bool m_deviceTypeHasBeenSet = false;

    ContactConfiguration m_contactConfiguration;
    bool m_contactConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
