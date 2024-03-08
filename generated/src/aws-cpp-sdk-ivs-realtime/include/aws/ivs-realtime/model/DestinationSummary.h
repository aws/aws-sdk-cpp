/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/DestinationState.h>
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
   * <p>Summary information about a Destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/DestinationSummary">AWS
   * API Reference</a></p>
   */
  class DestinationSummary
  {
  public:
    AWS_IVSREALTIME_API DestinationSummary();
    AWS_IVSREALTIME_API DestinationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API DestinationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>UTC time of the destination end. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>UTC time of the destination end. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>UTC time of the destination end. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>UTC time of the destination end. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>UTC time of the destination end. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline DestinationSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>UTC time of the destination end. This is an ISO 8601 timestamp; <i>note that
     * this is returned as a string</i>.</p>
     */
    inline DestinationSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>Unique identifier for this destination, assigned by IVS.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Unique identifier for this destination, assigned by IVS.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>Unique identifier for this destination, assigned by IVS.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Unique identifier for this destination, assigned by IVS.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Unique identifier for this destination, assigned by IVS.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>Unique identifier for this destination, assigned by IVS.</p>
     */
    inline DestinationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Unique identifier for this destination, assigned by IVS.</p>
     */
    inline DestinationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for this destination, assigned by IVS.</p>
     */
    inline DestinationSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>UTC time of the destination start. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>UTC time of the destination start. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>UTC time of the destination start. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>UTC time of the destination start. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>UTC time of the destination start. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>.</p>
     */
    inline DestinationSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>UTC time of the destination start. This is an ISO 8601 timestamp; <i>note
     * that this is returned as a string</i>.</p>
     */
    inline DestinationSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>State of the Composition Destination.</p>
     */
    inline const DestinationState& GetState() const{ return m_state; }

    /**
     * <p>State of the Composition Destination.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>State of the Composition Destination.</p>
     */
    inline void SetState(const DestinationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>State of the Composition Destination.</p>
     */
    inline void SetState(DestinationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>State of the Composition Destination.</p>
     */
    inline DestinationSummary& WithState(const DestinationState& value) { SetState(value); return *this;}

    /**
     * <p>State of the Composition Destination.</p>
     */
    inline DestinationSummary& WithState(DestinationState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    DestinationState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
