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
    AWS_CHIMESDKIDENTITY_API EndpointAttributes();
    AWS_CHIMESDKIDENTITY_API EndpointAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API EndpointAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKIDENTITY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The device token for the GCM, APNS, and APNS_SANDBOX endpoint types.</p>
     */
    inline const Aws::String& GetDeviceToken() const{ return m_deviceToken; }

    /**
     * <p>The device token for the GCM, APNS, and APNS_SANDBOX endpoint types.</p>
     */
    inline bool DeviceTokenHasBeenSet() const { return m_deviceTokenHasBeenSet; }

    /**
     * <p>The device token for the GCM, APNS, and APNS_SANDBOX endpoint types.</p>
     */
    inline void SetDeviceToken(const Aws::String& value) { m_deviceTokenHasBeenSet = true; m_deviceToken = value; }

    /**
     * <p>The device token for the GCM, APNS, and APNS_SANDBOX endpoint types.</p>
     */
    inline void SetDeviceToken(Aws::String&& value) { m_deviceTokenHasBeenSet = true; m_deviceToken = std::move(value); }

    /**
     * <p>The device token for the GCM, APNS, and APNS_SANDBOX endpoint types.</p>
     */
    inline void SetDeviceToken(const char* value) { m_deviceTokenHasBeenSet = true; m_deviceToken.assign(value); }

    /**
     * <p>The device token for the GCM, APNS, and APNS_SANDBOX endpoint types.</p>
     */
    inline EndpointAttributes& WithDeviceToken(const Aws::String& value) { SetDeviceToken(value); return *this;}

    /**
     * <p>The device token for the GCM, APNS, and APNS_SANDBOX endpoint types.</p>
     */
    inline EndpointAttributes& WithDeviceToken(Aws::String&& value) { SetDeviceToken(std::move(value)); return *this;}

    /**
     * <p>The device token for the GCM, APNS, and APNS_SANDBOX endpoint types.</p>
     */
    inline EndpointAttributes& WithDeviceToken(const char* value) { SetDeviceToken(value); return *this;}


    /**
     * <p>The VOIP device token for the APNS and APNS_SANDBOX endpoint types.</p>
     */
    inline const Aws::String& GetVoipDeviceToken() const{ return m_voipDeviceToken; }

    /**
     * <p>The VOIP device token for the APNS and APNS_SANDBOX endpoint types.</p>
     */
    inline bool VoipDeviceTokenHasBeenSet() const { return m_voipDeviceTokenHasBeenSet; }

    /**
     * <p>The VOIP device token for the APNS and APNS_SANDBOX endpoint types.</p>
     */
    inline void SetVoipDeviceToken(const Aws::String& value) { m_voipDeviceTokenHasBeenSet = true; m_voipDeviceToken = value; }

    /**
     * <p>The VOIP device token for the APNS and APNS_SANDBOX endpoint types.</p>
     */
    inline void SetVoipDeviceToken(Aws::String&& value) { m_voipDeviceTokenHasBeenSet = true; m_voipDeviceToken = std::move(value); }

    /**
     * <p>The VOIP device token for the APNS and APNS_SANDBOX endpoint types.</p>
     */
    inline void SetVoipDeviceToken(const char* value) { m_voipDeviceTokenHasBeenSet = true; m_voipDeviceToken.assign(value); }

    /**
     * <p>The VOIP device token for the APNS and APNS_SANDBOX endpoint types.</p>
     */
    inline EndpointAttributes& WithVoipDeviceToken(const Aws::String& value) { SetVoipDeviceToken(value); return *this;}

    /**
     * <p>The VOIP device token for the APNS and APNS_SANDBOX endpoint types.</p>
     */
    inline EndpointAttributes& WithVoipDeviceToken(Aws::String&& value) { SetVoipDeviceToken(std::move(value)); return *this;}

    /**
     * <p>The VOIP device token for the APNS and APNS_SANDBOX endpoint types.</p>
     */
    inline EndpointAttributes& WithVoipDeviceToken(const char* value) { SetVoipDeviceToken(value); return *this;}

  private:

    Aws::String m_deviceToken;
    bool m_deviceTokenHasBeenSet = false;

    Aws::String m_voipDeviceToken;
    bool m_voipDeviceTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
