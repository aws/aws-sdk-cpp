/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class DeleteProxySessionRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API DeleteProxySessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteProxySession"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetVoiceConnectorId() const{ return m_voiceConnectorId; }

    
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }

    
    inline void SetVoiceConnectorId(const Aws::String& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = value; }

    
    inline void SetVoiceConnectorId(Aws::String&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::move(value); }

    
    inline void SetVoiceConnectorId(const char* value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId.assign(value); }

    
    inline DeleteProxySessionRequest& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    
    inline DeleteProxySessionRequest& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    
    inline DeleteProxySessionRequest& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    
    inline const Aws::String& GetProxySessionId() const{ return m_proxySessionId; }

    
    inline bool ProxySessionIdHasBeenSet() const { return m_proxySessionIdHasBeenSet; }

    
    inline void SetProxySessionId(const Aws::String& value) { m_proxySessionIdHasBeenSet = true; m_proxySessionId = value; }

    
    inline void SetProxySessionId(Aws::String&& value) { m_proxySessionIdHasBeenSet = true; m_proxySessionId = std::move(value); }

    
    inline void SetProxySessionId(const char* value) { m_proxySessionIdHasBeenSet = true; m_proxySessionId.assign(value); }

    
    inline DeleteProxySessionRequest& WithProxySessionId(const Aws::String& value) { SetProxySessionId(value); return *this;}

    
    inline DeleteProxySessionRequest& WithProxySessionId(Aws::String&& value) { SetProxySessionId(std::move(value)); return *this;}

    
    inline DeleteProxySessionRequest& WithProxySessionId(const char* value) { SetProxySessionId(value); return *this;}

  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    Aws::String m_proxySessionId;
    bool m_proxySessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
