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
   * <p>This structure defines a metric that you want to use to evaluate the
   * variations during a launch or experiment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/MetricDefinitionConfig">AWS
   * API Reference</a></p>
   */
  class MetricDefinitionConfig
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API MetricDefinitionConfig();
    AWS_CLOUDWATCHEVIDENTLY_API MetricDefinitionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API MetricDefinitionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The entity, such as a user or session, that does an action that causes a
     * metric value to be recorded. An example is <code>userDetails.userID</code>.</p>
     */
    inline const Aws::String& GetEntityIdKey() const{ return m_entityIdKey; }
    inline bool EntityIdKeyHasBeenSet() const { return m_entityIdKeyHasBeenSet; }
    inline void SetEntityIdKey(const Aws::String& value) { m_entityIdKeyHasBeenSet = true; m_entityIdKey = value; }
    inline void SetEntityIdKey(Aws::String&& value) { m_entityIdKeyHasBeenSet = true; m_entityIdKey = std::move(value); }
    inline void SetEntityIdKey(const char* value) { m_entityIdKeyHasBeenSet = true; m_entityIdKey.assign(value); }
    inline MetricDefinitionConfig& WithEntityIdKey(const Aws::String& value) { SetEntityIdKey(value); return *this;}
    inline MetricDefinitionConfig& WithEntityIdKey(Aws::String&& value) { SetEntityIdKey(std::move(value)); return *this;}
    inline MetricDefinitionConfig& WithEntityIdKey(const char* value) { SetEntityIdKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EventBridge event pattern that defines how the metric is recorded.</p>
     * <p>For more information about EventBridge event patterns, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-patterns.html">Amazon
     * EventBridge event patterns</a>.</p>
     */
    inline const Aws::String& GetEventPattern() const{ return m_eventPattern; }
    inline bool EventPatternHasBeenSet() const { return m_eventPatternHasBeenSet; }
    inline void SetEventPattern(const Aws::String& value) { m_eventPatternHasBeenSet = true; m_eventPattern = value; }
    inline void SetEventPattern(Aws::String&& value) { m_eventPatternHasBeenSet = true; m_eventPattern = std::move(value); }
    inline void SetEventPattern(const char* value) { m_eventPatternHasBeenSet = true; m_eventPattern.assign(value); }
    inline MetricDefinitionConfig& WithEventPattern(const Aws::String& value) { SetEventPattern(value); return *this;}
    inline MetricDefinitionConfig& WithEventPattern(Aws::String&& value) { SetEventPattern(std::move(value)); return *this;}
    inline MetricDefinitionConfig& WithEventPattern(const char* value) { SetEventPattern(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the metric.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline MetricDefinitionConfig& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline MetricDefinitionConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline MetricDefinitionConfig& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A label for the units that the metric is measuring.</p>
     */
    inline const Aws::String& GetUnitLabel() const{ return m_unitLabel; }
    inline bool UnitLabelHasBeenSet() const { return m_unitLabelHasBeenSet; }
    inline void SetUnitLabel(const Aws::String& value) { m_unitLabelHasBeenSet = true; m_unitLabel = value; }
    inline void SetUnitLabel(Aws::String&& value) { m_unitLabelHasBeenSet = true; m_unitLabel = std::move(value); }
    inline void SetUnitLabel(const char* value) { m_unitLabelHasBeenSet = true; m_unitLabel.assign(value); }
    inline MetricDefinitionConfig& WithUnitLabel(const Aws::String& value) { SetUnitLabel(value); return *this;}
    inline MetricDefinitionConfig& WithUnitLabel(Aws::String&& value) { SetUnitLabel(std::move(value)); return *this;}
    inline MetricDefinitionConfig& WithUnitLabel(const char* value) { SetUnitLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that is tracked to produce the metric.</p>
     */
    inline const Aws::String& GetValueKey() const{ return m_valueKey; }
    inline bool ValueKeyHasBeenSet() const { return m_valueKeyHasBeenSet; }
    inline void SetValueKey(const Aws::String& value) { m_valueKeyHasBeenSet = true; m_valueKey = value; }
    inline void SetValueKey(Aws::String&& value) { m_valueKeyHasBeenSet = true; m_valueKey = std::move(value); }
    inline void SetValueKey(const char* value) { m_valueKeyHasBeenSet = true; m_valueKey.assign(value); }
    inline MetricDefinitionConfig& WithValueKey(const Aws::String& value) { SetValueKey(value); return *this;}
    inline MetricDefinitionConfig& WithValueKey(Aws::String&& value) { SetValueKey(std::move(value)); return *this;}
    inline MetricDefinitionConfig& WithValueKey(const char* value) { SetValueKey(value); return *this;}
    ///@}
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
