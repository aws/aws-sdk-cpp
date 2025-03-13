/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
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
namespace ChimeSDKMeetings
{
namespace Model
{

  /**
   * <p>A set of endpoints used by clients to connect to the media service group for
   * an Amazon Chime SDK meeting.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-meetings-2021-07-15/MediaPlacement">AWS
   * API Reference</a></p>
   */
  class MediaPlacement
  {
  public:
    AWS_CHIMESDKMEETINGS_API MediaPlacement() = default;
    AWS_CHIMESDKMEETINGS_API MediaPlacement(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API MediaPlacement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEETINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The audio host URL.</p>
     */
    inline const Aws::String& GetAudioHostUrl() const { return m_audioHostUrl; }
    inline bool AudioHostUrlHasBeenSet() const { return m_audioHostUrlHasBeenSet; }
    template<typename AudioHostUrlT = Aws::String>
    void SetAudioHostUrl(AudioHostUrlT&& value) { m_audioHostUrlHasBeenSet = true; m_audioHostUrl = std::forward<AudioHostUrlT>(value); }
    template<typename AudioHostUrlT = Aws::String>
    MediaPlacement& WithAudioHostUrl(AudioHostUrlT&& value) { SetAudioHostUrl(std::forward<AudioHostUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The audio fallback URL.</p>
     */
    inline const Aws::String& GetAudioFallbackUrl() const { return m_audioFallbackUrl; }
    inline bool AudioFallbackUrlHasBeenSet() const { return m_audioFallbackUrlHasBeenSet; }
    template<typename AudioFallbackUrlT = Aws::String>
    void SetAudioFallbackUrl(AudioFallbackUrlT&& value) { m_audioFallbackUrlHasBeenSet = true; m_audioFallbackUrl = std::forward<AudioFallbackUrlT>(value); }
    template<typename AudioFallbackUrlT = Aws::String>
    MediaPlacement& WithAudioFallbackUrl(AudioFallbackUrlT&& value) { SetAudioFallbackUrl(std::forward<AudioFallbackUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signaling URL.</p>
     */
    inline const Aws::String& GetSignalingUrl() const { return m_signalingUrl; }
    inline bool SignalingUrlHasBeenSet() const { return m_signalingUrlHasBeenSet; }
    template<typename SignalingUrlT = Aws::String>
    void SetSignalingUrl(SignalingUrlT&& value) { m_signalingUrlHasBeenSet = true; m_signalingUrl = std::forward<SignalingUrlT>(value); }
    template<typename SignalingUrlT = Aws::String>
    MediaPlacement& WithSignalingUrl(SignalingUrlT&& value) { SetSignalingUrl(std::forward<SignalingUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The turn control URL.</p>  <p> <b>This parameter is deprecated and
     * no longer used by the Amazon Chime SDK.</b> </p> 
     */
    inline const Aws::String& GetTurnControlUrl() const { return m_turnControlUrl; }
    inline bool TurnControlUrlHasBeenSet() const { return m_turnControlUrlHasBeenSet; }
    template<typename TurnControlUrlT = Aws::String>
    void SetTurnControlUrl(TurnControlUrlT&& value) { m_turnControlUrlHasBeenSet = true; m_turnControlUrl = std::forward<TurnControlUrlT>(value); }
    template<typename TurnControlUrlT = Aws::String>
    MediaPlacement& WithTurnControlUrl(TurnControlUrlT&& value) { SetTurnControlUrl(std::forward<TurnControlUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The screen data URL.</p>  <p> <b>This parameter is deprecated and
     * no longer used by the Amazon Chime SDK.</b> </p> 
     */
    inline const Aws::String& GetScreenDataUrl() const { return m_screenDataUrl; }
    inline bool ScreenDataUrlHasBeenSet() const { return m_screenDataUrlHasBeenSet; }
    template<typename ScreenDataUrlT = Aws::String>
    void SetScreenDataUrl(ScreenDataUrlT&& value) { m_screenDataUrlHasBeenSet = true; m_screenDataUrl = std::forward<ScreenDataUrlT>(value); }
    template<typename ScreenDataUrlT = Aws::String>
    MediaPlacement& WithScreenDataUrl(ScreenDataUrlT&& value) { SetScreenDataUrl(std::forward<ScreenDataUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The screen viewing URL.</p>  <p> <b>This parameter is deprecated
     * and no longer used by the Amazon Chime SDK.</b> </p> 
     */
    inline const Aws::String& GetScreenViewingUrl() const { return m_screenViewingUrl; }
    inline bool ScreenViewingUrlHasBeenSet() const { return m_screenViewingUrlHasBeenSet; }
    template<typename ScreenViewingUrlT = Aws::String>
    void SetScreenViewingUrl(ScreenViewingUrlT&& value) { m_screenViewingUrlHasBeenSet = true; m_screenViewingUrl = std::forward<ScreenViewingUrlT>(value); }
    template<typename ScreenViewingUrlT = Aws::String>
    MediaPlacement& WithScreenViewingUrl(ScreenViewingUrlT&& value) { SetScreenViewingUrl(std::forward<ScreenViewingUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The screen sharing URL.</p>  <p> <b>This parameter is deprecated
     * and no longer used by the Amazon Chime SDK.</b> </p> 
     */
    inline const Aws::String& GetScreenSharingUrl() const { return m_screenSharingUrl; }
    inline bool ScreenSharingUrlHasBeenSet() const { return m_screenSharingUrlHasBeenSet; }
    template<typename ScreenSharingUrlT = Aws::String>
    void SetScreenSharingUrl(ScreenSharingUrlT&& value) { m_screenSharingUrlHasBeenSet = true; m_screenSharingUrl = std::forward<ScreenSharingUrlT>(value); }
    template<typename ScreenSharingUrlT = Aws::String>
    MediaPlacement& WithScreenSharingUrl(ScreenSharingUrlT&& value) { SetScreenSharingUrl(std::forward<ScreenSharingUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event ingestion URL.</p>
     */
    inline const Aws::String& GetEventIngestionUrl() const { return m_eventIngestionUrl; }
    inline bool EventIngestionUrlHasBeenSet() const { return m_eventIngestionUrlHasBeenSet; }
    template<typename EventIngestionUrlT = Aws::String>
    void SetEventIngestionUrl(EventIngestionUrlT&& value) { m_eventIngestionUrlHasBeenSet = true; m_eventIngestionUrl = std::forward<EventIngestionUrlT>(value); }
    template<typename EventIngestionUrlT = Aws::String>
    MediaPlacement& WithEventIngestionUrl(EventIngestionUrlT&& value) { SetEventIngestionUrl(std::forward<EventIngestionUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_audioHostUrl;
    bool m_audioHostUrlHasBeenSet = false;

    Aws::String m_audioFallbackUrl;
    bool m_audioFallbackUrlHasBeenSet = false;

    Aws::String m_signalingUrl;
    bool m_signalingUrlHasBeenSet = false;

    Aws::String m_turnControlUrl;
    bool m_turnControlUrlHasBeenSet = false;

    Aws::String m_screenDataUrl;
    bool m_screenDataUrlHasBeenSet = false;

    Aws::String m_screenViewingUrl;
    bool m_screenViewingUrlHasBeenSet = false;

    Aws::String m_screenSharingUrl;
    bool m_screenSharingUrlHasBeenSet = false;

    Aws::String m_eventIngestionUrl;
    bool m_eventIngestionUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
