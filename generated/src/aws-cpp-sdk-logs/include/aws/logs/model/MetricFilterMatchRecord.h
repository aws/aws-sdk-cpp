/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>Represents a matched event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/MetricFilterMatchRecord">AWS
   * API Reference</a></p>
   */
  class MetricFilterMatchRecord
  {
  public:
    AWS_CLOUDWATCHLOGS_API MetricFilterMatchRecord() = default;
    AWS_CLOUDWATCHLOGS_API MetricFilterMatchRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API MetricFilterMatchRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The event number.</p>
     */
    inline long long GetEventNumber() const { return m_eventNumber; }
    inline bool EventNumberHasBeenSet() const { return m_eventNumberHasBeenSet; }
    inline void SetEventNumber(long long value) { m_eventNumberHasBeenSet = true; m_eventNumber = value; }
    inline MetricFilterMatchRecord& WithEventNumber(long long value) { SetEventNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The raw event data.</p>
     */
    inline const Aws::String& GetEventMessage() const { return m_eventMessage; }
    inline bool EventMessageHasBeenSet() const { return m_eventMessageHasBeenSet; }
    template<typename EventMessageT = Aws::String>
    void SetEventMessage(EventMessageT&& value) { m_eventMessageHasBeenSet = true; m_eventMessage = std::forward<EventMessageT>(value); }
    template<typename EventMessageT = Aws::String>
    MetricFilterMatchRecord& WithEventMessage(EventMessageT&& value) { SetEventMessage(std::forward<EventMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The values extracted from the event data by the filter.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetExtractedValues() const { return m_extractedValues; }
    inline bool ExtractedValuesHasBeenSet() const { return m_extractedValuesHasBeenSet; }
    template<typename ExtractedValuesT = Aws::Map<Aws::String, Aws::String>>
    void SetExtractedValues(ExtractedValuesT&& value) { m_extractedValuesHasBeenSet = true; m_extractedValues = std::forward<ExtractedValuesT>(value); }
    template<typename ExtractedValuesT = Aws::Map<Aws::String, Aws::String>>
    MetricFilterMatchRecord& WithExtractedValues(ExtractedValuesT&& value) { SetExtractedValues(std::forward<ExtractedValuesT>(value)); return *this;}
    template<typename ExtractedValuesKeyT = Aws::String, typename ExtractedValuesValueT = Aws::String>
    MetricFilterMatchRecord& AddExtractedValues(ExtractedValuesKeyT&& key, ExtractedValuesValueT&& value) {
      m_extractedValuesHasBeenSet = true; m_extractedValues.emplace(std::forward<ExtractedValuesKeyT>(key), std::forward<ExtractedValuesValueT>(value)); return *this;
    }
    ///@}
  private:

    long long m_eventNumber{0};
    bool m_eventNumberHasBeenSet = false;

    Aws::String m_eventMessage;
    bool m_eventMessageHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_extractedValues;
    bool m_extractedValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
