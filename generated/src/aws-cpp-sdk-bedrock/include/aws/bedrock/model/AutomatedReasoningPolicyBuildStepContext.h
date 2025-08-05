/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyPlanning.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyMutation.h>
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
   * <p>Provides context about what type of operation was being performed during a
   * build step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyBuildStepContext">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyBuildStepContext
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildStepContext() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildStepContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyBuildStepContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates that this build step was part of the planning phase, where the
     * system determines what operations to perform.</p>
     */
    inline const AutomatedReasoningPolicyPlanning& GetPlanning() const { return m_planning; }
    inline bool PlanningHasBeenSet() const { return m_planningHasBeenSet; }
    template<typename PlanningT = AutomatedReasoningPolicyPlanning>
    void SetPlanning(PlanningT&& value) { m_planningHasBeenSet = true; m_planning = std::forward<PlanningT>(value); }
    template<typename PlanningT = AutomatedReasoningPolicyPlanning>
    AutomatedReasoningPolicyBuildStepContext& WithPlanning(PlanningT&& value) { SetPlanning(std::forward<PlanningT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that this build step involved modifying the policy structure, such
     * as adding or updating rules, variables, or types.</p>
     */
    inline const AutomatedReasoningPolicyMutation& GetMutation() const { return m_mutation; }
    inline bool MutationHasBeenSet() const { return m_mutationHasBeenSet; }
    template<typename MutationT = AutomatedReasoningPolicyMutation>
    void SetMutation(MutationT&& value) { m_mutationHasBeenSet = true; m_mutation = std::forward<MutationT>(value); }
    template<typename MutationT = AutomatedReasoningPolicyMutation>
    AutomatedReasoningPolicyBuildStepContext& WithMutation(MutationT&& value) { SetMutation(std::forward<MutationT>(value)); return *this;}
    ///@}
  private:

    AutomatedReasoningPolicyPlanning m_planning;
    bool m_planningHasBeenSet = false;

    AutomatedReasoningPolicyMutation m_mutation;
    bool m_mutationHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
