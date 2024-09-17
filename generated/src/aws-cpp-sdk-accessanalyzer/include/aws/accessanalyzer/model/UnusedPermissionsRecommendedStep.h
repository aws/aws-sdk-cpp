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
    AWS_ACCESSANALYZER_API UnusedPermissionsRecommendedStep();
    AWS_ACCESSANALYZER_API UnusedPermissionsRecommendedStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API UnusedPermissionsRecommendedStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time at which the existing policy for the unused permissions finding was
     * last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetPolicyUpdatedAt() const{ return m_policyUpdatedAt; }
    inline bool PolicyUpdatedAtHasBeenSet() const { return m_policyUpdatedAtHasBeenSet; }
    inline void SetPolicyUpdatedAt(const Aws::Utils::DateTime& value) { m_policyUpdatedAtHasBeenSet = true; m_policyUpdatedAt = value; }
    inline void SetPolicyUpdatedAt(Aws::Utils::DateTime&& value) { m_policyUpdatedAtHasBeenSet = true; m_policyUpdatedAt = std::move(value); }
    inline UnusedPermissionsRecommendedStep& WithPolicyUpdatedAt(const Aws::Utils::DateTime& value) { SetPolicyUpdatedAt(value); return *this;}
    inline UnusedPermissionsRecommendedStep& WithPolicyUpdatedAt(Aws::Utils::DateTime&& value) { SetPolicyUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A recommendation of whether to create or detach a policy for an unused
     * permissions finding.</p>
     */
    inline const RecommendedRemediationAction& GetRecommendedAction() const{ return m_recommendedAction; }
    inline bool RecommendedActionHasBeenSet() const { return m_recommendedActionHasBeenSet; }
    inline void SetRecommendedAction(const RecommendedRemediationAction& value) { m_recommendedActionHasBeenSet = true; m_recommendedAction = value; }
    inline void SetRecommendedAction(RecommendedRemediationAction&& value) { m_recommendedActionHasBeenSet = true; m_recommendedAction = std::move(value); }
    inline UnusedPermissionsRecommendedStep& WithRecommendedAction(const RecommendedRemediationAction& value) { SetRecommendedAction(value); return *this;}
    inline UnusedPermissionsRecommendedStep& WithRecommendedAction(RecommendedRemediationAction&& value) { SetRecommendedAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the recommended action for the unused permissions finding is to replace
     * the existing policy, the contents of the recommended policy to replace the
     * policy specified in the <code>existingPolicyId</code> field.</p>
     */
    inline const Aws::String& GetRecommendedPolicy() const{ return m_recommendedPolicy; }
    inline bool RecommendedPolicyHasBeenSet() const { return m_recommendedPolicyHasBeenSet; }
    inline void SetRecommendedPolicy(const Aws::String& value) { m_recommendedPolicyHasBeenSet = true; m_recommendedPolicy = value; }
    inline void SetRecommendedPolicy(Aws::String&& value) { m_recommendedPolicyHasBeenSet = true; m_recommendedPolicy = std::move(value); }
    inline void SetRecommendedPolicy(const char* value) { m_recommendedPolicyHasBeenSet = true; m_recommendedPolicy.assign(value); }
    inline UnusedPermissionsRecommendedStep& WithRecommendedPolicy(const Aws::String& value) { SetRecommendedPolicy(value); return *this;}
    inline UnusedPermissionsRecommendedStep& WithRecommendedPolicy(Aws::String&& value) { SetRecommendedPolicy(std::move(value)); return *this;}
    inline UnusedPermissionsRecommendedStep& WithRecommendedPolicy(const char* value) { SetRecommendedPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the recommended action for the unused permissions finding is to detach a
     * policy, the ID of an existing policy to be detached.</p>
     */
    inline const Aws::String& GetExistingPolicyId() const{ return m_existingPolicyId; }
    inline bool ExistingPolicyIdHasBeenSet() const { return m_existingPolicyIdHasBeenSet; }
    inline void SetExistingPolicyId(const Aws::String& value) { m_existingPolicyIdHasBeenSet = true; m_existingPolicyId = value; }
    inline void SetExistingPolicyId(Aws::String&& value) { m_existingPolicyIdHasBeenSet = true; m_existingPolicyId = std::move(value); }
    inline void SetExistingPolicyId(const char* value) { m_existingPolicyIdHasBeenSet = true; m_existingPolicyId.assign(value); }
    inline UnusedPermissionsRecommendedStep& WithExistingPolicyId(const Aws::String& value) { SetExistingPolicyId(value); return *this;}
    inline UnusedPermissionsRecommendedStep& WithExistingPolicyId(Aws::String&& value) { SetExistingPolicyId(std::move(value)); return *this;}
    inline UnusedPermissionsRecommendedStep& WithExistingPolicyId(const char* value) { SetExistingPolicyId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_policyUpdatedAt;
    bool m_policyUpdatedAtHasBeenSet = false;

    RecommendedRemediationAction m_recommendedAction;
    bool m_recommendedActionHasBeenSet = false;

    Aws::String m_recommendedPolicy;
    bool m_recommendedPolicyHasBeenSet = false;

    Aws::String m_existingPolicyId;
    bool m_existingPolicyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
