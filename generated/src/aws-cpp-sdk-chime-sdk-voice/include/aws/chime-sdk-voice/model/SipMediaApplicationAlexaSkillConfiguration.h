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
   * <p>The Alexa Skill configuration of a SIP media application.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/SipMediaApplicationAlexaSkillConfiguration">AWS
   * API Reference</a></p>
   */
  class SipMediaApplicationAlexaSkillConfiguration
  {
  public:
    AWS_CHIMESDKVOICE_API SipMediaApplicationAlexaSkillConfiguration();
    AWS_CHIMESDKVOICE_API SipMediaApplicationAlexaSkillConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API SipMediaApplicationAlexaSkillConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the Alexa Skill configuration.</p>
     */
    inline const AlexaSkillStatus& GetAlexaSkillStatus() const{ return m_alexaSkillStatus; }

    /**
     * <p>The status of the Alexa Skill configuration.</p>
     */
    inline bool AlexaSkillStatusHasBeenSet() const { return m_alexaSkillStatusHasBeenSet; }

    /**
     * <p>The status of the Alexa Skill configuration.</p>
     */
    inline void SetAlexaSkillStatus(const AlexaSkillStatus& value) { m_alexaSkillStatusHasBeenSet = true; m_alexaSkillStatus = value; }

    /**
     * <p>The status of the Alexa Skill configuration.</p>
     */
    inline void SetAlexaSkillStatus(AlexaSkillStatus&& value) { m_alexaSkillStatusHasBeenSet = true; m_alexaSkillStatus = std::move(value); }

    /**
     * <p>The status of the Alexa Skill configuration.</p>
     */
    inline SipMediaApplicationAlexaSkillConfiguration& WithAlexaSkillStatus(const AlexaSkillStatus& value) { SetAlexaSkillStatus(value); return *this;}

    /**
     * <p>The status of the Alexa Skill configuration.</p>
     */
    inline SipMediaApplicationAlexaSkillConfiguration& WithAlexaSkillStatus(AlexaSkillStatus&& value) { SetAlexaSkillStatus(std::move(value)); return *this;}


    /**
     * <p>The ID of the Alexa Skill configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAlexaSkillIds() const{ return m_alexaSkillIds; }

    /**
     * <p>The ID of the Alexa Skill configuration.</p>
     */
    inline bool AlexaSkillIdsHasBeenSet() const { return m_alexaSkillIdsHasBeenSet; }

    /**
     * <p>The ID of the Alexa Skill configuration.</p>
     */
    inline void SetAlexaSkillIds(const Aws::Vector<Aws::String>& value) { m_alexaSkillIdsHasBeenSet = true; m_alexaSkillIds = value; }

    /**
     * <p>The ID of the Alexa Skill configuration.</p>
     */
    inline void SetAlexaSkillIds(Aws::Vector<Aws::String>&& value) { m_alexaSkillIdsHasBeenSet = true; m_alexaSkillIds = std::move(value); }

    /**
     * <p>The ID of the Alexa Skill configuration.</p>
     */
    inline SipMediaApplicationAlexaSkillConfiguration& WithAlexaSkillIds(const Aws::Vector<Aws::String>& value) { SetAlexaSkillIds(value); return *this;}

    /**
     * <p>The ID of the Alexa Skill configuration.</p>
     */
    inline SipMediaApplicationAlexaSkillConfiguration& WithAlexaSkillIds(Aws::Vector<Aws::String>&& value) { SetAlexaSkillIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the Alexa Skill configuration.</p>
     */
    inline SipMediaApplicationAlexaSkillConfiguration& AddAlexaSkillIds(const Aws::String& value) { m_alexaSkillIdsHasBeenSet = true; m_alexaSkillIds.push_back(value); return *this; }

    /**
     * <p>The ID of the Alexa Skill configuration.</p>
     */
    inline SipMediaApplicationAlexaSkillConfiguration& AddAlexaSkillIds(Aws::String&& value) { m_alexaSkillIdsHasBeenSet = true; m_alexaSkillIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the Alexa Skill configuration.</p>
     */
    inline SipMediaApplicationAlexaSkillConfiguration& AddAlexaSkillIds(const char* value) { m_alexaSkillIdsHasBeenSet = true; m_alexaSkillIds.push_back(value); return *this; }

  private:

    AlexaSkillStatus m_alexaSkillStatus;
    bool m_alexaSkillStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_alexaSkillIds;
    bool m_alexaSkillIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
