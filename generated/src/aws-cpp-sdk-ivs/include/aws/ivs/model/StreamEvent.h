/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
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
namespace IVS
{
namespace Model
{

  /**
   * <p>Object specifying a stream’s events. For a list of events, see <a
   * href="https://docs.aws.amazon.com/ivs/latest/userguide/eventbridge.html">Using
   * Amazon EventBridge with Amazon IVS</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/StreamEvent">AWS API
   * Reference</a></p>
   */
  class StreamEvent
  {
  public:
    AWS_IVS_API StreamEvent();
    AWS_IVS_API StreamEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API StreamEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides additional details about the stream event. There are several values;
     * the long descriptions are provided in the IVS console but not delivered through
     * the IVS API or EventBridge. Multitrack-related codes are used only for certain
     * Session Ended events.</p> <ul> <li> <p> <code>MultitrackInputNotAllowed</code> —
     * The broadcast client attempted to connect with multitrack input, but multitrack
     * input was not enabled on the channel. Check your broadcast software settings or
     * set <code>MultitrackInputConfiguration.Policy</code> to <code>ALLOW</code> or
     * <code>REQUIRE</code>.</p> </li> <li> <p> <code>MultitrackInputRequired</code> —
     * The broadcast client attempted to connect with single-track video, but
     * multitrack input is required on this channel. Enable multitrack video in your
     * broadcast software or configure the channel’s
     * <code>MultitrackInputConfiguration.Policy</code> to <code>ALLOW</code>.</p>
     * </li> <li> <p> <code>InvalidGetClientConfigurationStreamKey</code> — The
     * broadcast client attempted to connect with an invalid, expired, or corrupt
     * stream key.</p> </li> <li> <p>
     * <code>GetClientConfigurationStreamKeyRequired</code> — The broadcast client
     * attempted to stream multitrack video without providing an authenticated stream
     * key from GetClientConfiguration.</p> </li> <li> <p>
     * <code>InvalidMultitrackInputTrackCount</code> — The multitrack input stream
     * contained an invalid number of tracks.</p> </li> <li> <p>
     * <code>InvalidMultitrackInputVideoTrackMediaProperties</code> — The multitrack
     * input stream contained one or more tracks with an invalid codec, resolution,
     * bitrate, or framerate.</p> </li> <li> <p>
     * <code>StreamTakeoverMediaMismatch</code> — The broadcast client attempted to
     * take over with different media properties (e.g., codec, resolution, or video
     * track type) from the original stream.</p> </li> <li> <p>
     * <code>StreamTakeoverInvalidPriority</code> — The broadcast client attempted a
     * takeover with either a priority integer value equal to or lower than the
     * original stream's value or a value outside the allowed range of 1 to
     * 2,147,483,647.</p> <p> <code>StreamTakeoverLimitBreached</code> — The broadcast
     * client reached the maximum allowed takeover attempts for this stream.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline StreamEvent& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline StreamEvent& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline StreamEvent& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time when the event occurred. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetEventTime() const{ return m_eventTime; }
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }
    inline void SetEventTime(const Aws::Utils::DateTime& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }
    inline void SetEventTime(Aws::Utils::DateTime&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::move(value); }
    inline StreamEvent& WithEventTime(const Aws::Utils::DateTime& value) { SetEventTime(value); return *this;}
    inline StreamEvent& WithEventTime(Aws::Utils::DateTime&& value) { SetEventTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name that identifies the stream event within a <code>type</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StreamEvent& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StreamEvent& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StreamEvent& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Logical group for certain events.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline StreamEvent& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline StreamEvent& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline StreamEvent& WithType(const char* value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::Utils::DateTime m_eventTime;
    bool m_eventTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
