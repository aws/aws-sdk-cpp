/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class DeleteVoiceConnectorTerminationCredentialsRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API DeleteVoiceConnectorTerminationCredentialsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVoiceConnectorTerminationCredentials"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetVoiceConnectorId() const{ return m_voiceConnectorId; }

    
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }

    
    inline void SetVoiceConnectorId(const Aws::String& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = value; }

    
    inline void SetVoiceConnectorId(Aws::String&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::move(value); }

    
    inline void SetVoiceConnectorId(const char* value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId.assign(value); }

    
    inline DeleteVoiceConnectorTerminationCredentialsRequest& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    
    inline DeleteVoiceConnectorTerminationCredentialsRequest& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    
    inline DeleteVoiceConnectorTerminationCredentialsRequest& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetUsernames() const{ return m_usernames; }

    
    inline bool UsernamesHasBeenSet() const { return m_usernamesHasBeenSet; }

    
    inline void SetUsernames(const Aws::Vector<Aws::String>& value) { m_usernamesHasBeenSet = true; m_usernames = value; }

    
    inline void SetUsernames(Aws::Vector<Aws::String>&& value) { m_usernamesHasBeenSet = true; m_usernames = std::move(value); }

    
    inline DeleteVoiceConnectorTerminationCredentialsRequest& WithUsernames(const Aws::Vector<Aws::String>& value) { SetUsernames(value); return *this;}

    
    inline DeleteVoiceConnectorTerminationCredentialsRequest& WithUsernames(Aws::Vector<Aws::String>&& value) { SetUsernames(std::move(value)); return *this;}

    
    inline DeleteVoiceConnectorTerminationCredentialsRequest& AddUsernames(const Aws::String& value) { m_usernamesHasBeenSet = true; m_usernames.push_back(value); return *this; }

    
    inline DeleteVoiceConnectorTerminationCredentialsRequest& AddUsernames(Aws::String&& value) { m_usernamesHasBeenSet = true; m_usernames.push_back(std::move(value)); return *this; }

    
    inline DeleteVoiceConnectorTerminationCredentialsRequest& AddUsernames(const char* value) { m_usernamesHasBeenSet = true; m_usernames.push_back(value); return *this; }

  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_usernames;
    bool m_usernamesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
