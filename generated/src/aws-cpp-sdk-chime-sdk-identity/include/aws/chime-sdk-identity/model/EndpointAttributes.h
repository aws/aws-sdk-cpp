/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{

  /**
   * <p>The attributes of an <code>Endpoint</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-identity-2021-04-20/EndpointAttributes">AWS
   * API Reference</a></p>
   */
  class EndpointAttributes
  {
  public:
    AWS_CHIMESDKIDENTITY_API EndpointAttributes() = default;
    AWS_CHIMESDKIDENTITY_API EndpointAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API EndpointAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The device token for the GCM, APNS, and APNS_SANDBOX endpoint types.</p>
     */
    inline const Aws::String& GetDeviceToken() const { return m_deviceToken; }
    inline bool DeviceTokenHasBeenSet() const { return m_deviceTokenHasBeenSet; }
    template<typename DeviceTokenT = Aws::String>
    void SetDeviceToken(DeviceTokenT&& value) { m_deviceTokenHasBeenSet = true; m_deviceToken = std::forward<DeviceTokenT>(value); }
    template<typename DeviceTokenT = Aws::String>
    EndpointAttributes& WithDeviceToken(DeviceTokenT&& value) { SetDeviceToken(std::forward<DeviceTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VOIP device token for the APNS and APNS_SANDBOX endpoint types.</p>
     */
    inline const Aws::String& GetVoipDeviceToken() const { return m_voipDeviceToken; }
    inline bool VoipDeviceTokenHasBeenSet() const { return m_voipDeviceTokenHasBeenSet; }
    template<typename VoipDeviceTokenT = Aws::String>
    void SetVoipDeviceToken(VoipDeviceTokenT&& value) { m_voipDeviceTokenHasBeenSet = true; m_voipDeviceToken = std::forward<VoipDeviceTokenT>(value); }
    template<typename VoipDeviceTokenT = Aws::String>
    EndpointAttributes& WithVoipDeviceToken(VoipDeviceTokenT&& value) { SetVoipDeviceToken(std::forward<VoipDeviceTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceToken;
    bool m_deviceTokenHasBeenSet = false;

    Aws::String m_voipDeviceToken;
    bool m_voipDeviceTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
