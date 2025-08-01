/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/arc-region-switch/model/WorkflowTargetAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/arc-region-switch/model/Step.h>
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
   * <p>Represents a workflow in a Region switch plan. A workflow defines a sequence
   * of steps to execute during a Region switch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/Workflow">AWS
   * API Reference</a></p>
   */
  class Workflow
  {
  public:
    AWS_ARCREGIONSWITCH_API Workflow() = default;
    AWS_ARCREGIONSWITCH_API Workflow(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Workflow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The steps that make up the workflow.</p>
     */
    inline const Aws::Vector<Step>& GetSteps() const { return m_steps; }
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }
    template<typename StepsT = Aws::Vector<Step>>
    void SetSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps = std::forward<StepsT>(value); }
    template<typename StepsT = Aws::Vector<Step>>
    Workflow& WithSteps(StepsT&& value) { SetSteps(std::forward<StepsT>(value)); return *this;}
    template<typename StepsT = Step>
    Workflow& AddSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps.emplace_back(std::forward<StepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The action that the workflow performs. Valid values include ACTIVATE and
     * DEACTIVATE.</p>
     */
    inline WorkflowTargetAction GetWorkflowTargetAction() const { return m_workflowTargetAction; }
    inline bool WorkflowTargetActionHasBeenSet() const { return m_workflowTargetActionHasBeenSet; }
    inline void SetWorkflowTargetAction(WorkflowTargetAction value) { m_workflowTargetActionHasBeenSet = true; m_workflowTargetAction = value; }
    inline Workflow& WithWorkflowTargetAction(WorkflowTargetAction value) { SetWorkflowTargetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region that the workflow targets.</p>
     */
    inline const Aws::String& GetWorkflowTargetRegion() const { return m_workflowTargetRegion; }
    inline bool WorkflowTargetRegionHasBeenSet() const { return m_workflowTargetRegionHasBeenSet; }
    template<typename WorkflowTargetRegionT = Aws::String>
    void SetWorkflowTargetRegion(WorkflowTargetRegionT&& value) { m_workflowTargetRegionHasBeenSet = true; m_workflowTargetRegion = std::forward<WorkflowTargetRegionT>(value); }
    template<typename WorkflowTargetRegionT = Aws::String>
    Workflow& WithWorkflowTargetRegion(WorkflowTargetRegionT&& value) { SetWorkflowTargetRegion(std::forward<WorkflowTargetRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the workflow.</p>
     */
    inline const Aws::String& GetWorkflowDescription() const { return m_workflowDescription; }
    inline bool WorkflowDescriptionHasBeenSet() const { return m_workflowDescriptionHasBeenSet; }
    template<typename WorkflowDescriptionT = Aws::String>
    void SetWorkflowDescription(WorkflowDescriptionT&& value) { m_workflowDescriptionHasBeenSet = true; m_workflowDescription = std::forward<WorkflowDescriptionT>(value); }
    template<typename WorkflowDescriptionT = Aws::String>
    Workflow& WithWorkflowDescription(WorkflowDescriptionT&& value) { SetWorkflowDescription(std::forward<WorkflowDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Step> m_steps;
    bool m_stepsHasBeenSet = false;

    WorkflowTargetAction m_workflowTargetAction{WorkflowTargetAction::NOT_SET};
    bool m_workflowTargetActionHasBeenSet = false;

    Aws::String m_workflowTargetRegion;
    bool m_workflowTargetRegionHasBeenSet = false;

    Aws::String m_workflowDescription;
    bool m_workflowDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
