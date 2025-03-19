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
    AWS_CHIMESDKVOICE_API VoiceProfileSummary() = default;
    AWS_CHIMESDKVOICE_API VoiceProfileSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API VoiceProfileSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKVOICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the voice profile in a voice profile summary.</p>
     */
    inline const Aws::String& GetVoiceProfileId() const { return m_voiceProfileId; }
    inline bool VoiceProfileIdHasBeenSet() const { return m_voiceProfileIdHasBeenSet; }
    template<typename VoiceProfileIdT = Aws::String>
    void SetVoiceProfileId(VoiceProfileIdT&& value) { m_voiceProfileIdHasBeenSet = true; m_voiceProfileId = std::forward<VoiceProfileIdT>(value); }
    template<typename VoiceProfileIdT = Aws::String>
    VoiceProfileSummary& WithVoiceProfileId(VoiceProfileIdT&& value) { SetVoiceProfileId(std::forward<VoiceProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the voice profile in a voice profile summary.</p>
     */
    inline const Aws::String& GetVoiceProfileArn() const { return m_voiceProfileArn; }
    inline bool VoiceProfileArnHasBeenSet() const { return m_voiceProfileArnHasBeenSet; }
    template<typename VoiceProfileArnT = Aws::String>
    void SetVoiceProfileArn(VoiceProfileArnT&& value) { m_voiceProfileArnHasBeenSet = true; m_voiceProfileArn = std::forward<VoiceProfileArnT>(value); }
    template<typename VoiceProfileArnT = Aws::String>
    VoiceProfileSummary& WithVoiceProfileArn(VoiceProfileArnT&& value) { SetVoiceProfileArn(std::forward<VoiceProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the voice profile domain in a voice profile summary.</p>
     */
    inline const Aws::String& GetVoiceProfileDomainId() const { return m_voiceProfileDomainId; }
    inline bool VoiceProfileDomainIdHasBeenSet() const { return m_voiceProfileDomainIdHasBeenSet; }
    template<typename VoiceProfileDomainIdT = Aws::String>
    void SetVoiceProfileDomainId(VoiceProfileDomainIdT&& value) { m_voiceProfileDomainIdHasBeenSet = true; m_voiceProfileDomainId = std::forward<VoiceProfileDomainIdT>(value); }
    template<typename VoiceProfileDomainIdT = Aws::String>
    VoiceProfileSummary& WithVoiceProfileDomainId(VoiceProfileDomainIdT&& value) { SetVoiceProfileDomainId(std::forward<VoiceProfileDomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a voice profile summary was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    VoiceProfileSummary& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a voice profile summary was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const { return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    void SetUpdatedTimestamp(UpdatedTimestampT&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::forward<UpdatedTimestampT>(value); }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    VoiceProfileSummary& WithUpdatedTimestamp(UpdatedTimestampT&& value) { SetUpdatedTimestamp(std::forward<UpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Extends the life of the voice profile. You can use
     * <code>UpdateVoiceProfile</code> to refresh an existing voice profile's voice
     * print and extend the life of the summary.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTimestamp() const { return m_expirationTimestamp; }
    inline bool ExpirationTimestampHasBeenSet() const { return m_expirationTimestampHasBeenSet; }
    template<typename ExpirationTimestampT = Aws::Utils::DateTime>
    void SetExpirationTimestamp(ExpirationTimestampT&& value) { m_expirationTimestampHasBeenSet = true; m_expirationTimestamp = std::forward<ExpirationTimestampT>(value); }
    template<typename ExpirationTimestampT = Aws::Utils::DateTime>
    VoiceProfileSummary& WithExpirationTimestamp(ExpirationTimestampT&& value) { SetExpirationTimestamp(std::forward<ExpirationTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_voiceProfileId;
    bool m_voiceProfileIdHasBeenSet = false;

    Aws::String m_voiceProfileArn;
    bool m_voiceProfileArnHasBeenSet = false;

    Aws::String m_voiceProfileDomainId;
    bool m_voiceProfileDomainIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp{};
    bool m_updatedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_expirationTimestamp{};
    bool m_expirationTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
