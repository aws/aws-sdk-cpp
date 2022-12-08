/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-voice/model/Credential.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class PutVoiceConnectorTerminationCredentialsRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API PutVoiceConnectorTerminationCredentialsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutVoiceConnectorTerminationCredentials"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetVoiceConnectorId() const{ return m_voiceConnectorId; }

    
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }

    
    inline void SetVoiceConnectorId(const Aws::String& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = value; }

    
    inline void SetVoiceConnectorId(Aws::String&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::move(value); }

    
    inline void SetVoiceConnectorId(const char* value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId.assign(value); }

    
    inline PutVoiceConnectorTerminationCredentialsRequest& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    
    inline PutVoiceConnectorTerminationCredentialsRequest& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    
    inline PutVoiceConnectorTerminationCredentialsRequest& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    
    inline const Aws::Vector<Credential>& GetCredentials() const{ return m_credentials; }

    
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }

    
    inline void SetCredentials(const Aws::Vector<Credential>& value) { m_credentialsHasBeenSet = true; m_credentials = value; }

    
    inline void SetCredentials(Aws::Vector<Credential>&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }

    
    inline PutVoiceConnectorTerminationCredentialsRequest& WithCredentials(const Aws::Vector<Credential>& value) { SetCredentials(value); return *this;}

    
    inline PutVoiceConnectorTerminationCredentialsRequest& WithCredentials(Aws::Vector<Credential>&& value) { SetCredentials(std::move(value)); return *this;}

    
    inline PutVoiceConnectorTerminationCredentialsRequest& AddCredentials(const Credential& value) { m_credentialsHasBeenSet = true; m_credentials.push_back(value); return *this; }

    
    inline PutVoiceConnectorTerminationCredentialsRequest& AddCredentials(Credential&& value) { m_credentialsHasBeenSet = true; m_credentials.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    Aws::Vector<Credential> m_credentials;
    bool m_credentialsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
