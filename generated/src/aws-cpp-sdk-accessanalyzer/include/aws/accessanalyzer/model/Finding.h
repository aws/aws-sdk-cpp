/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/accessanalyzer/model/ResourceType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/accessanalyzer/model/FindingStatus.h>
#include <aws/accessanalyzer/model/ResourceControlPolicyRestriction.h>
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
   * <p>Contains information about a finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/Finding">AWS
   * API Reference</a></p>
   */
  class Finding
  {
  public:
    AWS_ACCESSANALYZER_API Finding() = default;
    AWS_ACCESSANALYZER_API Finding(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Finding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the finding.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Finding& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
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
    Finding& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    template<typename PrincipalKeyT = Aws::String, typename PrincipalValueT = Aws::String>
    Finding& AddPrincipal(PrincipalKeyT&& key, PrincipalValueT&& value) {
      m_principalHasBeenSet = true; m_principal.emplace(std::forward<PrincipalKeyT>(key), std::forward<PrincipalValueT>(value)); return *this;
    }
    ///@}

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
    Finding& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    template<typename ActionT = Aws::String>
    Finding& AddAction(ActionT&& value) { m_actionHasBeenSet = true; m_action.emplace_back(std::forward<ActionT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource that an external principal has access to.</p>
     */
    inline const Aws::String& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = Aws::String>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Aws::String>
    Finding& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the policy that generated the finding allows public access
     * to the resource.</p>
     */
    inline bool GetIsPublic() const { return m_isPublic; }
    inline bool IsPublicHasBeenSet() const { return m_isPublicHasBeenSet; }
    inline void SetIsPublic(bool value) { m_isPublicHasBeenSet = true; m_isPublic = value; }
    inline Finding& WithIsPublic(bool value) { SetIsPublic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the resource identified in the finding.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline Finding& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    template<typename ConditionT = Aws::Map<Aws::String, Aws::String>>
    void SetCondition(ConditionT&& value) { m_conditionHasBeenSet = true; m_condition = std::forward<ConditionT>(value); }
    template<typename ConditionT = Aws::Map<Aws::String, Aws::String>>
    Finding& WithCondition(ConditionT&& value) { SetCondition(std::forward<ConditionT>(value)); return *this;}
    template<typename ConditionKeyT = Aws::String, typename ConditionValueT = Aws::String>
    Finding& AddCondition(ConditionKeyT&& key, ConditionValueT&& value) {
      m_conditionHasBeenSet = true; m_condition.emplace(std::forward<ConditionKeyT>(key), std::forward<ConditionValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The time at which the finding was generated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Finding& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the resource was analyzed.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalyzedAt() const { return m_analyzedAt; }
    inline bool AnalyzedAtHasBeenSet() const { return m_analyzedAtHasBeenSet; }
    template<typename AnalyzedAtT = Aws::Utils::DateTime>
    void SetAnalyzedAt(AnalyzedAtT&& value) { m_analyzedAtHasBeenSet = true; m_analyzedAt = std::forward<AnalyzedAtT>(value); }
    template<typename AnalyzedAtT = Aws::Utils::DateTime>
    Finding& WithAnalyzedAt(AnalyzedAtT&& value) { SetAnalyzedAt(std::forward<AnalyzedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the finding was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    Finding& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the finding.</p>
     */
    inline FindingStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FindingStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Finding& WithStatus(FindingStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that owns the resource.</p>
     */
    inline const Aws::String& GetResourceOwnerAccount() const { return m_resourceOwnerAccount; }
    inline bool ResourceOwnerAccountHasBeenSet() const { return m_resourceOwnerAccountHasBeenSet; }
    template<typename ResourceOwnerAccountT = Aws::String>
    void SetResourceOwnerAccount(ResourceOwnerAccountT&& value) { m_resourceOwnerAccountHasBeenSet = true; m_resourceOwnerAccount = std::forward<ResourceOwnerAccountT>(value); }
    template<typename ResourceOwnerAccountT = Aws::String>
    Finding& WithResourceOwnerAccount(ResourceOwnerAccountT&& value) { SetResourceOwnerAccount(std::forward<ResourceOwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error.</p>
     */
    inline const Aws::String& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = Aws::String>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = Aws::String>
    Finding& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sources of the finding. This indicates how the access that generated the
     * finding is granted. It is populated for Amazon S3 bucket findings.</p>
     */
    inline const Aws::Vector<FindingSource>& GetSources() const { return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    template<typename SourcesT = Aws::Vector<FindingSource>>
    void SetSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources = std::forward<SourcesT>(value); }
    template<typename SourcesT = Aws::Vector<FindingSource>>
    Finding& WithSources(SourcesT&& value) { SetSources(std::forward<SourcesT>(value)); return *this;}
    template<typename SourcesT = FindingSource>
    Finding& AddSources(SourcesT&& value) { m_sourcesHasBeenSet = true; m_sources.emplace_back(std::forward<SourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of restriction applied to the finding by the resource owner with an
     * Organizations resource control policy (RCP).</p>
     */
    inline ResourceControlPolicyRestriction GetResourceControlPolicyRestriction() const { return m_resourceControlPolicyRestriction; }
    inline bool ResourceControlPolicyRestrictionHasBeenSet() const { return m_resourceControlPolicyRestrictionHasBeenSet; }
    inline void SetResourceControlPolicyRestriction(ResourceControlPolicyRestriction value) { m_resourceControlPolicyRestrictionHasBeenSet = true; m_resourceControlPolicyRestriction = value; }
    inline Finding& WithResourceControlPolicyRestriction(ResourceControlPolicyRestriction value) { SetResourceControlPolicyRestriction(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_principal;
    bool m_principalHasBeenSet = false;

    Aws::Vector<Aws::String> m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    bool m_isPublic{false};
    bool m_isPublicHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_condition;
    bool m_conditionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_analyzedAt{};
    bool m_analyzedAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    FindingStatus m_status{FindingStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_resourceOwnerAccount;
    bool m_resourceOwnerAccountHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::Vector<FindingSource> m_sources;
    bool m_sourcesHasBeenSet = false;

    ResourceControlPolicyRestriction m_resourceControlPolicyRestriction{ResourceControlPolicyRestriction::NOT_SET};
    bool m_resourceControlPolicyRestrictionHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
