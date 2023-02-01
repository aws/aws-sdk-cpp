/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-voice/model/Capability.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class UpdateProxySessionRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API UpdateProxySessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateProxySession"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetVoiceConnectorId() const{ return m_voiceConnectorId; }

    
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }

    
    inline void SetVoiceConnectorId(const Aws::String& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = value; }

    
    inline void SetVoiceConnectorId(Aws::String&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::move(value); }

    
    inline void SetVoiceConnectorId(const char* value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId.assign(value); }

    
    inline UpdateProxySessionRequest& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    
    inline UpdateProxySessionRequest& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    
    inline UpdateProxySessionRequest& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    
    inline const Aws::String& GetProxySessionId() const{ return m_proxySessionId; }

    
    inline bool ProxySessionIdHasBeenSet() const { return m_proxySessionIdHasBeenSet; }

    
    inline void SetProxySessionId(const Aws::String& value) { m_proxySessionIdHasBeenSet = true; m_proxySessionId = value; }

    
    inline void SetProxySessionId(Aws::String&& value) { m_proxySessionIdHasBeenSet = true; m_proxySessionId = std::move(value); }

    
    inline void SetProxySessionId(const char* value) { m_proxySessionIdHasBeenSet = true; m_proxySessionId.assign(value); }

    
    inline UpdateProxySessionRequest& WithProxySessionId(const Aws::String& value) { SetProxySessionId(value); return *this;}

    
    inline UpdateProxySessionRequest& WithProxySessionId(Aws::String&& value) { SetProxySessionId(std::move(value)); return *this;}

    
    inline UpdateProxySessionRequest& WithProxySessionId(const char* value) { SetProxySessionId(value); return *this;}


    
    inline const Aws::Vector<Capability>& GetCapabilities() const{ return m_capabilities; }

    
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    
    inline void SetCapabilities(const Aws::Vector<Capability>& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    
    inline void SetCapabilities(Aws::Vector<Capability>&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    
    inline UpdateProxySessionRequest& WithCapabilities(const Aws::Vector<Capability>& value) { SetCapabilities(value); return *this;}

    
    inline UpdateProxySessionRequest& WithCapabilities(Aws::Vector<Capability>&& value) { SetCapabilities(std::move(value)); return *this;}

    
    inline UpdateProxySessionRequest& AddCapabilities(const Capability& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(value); return *this; }

    
    inline UpdateProxySessionRequest& AddCapabilities(Capability&& value) { m_capabilitiesHasBeenSet = true; m_capabilities.push_back(std::move(value)); return *this; }


    
    inline int GetExpiryMinutes() const{ return m_expiryMinutes; }

    
    inline bool ExpiryMinutesHasBeenSet() const { return m_expiryMinutesHasBeenSet; }

    
    inline void SetExpiryMinutes(int value) { m_expiryMinutesHasBeenSet = true; m_expiryMinutes = value; }

    
    inline UpdateProxySessionRequest& WithExpiryMinutes(int value) { SetExpiryMinutes(value); return *this;}

  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    Aws::String m_proxySessionId;
    bool m_proxySessionIdHasBeenSet = false;

    Aws::Vector<Capability> m_capabilities;
    bool m_capabilitiesHasBeenSet = false;

    int m_expiryMinutes;
    bool m_expiryMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
