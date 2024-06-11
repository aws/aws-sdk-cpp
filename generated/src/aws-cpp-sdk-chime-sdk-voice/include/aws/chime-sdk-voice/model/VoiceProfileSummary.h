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
   * <p>A high-level summary of a voice profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/VoiceProfileSummary">AWS
   * API Reference</a></p>
   */
  class VoiceProfileSummary
  {
  public:
    AWS_CHIMESDKVOICE_API VoiceProfileSummary();
    AWS_CHIMESDKVOICE_API VoiceProfileSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API VoiceProfileSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the voice profile in a voice profile summary.</p>
     */
    inline const Aws::String& GetVoiceProfileId() const{ return m_voiceProfileId; }
    inline bool VoiceProfileIdHasBeenSet() const { return m_voiceProfileIdHasBeenSet; }
    inline void SetVoiceProfileId(const Aws::String& value) { m_voiceProfileIdHasBeenSet = true; m_voiceProfileId = value; }
    inline void SetVoiceProfileId(Aws::String&& value) { m_voiceProfileIdHasBeenSet = true; m_voiceProfileId = std::move(value); }
    inline void SetVoiceProfileId(const char* value) { m_voiceProfileIdHasBeenSet = true; m_voiceProfileId.assign(value); }
    inline VoiceProfileSummary& WithVoiceProfileId(const Aws::String& value) { SetVoiceProfileId(value); return *this;}
    inline VoiceProfileSummary& WithVoiceProfileId(Aws::String&& value) { SetVoiceProfileId(std::move(value)); return *this;}
    inline VoiceProfileSummary& WithVoiceProfileId(const char* value) { SetVoiceProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the voice profile in a voice profile summary.</p>
     */
    inline const Aws::String& GetVoiceProfileArn() const{ return m_voiceProfileArn; }
    inline bool VoiceProfileArnHasBeenSet() const { return m_voiceProfileArnHasBeenSet; }
    inline void SetVoiceProfileArn(const Aws::String& value) { m_voiceProfileArnHasBeenSet = true; m_voiceProfileArn = value; }
    inline void SetVoiceProfileArn(Aws::String&& value) { m_voiceProfileArnHasBeenSet = true; m_voiceProfileArn = std::move(value); }
    inline void SetVoiceProfileArn(const char* value) { m_voiceProfileArnHasBeenSet = true; m_voiceProfileArn.assign(value); }
    inline VoiceProfileSummary& WithVoiceProfileArn(const Aws::String& value) { SetVoiceProfileArn(value); return *this;}
    inline VoiceProfileSummary& WithVoiceProfileArn(Aws::String&& value) { SetVoiceProfileArn(std::move(value)); return *this;}
    inline VoiceProfileSummary& WithVoiceProfileArn(const char* value) { SetVoiceProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the voice profile domain in a voice profile summary.</p>
     */
    inline const Aws::String& GetVoiceProfileDomainId() const{ return m_voiceProfileDomainId; }
    inline bool VoiceProfileDomainIdHasBeenSet() const { return m_voiceProfileDomainIdHasBeenSet; }
    inline void SetVoiceProfileDomainId(const Aws::String& value) { m_voiceProfileDomainIdHasBeenSet = true; m_voiceProfileDomainId = value; }
    inline void SetVoiceProfileDomainId(Aws::String&& value) { m_voiceProfileDomainIdHasBeenSet = true; m_voiceProfileDomainId = std::move(value); }
    inline void SetVoiceProfileDomainId(const char* value) { m_voiceProfileDomainIdHasBeenSet = true; m_voiceProfileDomainId.assign(value); }
    inline VoiceProfileSummary& WithVoiceProfileDomainId(const Aws::String& value) { SetVoiceProfileDomainId(value); return *this;}
    inline VoiceProfileSummary& WithVoiceProfileDomainId(Aws::String&& value) { SetVoiceProfileDomainId(std::move(value)); return *this;}
    inline VoiceProfileSummary& WithVoiceProfileDomainId(const char* value) { SetVoiceProfileDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a voice profile summary was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline VoiceProfileSummary& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline VoiceProfileSummary& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a voice profile summary was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }
    inline VoiceProfileSummary& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}
    inline VoiceProfileSummary& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Extends the life of the voice profile. You can use
     * <code>UpdateVoiceProfile</code> to refresh an existing voice profile's voice
     * print and extend the life of the summary.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTimestamp() const{ return m_expirationTimestamp; }
    inline bool ExpirationTimestampHasBeenSet() const { return m_expirationTimestampHasBeenSet; }
    inline void SetExpirationTimestamp(const Aws::Utils::DateTime& value) { m_expirationTimestampHasBeenSet = true; m_expirationTimestamp = value; }
    inline void SetExpirationTimestamp(Aws::Utils::DateTime&& value) { m_expirationTimestampHasBeenSet = true; m_expirationTimestamp = std::move(value); }
    inline VoiceProfileSummary& WithExpirationTimestamp(const Aws::Utils::DateTime& value) { SetExpirationTimestamp(value); return *this;}
    inline VoiceProfileSummary& WithExpirationTimestamp(Aws::Utils::DateTime&& value) { SetExpirationTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_voiceProfileId;
    bool m_voiceProfileIdHasBeenSet = false;

    Aws::String m_voiceProfileArn;
    bool m_voiceProfileArnHasBeenSet = false;

    Aws::String m_voiceProfileDomainId;
    bool m_voiceProfileDomainIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_expirationTimestamp;
    bool m_expirationTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
