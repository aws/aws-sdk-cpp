/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyDefinition.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyWorkflowTypeContent.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Defines the source content for a policy build workflow, which can include
   * documents, repair instructions, or other input materials.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyBuildWorkflowSource">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyBuildWorkflowSource
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildWorkflowSource() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildWorkflowSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildWorkflowSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An existing policy definition that serves as the starting point for the build
     * workflow, typically used in policy repair or update scenarios.</p>
     */
    inline const AutomatedReasoningPolicyDefinition& GetPolicyDefinition() const { return m_policyDefinition; }
    inline bool PolicyDefinitionHasBeenSet() const { return m_policyDefinitionHasBeenSet; }
    template<typename PolicyDefinitionT = AutomatedReasoningPolicyDefinition>
    void SetPolicyDefinition(PolicyDefinitionT&& value) { m_policyDefinitionHasBeenSet = true; m_policyDefinition = std::forward<PolicyDefinitionT>(value); }
    template<typename PolicyDefinitionT = AutomatedReasoningPolicyDefinition>
    AutomatedReasoningPolicyBuildWorkflowSource& WithPolicyDefinition(PolicyDefinitionT&& value) { SetPolicyDefinition(std::forward<PolicyDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actual content to be processed in the build workflow, such as documents
     * to analyze or repair instructions to apply.</p>
     */
    inline const AutomatedReasoningPolicyWorkflowTypeContent& GetWorkflowContent() const { return m_workflowContent; }
    inline bool WorkflowContentHasBeenSet() const { return m_workflowContentHasBeenSet; }
    template<typename WorkflowContentT = AutomatedReasoningPolicyWorkflowTypeContent>
    void SetWorkflowContent(WorkflowContentT&& value) { m_workflowContentHasBeenSet = true; m_workflowContent = std::forward<WorkflowContentT>(value); }
    template<typename WorkflowContentT = AutomatedReasoningPolicyWorkflowTypeContent>
    AutomatedReasoningPolicyBuildWorkflowSource& WithWorkflowContent(WorkflowContentT&& value) { SetWorkflowContent(std::forward<WorkflowContentT>(value)); return *this;}
    ///@}
  private:

    AutomatedReasoningPolicyDefinition m_policyDefinition;
    bool m_policyDefinitionHasBeenSet = false;

    AutomatedReasoningPolicyWorkflowTypeContent m_workflowContent;
    bool m_workflowContentHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
