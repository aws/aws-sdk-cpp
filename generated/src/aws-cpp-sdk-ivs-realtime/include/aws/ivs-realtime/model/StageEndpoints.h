/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
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
namespace ivsrealtime
{
namespace Model
{

  /**
   * <p>Summary information about various endpoints for a stage. We recommend that
   * you cache these values at stage creation; the values can be cached for up to 14
   * days.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/StageEndpoints">AWS
   * API Reference</a></p>
   */
  class StageEndpoints
  {
  public:
    AWS_IVSREALTIME_API StageEndpoints() = default;
    AWS_IVSREALTIME_API StageEndpoints(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API StageEndpoints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Events endpoint.</p>
     */
    inline const Aws::String& GetEvents() const { return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    template<typename EventsT = Aws::String>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::String>
    StageEndpoints& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint to be used for IVS real-time streaming using the WHIP
     * protocol.</p>
     */
    inline const Aws::String& GetWhip() const { return m_whip; }
    inline bool WhipHasBeenSet() const { return m_whipHasBeenSet; }
    template<typename WhipT = Aws::String>
    void SetWhip(WhipT&& value) { m_whipHasBeenSet = true; m_whip = std::forward<WhipT>(value); }
    template<typename WhipT = Aws::String>
    StageEndpoints& WithWhip(WhipT&& value) { SetWhip(std::forward<WhipT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint to be used for IVS real-time streaming using the RTMP
     * protocol.</p>
     */
    inline const Aws::String& GetRtmp() const { return m_rtmp; }
    inline bool RtmpHasBeenSet() const { return m_rtmpHasBeenSet; }
    template<typename RtmpT = Aws::String>
    void SetRtmp(RtmpT&& value) { m_rtmpHasBeenSet = true; m_rtmp = std::forward<RtmpT>(value); }
    template<typename RtmpT = Aws::String>
    StageEndpoints& WithRtmp(RtmpT&& value) { SetRtmp(std::forward<RtmpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint to be used for IVS real-time streaming using the RTMPS
     * protocol.</p>
     */
    inline const Aws::String& GetRtmps() const { return m_rtmps; }
    inline bool RtmpsHasBeenSet() const { return m_rtmpsHasBeenSet; }
    template<typename RtmpsT = Aws::String>
    void SetRtmps(RtmpsT&& value) { m_rtmpsHasBeenSet = true; m_rtmps = std::forward<RtmpsT>(value); }
    template<typename RtmpsT = Aws::String>
    StageEndpoints& WithRtmps(RtmpsT&& value) { SetRtmps(std::forward<RtmpsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_events;
    bool m_eventsHasBeenSet = false;

    Aws::String m_whip;
    bool m_whipHasBeenSet = false;

    Aws::String m_rtmp;
    bool m_rtmpHasBeenSet = false;

    Aws::String m_rtmps;
    bool m_rtmpsHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
