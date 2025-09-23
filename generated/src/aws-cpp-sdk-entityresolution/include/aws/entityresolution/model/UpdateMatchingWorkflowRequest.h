/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/EntityResolutionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/ResolutionTechniques.h>
#include <aws/entityresolution/model/IncrementalRunConfig.h>
#include <aws/entityresolution/model/InputSource.h>
#include <aws/entityresolution/model/OutputSource.h>
#include <utility>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

  /**
   */
  class UpdateMatchingWorkflowRequest : public EntityResolutionRequest
  {
  public:
    AWS_ENTITYRESOLUTION_API UpdateMatchingWorkflowRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMatchingWorkflow"; }

    AWS_ENTITYRESOLUTION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the workflow to be retrieved.</p>
     */
    inline const Aws::String& GetWorkflowName() const { return m_workflowName; }
    inline bool WorkflowNameHasBeenSet() const { return m_workflowNameHasBeenSet; }
    template<typename WorkflowNameT = Aws::String>
    void SetWorkflowName(WorkflowNameT&& value) { m_workflowNameHasBeenSet = true; m_workflowName = std::forward<WorkflowNameT>(value); }
    template<typename WorkflowNameT = Aws::String>
    UpdateMatchingWorkflowRequest& WithWorkflowName(WorkflowNameT&& value) { SetWorkflowName(std::forward<WorkflowNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the workflow.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateMatchingWorkflowRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline const Aws::Vector<InputSource>& GetInputSourceConfig() const { return m_inputSourceConfig; }
    inline bool InputSourceConfigHasBeenSet() const { return m_inputSourceConfigHasBeenSet; }
    template<typename InputSourceConfigT = Aws::Vector<InputSource>>
    void SetInputSourceConfig(InputSourceConfigT&& value) { m_inputSourceConfigHasBeenSet = true; m_inputSourceConfig = std::forward<InputSourceConfigT>(value); }
    template<typename InputSourceConfigT = Aws::Vector<InputSource>>
    UpdateMatchingWorkflowRequest& WithInputSourceConfig(InputSourceConfigT&& value) { SetInputSourceConfig(std::forward<InputSourceConfigT>(value)); return *this;}
    template<typename InputSourceConfigT = InputSource>
    UpdateMatchingWorkflowRequest& AddInputSourceConfig(InputSourceConfigT&& value) { m_inputSourceConfigHasBeenSet = true; m_inputSourceConfig.emplace_back(std::forward<InputSourceConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>outputS3Path</code>, <code>applyNormalization</code>, <code>KMSArn</code>,
     * and <code>output</code>.</p>
     */
    inline const Aws::Vector<OutputSource>& GetOutputSourceConfig() const { return m_outputSourceConfig; }
    inline bool OutputSourceConfigHasBeenSet() const { return m_outputSourceConfigHasBeenSet; }
    template<typename OutputSourceConfigT = Aws::Vector<OutputSource>>
    void SetOutputSourceConfig(OutputSourceConfigT&& value) { m_outputSourceConfigHasBeenSet = true; m_outputSourceConfig = std::forward<OutputSourceConfigT>(value); }
    template<typename OutputSourceConfigT = Aws::Vector<OutputSource>>
    UpdateMatchingWorkflowRequest& WithOutputSourceConfig(OutputSourceConfigT&& value) { SetOutputSourceConfig(std::forward<OutputSourceConfigT>(value)); return *this;}
    template<typename OutputSourceConfigT = OutputSource>
    UpdateMatchingWorkflowRequest& AddOutputSourceConfig(OutputSourceConfigT&& value) { m_outputSourceConfigHasBeenSet = true; m_outputSourceConfig.emplace_back(std::forward<OutputSourceConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object which defines the <code>resolutionType</code> and the
     * <code>ruleBasedProperties</code>.</p>
     */
    inline const ResolutionTechniques& GetResolutionTechniques() const { return m_resolutionTechniques; }
    inline bool ResolutionTechniquesHasBeenSet() const { return m_resolutionTechniquesHasBeenSet; }
    template<typename ResolutionTechniquesT = ResolutionTechniques>
    void SetResolutionTechniques(ResolutionTechniquesT&& value) { m_resolutionTechniquesHasBeenSet = true; m_resolutionTechniques = std::forward<ResolutionTechniquesT>(value); }
    template<typename ResolutionTechniquesT = ResolutionTechniques>
    UpdateMatchingWorkflowRequest& WithResolutionTechniques(ResolutionTechniquesT&& value) { SetResolutionTechniques(std::forward<ResolutionTechniquesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. An object that defines the incremental run type. This object
     * contains only the <code>incrementalRunType</code> field, which appears as
     * "Automatic" in the console. </p>  <p>For workflows where
     * <code>resolutionType</code> is <code>ML_MATCHING</code> or
     * <code>PROVIDER</code>, incremental processing is not supported. </p>
     * 
     */
    inline const IncrementalRunConfig& GetIncrementalRunConfig() const { return m_incrementalRunConfig; }
    inline bool IncrementalRunConfigHasBeenSet() const { return m_incrementalRunConfigHasBeenSet; }
    template<typename IncrementalRunConfigT = IncrementalRunConfig>
    void SetIncrementalRunConfig(IncrementalRunConfigT&& value) { m_incrementalRunConfigHasBeenSet = true; m_incrementalRunConfig = std::forward<IncrementalRunConfigT>(value); }
    template<typename IncrementalRunConfigT = IncrementalRunConfig>
    UpdateMatchingWorkflowRequest& WithIncrementalRunConfig(IncrementalRunConfigT&& value) { SetIncrementalRunConfig(std::forward<IncrementalRunConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateMatchingWorkflowRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workflowName;
    bool m_workflowNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<InputSource> m_inputSourceConfig;
    bool m_inputSourceConfigHasBeenSet = false;

    Aws::Vector<OutputSource> m_outputSourceConfig;
    bool m_outputSourceConfigHasBeenSet = false;

    ResolutionTechniques m_resolutionTechniques;
    bool m_resolutionTechniquesHasBeenSet = false;

    IncrementalRunConfig m_incrementalRunConfig;
    bool m_incrementalRunConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
