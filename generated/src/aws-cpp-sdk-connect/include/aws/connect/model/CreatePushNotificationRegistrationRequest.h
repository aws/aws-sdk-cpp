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
    AWS_CONNECT_API CreatePushNotificationRegistrationRequest();

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
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline CreatePushNotificationRegistrationRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline CreatePushNotificationRegistrationRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline CreatePushNotificationRegistrationRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
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
    inline CreatePushNotificationRegistrationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreatePushNotificationRegistrationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreatePushNotificationRegistrationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Pinpoint application.</p>
     */
    inline const Aws::String& GetPinpointAppArn() const{ return m_pinpointAppArn; }
    inline bool PinpointAppArnHasBeenSet() const { return m_pinpointAppArnHasBeenSet; }
    inline void SetPinpointAppArn(const Aws::String& value) { m_pinpointAppArnHasBeenSet = true; m_pinpointAppArn = value; }
    inline void SetPinpointAppArn(Aws::String&& value) { m_pinpointAppArnHasBeenSet = true; m_pinpointAppArn = std::move(value); }
    inline void SetPinpointAppArn(const char* value) { m_pinpointAppArnHasBeenSet = true; m_pinpointAppArn.assign(value); }
    inline CreatePushNotificationRegistrationRequest& WithPinpointAppArn(const Aws::String& value) { SetPinpointAppArn(value); return *this;}
    inline CreatePushNotificationRegistrationRequest& WithPinpointAppArn(Aws::String&& value) { SetPinpointAppArn(std::move(value)); return *this;}
    inline CreatePushNotificationRegistrationRequest& WithPinpointAppArn(const char* value) { SetPinpointAppArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The push notification token issued by the Apple or Google gateways.</p>
     */
    inline const Aws::String& GetDeviceToken() const{ return m_deviceToken; }
    inline bool DeviceTokenHasBeenSet() const { return m_deviceTokenHasBeenSet; }
    inline void SetDeviceToken(const Aws::String& value) { m_deviceTokenHasBeenSet = true; m_deviceToken = value; }
    inline void SetDeviceToken(Aws::String&& value) { m_deviceTokenHasBeenSet = true; m_deviceToken = std::move(value); }
    inline void SetDeviceToken(const char* value) { m_deviceTokenHasBeenSet = true; m_deviceToken.assign(value); }
    inline CreatePushNotificationRegistrationRequest& WithDeviceToken(const Aws::String& value) { SetDeviceToken(value); return *this;}
    inline CreatePushNotificationRegistrationRequest& WithDeviceToken(Aws::String&& value) { SetDeviceToken(std::move(value)); return *this;}
    inline CreatePushNotificationRegistrationRequest& WithDeviceToken(const char* value) { SetDeviceToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device type to use when sending the message.</p>
     */
    inline const DeviceType& GetDeviceType() const{ return m_deviceType; }
    inline bool DeviceTypeHasBeenSet() const { return m_deviceTypeHasBeenSet; }
    inline void SetDeviceType(const DeviceType& value) { m_deviceTypeHasBeenSet = true; m_deviceType = value; }
    inline void SetDeviceType(DeviceType&& value) { m_deviceTypeHasBeenSet = true; m_deviceType = std::move(value); }
    inline CreatePushNotificationRegistrationRequest& WithDeviceType(const DeviceType& value) { SetDeviceType(value); return *this;}
    inline CreatePushNotificationRegistrationRequest& WithDeviceType(DeviceType&& value) { SetDeviceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contact configuration for push notification registration.</p>
     */
    inline const ContactConfiguration& GetContactConfiguration() const{ return m_contactConfiguration; }
    inline bool ContactConfigurationHasBeenSet() const { return m_contactConfigurationHasBeenSet; }
    inline void SetContactConfiguration(const ContactConfiguration& value) { m_contactConfigurationHasBeenSet = true; m_contactConfiguration = value; }
    inline void SetContactConfiguration(ContactConfiguration&& value) { m_contactConfigurationHasBeenSet = true; m_contactConfiguration = std::move(value); }
    inline CreatePushNotificationRegistrationRequest& WithContactConfiguration(const ContactConfiguration& value) { SetContactConfiguration(value); return *this;}
    inline CreatePushNotificationRegistrationRequest& WithContactConfiguration(ContactConfiguration&& value) { SetContactConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_pinpointAppArn;
    bool m_pinpointAppArnHasBeenSet = false;

    Aws::String m_deviceToken;
    bool m_deviceTokenHasBeenSet = false;

    DeviceType m_deviceType;
    bool m_deviceTypeHasBeenSet = false;

    ContactConfiguration m_contactConfiguration;
    bool m_contactConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
