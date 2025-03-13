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
    AWS_CHIMESDKVOICE_API DeleteVoiceConnectorTerminationCredentialsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVoiceConnectorTerminationCredentials"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Voice Connector ID.</p>
     */
    inline const Aws::String& GetVoiceConnectorId() const { return m_voiceConnectorId; }
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }
    template<typename VoiceConnectorIdT = Aws::String>
    void SetVoiceConnectorId(VoiceConnectorIdT&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::forward<VoiceConnectorIdT>(value); }
    template<typename VoiceConnectorIdT = Aws::String>
    DeleteVoiceConnectorTerminationCredentialsRequest& WithVoiceConnectorId(VoiceConnectorIdT&& value) { SetVoiceConnectorId(std::forward<VoiceConnectorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The RFC2617 compliant username associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUsernames() const { return m_usernames; }
    inline bool UsernamesHasBeenSet() const { return m_usernamesHasBeenSet; }
    template<typename UsernamesT = Aws::Vector<Aws::String>>
    void SetUsernames(UsernamesT&& value) { m_usernamesHasBeenSet = true; m_usernames = std::forward<UsernamesT>(value); }
    template<typename UsernamesT = Aws::Vector<Aws::String>>
    DeleteVoiceConnectorTerminationCredentialsRequest& WithUsernames(UsernamesT&& value) { SetUsernames(std::forward<UsernamesT>(value)); return *this;}
    template<typename UsernamesT = Aws::String>
    DeleteVoiceConnectorTerminationCredentialsRequest& AddUsernames(UsernamesT&& value) { m_usernamesHasBeenSet = true; m_usernames.emplace_back(std::forward<UsernamesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_usernames;
    bool m_usernamesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
