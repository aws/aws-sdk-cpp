/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/VoiceRecordingTrack.h>
#include <aws/connect/model/IvrRecordingTrack.h>
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
    AWS_CONNECT_API VoiceRecordingConfiguration() = default;
    AWS_CONNECT_API VoiceRecordingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API VoiceRecordingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifies which track is being recorded.</p>
     */
    inline VoiceRecordingTrack GetVoiceRecordingTrack() const { return m_voiceRecordingTrack; }
    inline bool VoiceRecordingTrackHasBeenSet() const { return m_voiceRecordingTrackHasBeenSet; }
    inline void SetVoiceRecordingTrack(VoiceRecordingTrack value) { m_voiceRecordingTrackHasBeenSet = true; m_voiceRecordingTrack = value; }
    inline VoiceRecordingConfiguration& WithVoiceRecordingTrack(VoiceRecordingTrack value) { SetVoiceRecordingTrack(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies which IVR track is being recorded.</p> <p>One and only one of the
     * track configurations should be presented in the request.</p>
     */
    inline IvrRecordingTrack GetIvrRecordingTrack() const { return m_ivrRecordingTrack; }
    inline bool IvrRecordingTrackHasBeenSet() const { return m_ivrRecordingTrackHasBeenSet; }
    inline void SetIvrRecordingTrack(IvrRecordingTrack value) { m_ivrRecordingTrackHasBeenSet = true; m_ivrRecordingTrack = value; }
    inline VoiceRecordingConfiguration& WithIvrRecordingTrack(IvrRecordingTrack value) { SetIvrRecordingTrack(value); return *this;}
    ///@}
  private:

    VoiceRecordingTrack m_voiceRecordingTrack{VoiceRecordingTrack::NOT_SET};
    bool m_voiceRecordingTrackHasBeenSet = false;

    IvrRecordingTrack m_ivrRecordingTrack{IvrRecordingTrack::NOT_SET};
    bool m_ivrRecordingTrackHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
