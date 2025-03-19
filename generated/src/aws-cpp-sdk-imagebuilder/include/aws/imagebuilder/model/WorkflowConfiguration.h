/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/OnWorkflowFailure.h>
#include <aws/imagebuilder/model/WorkflowParameter.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Contains control settings and configurable inputs for a workflow
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/WorkflowConfiguration">AWS
   * API Reference</a></p>
   */
  class WorkflowConfiguration
  {
  public:
    AWS_IMAGEBUILDER_API WorkflowConfiguration() = default;
    AWS_IMAGEBUILDER_API WorkflowConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API WorkflowConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline const Aws::String& GetWorkflowArn() const { return m_workflowArn; }
    inline bool WorkflowArnHasBeenSet() const { return m_workflowArnHasBeenSet; }
    template<typename WorkflowArnT = Aws::String>
    void SetWorkflowArn(WorkflowArnT&& value) { m_workflowArnHasBeenSet = true; m_workflowArn = std::forward<WorkflowArnT>(value); }
    template<typename WorkflowArnT = Aws::String>
    WorkflowConfiguration& WithWorkflowArn(WorkflowArnT&& value) { SetWorkflowArn(std::forward<WorkflowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains parameter values for each of the parameters that the workflow
     * document defined for the workflow resource.</p>
     */
    inline const Aws::Vector<WorkflowParameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<WorkflowParameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<WorkflowParameter>>
    WorkflowConfiguration& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = WorkflowParameter>
    WorkflowConfiguration& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Test workflows are defined within named runtime groups called parallel
     * groups. The parallel group is the named group that contains this test workflow.
     * Test workflows within a parallel group can run at the same time. Image Builder
     * starts up to five test workflows in the group at the same time, and starts
     * additional workflows as others complete, until all workflows in the group have
     * completed. This field only applies for test workflows.</p>
     */
    inline const Aws::String& GetParallelGroup() const { return m_parallelGroup; }
    inline bool ParallelGroupHasBeenSet() const { return m_parallelGroupHasBeenSet; }
    template<typename ParallelGroupT = Aws::String>
    void SetParallelGroup(ParallelGroupT&& value) { m_parallelGroupHasBeenSet = true; m_parallelGroup = std::forward<ParallelGroupT>(value); }
    template<typename ParallelGroupT = Aws::String>
    WorkflowConfiguration& WithParallelGroup(ParallelGroupT&& value) { SetParallelGroup(std::forward<ParallelGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take if the workflow fails.</p>
     */
    inline OnWorkflowFailure GetOnFailure() const { return m_onFailure; }
    inline bool OnFailureHasBeenSet() const { return m_onFailureHasBeenSet; }
    inline void SetOnFailure(OnWorkflowFailure value) { m_onFailureHasBeenSet = true; m_onFailure = value; }
    inline WorkflowConfiguration& WithOnFailure(OnWorkflowFailure value) { SetOnFailure(value); return *this;}
    ///@}
  private:

    Aws::String m_workflowArn;
    bool m_workflowArnHasBeenSet = false;

    Aws::Vector<WorkflowParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_parallelGroup;
    bool m_parallelGroupHasBeenSet = false;

    OnWorkflowFailure m_onFailure{OnWorkflowFailure::NOT_SET};
    bool m_onFailureHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
