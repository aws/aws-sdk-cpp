/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/SipMediaApplicationLoggingConfiguration.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class PutSipMediaApplicationLoggingConfigurationRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API PutSipMediaApplicationLoggingConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSipMediaApplicationLoggingConfiguration"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The SIP media application ID.</p>
     */
    inline const Aws::String& GetSipMediaApplicationId() const { return m_sipMediaApplicationId; }
    inline bool SipMediaApplicationIdHasBeenSet() const { return m_sipMediaApplicationIdHasBeenSet; }
    template<typename SipMediaApplicationIdT = Aws::String>
    void SetSipMediaApplicationId(SipMediaApplicationIdT&& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = std::forward<SipMediaApplicationIdT>(value); }
    template<typename SipMediaApplicationIdT = Aws::String>
    PutSipMediaApplicationLoggingConfigurationRequest& WithSipMediaApplicationId(SipMediaApplicationIdT&& value) { SetSipMediaApplicationId(std::forward<SipMediaApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logging configuration for the specified SIP media application.</p>
     */
    inline const SipMediaApplicationLoggingConfiguration& GetSipMediaApplicationLoggingConfiguration() const { return m_sipMediaApplicationLoggingConfiguration; }
    inline bool SipMediaApplicationLoggingConfigurationHasBeenSet() const { return m_sipMediaApplicationLoggingConfigurationHasBeenSet; }
    template<typename SipMediaApplicationLoggingConfigurationT = SipMediaApplicationLoggingConfiguration>
    void SetSipMediaApplicationLoggingConfiguration(SipMediaApplicationLoggingConfigurationT&& value) { m_sipMediaApplicationLoggingConfigurationHasBeenSet = true; m_sipMediaApplicationLoggingConfiguration = std::forward<SipMediaApplicationLoggingConfigurationT>(value); }
    template<typename SipMediaApplicationLoggingConfigurationT = SipMediaApplicationLoggingConfiguration>
    PutSipMediaApplicationLoggingConfigurationRequest& WithSipMediaApplicationLoggingConfiguration(SipMediaApplicationLoggingConfigurationT&& value) { SetSipMediaApplicationLoggingConfiguration(std::forward<SipMediaApplicationLoggingConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sipMediaApplicationId;
    bool m_sipMediaApplicationIdHasBeenSet = false;

    SipMediaApplicationLoggingConfiguration m_sipMediaApplicationLoggingConfiguration;
    bool m_sipMediaApplicationLoggingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
