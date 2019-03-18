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
  class AWS_CLOUDWATCHLOGS_API MetricFilterMatchRecord
  {
  public:
    MetricFilterMatchRecord();
    MetricFilterMatchRecord(Aws::Utils::Json::JsonView jsonValue);
    MetricFilterMatchRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The event number.</p>
     */
    inline long long GetEventNumber() const{ return m_eventNumber; }

    /**
     * <p>The event number.</p>
     */
    inline bool EventNumberHasBeenSet() const { return m_eventNumberHasBeenSet; }

    /**
     * <p>The event number.</p>
     */
    inline void SetEventNumber(long long value) { m_eventNumberHasBeenSet = true; m_eventNumber = value; }

    /**
     * <p>The event number.</p>
     */
    inline MetricFilterMatchRecord& WithEventNumber(long long value) { SetEventNumber(value); return *this;}


    /**
     * <p>The raw event data.</p>
     */
    inline const Aws::String& GetEventMessage() const{ return m_eventMessage; }

    /**
     * <p>The raw event data.</p>
     */
    inline bool EventMessageHasBeenSet() const { return m_eventMessageHasBeenSet; }

    /**
     * <p>The raw event data.</p>
     */
    inline void SetEventMessage(const Aws::String& value) { m_eventMessageHasBeenSet = true; m_eventMessage = value; }

    /**
     * <p>The raw event data.</p>
     */
    inline void SetEventMessage(Aws::String&& value) { m_eventMessageHasBeenSet = true; m_eventMessage = std::move(value); }

    /**
     * <p>The raw event data.</p>
     */
    inline void SetEventMessage(const char* value) { m_eventMessageHasBeenSet = true; m_eventMessage.assign(value); }

    /**
     * <p>The raw event data.</p>
     */
    inline MetricFilterMatchRecord& WithEventMessage(const Aws::String& value) { SetEventMessage(value); return *this;}

    /**
     * <p>The raw event data.</p>
     */
    inline MetricFilterMatchRecord& WithEventMessage(Aws::String&& value) { SetEventMessage(std::move(value)); return *this;}

    /**
     * <p>The raw event data.</p>
     */
    inline MetricFilterMatchRecord& WithEventMessage(const char* value) { SetEventMessage(value); return *this;}


    /**
     * <p>The values extracted from the event data by the filter.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetExtractedValues() const{ return m_extractedValues; }

    /**
     * <p>The values extracted from the event data by the filter.</p>
     */
    inline bool ExtractedValuesHasBeenSet() const { return m_extractedValuesHasBeenSet; }

    /**
     * <p>The values extracted from the event data by the filter.</p>
     */
    inline void SetExtractedValues(const Aws::Map<Aws::String, Aws::String>& value) { m_extractedValuesHasBeenSet = true; m_extractedValues = value; }

    /**
     * <p>The values extracted from the event data by the filter.</p>
     */
    inline void SetExtractedValues(Aws::Map<Aws::String, Aws::String>&& value) { m_extractedValuesHasBeenSet = true; m_extractedValues = std::move(value); }

    /**
     * <p>The values extracted from the event data by the filter.</p>
     */
    inline MetricFilterMatchRecord& WithExtractedValues(const Aws::Map<Aws::String, Aws::String>& value) { SetExtractedValues(value); return *this;}

    /**
     * <p>The values extracted from the event data by the filter.</p>
     */
    inline MetricFilterMatchRecord& WithExtractedValues(Aws::Map<Aws::String, Aws::String>&& value) { SetExtractedValues(std::move(value)); return *this;}

    /**
     * <p>The values extracted from the event data by the filter.</p>
     */
    inline MetricFilterMatchRecord& AddExtractedValues(const Aws::String& key, const Aws::String& value) { m_extractedValuesHasBeenSet = true; m_extractedValues.emplace(key, value); return *this; }

    /**
     * <p>The values extracted from the event data by the filter.</p>
     */
    inline MetricFilterMatchRecord& AddExtractedValues(Aws::String&& key, const Aws::String& value) { m_extractedValuesHasBeenSet = true; m_extractedValues.emplace(std::move(key), value); return *this; }

    /**
     * <p>The values extracted from the event data by the filter.</p>
     */
    inline MetricFilterMatchRecord& AddExtractedValues(const Aws::String& key, Aws::String&& value) { m_extractedValuesHasBeenSet = true; m_extractedValues.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The values extracted from the event data by the filter.</p>
     */
    inline MetricFilterMatchRecord& AddExtractedValues(Aws::String&& key, Aws::String&& value) { m_extractedValuesHasBeenSet = true; m_extractedValues.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The values extracted from the event data by the filter.</p>
     */
    inline MetricFilterMatchRecord& AddExtractedValues(const char* key, Aws::String&& value) { m_extractedValuesHasBeenSet = true; m_extractedValues.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The values extracted from the event data by the filter.</p>
     */
    inline MetricFilterMatchRecord& AddExtractedValues(Aws::String&& key, const char* value) { m_extractedValuesHasBeenSet = true; m_extractedValues.emplace(std::move(key), value); return *this; }

    /**
     * <p>The values extracted from the event data by the filter.</p>
     */
    inline MetricFilterMatchRecord& AddExtractedValues(const char* key, const char* value) { m_extractedValuesHasBeenSet = true; m_extractedValues.emplace(key, value); return *this; }

  private:

    long long m_eventNumber;
    bool m_eventNumberHasBeenSet;

    Aws::String m_eventMessage;
    bool m_eventMessageHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_extractedValues;
    bool m_extractedValuesHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
