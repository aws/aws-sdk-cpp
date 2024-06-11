/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A high-level overview of a voice profile domain.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/VoiceProfileDomainSummary">AWS
   * API Reference</a></p>
   */
  class VoiceProfileDomainSummary
  {
  public:
    AWS_CHIMESDKVOICE_API VoiceProfileDomainSummary();
    AWS_CHIMESDKVOICE_API VoiceProfileDomainSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API VoiceProfileDomainSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the voice profile domain summary.</p>
     */
    inline const Aws::String& GetVoiceProfileDomainId() const{ return m_voiceProfileDomainId; }
    inline bool VoiceProfileDomainIdHasBeenSet() const { return m_voiceProfileDomainIdHasBeenSet; }
    inline void SetVoiceProfileDomainId(const Aws::String& value) { m_voiceProfileDomainIdHasBeenSet = true; m_voiceProfileDomainId = value; }
    inline void SetVoiceProfileDomainId(Aws::String&& value) { m_voiceProfileDomainIdHasBeenSet = true; m_voiceProfileDomainId = std::move(value); }
    inline void SetVoiceProfileDomainId(const char* value) { m_voiceProfileDomainIdHasBeenSet = true; m_voiceProfileDomainId.assign(value); }
    inline VoiceProfileDomainSummary& WithVoiceProfileDomainId(const Aws::String& value) { SetVoiceProfileDomainId(value); return *this;}
    inline VoiceProfileDomainSummary& WithVoiceProfileDomainId(Aws::String&& value) { SetVoiceProfileDomainId(std::move(value)); return *this;}
    inline VoiceProfileDomainSummary& WithVoiceProfileDomainId(const char* value) { SetVoiceProfileDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a voice profile in a voice profile domain summary.</p>
     */
    inline const Aws::String& GetVoiceProfileDomainArn() const{ return m_voiceProfileDomainArn; }
    inline bool VoiceProfileDomainArnHasBeenSet() const { return m_voiceProfileDomainArnHasBeenSet; }
    inline void SetVoiceProfileDomainArn(const Aws::String& value) { m_voiceProfileDomainArnHasBeenSet = true; m_voiceProfileDomainArn = value; }
    inline void SetVoiceProfileDomainArn(Aws::String&& value) { m_voiceProfileDomainArnHasBeenSet = true; m_voiceProfileDomainArn = std::move(value); }
    inline void SetVoiceProfileDomainArn(const char* value) { m_voiceProfileDomainArnHasBeenSet = true; m_voiceProfileDomainArn.assign(value); }
    inline VoiceProfileDomainSummary& WithVoiceProfileDomainArn(const Aws::String& value) { SetVoiceProfileDomainArn(value); return *this;}
    inline VoiceProfileDomainSummary& WithVoiceProfileDomainArn(Aws::String&& value) { SetVoiceProfileDomainArn(std::move(value)); return *this;}
    inline VoiceProfileDomainSummary& WithVoiceProfileDomainArn(const char* value) { SetVoiceProfileDomainArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the voice profile domain summary.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline VoiceProfileDomainSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline VoiceProfileDomainSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline VoiceProfileDomainSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the voice profile domain summary.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline VoiceProfileDomainSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline VoiceProfileDomainSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline VoiceProfileDomainSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the voice profile domain summary was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline VoiceProfileDomainSummary& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline VoiceProfileDomainSummary& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the voice profile domain summary was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }
    inline VoiceProfileDomainSummary& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}
    inline VoiceProfileDomainSummary& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_voiceProfileDomainId;
    bool m_voiceProfileDomainIdHasBeenSet = false;

    Aws::String m_voiceProfileDomainArn;
    bool m_voiceProfileDomainArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
