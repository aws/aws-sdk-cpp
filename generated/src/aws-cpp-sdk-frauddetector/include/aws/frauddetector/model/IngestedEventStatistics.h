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
    AWS_FRAUDDETECTOR_API IngestedEventStatistics() = default;
    AWS_FRAUDDETECTOR_API IngestedEventStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API IngestedEventStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FRAUDDETECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of stored events.</p>
     */
    inline long long GetNumberOfEvents() const { return m_numberOfEvents; }
    inline bool NumberOfEventsHasBeenSet() const { return m_numberOfEventsHasBeenSet; }
    inline void SetNumberOfEvents(long long value) { m_numberOfEventsHasBeenSet = true; m_numberOfEvents = value; }
    inline IngestedEventStatistics& WithNumberOfEvents(long long value) { SetNumberOfEvents(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total size of the stored events.</p>
     */
    inline long long GetEventDataSizeInBytes() const { return m_eventDataSizeInBytes; }
    inline bool EventDataSizeInBytesHasBeenSet() const { return m_eventDataSizeInBytesHasBeenSet; }
    inline void SetEventDataSizeInBytes(long long value) { m_eventDataSizeInBytesHasBeenSet = true; m_eventDataSizeInBytes = value; }
    inline IngestedEventStatistics& WithEventDataSizeInBytes(long long value) { SetEventDataSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The oldest stored event.</p>
     */
    inline const Aws::String& GetLeastRecentEvent() const { return m_leastRecentEvent; }
    inline bool LeastRecentEventHasBeenSet() const { return m_leastRecentEventHasBeenSet; }
    template<typename LeastRecentEventT = Aws::String>
    void SetLeastRecentEvent(LeastRecentEventT&& value) { m_leastRecentEventHasBeenSet = true; m_leastRecentEvent = std::forward<LeastRecentEventT>(value); }
    template<typename LeastRecentEventT = Aws::String>
    IngestedEventStatistics& WithLeastRecentEvent(LeastRecentEventT&& value) { SetLeastRecentEvent(std::forward<LeastRecentEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The newest stored event.</p>
     */
    inline const Aws::String& GetMostRecentEvent() const { return m_mostRecentEvent; }
    inline bool MostRecentEventHasBeenSet() const { return m_mostRecentEventHasBeenSet; }
    template<typename MostRecentEventT = Aws::String>
    void SetMostRecentEvent(MostRecentEventT&& value) { m_mostRecentEventHasBeenSet = true; m_mostRecentEvent = std::forward<MostRecentEventT>(value); }
    template<typename MostRecentEventT = Aws::String>
    IngestedEventStatistics& WithMostRecentEvent(MostRecentEventT&& value) { SetMostRecentEvent(std::forward<MostRecentEventT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of when the stored event was last updated. </p>
     */
    inline const Aws::String& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::String>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::String>
    IngestedEventStatistics& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}
  private:

    long long m_numberOfEvents{0};
    bool m_numberOfEventsHasBeenSet = false;

    long long m_eventDataSizeInBytes{0};
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
