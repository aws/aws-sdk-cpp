/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/InternalAccessType.h>
#include <aws/accessanalyzer/model/PrincipalType.h>
#include <aws/accessanalyzer/model/ResourceControlPolicyRestriction.h>
#include <aws/accessanalyzer/model/ServiceControlPolicyRestriction.h>
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
   * <p>Contains information about an internal access finding. This includes details
   * about the access that was identified within your Amazon Web Services
   * organization or account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/InternalAccessDetails">AWS
   * API Reference</a></p>
   */
  class InternalAccessDetails
  {
  public:
    AWS_ACCESSANALYZER_API InternalAccessDetails() = default;
    AWS_ACCESSANALYZER_API InternalAccessDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API InternalAccessDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action in the analyzed policy statement that has internal access
     * permission to use.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Aws::Vector<Aws::String>>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Aws::Vector<Aws::String>>
    InternalAccessDetails& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    template<typename ActionT = Aws::String>
    InternalAccessDetails& AddAction(ActionT&& value) { m_actionHasBeenSet = true; m_action.emplace_back(std::forward<ActionT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The condition in the analyzed policy statement that resulted in an internal
     * access finding.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    template<typename ConditionT = Aws::Map<Aws::String, Aws::String>>
    void SetCondition(ConditionT&& value) { m_conditionHasBeenSet = true; m_condition = std::forward<ConditionT>(value); }
    template<typename ConditionT = Aws::Map<Aws::String, Aws::String>>
    InternalAccessDetails& WithCondition(ConditionT&& value) { SetCondition(std::forward<ConditionT>(value)); return *this;}
    template<typename ConditionKeyT = Aws::String, typename ConditionValueT = Aws::String>
    InternalAccessDetails& AddCondition(ConditionKeyT&& key, ConditionValueT&& value) {
      m_conditionHasBeenSet = true; m_condition.emplace(std::forward<ConditionKeyT>(key), std::forward<ConditionValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The principal that has access to a resource within the internal
     * environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = Aws::Map<Aws::String, Aws::String>>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = Aws::Map<Aws::String, Aws::String>>
    InternalAccessDetails& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    template<typename PrincipalKeyT = Aws::String, typename PrincipalValueT = Aws::String>
    InternalAccessDetails& AddPrincipal(PrincipalKeyT&& key, PrincipalValueT&& value) {
      m_principalHasBeenSet = true; m_principal.emplace(std::forward<PrincipalKeyT>(key), std::forward<PrincipalValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that owns the principal identified in the
     * internal access finding.</p>
     */
    inline const Aws::String& GetPrincipalOwnerAccount() const { return m_principalOwnerAccount; }
    inline bool PrincipalOwnerAccountHasBeenSet() const { return m_principalOwnerAccountHasBeenSet; }
    template<typename PrincipalOwnerAccountT = Aws::String>
    void SetPrincipalOwnerAccount(PrincipalOwnerAccountT&& value) { m_principalOwnerAccountHasBeenSet = true; m_principalOwnerAccount = std::forward<PrincipalOwnerAccountT>(value); }
    template<typename PrincipalOwnerAccountT = Aws::String>
    InternalAccessDetails& WithPrincipalOwnerAccount(PrincipalOwnerAccountT&& value) { SetPrincipalOwnerAccount(std::forward<PrincipalOwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of internal access identified in the finding. This indicates how the
     * access is granted within your Amazon Web Services environment.</p>
     */
    inline InternalAccessType GetAccessType() const { return m_accessType; }
    inline bool AccessTypeHasBeenSet() const { return m_accessTypeHasBeenSet; }
    inline void SetAccessType(InternalAccessType value) { m_accessTypeHasBeenSet = true; m_accessType = value; }
    inline InternalAccessDetails& WithAccessType(InternalAccessType value) { SetAccessType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of principal identified in the internal access finding, such as IAM
     * role or IAM user.</p>
     */
    inline PrincipalType GetPrincipalType() const { return m_principalType; }
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }
    inline void SetPrincipalType(PrincipalType value) { m_principalTypeHasBeenSet = true; m_principalType = value; }
    inline InternalAccessDetails& WithPrincipalType(PrincipalType value) { SetPrincipalType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sources of the internal access finding. This indicates how the access
     * that generated the finding is granted within your Amazon Web Services
     * environment.</p>
     */
    inline const Aws::Vector<FindingSource>& GetSources() const { return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    template<typename SourcesT = Aws::Vector<FindingSource>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<FindingSource>>
    InternalAccessDetails& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = FindingSource>
    InternalAccessDetails& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of restriction applied to the finding by the resource owner with an
     * Organizations resource control policy (RCP).</p> <ul> <li> <p>
     * <code>APPLICABLE</code>: There is an RCP present in the organization but IAM
     * Access Analyzer does not include it in the evaluation of effective permissions.
     * For example, if <code>s3:DeleteObject</code> is blocked by the RCP and the
     * restriction is <code>APPLICABLE</code>, then <code>s3:DeleteObject</code> would
     * still be included in the list of actions for the finding. Only applicable to
     * internal access findings with the account as the zone of trust. </p> </li> <li>
     * <p> <code>FAILED_TO_EVALUATE_RCP</code>: There was an error evaluating the
     * RCP.</p> </li> <li> <p> <code>NOT_APPLICABLE</code>: There was no RCP present in
     * the organization. For internal access findings with the account as the zone of
     * trust, <code>NOT_APPLICABLE</code> could also indicate that there was no RCP
     * applicable to the resource.</p> </li> <li> <p> <code>APPLIED</code>: An RCP is
     * present in the organization and IAM Access Analyzer included it in the
     * evaluation of effective permissions. For example, if
     * <code>s3:DeleteObject</code> is blocked by the RCP and the restriction is
     * <code>APPLIED</code>, then <code>s3:DeleteObject</code> would not be included in
     * the list of actions for the finding. Only applicable to internal access findings
     * with the organization as the zone of trust. </p> </li> </ul>
     */
    inline ResourceControlPolicyRestriction GetResourceControlPolicyRestriction() const { return m_resourceControlPolicyRestriction; }
    inline bool ResourceControlPolicyRestrictionHasBeenSet() const { return m_resourceControlPolicyRestrictionHasBeenSet; }
    inline void SetResourceControlPolicyRestriction(ResourceControlPolicyRestriction value) { m_resourceControlPolicyRestrictionHasBeenSet = true; m_resourceControlPolicyRestriction = value; }
    inline InternalAccessDetails& WithResourceControlPolicyRestriction(ResourceControlPolicyRestriction value) { SetResourceControlPolicyRestriction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of restriction applied to the finding by an Organizations service
     * control policy (SCP).</p> <ul> <li> <p> <code>APPLICABLE</code>: There is an SCP
     * present in the organization but IAM Access Analyzer does not include it in the
     * evaluation of effective permissions. Only applicable to internal access findings
     * with the account as the zone of trust. </p> </li> <li> <p>
     * <code>FAILED_TO_EVALUATE_SCP</code>: There was an error evaluating the SCP.</p>
     * </li> <li> <p> <code>NOT_APPLICABLE</code>: There was no SCP present in the
     * organization. For internal access findings with the account as the zone of
     * trust, <code>NOT_APPLICABLE</code> could also indicate that there was no SCP
     * applicable to the principal.</p> </li> <li> <p> <code>APPLIED</code>: An SCP is
     * present in the organization and IAM Access Analyzer included it in the
     * evaluation of effective permissions. Only applicable to internal access findings
     * with the organization as the zone of trust. </p> </li> </ul>
     */
    inline ServiceControlPolicyRestriction GetServiceControlPolicyRestriction() const { return m_serviceControlPolicyRestriction; }
    inline bool ServiceControlPolicyRestrictionHasBeenSet() const { return m_serviceControlPolicyRestrictionHasBeenSet; }
    inline void SetServiceControlPolicyRestriction(ServiceControlPolicyRestriction value) { m_serviceControlPolicyRestrictionHasBeenSet = true; m_serviceControlPolicyRestriction = value; }
    inline InternalAccessDetails& WithServiceControlPolicyRestriction(ServiceControlPolicyRestriction value) { SetServiceControlPolicyRestriction(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_action;
    bool m_actionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_condition;
    bool m_conditionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_principal;
    bool m_principalHasBeenSet = false;

    Aws::String m_principalOwnerAccount;
    bool m_principalOwnerAccountHasBeenSet = false;

    InternalAccessType m_accessType{InternalAccessType::NOT_SET};
    bool m_accessTypeHasBeenSet = false;

    PrincipalType m_principalType{PrincipalType::NOT_SET};
    bool m_principalTypeHasBeenSet = false;

    Aws::Vector<FindingSource> m_sources;
    bool m_sourcesHasBeenSet = false;

    ResourceControlPolicyRestriction m_resourceControlPolicyRestriction{ResourceControlPolicyRestriction::NOT_SET};
    bool m_resourceControlPolicyRestrictionHasBeenSet = false;

    ServiceControlPolicyRestriction m_serviceControlPolicyRestriction{ServiceControlPolicyRestriction::NOT_SET};
    bool m_serviceControlPolicyRestrictionHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
