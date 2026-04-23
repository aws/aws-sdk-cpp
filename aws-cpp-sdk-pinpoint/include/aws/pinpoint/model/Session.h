/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * Information about a session.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/Session">AWS
   * API Reference</a></p>
   */
  class AWS_PINPOINT_API Session
  {
  public:
    Session();
    Session(Aws::Utils::Json::JsonView jsonValue);
    Session& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The duration of the session, in milliseconds.
     */
    inline int GetDuration() const{ return m_duration; }

    /**
     * The duration of the session, in milliseconds.
     */
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }

    /**
     * The duration of the session, in milliseconds.
     */
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }

    /**
     * The duration of the session, in milliseconds.
     */
    inline Session& WithDuration(int value) { SetDuration(value); return *this;}


    /**
     * A unique identifier for the session.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * A unique identifier for the session.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * A unique identifier for the session.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * A unique identifier for the session.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * A unique identifier for the session.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * A unique identifier for the session.
     */
    inline Session& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * A unique identifier for the session.
     */
    inline Session& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * A unique identifier for the session.
     */
    inline Session& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The date and time when the session began.
     */
    inline const Aws::String& GetStartTimestamp() const{ return m_startTimestamp; }

    /**
     * The date and time when the session began.
     */
    inline bool StartTimestampHasBeenSet() const { return m_startTimestampHasBeenSet; }

    /**
     * The date and time when the session began.
     */
    inline void SetStartTimestamp(const Aws::String& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = value; }

    /**
     * The date and time when the session began.
     */
    inline void SetStartTimestamp(Aws::String&& value) { m_startTimestampHasBeenSet = true; m_startTimestamp = std::move(value); }

    /**
     * The date and time when the session began.
     */
    inline void SetStartTimestamp(const char* value) { m_startTimestampHasBeenSet = true; m_startTimestamp.assign(value); }

    /**
     * The date and time when the session began.
     */
    inline Session& WithStartTimestamp(const Aws::String& value) { SetStartTimestamp(value); return *this;}

    /**
     * The date and time when the session began.
     */
    inline Session& WithStartTimestamp(Aws::String&& value) { SetStartTimestamp(std::move(value)); return *this;}

    /**
     * The date and time when the session began.
     */
    inline Session& WithStartTimestamp(const char* value) { SetStartTimestamp(value); return *this;}


    /**
     * The date and time when the session ended.
     */
    inline const Aws::String& GetStopTimestamp() const{ return m_stopTimestamp; }

    /**
     * The date and time when the session ended.
     */
    inline bool StopTimestampHasBeenSet() const { return m_stopTimestampHasBeenSet; }

    /**
     * The date and time when the session ended.
     */
    inline void SetStopTimestamp(const Aws::String& value) { m_stopTimestampHasBeenSet = true; m_stopTimestamp = value; }

    /**
     * The date and time when the session ended.
     */
    inline void SetStopTimestamp(Aws::String&& value) { m_stopTimestampHasBeenSet = true; m_stopTimestamp = std::move(value); }

    /**
     * The date and time when the session ended.
     */
    inline void SetStopTimestamp(const char* value) { m_stopTimestampHasBeenSet = true; m_stopTimestamp.assign(value); }

    /**
     * The date and time when the session ended.
     */
    inline Session& WithStopTimestamp(const Aws::String& value) { SetStopTimestamp(value); return *this;}

    /**
     * The date and time when the session ended.
     */
    inline Session& WithStopTimestamp(Aws::String&& value) { SetStopTimestamp(std::move(value)); return *this;}

    /**
     * The date and time when the session ended.
     */
    inline Session& WithStopTimestamp(const char* value) { SetStopTimestamp(value); return *this;}

  private:

    int m_duration;
    bool m_durationHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_startTimestamp;
    bool m_startTimestampHasBeenSet;

    Aws::String m_stopTimestamp;
    bool m_stopTimestampHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
