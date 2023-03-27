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
   * <p>The combination of a voice print and caller ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-voice-2022-08-03/VoiceProfile">AWS
   * API Reference</a></p>
   */
  class VoiceProfile
  {
  public:
    AWS_CHIMESDKVOICE_API VoiceProfile();
    AWS_CHIMESDKVOICE_API VoiceProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API VoiceProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the voice profile.</p>
     */
    inline const Aws::String& GetVoiceProfileId() const{ return m_voiceProfileId; }

    /**
     * <p>The ID of the voice profile.</p>
     */
    inline bool VoiceProfileIdHasBeenSet() const { return m_voiceProfileIdHasBeenSet; }

    /**
     * <p>The ID of the voice profile.</p>
     */
    inline void SetVoiceProfileId(const Aws::String& value) { m_voiceProfileIdHasBeenSet = true; m_voiceProfileId = value; }

    /**
     * <p>The ID of the voice profile.</p>
     */
    inline void SetVoiceProfileId(Aws::String&& value) { m_voiceProfileIdHasBeenSet = true; m_voiceProfileId = std::move(value); }

    /**
     * <p>The ID of the voice profile.</p>
     */
    inline void SetVoiceProfileId(const char* value) { m_voiceProfileIdHasBeenSet = true; m_voiceProfileId.assign(value); }

    /**
     * <p>The ID of the voice profile.</p>
     */
    inline VoiceProfile& WithVoiceProfileId(const Aws::String& value) { SetVoiceProfileId(value); return *this;}

    /**
     * <p>The ID of the voice profile.</p>
     */
    inline VoiceProfile& WithVoiceProfileId(Aws::String&& value) { SetVoiceProfileId(std::move(value)); return *this;}

    /**
     * <p>The ID of the voice profile.</p>
     */
    inline VoiceProfile& WithVoiceProfileId(const char* value) { SetVoiceProfileId(value); return *this;}


    /**
     * <p>The ARN of the voice profile.</p>
     */
    inline const Aws::String& GetVoiceProfileArn() const{ return m_voiceProfileArn; }

    /**
     * <p>The ARN of the voice profile.</p>
     */
    inline bool VoiceProfileArnHasBeenSet() const { return m_voiceProfileArnHasBeenSet; }

    /**
     * <p>The ARN of the voice profile.</p>
     */
    inline void SetVoiceProfileArn(const Aws::String& value) { m_voiceProfileArnHasBeenSet = true; m_voiceProfileArn = value; }

    /**
     * <p>The ARN of the voice profile.</p>
     */
    inline void SetVoiceProfileArn(Aws::String&& value) { m_voiceProfileArnHasBeenSet = true; m_voiceProfileArn = std::move(value); }

    /**
     * <p>The ARN of the voice profile.</p>
     */
    inline void SetVoiceProfileArn(const char* value) { m_voiceProfileArnHasBeenSet = true; m_voiceProfileArn.assign(value); }

    /**
     * <p>The ARN of the voice profile.</p>
     */
    inline VoiceProfile& WithVoiceProfileArn(const Aws::String& value) { SetVoiceProfileArn(value); return *this;}

    /**
     * <p>The ARN of the voice profile.</p>
     */
    inline VoiceProfile& WithVoiceProfileArn(Aws::String&& value) { SetVoiceProfileArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the voice profile.</p>
     */
    inline VoiceProfile& WithVoiceProfileArn(const char* value) { SetVoiceProfileArn(value); return *this;}


    /**
     * <p>The ID of the domain that contains the voice profile.</p>
     */
    inline const Aws::String& GetVoiceProfileDomainId() const{ return m_voiceProfileDomainId; }

    /**
     * <p>The ID of the domain that contains the voice profile.</p>
     */
    inline bool VoiceProfileDomainIdHasBeenSet() const { return m_voiceProfileDomainIdHasBeenSet; }

    /**
     * <p>The ID of the domain that contains the voice profile.</p>
     */
    inline void SetVoiceProfileDomainId(const Aws::String& value) { m_voiceProfileDomainIdHasBeenSet = true; m_voiceProfileDomainId = value; }

    /**
     * <p>The ID of the domain that contains the voice profile.</p>
     */
    inline void SetVoiceProfileDomainId(Aws::String&& value) { m_voiceProfileDomainIdHasBeenSet = true; m_voiceProfileDomainId = std::move(value); }

    /**
     * <p>The ID of the domain that contains the voice profile.</p>
     */
    inline void SetVoiceProfileDomainId(const char* value) { m_voiceProfileDomainIdHasBeenSet = true; m_voiceProfileDomainId.assign(value); }

    /**
     * <p>The ID of the domain that contains the voice profile.</p>
     */
    inline VoiceProfile& WithVoiceProfileDomainId(const Aws::String& value) { SetVoiceProfileDomainId(value); return *this;}

    /**
     * <p>The ID of the domain that contains the voice profile.</p>
     */
    inline VoiceProfile& WithVoiceProfileDomainId(Aws::String&& value) { SetVoiceProfileDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the domain that contains the voice profile.</p>
     */
    inline VoiceProfile& WithVoiceProfileDomainId(const char* value) { SetVoiceProfileDomainId(value); return *this;}


    /**
     * <p>The time at which the voice profile was created and enrolled.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time at which the voice profile was created and enrolled.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time at which the voice profile was created and enrolled.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time at which the voice profile was created and enrolled.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time at which the voice profile was created and enrolled.</p>
     */
    inline VoiceProfile& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time at which the voice profile was created and enrolled.</p>
     */
    inline VoiceProfile& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time at which the voice profile was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }

    /**
     * <p>The time at which the voice profile was last updated.</p>
     */
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }

    /**
     * <p>The time at which the voice profile was last updated.</p>
     */
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }

    /**
     * <p>The time at which the voice profile was last updated.</p>
     */
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }

    /**
     * <p>The time at which the voice profile was last updated.</p>
     */
    inline VoiceProfile& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}

    /**
     * <p>The time at which the voice profile was last updated.</p>
     */
    inline VoiceProfile& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time at which a voice profile expires unless you re-enroll the caller via
     * the <code>UpdateVoiceProfile</code> API.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTimestamp() const{ return m_expirationTimestamp; }

    /**
     * <p>The time at which a voice profile expires unless you re-enroll the caller via
     * the <code>UpdateVoiceProfile</code> API.</p>
     */
    inline bool ExpirationTimestampHasBeenSet() const { return m_expirationTimestampHasBeenSet; }

    /**
     * <p>The time at which a voice profile expires unless you re-enroll the caller via
     * the <code>UpdateVoiceProfile</code> API.</p>
     */
    inline void SetExpirationTimestamp(const Aws::Utils::DateTime& value) { m_expirationTimestampHasBeenSet = true; m_expirationTimestamp = value; }

    /**
     * <p>The time at which a voice profile expires unless you re-enroll the caller via
     * the <code>UpdateVoiceProfile</code> API.</p>
     */
    inline void SetExpirationTimestamp(Aws::Utils::DateTime&& value) { m_expirationTimestampHasBeenSet = true; m_expirationTimestamp = std::move(value); }

    /**
     * <p>The time at which a voice profile expires unless you re-enroll the caller via
     * the <code>UpdateVoiceProfile</code> API.</p>
     */
    inline VoiceProfile& WithExpirationTimestamp(const Aws::Utils::DateTime& value) { SetExpirationTimestamp(value); return *this;}

    /**
     * <p>The time at which a voice profile expires unless you re-enroll the caller via
     * the <code>UpdateVoiceProfile</code> API.</p>
     */
    inline VoiceProfile& WithExpirationTimestamp(Aws::Utils::DateTime&& value) { SetExpirationTimestamp(std::move(value)); return *this;}

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
