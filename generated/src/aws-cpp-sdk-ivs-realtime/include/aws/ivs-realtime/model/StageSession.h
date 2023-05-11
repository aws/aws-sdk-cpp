/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A stage session begins when the first participant joins a stage and ends
   * after the last participant leaves the stage. A stage session helps with
   * debugging stages by grouping events and participants into shorter periods of
   * time (i.e., a session), which is helpful when stages are used over long periods
   * of time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/StageSession">AWS
   * API Reference</a></p>
   */
  class StageSession
  {
  public:
    AWS_IVSREALTIME_API StageSession();
    AWS_IVSREALTIME_API StageSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API StageSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ISO 8601 timestamp (returned as a string) when the stage session ended. This
     * is null if the stage is active.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>ISO 8601 timestamp (returned as a string) when the stage session ended. This
     * is null if the stage is active.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>ISO 8601 timestamp (returned as a string) when the stage session ended. This
     * is null if the stage is active.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>ISO 8601 timestamp (returned as a string) when the stage session ended. This
     * is null if the stage is active.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>ISO 8601 timestamp (returned as a string) when the stage session ended. This
     * is null if the stage is active.</p>
     */
    inline StageSession& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>ISO 8601 timestamp (returned as a string) when the stage session ended. This
     * is null if the stage is active.</p>
     */
    inline StageSession& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>ID of the session within the stage.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>ID of the session within the stage.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>ID of the session within the stage.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>ID of the session within the stage.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>ID of the session within the stage.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>ID of the session within the stage.</p>
     */
    inline StageSession& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>ID of the session within the stage.</p>
     */
    inline StageSession& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>ID of the session within the stage.</p>
     */
    inline StageSession& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p> ISO 8601 timestamp (returned as a string) when this stage session began.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> ISO 8601 timestamp (returned as a string) when this stage session began.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> ISO 8601 timestamp (returned as a string) when this stage session began.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> ISO 8601 timestamp (returned as a string) when this stage session began.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> ISO 8601 timestamp (returned as a string) when this stage session began.</p>
     */
    inline StageSession& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> ISO 8601 timestamp (returned as a string) when this stage session began.</p>
     */
    inline StageSession& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
