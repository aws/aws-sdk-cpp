/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>A set of endpoints used by clients to connect to the media service group for
   * an Amazon Chime SDK meeting.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/MediaPlacement">AWS
   * API Reference</a></p>
   */
  class MediaPlacement
  {
  public:
    AWS_CONNECT_API MediaPlacement();
    AWS_CONNECT_API MediaPlacement(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API MediaPlacement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


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

    Aws::String m_signalingUrl;
    bool m_signalingUrlHasBeenSet = false;

    Aws::String m_turnControlUrl;
    bool m_turnControlUrlHasBeenSet = false;

    Aws::String m_eventIngestionUrl;
    bool m_eventIngestionUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
