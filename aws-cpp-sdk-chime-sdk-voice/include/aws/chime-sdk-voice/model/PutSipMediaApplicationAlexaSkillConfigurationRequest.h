/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/SipMediaApplicationAlexaSkillConfiguration.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class PutSipMediaApplicationAlexaSkillConfigurationRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API PutSipMediaApplicationAlexaSkillConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSipMediaApplicationAlexaSkillConfiguration"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetSipMediaApplicationId() const{ return m_sipMediaApplicationId; }

    
    inline bool SipMediaApplicationIdHasBeenSet() const { return m_sipMediaApplicationIdHasBeenSet; }

    
    inline void SetSipMediaApplicationId(const Aws::String& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = value; }

    
    inline void SetSipMediaApplicationId(Aws::String&& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = std::move(value); }

    
    inline void SetSipMediaApplicationId(const char* value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId.assign(value); }

    
    inline PutSipMediaApplicationAlexaSkillConfigurationRequest& WithSipMediaApplicationId(const Aws::String& value) { SetSipMediaApplicationId(value); return *this;}

    
    inline PutSipMediaApplicationAlexaSkillConfigurationRequest& WithSipMediaApplicationId(Aws::String&& value) { SetSipMediaApplicationId(std::move(value)); return *this;}

    
    inline PutSipMediaApplicationAlexaSkillConfigurationRequest& WithSipMediaApplicationId(const char* value) { SetSipMediaApplicationId(value); return *this;}


    
    inline const SipMediaApplicationAlexaSkillConfiguration& GetSipMediaApplicationAlexaSkillConfiguration() const{ return m_sipMediaApplicationAlexaSkillConfiguration; }

    
    inline bool SipMediaApplicationAlexaSkillConfigurationHasBeenSet() const { return m_sipMediaApplicationAlexaSkillConfigurationHasBeenSet; }

    
    inline void SetSipMediaApplicationAlexaSkillConfiguration(const SipMediaApplicationAlexaSkillConfiguration& value) { m_sipMediaApplicationAlexaSkillConfigurationHasBeenSet = true; m_sipMediaApplicationAlexaSkillConfiguration = value; }

    
    inline void SetSipMediaApplicationAlexaSkillConfiguration(SipMediaApplicationAlexaSkillConfiguration&& value) { m_sipMediaApplicationAlexaSkillConfigurationHasBeenSet = true; m_sipMediaApplicationAlexaSkillConfiguration = std::move(value); }

    
    inline PutSipMediaApplicationAlexaSkillConfigurationRequest& WithSipMediaApplicationAlexaSkillConfiguration(const SipMediaApplicationAlexaSkillConfiguration& value) { SetSipMediaApplicationAlexaSkillConfiguration(value); return *this;}

    
    inline PutSipMediaApplicationAlexaSkillConfigurationRequest& WithSipMediaApplicationAlexaSkillConfiguration(SipMediaApplicationAlexaSkillConfiguration&& value) { SetSipMediaApplicationAlexaSkillConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_sipMediaApplicationId;
    bool m_sipMediaApplicationIdHasBeenSet = false;

    SipMediaApplicationAlexaSkillConfiguration m_sipMediaApplicationAlexaSkillConfiguration;
    bool m_sipMediaApplicationAlexaSkillConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
