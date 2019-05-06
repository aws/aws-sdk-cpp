/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/Credential.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class AWS_CHIME_API PutVoiceConnectorTerminationCredentialsRequest : public ChimeRequest
  {
  public:
    PutVoiceConnectorTerminationCredentialsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutVoiceConnectorTerminationCredentials"; }

    Aws::String SerializePayload() const override;


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
    inline PutVoiceConnectorTerminationCredentialsRequest& WithVoiceConnectorId(const Aws::String& value) { SetVoiceConnectorId(value); return *this;}

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline PutVoiceConnectorTerminationCredentialsRequest& WithVoiceConnectorId(Aws::String&& value) { SetVoiceConnectorId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Chime Voice Connector ID.</p>
     */
    inline PutVoiceConnectorTerminationCredentialsRequest& WithVoiceConnectorId(const char* value) { SetVoiceConnectorId(value); return *this;}


    /**
     * <p>The termination SIP credentials.</p>
     */
    inline const Aws::Vector<Credential>& GetCredentials() const{ return m_credentials; }

    /**
     * <p>The termination SIP credentials.</p>
     */
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }

    /**
     * <p>The termination SIP credentials.</p>
     */
    inline void SetCredentials(const Aws::Vector<Credential>& value) { m_credentialsHasBeenSet = true; m_credentials = value; }

    /**
     * <p>The termination SIP credentials.</p>
     */
    inline void SetCredentials(Aws::Vector<Credential>&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }

    /**
     * <p>The termination SIP credentials.</p>
     */
    inline PutVoiceConnectorTerminationCredentialsRequest& WithCredentials(const Aws::Vector<Credential>& value) { SetCredentials(value); return *this;}

    /**
     * <p>The termination SIP credentials.</p>
     */
    inline PutVoiceConnectorTerminationCredentialsRequest& WithCredentials(Aws::Vector<Credential>&& value) { SetCredentials(std::move(value)); return *this;}

    /**
     * <p>The termination SIP credentials.</p>
     */
    inline PutVoiceConnectorTerminationCredentialsRequest& AddCredentials(const Credential& value) { m_credentialsHasBeenSet = true; m_credentials.push_back(value); return *this; }

    /**
     * <p>The termination SIP credentials.</p>
     */
    inline PutVoiceConnectorTerminationCredentialsRequest& AddCredentials(Credential&& value) { m_credentialsHasBeenSet = true; m_credentials.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_voiceConnectorId;
    bool m_voiceConnectorIdHasBeenSet;

    Aws::Vector<Credential> m_credentials;
    bool m_credentialsHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
