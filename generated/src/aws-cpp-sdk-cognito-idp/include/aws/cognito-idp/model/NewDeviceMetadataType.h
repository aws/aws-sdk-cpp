/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Information that your user pool responds with in
   * <code>AuthenticationResult</code>when you configure it to remember devices and a
   * user signs in with an unrecognized device. Amazon Cognito presents a new device
   * key that you can use to set up <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/amazon-cognito-user-pools-device-tracking.html">device
   * authentication</a> in a "Remember me on this device" authentication
   * model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/NewDeviceMetadataType">AWS
   * API Reference</a></p>
   */
  class NewDeviceMetadataType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API NewDeviceMetadataType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API NewDeviceMetadataType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API NewDeviceMetadataType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device key, an identifier used in generating the
     * <code>DEVICE_PASSWORD_VERIFIER</code> for device SRP authentication.</p>
     */
    inline const Aws::String& GetDeviceKey() const { return m_deviceKey; }
    inline bool DeviceKeyHasBeenSet() const { return m_deviceKeyHasBeenSet; }
    template<typename DeviceKeyT = Aws::String>
    void SetDeviceKey(DeviceKeyT&& value) { m_deviceKeyHasBeenSet = true; m_deviceKey = std::forward<DeviceKeyT>(value); }
    template<typename DeviceKeyT = Aws::String>
    NewDeviceMetadataType& WithDeviceKey(DeviceKeyT&& value) { SetDeviceKey(std::forward<DeviceKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device group key, an identifier used in generating the
     * <code>DEVICE_PASSWORD_VERIFIER</code> for device SRP authentication.</p>
     */
    inline const Aws::String& GetDeviceGroupKey() const { return m_deviceGroupKey; }
    inline bool DeviceGroupKeyHasBeenSet() const { return m_deviceGroupKeyHasBeenSet; }
    template<typename DeviceGroupKeyT = Aws::String>
    void SetDeviceGroupKey(DeviceGroupKeyT&& value) { m_deviceGroupKeyHasBeenSet = true; m_deviceGroupKey = std::forward<DeviceGroupKeyT>(value); }
    template<typename DeviceGroupKeyT = Aws::String>
    NewDeviceMetadataType& WithDeviceGroupKey(DeviceGroupKeyT&& value) { SetDeviceGroupKey(std::forward<DeviceGroupKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceKey;
    bool m_deviceKeyHasBeenSet = false;

    Aws::String m_deviceGroupKey;
    bool m_deviceGroupKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
