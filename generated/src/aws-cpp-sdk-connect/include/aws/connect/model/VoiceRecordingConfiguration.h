/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/VoiceRecordingTrack.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains information about the recording configuration
   * settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/VoiceRecordingConfiguration">AWS
   * API Reference</a></p>
   */
  class VoiceRecordingConfiguration
  {
  public:
    AWS_CONNECT_API VoiceRecordingConfiguration();
    AWS_CONNECT_API VoiceRecordingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API VoiceRecordingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifies which track is being recorded.</p>
     */
    inline const VoiceRecordingTrack& GetVoiceRecordingTrack() const{ return m_voiceRecordingTrack; }

    /**
     * <p>Identifies which track is being recorded.</p>
     */
    inline bool VoiceRecordingTrackHasBeenSet() const { return m_voiceRecordingTrackHasBeenSet; }

    /**
     * <p>Identifies which track is being recorded.</p>
     */
    inline void SetVoiceRecordingTrack(const VoiceRecordingTrack& value) { m_voiceRecordingTrackHasBeenSet = true; m_voiceRecordingTrack = value; }

    /**
     * <p>Identifies which track is being recorded.</p>
     */
    inline void SetVoiceRecordingTrack(VoiceRecordingTrack&& value) { m_voiceRecordingTrackHasBeenSet = true; m_voiceRecordingTrack = std::move(value); }

    /**
     * <p>Identifies which track is being recorded.</p>
     */
    inline VoiceRecordingConfiguration& WithVoiceRecordingTrack(const VoiceRecordingTrack& value) { SetVoiceRecordingTrack(value); return *this;}

    /**
     * <p>Identifies which track is being recorded.</p>
     */
    inline VoiceRecordingConfiguration& WithVoiceRecordingTrack(VoiceRecordingTrack&& value) { SetVoiceRecordingTrack(std::move(value)); return *this;}

  private:

    VoiceRecordingTrack m_voiceRecordingTrack;
    bool m_voiceRecordingTrackHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
