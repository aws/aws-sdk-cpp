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
#include <aws/chime/model/BusinessCallingSettings.h>
#include <aws/chime/model/VoiceConnectorSettings.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class AWS_CHIME_API UpdateGlobalSettingsRequest : public ChimeRequest
  {
  public:
    UpdateGlobalSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGlobalSettings"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Chime Business Calling settings.</p>
     */
    inline const BusinessCallingSettings& GetBusinessCalling() const{ return m_businessCalling; }

    /**
     * <p>The Amazon Chime Business Calling settings.</p>
     */
    inline bool BusinessCallingHasBeenSet() const { return m_businessCallingHasBeenSet; }

    /**
     * <p>The Amazon Chime Business Calling settings.</p>
     */
    inline void SetBusinessCalling(const BusinessCallingSettings& value) { m_businessCallingHasBeenSet = true; m_businessCalling = value; }

    /**
     * <p>The Amazon Chime Business Calling settings.</p>
     */
    inline void SetBusinessCalling(BusinessCallingSettings&& value) { m_businessCallingHasBeenSet = true; m_businessCalling = std::move(value); }

    /**
     * <p>The Amazon Chime Business Calling settings.</p>
     */
    inline UpdateGlobalSettingsRequest& WithBusinessCalling(const BusinessCallingSettings& value) { SetBusinessCalling(value); return *this;}

    /**
     * <p>The Amazon Chime Business Calling settings.</p>
     */
    inline UpdateGlobalSettingsRequest& WithBusinessCalling(BusinessCallingSettings&& value) { SetBusinessCalling(std::move(value)); return *this;}


    /**
     * <p>The Amazon Chime Voice Connector settings.</p>
     */
    inline const VoiceConnectorSettings& GetVoiceConnector() const{ return m_voiceConnector; }

    /**
     * <p>The Amazon Chime Voice Connector settings.</p>
     */
    inline bool VoiceConnectorHasBeenSet() const { return m_voiceConnectorHasBeenSet; }

    /**
     * <p>The Amazon Chime Voice Connector settings.</p>
     */
    inline void SetVoiceConnector(const VoiceConnectorSettings& value) { m_voiceConnectorHasBeenSet = true; m_voiceConnector = value; }

    /**
     * <p>The Amazon Chime Voice Connector settings.</p>
     */
    inline void SetVoiceConnector(VoiceConnectorSettings&& value) { m_voiceConnectorHasBeenSet = true; m_voiceConnector = std::move(value); }

    /**
     * <p>The Amazon Chime Voice Connector settings.</p>
     */
    inline UpdateGlobalSettingsRequest& WithVoiceConnector(const VoiceConnectorSettings& value) { SetVoiceConnector(value); return *this;}

    /**
     * <p>The Amazon Chime Voice Connector settings.</p>
     */
    inline UpdateGlobalSettingsRequest& WithVoiceConnector(VoiceConnectorSettings&& value) { SetVoiceConnector(std::move(value)); return *this;}

  private:

    BusinessCallingSettings m_businessCalling;
    bool m_businessCallingHasBeenSet;

    VoiceConnectorSettings m_voiceConnector;
    bool m_voiceConnectorHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
