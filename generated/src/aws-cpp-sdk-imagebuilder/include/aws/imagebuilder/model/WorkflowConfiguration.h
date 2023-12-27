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
    AWS_IMAGEBUILDER_API WorkflowConfiguration();
    AWS_IMAGEBUILDER_API WorkflowConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API WorkflowConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline const Aws::String& GetWorkflowArn() const{ return m_workflowArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline bool WorkflowArnHasBeenSet() const { return m_workflowArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline void SetWorkflowArn(const Aws::String& value) { m_workflowArnHasBeenSet = true; m_workflowArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline void SetWorkflowArn(Aws::String&& value) { m_workflowArnHasBeenSet = true; m_workflowArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline void SetWorkflowArn(const char* value) { m_workflowArnHasBeenSet = true; m_workflowArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline WorkflowConfiguration& WithWorkflowArn(const Aws::String& value) { SetWorkflowArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline WorkflowConfiguration& WithWorkflowArn(Aws::String&& value) { SetWorkflowArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the workflow resource.</p>
     */
    inline WorkflowConfiguration& WithWorkflowArn(const char* value) { SetWorkflowArn(value); return *this;}


    /**
     * <p>Contains parameter values for each of the parameters that the workflow
     * document defined for the workflow resource.</p>
     */
    inline const Aws::Vector<WorkflowParameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>Contains parameter values for each of the parameters that the workflow
     * document defined for the workflow resource.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>Contains parameter values for each of the parameters that the workflow
     * document defined for the workflow resource.</p>
     */
    inline void SetParameters(const Aws::Vector<WorkflowParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>Contains parameter values for each of the parameters that the workflow
     * document defined for the workflow resource.</p>
     */
    inline void SetParameters(Aws::Vector<WorkflowParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>Contains parameter values for each of the parameters that the workflow
     * document defined for the workflow resource.</p>
     */
    inline WorkflowConfiguration& WithParameters(const Aws::Vector<WorkflowParameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>Contains parameter values for each of the parameters that the workflow
     * document defined for the workflow resource.</p>
     */
    inline WorkflowConfiguration& WithParameters(Aws::Vector<WorkflowParameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>Contains parameter values for each of the parameters that the workflow
     * document defined for the workflow resource.</p>
     */
    inline WorkflowConfiguration& AddParameters(const WorkflowParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>Contains parameter values for each of the parameters that the workflow
     * document defined for the workflow resource.</p>
     */
    inline WorkflowConfiguration& AddParameters(WorkflowParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }


    /**
     * <p>Test workflows are defined within named runtime groups called parallel
     * groups. The parallel group is the named group that contains this test workflow.
     * Test workflows within a parallel group can run at the same time. Image Builder
     * starts up to five test workflows in the group at the same time, and starts
     * additional workflows as others complete, until all workflows in the group have
     * completed. This field only applies for test workflows.</p>
     */
    inline const Aws::String& GetParallelGroup() const{ return m_parallelGroup; }

    /**
     * <p>Test workflows are defined within named runtime groups called parallel
     * groups. The parallel group is the named group that contains this test workflow.
     * Test workflows within a parallel group can run at the same time. Image Builder
     * starts up to five test workflows in the group at the same time, and starts
     * additional workflows as others complete, until all workflows in the group have
     * completed. This field only applies for test workflows.</p>
     */
    inline bool ParallelGroupHasBeenSet() const { return m_parallelGroupHasBeenSet; }

    /**
     * <p>Test workflows are defined within named runtime groups called parallel
     * groups. The parallel group is the named group that contains this test workflow.
     * Test workflows within a parallel group can run at the same time. Image Builder
     * starts up to five test workflows in the group at the same time, and starts
     * additional workflows as others complete, until all workflows in the group have
     * completed. This field only applies for test workflows.</p>
     */
    inline void SetParallelGroup(const Aws::String& value) { m_parallelGroupHasBeenSet = true; m_parallelGroup = value; }

    /**
     * <p>Test workflows are defined within named runtime groups called parallel
     * groups. The parallel group is the named group that contains this test workflow.
     * Test workflows within a parallel group can run at the same time. Image Builder
     * starts up to five test workflows in the group at the same time, and starts
     * additional workflows as others complete, until all workflows in the group have
     * completed. This field only applies for test workflows.</p>
     */
    inline void SetParallelGroup(Aws::String&& value) { m_parallelGroupHasBeenSet = true; m_parallelGroup = std::move(value); }

    /**
     * <p>Test workflows are defined within named runtime groups called parallel
     * groups. The parallel group is the named group that contains this test workflow.
     * Test workflows within a parallel group can run at the same time. Image Builder
     * starts up to five test workflows in the group at the same time, and starts
     * additional workflows as others complete, until all workflows in the group have
     * completed. This field only applies for test workflows.</p>
     */
    inline void SetParallelGroup(const char* value) { m_parallelGroupHasBeenSet = true; m_parallelGroup.assign(value); }

    /**
     * <p>Test workflows are defined within named runtime groups called parallel
     * groups. The parallel group is the named group that contains this test workflow.
     * Test workflows within a parallel group can run at the same time. Image Builder
     * starts up to five test workflows in the group at the same time, and starts
     * additional workflows as others complete, until all workflows in the group have
     * completed. This field only applies for test workflows.</p>
     */
    inline WorkflowConfiguration& WithParallelGroup(const Aws::String& value) { SetParallelGroup(value); return *this;}

    /**
     * <p>Test workflows are defined within named runtime groups called parallel
     * groups. The parallel group is the named group that contains this test workflow.
     * Test workflows within a parallel group can run at the same time. Image Builder
     * starts up to five test workflows in the group at the same time, and starts
     * additional workflows as others complete, until all workflows in the group have
     * completed. This field only applies for test workflows.</p>
     */
    inline WorkflowConfiguration& WithParallelGroup(Aws::String&& value) { SetParallelGroup(std::move(value)); return *this;}

    /**
     * <p>Test workflows are defined within named runtime groups called parallel
     * groups. The parallel group is the named group that contains this test workflow.
     * Test workflows within a parallel group can run at the same time. Image Builder
     * starts up to five test workflows in the group at the same time, and starts
     * additional workflows as others complete, until all workflows in the group have
     * completed. This field only applies for test workflows.</p>
     */
    inline WorkflowConfiguration& WithParallelGroup(const char* value) { SetParallelGroup(value); return *this;}


    /**
     * <p>The action to take if the workflow fails.</p>
     */
    inline const OnWorkflowFailure& GetOnFailure() const{ return m_onFailure; }

    /**
     * <p>The action to take if the workflow fails.</p>
     */
    inline bool OnFailureHasBeenSet() const { return m_onFailureHasBeenSet; }

    /**
     * <p>The action to take if the workflow fails.</p>
     */
    inline void SetOnFailure(const OnWorkflowFailure& value) { m_onFailureHasBeenSet = true; m_onFailure = value; }

    /**
     * <p>The action to take if the workflow fails.</p>
     */
    inline void SetOnFailure(OnWorkflowFailure&& value) { m_onFailureHasBeenSet = true; m_onFailure = std::move(value); }

    /**
     * <p>The action to take if the workflow fails.</p>
     */
    inline WorkflowConfiguration& WithOnFailure(const OnWorkflowFailure& value) { SetOnFailure(value); return *this;}

    /**
     * <p>The action to take if the workflow fails.</p>
     */
    inline WorkflowConfiguration& WithOnFailure(OnWorkflowFailure&& value) { SetOnFailure(std::move(value)); return *this;}

  private:

    Aws::String m_workflowArn;
    bool m_workflowArnHasBeenSet = false;

    Aws::Vector<WorkflowParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_parallelGroup;
    bool m_parallelGroupHasBeenSet = false;

    OnWorkflowFailure m_onFailure;
    bool m_onFailureHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
