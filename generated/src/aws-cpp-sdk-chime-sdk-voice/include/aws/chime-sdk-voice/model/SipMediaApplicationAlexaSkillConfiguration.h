/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/AlexaSkillStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   * <p>The Alexa Skill configuration of a SIP media application.</p> 
   * <p>Due to changes made by the Amazon Alexa service, this data type is no longer
   * available for use. For more information, refer to the <a
   * href="https://developer.amazon.com/en-US/alexa/alexasmartproperties">Alexa Smart
   * Properties</a> page.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/SipMediaApplicationAlexaSkillConfiguration">AWS
   * API Reference</a></p>
   */
  class SipMediaApplicationAlexaSkillConfiguration
  {
  public:
    AWS_CHIMESDKVOICE_API SipMediaApplicationAlexaSkillConfiguration() = default;
    AWS_CHIMESDKVOICE_API SipMediaApplicationAlexaSkillConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API SipMediaApplicationAlexaSkillConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the Alexa Skill configuration.</p>
     */
    inline AlexaSkillStatus GetAlexaSkillStatus() const { return m_alexaSkillStatus; }
    inline bool AlexaSkillStatusHasBeenSet() const { return m_alexaSkillStatusHasBeenSet; }
    inline void SetAlexaSkillStatus(AlexaSkillStatus value) { m_alexaSkillStatusHasBeenSet = true; m_alexaSkillStatus = value; }
    inline SipMediaApplicationAlexaSkillConfiguration& WithAlexaSkillStatus(AlexaSkillStatus value) { SetAlexaSkillStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Alexa Skill configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAlexaSkillIds() const { return m_alexaSkillIds; }
    inline bool AlexaSkillIdsHasBeenSet() const { return m_alexaSkillIdsHasBeenSet; }
    template<typename AlexaSkillIdsT = Aws::Vector<Aws::String>>
    void SetAlexaSkillIds(AlexaSkillIdsT&& value) { m_alexaSkillIdsHasBeenSet = true; m_alexaSkillIds = std::forward<AlexaSkillIdsT>(value); }
    template<typename AlexaSkillIdsT = Aws::Vector<Aws::String>>
    SipMediaApplicationAlexaSkillConfiguration& WithAlexaSkillIds(AlexaSkillIdsT&& value) { SetAlexaSkillIds(std::forward<AlexaSkillIdsT>(value)); return *this;}
    template<typename AlexaSkillIdsT = Aws::String>
    SipMediaApplicationAlexaSkillConfiguration& AddAlexaSkillIds(AlexaSkillIdsT&& value) { m_alexaSkillIdsHasBeenSet = true; m_alexaSkillIds.emplace_back(std::forward<AlexaSkillIdsT>(value)); return *this; }
    ///@}
  private:

    AlexaSkillStatus m_alexaSkillStatus{AlexaSkillStatus::NOT_SET};
    bool m_alexaSkillStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_alexaSkillIds;
    bool m_alexaSkillIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
