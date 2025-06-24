/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/accessanalyzer/model/ResourceControlPolicyRestriction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/FindingSource.h>
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
   * <p>Contains information about an external access finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/ExternalAccessDetails">AWS
   * API Reference</a></p>
   */
  class ExternalAccessDetails
  {
  public:
    AWS_ACCESSANALYZER_API ExternalAccessDetails() = default;
    AWS_ACCESSANALYZER_API ExternalAccessDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API ExternalAccessDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to use.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Aws::Vector<Aws::String>>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Aws::Vector<Aws::String>>
    ExternalAccessDetails& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    template<typename ActionT = Aws::String>
    ExternalAccessDetails& AddAction(ActionT&& value) { m_actionHasBeenSet = true; m_action.emplace_back(std::forward<ActionT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The condition in the analyzed policy statement that resulted in an external
     * access finding.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    template<typename ConditionT = Aws::Map<Aws::String, Aws::String>>
    void SetCondition(ConditionT&& value) { m_conditionHasBeenSet = true; m_condition = std::forward<ConditionT>(value); }
    template<typename ConditionT = Aws::Map<Aws::String, Aws::String>>
    ExternalAccessDetails& WithCondition(ConditionT&& value) { SetCondition(std::forward<ConditionT>(value)); return *this;}
    template<typename ConditionKeyT = Aws::String, typename ConditionValueT = Aws::String>
    ExternalAccessDetails& AddCondition(ConditionKeyT&& key, ConditionValueT&& value) {
      m_conditionHasBeenSet = true; m_condition.emplace(std::forward<ConditionKeyT>(key), std::forward<ConditionValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the external access finding is public.</p>
     */
    inline bool GetIsPublic() const { return m_isPublic; }
    inline bool IsPublicHasBeenSet() const { return m_isPublicHasBeenSet; }
    inline void SetIsPublic(bool value) { m_isPublicHasBeenSet = true; m_isPublic = value; }
    inline ExternalAccessDetails& WithIsPublic(bool value) { SetIsPublic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = Aws::Map<Aws::String, Aws::String>>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = Aws::Map<Aws::String, Aws::String>>
    ExternalAccessDetails& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    template<typename PrincipalKeyT = Aws::String, typename PrincipalValueT = Aws::String>
    ExternalAccessDetails& AddPrincipal(PrincipalKeyT&& key, PrincipalValueT&& value) {
      m_principalHasBeenSet = true; m_principal.emplace(std::forward<PrincipalKeyT>(key), std::forward<PrincipalValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The sources of the external access finding. This indicates how the access
     * that generated the finding is granted. It is populated for Amazon S3 bucket
     * findings.</p>
     */
    inline const Aws::Vector<FindingSource>& GetSources() const { return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    template<typename SourcesT = Aws::Vector<FindingSource>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<FindingSource>>
    ExternalAccessDetails& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = FindingSource>
    ExternalAccessDetails& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of restriction applied to the finding by the resource owner with an
     * Organizations resource control policy (RCP).</p> <ul> <li> <p>
     * <code>APPLICABLE</code>: There is an RCP present in the organization but IAM
     * Access Analyzer does not include it in the evaluation of effective permissions.
     * For example, if <code>s3:DeleteObject</code> is blocked by the RCP and the
     * restriction is <code>APPLICABLE</code>, then <code>s3:DeleteObject</code> would
     * still be included in the list of actions for the finding.</p> </li> <li> <p>
     * <code>FAILED_TO_EVALUATE_RCP</code>: There was an error evaluating the RCP.</p>
     * </li> <li> <p> <code>NOT_APPLICABLE</code>: There was no RCP present in the
     * organization, or there was no RCP applicable to the resource. For example, the
     * resource being analyzed is an Amazon RDS snapshot and there is an RCP in the
     * organization, but the RCP only impacts Amazon S3 buckets.</p> </li> <li> <p>
     * <code>APPLIED</code>: This restriction is not currently available for external
     * access findings. </p> </li> </ul>
     */
    inline ResourceControlPolicyRestriction GetResourceControlPolicyRestriction() const { return m_resourceControlPolicyRestriction; }
    inline bool ResourceControlPolicyRestrictionHasBeenSet() const { return m_resourceControlPolicyRestrictionHasBeenSet; }
    inline void SetResourceControlPolicyRestriction(ResourceControlPolicyRestriction value) { m_resourceControlPolicyRestrictionHasBeenSet = true; m_resourceControlPolicyRestriction = value; }
    inline ExternalAccessDetails& WithResourceControlPolicyRestriction(ResourceControlPolicyRestriction value) { SetResourceControlPolicyRestriction(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_action;
    bool m_actionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_condition;
    bool m_conditionHasBeenSet = false;

    bool m_isPublic{false};
    bool m_isPublicHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_principal;
    bool m_principalHasBeenSet = false;

    Aws::Vector<FindingSource> m_sources;
    bool m_sourcesHasBeenSet = false;

    ResourceControlPolicyRestriction m_resourceControlPolicyRestriction{ResourceControlPolicyRestriction::NOT_SET};
    bool m_resourceControlPolicyRestrictionHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
