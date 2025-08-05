/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyBuildWorkflowStatus.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyBuildWorkflowType.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Provides a summary of a policy build workflow, including its current status,
   * timing information, and key identifiers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyBuildWorkflowSummary">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyBuildWorkflowSummary
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildWorkflowSummary() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildWorkflowSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildWorkflowSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Automated Reasoning policy associated
     * with this build workflow.</p>
     */
    inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
    template<typename PolicyArnT = Aws::String>
    void SetPolicyArn(PolicyArnT&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::forward<PolicyArnT>(value); }
    template<typename PolicyArnT = Aws::String>
    AutomatedReasoningPolicyBuildWorkflowSummary& WithPolicyArn(PolicyArnT&& value) { SetPolicyArn(std::forward<PolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the build workflow.</p>
     */
    inline const Aws::String& GetBuildWorkflowId() const { return m_buildWorkflowId; }
    inline bool BuildWorkflowIdHasBeenSet() const { return m_buildWorkflowIdHasBeenSet; }
    template<typename BuildWorkflowIdT = Aws::String>
    void SetBuildWorkflowId(BuildWorkflowIdT&& value) { m_buildWorkflowIdHasBeenSet = true; m_buildWorkflowId = std::forward<BuildWorkflowIdT>(value); }
    template<typename BuildWorkflowIdT = Aws::String>
    AutomatedReasoningPolicyBuildWorkflowSummary& WithBuildWorkflowId(BuildWorkflowIdT&& value) { SetBuildWorkflowId(std::forward<BuildWorkflowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the build workflow (e.g., RUNNING, COMPLETED, FAILED,
     * CANCELLED).</p>
     */
    inline AutomatedReasoningPolicyBuildWorkflowStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AutomatedReasoningPolicyBuildWorkflowStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AutomatedReasoningPolicyBuildWorkflowSummary& WithStatus(AutomatedReasoningPolicyBuildWorkflowStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of build workflow (e.g., DOCUMENT_INGESTION, POLICY_REPAIR).</p>
     */
    inline AutomatedReasoningPolicyBuildWorkflowType GetBuildWorkflowType() const { return m_buildWorkflowType; }
    inline bool BuildWorkflowTypeHasBeenSet() const { return m_buildWorkflowTypeHasBeenSet; }
    inline void SetBuildWorkflowType(AutomatedReasoningPolicyBuildWorkflowType value) { m_buildWorkflowTypeHasBeenSet = true; m_buildWorkflowType = value; }
    inline AutomatedReasoningPolicyBuildWorkflowSummary& WithBuildWorkflowType(AutomatedReasoningPolicyBuildWorkflowType value) { SetBuildWorkflowType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the build workflow was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    AutomatedReasoningPolicyBuildWorkflowSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the build workflow was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    AutomatedReasoningPolicyBuildWorkflowSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    Aws::String m_buildWorkflowId;
    bool m_buildWorkflowIdHasBeenSet = false;

    AutomatedReasoningPolicyBuildWorkflowStatus m_status{AutomatedReasoningPolicyBuildWorkflowStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    AutomatedReasoningPolicyBuildWorkflowType m_buildWorkflowType{AutomatedReasoningPolicyBuildWorkflowType::NOT_SET};
    bool m_buildWorkflowTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
