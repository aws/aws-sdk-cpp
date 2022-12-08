/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class DeleteVoiceConnectorTerminationCredentialsRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API DeleteVoiceConnectorTerminationCredentialsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVoiceConnectorTerminationCredentials"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline const Aws::String& GetVoiceConnectorId() const{ return m_voiceConnectorId; }

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline bool VoiceConnectorIdHasBeenSet() const { return m_voiceConnectorIdHasBeenSet; }

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline void SetVoiceConnectorId(const Aws::String& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = value; }

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline void SetVoiceConnectorId(Aws::String&& value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId = std::move(value); }

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline void SetVoiceConnectorId(const char* value) { m_voiceConnectorIdHasBeenSet = true; m_voiceConnectorId.assign(value); }

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline DeleteVoiceConnectorTerminationCredentialsRequest& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline DeleteVoiceConnectorTerminationCredentialsRequest& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline DeleteVoiceConnectorTerminationCredentialsRequest& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    /**
     * <p>The RFC2617 compliant username associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUsernames() const{ return m_usernames; }

    /**
     * <p>The RFC2617 compliant username associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline bool UsernamesHasBeenSet() const { return m_usernamesHasBeenSet; }

    /**
     * <p>The RFC2617 compliant username associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline void SetUsernames(const Aws::Vector<Aws::String>& value) { m_usernamesHasBeenSet = true; m_usernames = value; }

    /**
     * <p>The RFC2617 compliant username associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline void SetUsernames(Aws::Vector<Aws::String>&& value) { m_usernamesHasBeenSet = true; m_usernames = std::move(value); }

    /**
     * <p>The RFC2617 compliant username associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline DeleteVoiceConnectorTerminationCredentialsRequest& WithUsernames(const Aws::Vector<Aws::String>& value) { SetUsernames(value); return *this;}

    /**
     * <p>The RFC2617 compliant username associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline DeleteVoiceConnectorTerminationCredentialsRequest& WithUsernames(Aws::Vector<Aws::String>&& value) { SetUsernames(std::move(value)); return *this;}

    /**
     * <p>The RFC2617 compliant username associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline DeleteVoiceConnectorTerminationCredentialsRequest& AddUsernames(const Aws::String& value) { m_usernamesHasBeenSet = true; m_usernames.push_back(value); return *this; }

    /**
     * <p>The RFC2617 compliant username associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline DeleteVoiceConnectorTerminationCredentialsRequest& AddUsernames(Aws::String&& value) { m_usernamesHasBeenSet = true; m_usernames.push_back(std::move(value)); return *this; }

    /**
     * <p>The RFC2617 compliant username associated with the SIP credentials, in
     * US-ASCII format.</p>
     */
    inline DeleteVoiceConnectorTerminationCredentialsRequest& AddUsernames(const char* value) { m_usernamesHasBeenSet = true; m_usernames.push_back(value); return *this; }

  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_usernames;
    bool m_usernamesHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
