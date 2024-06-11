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


    ///@{
    /**
     * <p>The audio host URL.</p>
     */
    inline const Aws::String& GetAudioHostUrl() const{ return m_audioHostUrl; }
    inline bool AudioHostUrlHasBeenSet() const { return m_audioHostUrlHasBeenSet; }
    inline void SetAudioHostUrl(const Aws::String& value) { m_audioHostUrlHasBeenSet = true; m_audioHostUrl = value; }
    inline void SetAudioHostUrl(Aws::String&& value) { m_audioHostUrlHasBeenSet = true; m_audioHostUrl = std::move(value); }
    inline void SetAudioHostUrl(const char* value) { m_audioHostUrlHasBeenSet = true; m_audioHostUrl.assign(value); }
    inline MediaPlacement& WithAudioHostUrl(const Aws::String& value) { SetAudioHostUrl(value); return *this;}
    inline MediaPlacement& WithAudioHostUrl(Aws::String&& value) { SetAudioHostUrl(std::move(value)); return *this;}
    inline MediaPlacement& WithAudioHostUrl(const char* value) { SetAudioHostUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The audio fallback URL.</p>
     */
    inline const Aws::String& GetAudioFallbackUrl() const{ return m_audioFallbackUrl; }
    inline bool AudioFallbackUrlHasBeenSet() const { return m_audioFallbackUrlHasBeenSet; }
    inline void SetAudioFallbackUrl(const Aws::String& value) { m_audioFallbackUrlHasBeenSet = true; m_audioFallbackUrl = value; }
    inline void SetAudioFallbackUrl(Aws::String&& value) { m_audioFallbackUrlHasBeenSet = true; m_audioFallbackUrl = std::move(value); }
    inline void SetAudioFallbackUrl(const char* value) { m_audioFallbackUrlHasBeenSet = true; m_audioFallbackUrl.assign(value); }
    inline MediaPlacement& WithAudioFallbackUrl(const Aws::String& value) { SetAudioFallbackUrl(value); return *this;}
    inline MediaPlacement& WithAudioFallbackUrl(Aws::String&& value) { SetAudioFallbackUrl(std::move(value)); return *this;}
    inline MediaPlacement& WithAudioFallbackUrl(const char* value) { SetAudioFallbackUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The screen data URL.</p>  <p> <b>This parameter is is no longer
     * supported and no longer used by the Amazon Chime SDK.</b> </p> 
     */
    inline const Aws::String& GetScreenDataUrl() const{ return m_screenDataUrl; }
    inline bool ScreenDataUrlHasBeenSet() const { return m_screenDataUrlHasBeenSet; }
    inline void SetScreenDataUrl(const Aws::String& value) { m_screenDataUrlHasBeenSet = true; m_screenDataUrl = value; }
    inline void SetScreenDataUrl(Aws::String&& value) { m_screenDataUrlHasBeenSet = true; m_screenDataUrl = std::move(value); }
    inline void SetScreenDataUrl(const char* value) { m_screenDataUrlHasBeenSet = true; m_screenDataUrl.assign(value); }
    inline MediaPlacement& WithScreenDataUrl(const Aws::String& value) { SetScreenDataUrl(value); return *this;}
    inline MediaPlacement& WithScreenDataUrl(Aws::String&& value) { SetScreenDataUrl(std::move(value)); return *this;}
    inline MediaPlacement& WithScreenDataUrl(const char* value) { SetScreenDataUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The screen sharing URL.</p>  <p> <b>This parameter is is no longer
     * supported and no longer used by the Amazon Chime SDK.</b>.</p> 
     */
    inline const Aws::String& GetScreenSharingUrl() const{ return m_screenSharingUrl; }
    inline bool ScreenSharingUrlHasBeenSet() const { return m_screenSharingUrlHasBeenSet; }
    inline void SetScreenSharingUrl(const Aws::String& value) { m_screenSharingUrlHasBeenSet = true; m_screenSharingUrl = value; }
    inline void SetScreenSharingUrl(Aws::String&& value) { m_screenSharingUrlHasBeenSet = true; m_screenSharingUrl = std::move(value); }
    inline void SetScreenSharingUrl(const char* value) { m_screenSharingUrlHasBeenSet = true; m_screenSharingUrl.assign(value); }
    inline MediaPlacement& WithScreenSharingUrl(const Aws::String& value) { SetScreenSharingUrl(value); return *this;}
    inline MediaPlacement& WithScreenSharingUrl(Aws::String&& value) { SetScreenSharingUrl(std::move(value)); return *this;}
    inline MediaPlacement& WithScreenSharingUrl(const char* value) { SetScreenSharingUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The screen viewing URL.</p>  <p> <b>This parameter is is no longer
     * supported and no longer used by the Amazon Chime SDK.</b> </p> 
     */
    inline const Aws::String& GetScreenViewingUrl() const{ return m_screenViewingUrl; }
    inline bool ScreenViewingUrlHasBeenSet() const { return m_screenViewingUrlHasBeenSet; }
    inline void SetScreenViewingUrl(const Aws::String& value) { m_screenViewingUrlHasBeenSet = true; m_screenViewingUrl = value; }
    inline void SetScreenViewingUrl(Aws::String&& value) { m_screenViewingUrlHasBeenSet = true; m_screenViewingUrl = std::move(value); }
    inline void SetScreenViewingUrl(const char* value) { m_screenViewingUrlHasBeenSet = true; m_screenViewingUrl.assign(value); }
    inline MediaPlacement& WithScreenViewingUrl(const Aws::String& value) { SetScreenViewingUrl(value); return *this;}
    inline MediaPlacement& WithScreenViewingUrl(Aws::String&& value) { SetScreenViewingUrl(std::move(value)); return *this;}
    inline MediaPlacement& WithScreenViewingUrl(const char* value) { SetScreenViewingUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signaling URL.</p>
     */
    inline const Aws::String& GetSignalingUrl() const{ return m_signalingUrl; }
    inline bool SignalingUrlHasBeenSet() const { return m_signalingUrlHasBeenSet; }
    inline void SetSignalingUrl(const Aws::String& value) { m_signalingUrlHasBeenSet = true; m_signalingUrl = value; }
    inline void SetSignalingUrl(Aws::String&& value) { m_signalingUrlHasBeenSet = true; m_signalingUrl = std::move(value); }
    inline void SetSignalingUrl(const char* value) { m_signalingUrlHasBeenSet = true; m_signalingUrl.assign(value); }
    inline MediaPlacement& WithSignalingUrl(const Aws::String& value) { SetSignalingUrl(value); return *this;}
    inline MediaPlacement& WithSignalingUrl(Aws::String&& value) { SetSignalingUrl(std::move(value)); return *this;}
    inline MediaPlacement& WithSignalingUrl(const char* value) { SetSignalingUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The turn control URL.</p>  <p> <b>This parameter is is no longer
     * supported and no longer used by the Amazon Chime SDK.</b> </p> 
     */
    inline const Aws::String& GetTurnControlUrl() const{ return m_turnControlUrl; }
    inline bool TurnControlUrlHasBeenSet() const { return m_turnControlUrlHasBeenSet; }
    inline void SetTurnControlUrl(const Aws::String& value) { m_turnControlUrlHasBeenSet = true; m_turnControlUrl = value; }
    inline void SetTurnControlUrl(Aws::String&& value) { m_turnControlUrlHasBeenSet = true; m_turnControlUrl = std::move(value); }
    inline void SetTurnControlUrl(const char* value) { m_turnControlUrlHasBeenSet = true; m_turnControlUrl.assign(value); }
    inline MediaPlacement& WithTurnControlUrl(const Aws::String& value) { SetTurnControlUrl(value); return *this;}
    inline MediaPlacement& WithTurnControlUrl(Aws::String&& value) { SetTurnControlUrl(std::move(value)); return *this;}
    inline MediaPlacement& WithTurnControlUrl(const char* value) { SetTurnControlUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event ingestion URL to which you send client meeting events.</p>
     */
    inline const Aws::String& GetEventIngestionUrl() const{ return m_eventIngestionUrl; }
    inline bool EventIngestionUrlHasBeenSet() const { return m_eventIngestionUrlHasBeenSet; }
    inline void SetEventIngestionUrl(const Aws::String& value) { m_eventIngestionUrlHasBeenSet = true; m_eventIngestionUrl = value; }
    inline void SetEventIngestionUrl(Aws::String&& value) { m_eventIngestionUrlHasBeenSet = true; m_eventIngestionUrl = std::move(value); }
    inline void SetEventIngestionUrl(const char* value) { m_eventIngestionUrlHasBeenSet = true; m_eventIngestionUrl.assign(value); }
    inline MediaPlacement& WithEventIngestionUrl(const Aws::String& value) { SetEventIngestionUrl(value); return *this;}
    inline MediaPlacement& WithEventIngestionUrl(Aws::String&& value) { SetEventIngestionUrl(std::move(value)); return *this;}
    inline MediaPlacement& WithEventIngestionUrl(const char* value) { SetEventIngestionUrl(value); return *this;}
    ///@}
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
