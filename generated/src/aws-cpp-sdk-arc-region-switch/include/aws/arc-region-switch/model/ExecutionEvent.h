/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/arc-region-switch/model/ExecutionEventType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-region-switch/model/ExecutionBlockType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ARCRegionswitch
{
namespace Model
{

  /**
   * <p>Represents an event that occurred during a plan execution. These events
   * provide a detailed timeline of the execution process.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/ExecutionEvent">AWS
   * API Reference</a></p>
   */
  class ExecutionEvent
  {
  public:
    AWS_ARCREGIONSWITCH_API ExecutionEvent() = default;
    AWS_ARCREGIONSWITCH_API ExecutionEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API ExecutionEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp for an execution event.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    ExecutionEvent& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of an execution event.</p>
     */
    inline ExecutionEventType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ExecutionEventType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ExecutionEvent& WithType(ExecutionEventType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The step name for an execution event.</p>
     */
    inline const Aws::String& GetStepName() const { return m_stepName; }
    inline bool StepNameHasBeenSet() const { return m_stepNameHasBeenSet; }
    template<typename StepNameT = Aws::String>
    void SetStepName(StepNameT&& value) { m_stepNameHasBeenSet = true; m_stepName = std::forward<StepNameT>(value); }
    template<typename StepNameT = Aws::String>
    ExecutionEvent& WithStepName(StepNameT&& value) { SetStepName(std::forward<StepNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution block type for an execution event.</p>
     */
    inline ExecutionBlockType GetExecutionBlockType() const { return m_executionBlockType; }
    inline bool ExecutionBlockTypeHasBeenSet() const { return m_executionBlockTypeHasBeenSet; }
    inline void SetExecutionBlockType(ExecutionBlockType value) { m_executionBlockTypeHasBeenSet = true; m_executionBlockType = value; }
    inline ExecutionEvent& WithExecutionBlockType(ExecutionBlockType value) { SetExecutionBlockType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resources for an execution event.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = Aws::Vector<Aws::String>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<Aws::String>>
    ExecutionEvent& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = Aws::String>
    ExecutionEvent& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Errors for an execution event.</p>
     */
    inline const Aws::String& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = Aws::String>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = Aws::String>
    ExecutionEvent& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for an execution event.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ExecutionEvent& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event ID for an execution event.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    ExecutionEvent& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The event ID of the previous execution event.</p>
     */
    inline const Aws::String& GetPreviousEventId() const { return m_previousEventId; }
    inline bool PreviousEventIdHasBeenSet() const { return m_previousEventIdHasBeenSet; }
    template<typename PreviousEventIdT = Aws::String>
    void SetPreviousEventId(PreviousEventIdT&& value) { m_previousEventIdHasBeenSet = true; m_previousEventId = std::forward<PreviousEventIdT>(value); }
    template<typename PreviousEventIdT = Aws::String>
    ExecutionEvent& WithPreviousEventId(PreviousEventIdT&& value) { SetPreviousEventId(std::forward<PreviousEventIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    ExecutionEventType m_type{ExecutionEventType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_stepName;
    bool m_stepNameHasBeenSet = false;

    ExecutionBlockType m_executionBlockType{ExecutionBlockType::NOT_SET};
    bool m_executionBlockTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_resources;
    bool m_resourcesHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;

    Aws::String m_previousEventId;
    bool m_previousEventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
