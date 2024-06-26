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
   * <p>Summary information about various endpoints for a stage.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/StageEndpoints">AWS
   * API Reference</a></p>
   */
  class StageEndpoints
  {
  public:
    AWS_IVSREALTIME_API StageEndpoints();
    AWS_IVSREALTIME_API StageEndpoints(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API StageEndpoints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Events endpoint.</p>
     */
    inline const Aws::String& GetEvents() const{ return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    inline void SetEvents(const Aws::String& value) { m_eventsHasBeenSet = true; m_events = value; }
    inline void SetEvents(Aws::String&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }
    inline void SetEvents(const char* value) { m_eventsHasBeenSet = true; m_events.assign(value); }
    inline StageEndpoints& WithEvents(const Aws::String& value) { SetEvents(value); return *this;}
    inline StageEndpoints& WithEvents(Aws::String&& value) { SetEvents(std::move(value)); return *this;}
    inline StageEndpoints& WithEvents(const char* value) { SetEvents(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>WHIP endpoint.</p>
     */
    inline const Aws::String& GetWhip() const{ return m_whip; }
    inline bool WhipHasBeenSet() const { return m_whipHasBeenSet; }
    inline void SetWhip(const Aws::String& value) { m_whipHasBeenSet = true; m_whip = value; }
    inline void SetWhip(Aws::String&& value) { m_whipHasBeenSet = true; m_whip = std::move(value); }
    inline void SetWhip(const char* value) { m_whipHasBeenSet = true; m_whip.assign(value); }
    inline StageEndpoints& WithWhip(const Aws::String& value) { SetWhip(value); return *this;}
    inline StageEndpoints& WithWhip(Aws::String&& value) { SetWhip(std::move(value)); return *this;}
    inline StageEndpoints& WithWhip(const char* value) { SetWhip(value); return *this;}
    ///@}
  private:

    Aws::String m_events;
    bool m_eventsHasBeenSet = false;

    Aws::String m_whip;
    bool m_whipHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
