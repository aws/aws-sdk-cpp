/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>This structure defines a metric that is being used to evaluate the variations
   * during a launch or experiment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/MetricDefinition">AWS
   * API Reference</a></p>
   */
  class MetricDefinition
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API MetricDefinition();
    AWS_CLOUDWATCHEVIDENTLY_API MetricDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API MetricDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The entity, such as a user or session, that does an action that causes a
     * metric value to be recorded.</p>
     */
    inline const Aws::String& GetEntityIdKey() const{ return m_entityIdKey; }

    /**
     * <p>The entity, such as a user or session, that does an action that causes a
     * metric value to be recorded.</p>
     */
    inline bool EntityIdKeyHasBeenSet() const { return m_entityIdKeyHasBeenSet; }

    /**
     * <p>The entity, such as a user or session, that does an action that causes a
     * metric value to be recorded.</p>
     */
    inline void SetEntityIdKey(const Aws::String& value) { m_entityIdKeyHasBeenSet = true; m_entityIdKey = value; }

    /**
     * <p>The entity, such as a user or session, that does an action that causes a
     * metric value to be recorded.</p>
     */
    inline void SetEntityIdKey(Aws::String&& value) { m_entityIdKeyHasBeenSet = true; m_entityIdKey = std::move(value); }

    /**
     * <p>The entity, such as a user or session, that does an action that causes a
     * metric value to be recorded.</p>
     */
    inline void SetEntityIdKey(const char* value) { m_entityIdKeyHasBeenSet = true; m_entityIdKey.assign(value); }

    /**
     * <p>The entity, such as a user or session, that does an action that causes a
     * metric value to be recorded.</p>
     */
    inline MetricDefinition& WithEntityIdKey(const Aws::String& value) { SetEntityIdKey(value); return *this;}

    /**
     * <p>The entity, such as a user or session, that does an action that causes a
     * metric value to be recorded.</p>
     */
    inline MetricDefinition& WithEntityIdKey(Aws::String&& value) { SetEntityIdKey(std::move(value)); return *this;}

    /**
     * <p>The entity, such as a user or session, that does an action that causes a
     * metric value to be recorded.</p>
     */
    inline MetricDefinition& WithEntityIdKey(const char* value) { SetEntityIdKey(value); return *this;}


    /**
     * <p>The EventBridge event pattern that defines how the metric is recorded.</p>
     * <p>For more information about EventBridge event patterns, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-patterns.html">Amazon
     * EventBridge event patterns</a>.</p>
     */
    inline const Aws::String& GetEventPattern() const{ return m_eventPattern; }

    /**
     * <p>The EventBridge event pattern that defines how the metric is recorded.</p>
     * <p>For more information about EventBridge event patterns, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-patterns.html">Amazon
     * EventBridge event patterns</a>.</p>
     */
    inline bool EventPatternHasBeenSet() const { return m_eventPatternHasBeenSet; }

    /**
     * <p>The EventBridge event pattern that defines how the metric is recorded.</p>
     * <p>For more information about EventBridge event patterns, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-patterns.html">Amazon
     * EventBridge event patterns</a>.</p>
     */
    inline void SetEventPattern(const Aws::String& value) { m_eventPatternHasBeenSet = true; m_eventPattern = value; }

    /**
     * <p>The EventBridge event pattern that defines how the metric is recorded.</p>
     * <p>For more information about EventBridge event patterns, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-patterns.html">Amazon
     * EventBridge event patterns</a>.</p>
     */
    inline void SetEventPattern(Aws::String&& value) { m_eventPatternHasBeenSet = true; m_eventPattern = std::move(value); }

    /**
     * <p>The EventBridge event pattern that defines how the metric is recorded.</p>
     * <p>For more information about EventBridge event patterns, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-patterns.html">Amazon
     * EventBridge event patterns</a>.</p>
     */
    inline void SetEventPattern(const char* value) { m_eventPatternHasBeenSet = true; m_eventPattern.assign(value); }

    /**
     * <p>The EventBridge event pattern that defines how the metric is recorded.</p>
     * <p>For more information about EventBridge event patterns, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-patterns.html">Amazon
     * EventBridge event patterns</a>.</p>
     */
    inline MetricDefinition& WithEventPattern(const Aws::String& value) { SetEventPattern(value); return *this;}

    /**
     * <p>The EventBridge event pattern that defines how the metric is recorded.</p>
     * <p>For more information about EventBridge event patterns, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-patterns.html">Amazon
     * EventBridge event patterns</a>.</p>
     */
    inline MetricDefinition& WithEventPattern(Aws::String&& value) { SetEventPattern(std::move(value)); return *this;}

    /**
     * <p>The EventBridge event pattern that defines how the metric is recorded.</p>
     * <p>For more information about EventBridge event patterns, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-patterns.html">Amazon
     * EventBridge event patterns</a>.</p>
     */
    inline MetricDefinition& WithEventPattern(const char* value) { SetEventPattern(value); return *this;}


    /**
     * <p>The name of the metric.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the metric.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the metric.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the metric.</p>
     */
    inline MetricDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline MetricDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric.</p>
     */
    inline MetricDefinition& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The label for the units that the metric is measuring.</p>
     */
    inline const Aws::String& GetUnitLabel() const{ return m_unitLabel; }

    /**
     * <p>The label for the units that the metric is measuring.</p>
     */
    inline bool UnitLabelHasBeenSet() const { return m_unitLabelHasBeenSet; }

    /**
     * <p>The label for the units that the metric is measuring.</p>
     */
    inline void SetUnitLabel(const Aws::String& value) { m_unitLabelHasBeenSet = true; m_unitLabel = value; }

    /**
     * <p>The label for the units that the metric is measuring.</p>
     */
    inline void SetUnitLabel(Aws::String&& value) { m_unitLabelHasBeenSet = true; m_unitLabel = std::move(value); }

    /**
     * <p>The label for the units that the metric is measuring.</p>
     */
    inline void SetUnitLabel(const char* value) { m_unitLabelHasBeenSet = true; m_unitLabel.assign(value); }

    /**
     * <p>The label for the units that the metric is measuring.</p>
     */
    inline MetricDefinition& WithUnitLabel(const Aws::String& value) { SetUnitLabel(value); return *this;}

    /**
     * <p>The label for the units that the metric is measuring.</p>
     */
    inline MetricDefinition& WithUnitLabel(Aws::String&& value) { SetUnitLabel(std::move(value)); return *this;}

    /**
     * <p>The label for the units that the metric is measuring.</p>
     */
    inline MetricDefinition& WithUnitLabel(const char* value) { SetUnitLabel(value); return *this;}


    /**
     * <p>The value that is tracked to produce the metric.</p>
     */
    inline const Aws::String& GetValueKey() const{ return m_valueKey; }

    /**
     * <p>The value that is tracked to produce the metric.</p>
     */
    inline bool ValueKeyHasBeenSet() const { return m_valueKeyHasBeenSet; }

    /**
     * <p>The value that is tracked to produce the metric.</p>
     */
    inline void SetValueKey(const Aws::String& value) { m_valueKeyHasBeenSet = true; m_valueKey = value; }

    /**
     * <p>The value that is tracked to produce the metric.</p>
     */
    inline void SetValueKey(Aws::String&& value) { m_valueKeyHasBeenSet = true; m_valueKey = std::move(value); }

    /**
     * <p>The value that is tracked to produce the metric.</p>
     */
    inline void SetValueKey(const char* value) { m_valueKeyHasBeenSet = true; m_valueKey.assign(value); }

    /**
     * <p>The value that is tracked to produce the metric.</p>
     */
    inline MetricDefinition& WithValueKey(const Aws::String& value) { SetValueKey(value); return *this;}

    /**
     * <p>The value that is tracked to produce the metric.</p>
     */
    inline MetricDefinition& WithValueKey(Aws::String&& value) { SetValueKey(std::move(value)); return *this;}

    /**
     * <p>The value that is tracked to produce the metric.</p>
     */
    inline MetricDefinition& WithValueKey(const char* value) { SetValueKey(value); return *this;}

  private:

    Aws::String m_entityIdKey;
    bool m_entityIdKeyHasBeenSet = false;

    Aws::String m_eventPattern;
    bool m_eventPatternHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_unitLabel;
    bool m_unitLabelHasBeenSet = false;

    Aws::String m_valueKey;
    bool m_valueKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
