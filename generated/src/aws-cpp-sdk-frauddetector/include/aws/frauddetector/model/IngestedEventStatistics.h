/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
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
namespace FraudDetector
{
namespace Model
{

  /**
   * <p>Data about the stored events.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/frauddetector-2019-11-15/IngestedEventStatistics">AWS
   * API Reference</a></p>
   */
  class IngestedEventStatistics
  {
  public:
    AWS_FRAUDDETECTOR_API IngestedEventStatistics();
    AWS_FRAUDDETECTOR_API IngestedEventStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API IngestedEventStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of stored events.</p>
     */
    inline long long GetNumberOfEvents() const{ return m_numberOfEvents; }

    /**
     * <p>The number of stored events.</p>
     */
    inline bool NumberOfEventsHasBeenSet() const { return m_numberOfEventsHasBeenSet; }

    /**
     * <p>The number of stored events.</p>
     */
    inline void SetNumberOfEvents(long long value) { m_numberOfEventsHasBeenSet = true; m_numberOfEvents = value; }

    /**
     * <p>The number of stored events.</p>
     */
    inline IngestedEventStatistics& WithNumberOfEvents(long long value) { SetNumberOfEvents(value); return *this;}


    /**
     * <p>The total size of the stored events.</p>
     */
    inline long long GetEventDataSizeInBytes() const{ return m_eventDataSizeInBytes; }

    /**
     * <p>The total size of the stored events.</p>
     */
    inline bool EventDataSizeInBytesHasBeenSet() const { return m_eventDataSizeInBytesHasBeenSet; }

    /**
     * <p>The total size of the stored events.</p>
     */
    inline void SetEventDataSizeInBytes(long long value) { m_eventDataSizeInBytesHasBeenSet = true; m_eventDataSizeInBytes = value; }

    /**
     * <p>The total size of the stored events.</p>
     */
    inline IngestedEventStatistics& WithEventDataSizeInBytes(long long value) { SetEventDataSizeInBytes(value); return *this;}


    /**
     * <p>The oldest stored event.</p>
     */
    inline const Aws::String& GetLeastRecentEvent() const{ return m_leastRecentEvent; }

    /**
     * <p>The oldest stored event.</p>
     */
    inline bool LeastRecentEventHasBeenSet() const { return m_leastRecentEventHasBeenSet; }

    /**
     * <p>The oldest stored event.</p>
     */
    inline void SetLeastRecentEvent(const Aws::String& value) { m_leastRecentEventHasBeenSet = true; m_leastRecentEvent = value; }

    /**
     * <p>The oldest stored event.</p>
     */
    inline void SetLeastRecentEvent(Aws::String&& value) { m_leastRecentEventHasBeenSet = true; m_leastRecentEvent = std::move(value); }

    /**
     * <p>The oldest stored event.</p>
     */
    inline void SetLeastRecentEvent(const char* value) { m_leastRecentEventHasBeenSet = true; m_leastRecentEvent.assign(value); }

    /**
     * <p>The oldest stored event.</p>
     */
    inline IngestedEventStatistics& WithLeastRecentEvent(const Aws::String& value) { SetLeastRecentEvent(value); return *this;}

    /**
     * <p>The oldest stored event.</p>
     */
    inline IngestedEventStatistics& WithLeastRecentEvent(Aws::String&& value) { SetLeastRecentEvent(std::move(value)); return *this;}

    /**
     * <p>The oldest stored event.</p>
     */
    inline IngestedEventStatistics& WithLeastRecentEvent(const char* value) { SetLeastRecentEvent(value); return *this;}


    /**
     * <p>The newest stored event.</p>
     */
    inline const Aws::String& GetMostRecentEvent() const{ return m_mostRecentEvent; }

    /**
     * <p>The newest stored event.</p>
     */
    inline bool MostRecentEventHasBeenSet() const { return m_mostRecentEventHasBeenSet; }

    /**
     * <p>The newest stored event.</p>
     */
    inline void SetMostRecentEvent(const Aws::String& value) { m_mostRecentEventHasBeenSet = true; m_mostRecentEvent = value; }

    /**
     * <p>The newest stored event.</p>
     */
    inline void SetMostRecentEvent(Aws::String&& value) { m_mostRecentEventHasBeenSet = true; m_mostRecentEvent = std::move(value); }

    /**
     * <p>The newest stored event.</p>
     */
    inline void SetMostRecentEvent(const char* value) { m_mostRecentEventHasBeenSet = true; m_mostRecentEvent.assign(value); }

    /**
     * <p>The newest stored event.</p>
     */
    inline IngestedEventStatistics& WithMostRecentEvent(const Aws::String& value) { SetMostRecentEvent(value); return *this;}

    /**
     * <p>The newest stored event.</p>
     */
    inline IngestedEventStatistics& WithMostRecentEvent(Aws::String&& value) { SetMostRecentEvent(std::move(value)); return *this;}

    /**
     * <p>The newest stored event.</p>
     */
    inline IngestedEventStatistics& WithMostRecentEvent(const char* value) { SetMostRecentEvent(value); return *this;}


    /**
     * <p>Timestamp of when the stored event was last updated. </p>
     */
    inline const Aws::String& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>Timestamp of when the stored event was last updated. </p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>Timestamp of when the stored event was last updated. </p>
     */
    inline void SetLastUpdatedTime(const Aws::String& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>Timestamp of when the stored event was last updated. </p>
     */
    inline void SetLastUpdatedTime(Aws::String&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>Timestamp of when the stored event was last updated. </p>
     */
    inline void SetLastUpdatedTime(const char* value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime.assign(value); }

    /**
     * <p>Timestamp of when the stored event was last updated. </p>
     */
    inline IngestedEventStatistics& WithLastUpdatedTime(const Aws::String& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>Timestamp of when the stored event was last updated. </p>
     */
    inline IngestedEventStatistics& WithLastUpdatedTime(Aws::String&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

    /**
     * <p>Timestamp of when the stored event was last updated. </p>
     */
    inline IngestedEventStatistics& WithLastUpdatedTime(const char* value) { SetLastUpdatedTime(value); return *this;}

  private:

    long long m_numberOfEvents;
    bool m_numberOfEventsHasBeenSet = false;

    long long m_eventDataSizeInBytes;
    bool m_eventDataSizeInBytesHasBeenSet = false;

    Aws::String m_leastRecentEvent;
    bool m_leastRecentEventHasBeenSet = false;

    Aws::String m_mostRecentEvent;
    bool m_mostRecentEventHasBeenSet = false;

    Aws::String m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
