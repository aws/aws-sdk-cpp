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
    AWS_CLOUDWATCHEVIDENTLY_API MetricDefinition() = default;
    AWS_CLOUDWATCHEVIDENTLY_API MetricDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API MetricDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The entity, such as a user or session, that does an action that causes a
     * metric value to be recorded.</p>
     */
    inline const Aws::String& GetEntityIdKey() const { return m_entityIdKey; }
    inline bool EntityIdKeyHasBeenSet() const { return m_entityIdKeyHasBeenSet; }
    template<typename EntityIdKeyT = Aws::String>
    void SetEntityIdKey(EntityIdKeyT&& value) { m_entityIdKeyHasBeenSet = true; m_entityIdKey = std::forward<EntityIdKeyT>(value); }
    template<typename EntityIdKeyT = Aws::String>
    MetricDefinition& WithEntityIdKey(EntityIdKeyT&& value) { SetEntityIdKey(std::forward<EntityIdKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EventBridge event pattern that defines how the metric is recorded.</p>
     * <p>For more information about EventBridge event patterns, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-patterns.html">Amazon
     * EventBridge event patterns</a>.</p>
     */
    inline const Aws::String& GetEventPattern() const { return m_eventPattern; }
    inline bool EventPatternHasBeenSet() const { return m_eventPatternHasBeenSet; }
    template<typename EventPatternT = Aws::String>
    void SetEventPattern(EventPatternT&& value) { m_eventPatternHasBeenSet = true; m_eventPattern = std::forward<EventPatternT>(value); }
    template<typename EventPatternT = Aws::String>
    MetricDefinition& WithEventPattern(EventPatternT&& value) { SetEventPattern(std::forward<EventPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metric.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MetricDefinition& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label for the units that the metric is measuring.</p>
     */
    inline const Aws::String& GetUnitLabel() const { return m_unitLabel; }
    inline bool UnitLabelHasBeenSet() const { return m_unitLabelHasBeenSet; }
    template<typename UnitLabelT = Aws::String>
    void SetUnitLabel(UnitLabelT&& value) { m_unitLabelHasBeenSet = true; m_unitLabel = std::forward<UnitLabelT>(value); }
    template<typename UnitLabelT = Aws::String>
    MetricDefinition& WithUnitLabel(UnitLabelT&& value) { SetUnitLabel(std::forward<UnitLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that is tracked to produce the metric.</p>
     */
    inline const Aws::String& GetValueKey() const { return m_valueKey; }
    inline bool ValueKeyHasBeenSet() const { return m_valueKeyHasBeenSet; }
    template<typename ValueKeyT = Aws::String>
    void SetValueKey(ValueKeyT&& value) { m_valueKeyHasBeenSet = true; m_valueKey = std::forward<ValueKeyT>(value); }
    template<typename ValueKeyT = Aws::String>
    MetricDefinition& WithValueKey(ValueKeyT&& value) { SetValueKey(std::forward<ValueKeyT>(value)); return *this;}
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
