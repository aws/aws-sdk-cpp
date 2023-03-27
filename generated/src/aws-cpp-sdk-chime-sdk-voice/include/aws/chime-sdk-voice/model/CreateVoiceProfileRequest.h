/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class CreateVoiceProfileRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API CreateVoiceProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVoiceProfile"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the speaker search task.</p>
     */
    inline const Aws::String& GetSpeakerSearchTaskId() const{ return m_speakerSearchTaskId; }

    /**
     * <p>The ID of the speaker search task.</p>
     */
    inline bool SpeakerSearchTaskIdHasBeenSet() const { return m_speakerSearchTaskIdHasBeenSet; }

    /**
     * <p>The ID of the speaker search task.</p>
     */
    inline void SetSpeakerSearchTaskId(const Aws::String& value) { m_speakerSearchTaskIdHasBeenSet = true; m_speakerSearchTaskId = value; }

    /**
     * <p>The ID of the speaker search task.</p>
     */
    inline void SetSpeakerSearchTaskId(Aws::String&& value) { m_speakerSearchTaskIdHasBeenSet = true; m_speakerSearchTaskId = std::move(value); }

    /**
     * <p>The ID of the speaker search task.</p>
     */
    inline void SetSpeakerSearchTaskId(const char* value) { m_speakerSearchTaskIdHasBeenSet = true; m_speakerSearchTaskId.assign(value); }

    /**
     * <p>The ID of the speaker search task.</p>
     */
    inline CreateVoiceProfileRequest& WithSpeakerSearchTaskId(const Aws::String& value) { SetSpeakerSearchTaskId(value); return *this;}

    /**
     * <p>The ID of the speaker search task.</p>
     */
    inline CreateVoiceProfileRequest& WithSpeakerSearchTaskId(Aws::String&& value) { SetSpeakerSearchTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the speaker search task.</p>
     */
    inline CreateVoiceProfileRequest& WithSpeakerSearchTaskId(const char* value) { SetSpeakerSearchTaskId(value); return *this;}

  private:

    Aws::String m_speakerSearchTaskId;
    bool m_speakerSearchTaskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
