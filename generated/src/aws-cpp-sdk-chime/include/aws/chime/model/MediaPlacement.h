/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>A set of endpoints used by clients to connect to the media service group for
   * an Amazon Chime SDK meeting.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/MediaPlacement">AWS
   * API Reference</a></p>
   */
  class MediaPlacement
  {
  public:
    AWS_CHIME_API MediaPlacement();
    AWS_CHIME_API MediaPlacement(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API MediaPlacement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The audio host URL.</p>
     */
    inline const Aws::String& GetAudioHostUrl() const{ return m_audioHostUrl; }

    /**
     * <p>The audio host URL.</p>
     */
    inline bool AudioHostUrlHasBeenSet() const { return m_audioHostUrlHasBeenSet; }

    /**
     * <p>The audio host URL.</p>
     */
    inline void SetAudioHostUrl(const Aws::String& value) { m_audioHostUrlHasBeenSet = true; m_audioHostUrl = value; }

    /**
     * <p>The audio host URL.</p>
     */
    inline void SetAudioHostUrl(Aws::String&& value) { m_audioHostUrlHasBeenSet = true; m_audioHostUrl = std::move(value); }

    /**
     * <p>The audio host URL.</p>
     */
    inline void SetAudioHostUrl(const char* value) { m_audioHostUrlHasBeenSet = true; m_audioHostUrl.assign(value); }

    /**
     * <p>The audio host URL.</p>
     */
    inline MediaPlacement& WithAudioHostUrl(const Aws::String& value) { SetAudioHostUrl(value); return *this;}

    /**
     * <p>The audio host URL.</p>
     */
    inline MediaPlacement& WithAudioHostUrl(Aws::String&& value) { SetAudioHostUrl(std::move(value)); return *this;}

    /**
     * <p>The audio host URL.</p>
     */
    inline MediaPlacement& WithAudioHostUrl(const char* value) { SetAudioHostUrl(value); return *this;}


    /**
     * <p>The audio fallback URL.</p>
     */
    inline const Aws::String& GetAudioFallbackUrl() const{ return m_audioFallbackUrl; }

    /**
     * <p>The audio fallback URL.</p>
     */
    inline bool AudioFallbackUrlHasBeenSet() const { return m_audioFallbackUrlHasBeenSet; }

    /**
     * <p>The audio fallback URL.</p>
     */
    inline void SetAudioFallbackUrl(const Aws::String& value) { m_audioFallbackUrlHasBeenSet = true; m_audioFallbackUrl = value; }

    /**
     * <p>The audio fallback URL.</p>
     */
    inline void SetAudioFallbackUrl(Aws::String&& value) { m_audioFallbackUrlHasBeenSet = true; m_audioFallbackUrl = std::move(value); }

    /**
     * <p>The audio fallback URL.</p>
     */
    inline void SetAudioFallbackUrl(const char* value) { m_audioFallbackUrlHasBeenSet = true; m_audioFallbackUrl.assign(value); }

    /**
     * <p>The audio fallback URL.</p>
     */
    inline MediaPlacement& WithAudioFallbackUrl(const Aws::String& value) { SetAudioFallbackUrl(value); return *this;}

    /**
     * <p>The audio fallback URL.</p>
     */
    inline MediaPlacement& WithAudioFallbackUrl(Aws::String&& value) { SetAudioFallbackUrl(std::move(value)); return *this;}

    /**
     * <p>The audio fallback URL.</p>
     */
    inline MediaPlacement& WithAudioFallbackUrl(const char* value) { SetAudioFallbackUrl(value); return *this;}


    /**
     * <p>The screen data URL.</p>
     */
    inline const Aws::String& GetScreenDataUrl() const{ return m_screenDataUrl; }

    /**
     * <p>The screen data URL.</p>
     */
    inline bool ScreenDataUrlHasBeenSet() const { return m_screenDataUrlHasBeenSet; }

    /**
     * <p>The screen data URL.</p>
     */
    inline void SetScreenDataUrl(const Aws::String& value) { m_screenDataUrlHasBeenSet = true; m_screenDataUrl = value; }

    /**
     * <p>The screen data URL.</p>
     */
    inline void SetScreenDataUrl(Aws::String&& value) { m_screenDataUrlHasBeenSet = true; m_screenDataUrl = std::move(value); }

    /**
     * <p>The screen data URL.</p>
     */
    inline void SetScreenDataUrl(const char* value) { m_screenDataUrlHasBeenSet = true; m_screenDataUrl.assign(value); }

    /**
     * <p>The screen data URL.</p>
     */
    inline MediaPlacement& WithScreenDataUrl(const Aws::String& value) { SetScreenDataUrl(value); return *this;}

    /**
     * <p>The screen data URL.</p>
     */
    inline MediaPlacement& WithScreenDataUrl(Aws::String&& value) { SetScreenDataUrl(std::move(value)); return *this;}

    /**
     * <p>The screen data URL.</p>
     */
    inline MediaPlacement& WithScreenDataUrl(const char* value) { SetScreenDataUrl(value); return *this;}


    /**
     * <p>The screen sharing URL.</p>
     */
    inline const Aws::String& GetScreenSharingUrl() const{ return m_screenSharingUrl; }

    /**
     * <p>The screen sharing URL.</p>
     */
    inline bool ScreenSharingUrlHasBeenSet() const { return m_screenSharingUrlHasBeenSet; }

    /**
     * <p>The screen sharing URL.</p>
     */
    inline void SetScreenSharingUrl(const Aws::String& value) { m_screenSharingUrlHasBeenSet = true; m_screenSharingUrl = value; }

    /**
     * <p>The screen sharing URL.</p>
     */
    inline void SetScreenSharingUrl(Aws::String&& value) { m_screenSharingUrlHasBeenSet = true; m_screenSharingUrl = std::move(value); }

    /**
     * <p>The screen sharing URL.</p>
     */
    inline void SetScreenSharingUrl(const char* value) { m_screenSharingUrlHasBeenSet = true; m_screenSharingUrl.assign(value); }

    /**
     * <p>The screen sharing URL.</p>
     */
    inline MediaPlacement& WithScreenSharingUrl(const Aws::String& value) { SetScreenSharingUrl(value); return *this;}

    /**
     * <p>The screen sharing URL.</p>
     */
    inline MediaPlacement& WithScreenSharingUrl(Aws::String&& value) { SetScreenSharingUrl(std::move(value)); return *this;}

    /**
     * <p>The screen sharing URL.</p>
     */
    inline MediaPlacement& WithScreenSharingUrl(const char* value) { SetScreenSharingUrl(value); return *this;}


    /**
     * <p>The screen viewing URL.</p>
     */
    inline const Aws::String& GetScreenViewingUrl() const{ return m_screenViewingUrl; }

    /**
     * <p>The screen viewing URL.</p>
     */
    inline bool ScreenViewingUrlHasBeenSet() const { return m_screenViewingUrlHasBeenSet; }

    /**
     * <p>The screen viewing URL.</p>
     */
    inline void SetScreenViewingUrl(const Aws::String& value) { m_screenViewingUrlHasBeenSet = true; m_screenViewingUrl = value; }

    /**
     * <p>The screen viewing URL.</p>
     */
    inline void SetScreenViewingUrl(Aws::String&& value) { m_screenViewingUrlHasBeenSet = true; m_screenViewingUrl = std::move(value); }

    /**
     * <p>The screen viewing URL.</p>
     */
    inline void SetScreenViewingUrl(const char* value) { m_screenViewingUrlHasBeenSet = true; m_screenViewingUrl.assign(value); }

    /**
     * <p>The screen viewing URL.</p>
     */
    inline MediaPlacement& WithScreenViewingUrl(const Aws::String& value) { SetScreenViewingUrl(value); return *this;}

    /**
     * <p>The screen viewing URL.</p>
     */
    inline MediaPlacement& WithScreenViewingUrl(Aws::String&& value) { SetScreenViewingUrl(std::move(value)); return *this;}

    /**
     * <p>The screen viewing URL.</p>
     */
    inline MediaPlacement& WithScreenViewingUrl(const char* value) { SetScreenViewingUrl(value); return *this;}


    /**
     * <p>The signaling URL.</p>
     */
    inline const Aws::String& GetSignalingUrl() const{ return m_signalingUrl; }

    /**
     * <p>The signaling URL.</p>
     */
    inline bool SignalingUrlHasBeenSet() const { return m_signalingUrlHasBeenSet; }

    /**
     * <p>The signaling URL.</p>
     */
    inline void SetSignalingUrl(const Aws::String& value) { m_signalingUrlHasBeenSet = true; m_signalingUrl = value; }

    /**
     * <p>The signaling URL.</p>
     */
    inline void SetSignalingUrl(Aws::String&& value) { m_signalingUrlHasBeenSet = true; m_signalingUrl = std::move(value); }

    /**
     * <p>The signaling URL.</p>
     */
    inline void SetSignalingUrl(const char* value) { m_signalingUrlHasBeenSet = true; m_signalingUrl.assign(value); }

    /**
     * <p>The signaling URL.</p>
     */
    inline MediaPlacement& WithSignalingUrl(const Aws::String& value) { SetSignalingUrl(value); return *this;}

    /**
     * <p>The signaling URL.</p>
     */
    inline MediaPlacement& WithSignalingUrl(Aws::String&& value) { SetSignalingUrl(std::move(value)); return *this;}

    /**
     * <p>The signaling URL.</p>
     */
    inline MediaPlacement& WithSignalingUrl(const char* value) { SetSignalingUrl(value); return *this;}


    /**
     * <p>The turn control URL.</p>
     */
    inline const Aws::String& GetTurnControlUrl() const{ return m_turnControlUrl; }

    /**
     * <p>The turn control URL.</p>
     */
    inline bool TurnControlUrlHasBeenSet() const { return m_turnControlUrlHasBeenSet; }

    /**
     * <p>The turn control URL.</p>
     */
    inline void SetTurnControlUrl(const Aws::String& value) { m_turnControlUrlHasBeenSet = true; m_turnControlUrl = value; }

    /**
     * <p>The turn control URL.</p>
     */
    inline void SetTurnControlUrl(Aws::String&& value) { m_turnControlUrlHasBeenSet = true; m_turnControlUrl = std::move(value); }

    /**
     * <p>The turn control URL.</p>
     */
    inline void SetTurnControlUrl(const char* value) { m_turnControlUrlHasBeenSet = true; m_turnControlUrl.assign(value); }

    /**
     * <p>The turn control URL.</p>
     */
    inline MediaPlacement& WithTurnControlUrl(const Aws::String& value) { SetTurnControlUrl(value); return *this;}

    /**
     * <p>The turn control URL.</p>
     */
    inline MediaPlacement& WithTurnControlUrl(Aws::String&& value) { SetTurnControlUrl(std::move(value)); return *this;}

    /**
     * <p>The turn control URL.</p>
     */
    inline MediaPlacement& WithTurnControlUrl(const char* value) { SetTurnControlUrl(value); return *this;}


    /**
     * <p>The event ingestion URL to which you send client meeting events.</p>
     */
    inline const Aws::String& GetEventIngestionUrl() const{ return m_eventIngestionUrl; }

    /**
     * <p>The event ingestion URL to which you send client meeting events.</p>
     */
    inline bool EventIngestionUrlHasBeenSet() const { return m_eventIngestionUrlHasBeenSet; }

    /**
     * <p>The event ingestion URL to which you send client meeting events.</p>
     */
    inline void SetEventIngestionUrl(const Aws::String& value) { m_eventIngestionUrlHasBeenSet = true; m_eventIngestionUrl = value; }

    /**
     * <p>The event ingestion URL to which you send client meeting events.</p>
     */
    inline void SetEventIngestionUrl(Aws::String&& value) { m_eventIngestionUrlHasBeenSet = true; m_eventIngestionUrl = std::move(value); }

    /**
     * <p>The event ingestion URL to which you send client meeting events.</p>
     */
    inline void SetEventIngestionUrl(const char* value) { m_eventIngestionUrlHasBeenSet = true; m_eventIngestionUrl.assign(value); }

    /**
     * <p>The event ingestion URL to which you send client meeting events.</p>
     */
    inline MediaPlacement& WithEventIngestionUrl(const Aws::String& value) { SetEventIngestionUrl(value); return *this;}

    /**
     * <p>The event ingestion URL to which you send client meeting events.</p>
     */
    inline MediaPlacement& WithEventIngestionUrl(Aws::String&& value) { SetEventIngestionUrl(std::move(value)); return *this;}

    /**
     * <p>The event ingestion URL to which you send client meeting events.</p>
     */
    inline MediaPlacement& WithEventIngestionUrl(const char* value) { SetEventIngestionUrl(value); return *this;}

  private:

    Aws::String m_audioHostUrl;
    bool m_audioHostUrlHasBeenSet = false;

    Aws::String m_audioFallbackUrl;
    bool m_audioFallbackUrlHasBeenSet = false;

    Aws::String m_screenDataUrl;
    bool m_screenDataUrlHasBeenSet = false;

    Aws::String m_screenSharingUrl;
    bool m_screenSharingUrlHasBeenSet = false;

    Aws::String m_screenViewingUrl;
    bool m_screenViewingUrlHasBeenSet = false;

    Aws::String m_signalingUrl;
    bool m_signalingUrlHasBeenSet = false;

    Aws::String m_turnControlUrl;
    bool m_turnControlUrlHasBeenSet = false;

    Aws::String m_eventIngestionUrl;
    bool m_eventIngestionUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
