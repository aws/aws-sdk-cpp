/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/accessanalyzer/model/RecommendedRemediationAction.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains information about the action to take for a policy in an unused
   * permissions finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/UnusedPermissionsRecommendedStep">AWS
   * API Reference</a></p>
   */
  class UnusedPermissionsRecommendedStep
  {
  public:
    AWS_ACCESSANALYZER_API UnusedPermissionsRecommendedStep() = default;
    AWS_ACCESSANALYZER_API UnusedPermissionsRecommendedStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API UnusedPermissionsRecommendedStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time at which the existing policy for the unused permissions finding was
     * last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetPolicyUpdatedAt() const { return m_policyUpdatedAt; }
    inline bool PolicyUpdatedAtHasBeenSet() const { return m_policyUpdatedAtHasBeenSet; }
    template<typename PolicyUpdatedAtT = Aws::Utils::DateTime>
    void SetPolicyUpdatedAt(PolicyUpdatedAtT&& value) { m_policyUpdatedAtHasBeenSet = true; m_policyUpdatedAt = std::forward<PolicyUpdatedAtT>(value); }
    template<typename PolicyUpdatedAtT = Aws::Utils::DateTime>
    UnusedPermissionsRecommendedStep& WithPolicyUpdatedAt(PolicyUpdatedAtT&& value) { SetPolicyUpdatedAt(std::forward<PolicyUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A recommendation of whether to create or detach a policy for an unused
     * permissions finding.</p>
     */
    inline RecommendedRemediationAction GetRecommendedAction() const { return m_recommendedAction; }
    inline bool RecommendedActionHasBeenSet() const { return m_recommendedActionHasBeenSet; }
    inline void SetRecommendedAction(RecommendedRemediationAction value) { m_recommendedActionHasBeenSet = true; m_recommendedAction = value; }
    inline UnusedPermissionsRecommendedStep& WithRecommendedAction(RecommendedRemediationAction value) { SetRecommendedAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the recommended action for the unused permissions finding is to replace
     * the existing policy, the contents of the recommended policy to replace the
     * policy specified in the <code>existingPolicyId</code> field.</p>
     */
    inline const Aws::String& GetRecommendedPolicy() const { return m_recommendedPolicy; }
    inline bool RecommendedPolicyHasBeenSet() const { return m_recommendedPolicyHasBeenSet; }
    template<typename RecommendedPolicyT = Aws::String>
    void SetRecommendedPolicy(RecommendedPolicyT&& value) { m_recommendedPolicyHasBeenSet = true; m_recommendedPolicy = std::forward<RecommendedPolicyT>(value); }
    template<typename RecommendedPolicyT = Aws::String>
    UnusedPermissionsRecommendedStep& WithRecommendedPolicy(RecommendedPolicyT&& value) { SetRecommendedPolicy(std::forward<RecommendedPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the recommended action for the unused permissions finding is to detach a
     * policy, the ID of an existing policy to be detached.</p>
     */
    inline const Aws::String& GetExistingPolicyId() const { return m_existingPolicyId; }
    inline bool ExistingPolicyIdHasBeenSet() const { return m_existingPolicyIdHasBeenSet; }
    template<typename ExistingPolicyIdT = Aws::String>
    void SetExistingPolicyId(ExistingPolicyIdT&& value) { m_existingPolicyIdHasBeenSet = true; m_existingPolicyId = std::forward<ExistingPolicyIdT>(value); }
    template<typename ExistingPolicyIdT = Aws::String>
    UnusedPermissionsRecommendedStep& WithExistingPolicyId(ExistingPolicyIdT&& value) { SetExistingPolicyId(std::forward<ExistingPolicyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_policyUpdatedAt{};
    bool m_policyUpdatedAtHasBeenSet = false;

    RecommendedRemediationAction m_recommendedAction{RecommendedRemediationAction::NOT_SET};
    bool m_recommendedActionHasBeenSet = false;

    Aws::String m_recommendedPolicy;
    bool m_recommendedPolicyHasBeenSet = false;

    Aws::String m_existingPolicyId;
    bool m_existingPolicyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
