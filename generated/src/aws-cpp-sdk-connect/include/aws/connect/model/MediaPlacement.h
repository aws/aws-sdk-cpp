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
    AWS_CONNECT_API MediaPlacement() = default;
    AWS_CONNECT_API MediaPlacement(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API MediaPlacement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The turn control URL.</p>
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
     * <p>The event ingestion URL to which you send client meeting events.</p>
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

    Aws::String m_eventIngestionUrl;
    bool m_eventIngestionUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
