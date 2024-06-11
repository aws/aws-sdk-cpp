﻿/**
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
    AWS_ACCESSANALYZER_API Finding();
    AWS_ACCESSANALYZER_API Finding(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Finding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the finding.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Finding& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Finding& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Finding& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPrincipal() const{ return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    inline void SetPrincipal(const Aws::Map<Aws::String, Aws::String>& value) { m_principalHasBeenSet = true; m_principal = value; }
    inline void SetPrincipal(Aws::Map<Aws::String, Aws::String>&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }
    inline Finding& WithPrincipal(const Aws::Map<Aws::String, Aws::String>& value) { SetPrincipal(value); return *this;}
    inline Finding& WithPrincipal(Aws::Map<Aws::String, Aws::String>&& value) { SetPrincipal(std::move(value)); return *this;}
    inline Finding& AddPrincipal(const Aws::String& key, const Aws::String& value) { m_principalHasBeenSet = true; m_principal.emplace(key, value); return *this; }
    inline Finding& AddPrincipal(Aws::String&& key, const Aws::String& value) { m_principalHasBeenSet = true; m_principal.emplace(std::move(key), value); return *this; }
    inline Finding& AddPrincipal(const Aws::String& key, Aws::String&& value) { m_principalHasBeenSet = true; m_principal.emplace(key, std::move(value)); return *this; }
    inline Finding& AddPrincipal(Aws::String&& key, Aws::String&& value) { m_principalHasBeenSet = true; m_principal.emplace(std::move(key), std::move(value)); return *this; }
    inline Finding& AddPrincipal(const char* key, Aws::String&& value) { m_principalHasBeenSet = true; m_principal.emplace(key, std::move(value)); return *this; }
    inline Finding& AddPrincipal(Aws::String&& key, const char* value) { m_principalHasBeenSet = true; m_principal.emplace(std::move(key), value); return *this; }
    inline Finding& AddPrincipal(const char* key, const char* value) { m_principalHasBeenSet = true; m_principal.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to use.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const Aws::Vector<Aws::String>& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(Aws::Vector<Aws::String>&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline Finding& WithAction(const Aws::Vector<Aws::String>& value) { SetAction(value); return *this;}
    inline Finding& WithAction(Aws::Vector<Aws::String>&& value) { SetAction(std::move(value)); return *this;}
    inline Finding& AddAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action.push_back(value); return *this; }
    inline Finding& AddAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action.push_back(std::move(value)); return *this; }
    inline Finding& AddAction(const char* value) { m_actionHasBeenSet = true; m_action.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The resource that an external principal has access to.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }
    inline Finding& WithResource(const Aws::String& value) { SetResource(value); return *this;}
    inline Finding& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}
    inline Finding& WithResource(const char* value) { SetResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the policy that generated the finding allows public access
     * to the resource.</p>
     */
    inline bool GetIsPublic() const{ return m_isPublic; }
    inline bool IsPublicHasBeenSet() const { return m_isPublicHasBeenSet; }
    inline void SetIsPublic(bool value) { m_isPublicHasBeenSet = true; m_isPublic = value; }
    inline Finding& WithIsPublic(bool value) { SetIsPublic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the resource identified in the finding.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline Finding& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline Finding& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCondition() const{ return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    inline void SetCondition(const Aws::Map<Aws::String, Aws::String>& value) { m_conditionHasBeenSet = true; m_condition = value; }
    inline void SetCondition(Aws::Map<Aws::String, Aws::String>&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }
    inline Finding& WithCondition(const Aws::Map<Aws::String, Aws::String>& value) { SetCondition(value); return *this;}
    inline Finding& WithCondition(Aws::Map<Aws::String, Aws::String>&& value) { SetCondition(std::move(value)); return *this;}
    inline Finding& AddCondition(const Aws::String& key, const Aws::String& value) { m_conditionHasBeenSet = true; m_condition.emplace(key, value); return *this; }
    inline Finding& AddCondition(Aws::String&& key, const Aws::String& value) { m_conditionHasBeenSet = true; m_condition.emplace(std::move(key), value); return *this; }
    inline Finding& AddCondition(const Aws::String& key, Aws::String&& value) { m_conditionHasBeenSet = true; m_condition.emplace(key, std::move(value)); return *this; }
    inline Finding& AddCondition(Aws::String&& key, Aws::String&& value) { m_conditionHasBeenSet = true; m_condition.emplace(std::move(key), std::move(value)); return *this; }
    inline Finding& AddCondition(const char* key, Aws::String&& value) { m_conditionHasBeenSet = true; m_condition.emplace(key, std::move(value)); return *this; }
    inline Finding& AddCondition(Aws::String&& key, const char* value) { m_conditionHasBeenSet = true; m_condition.emplace(std::move(key), value); return *this; }
    inline Finding& AddCondition(const char* key, const char* value) { m_conditionHasBeenSet = true; m_condition.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the finding was generated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Finding& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Finding& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the resource was analyzed.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalyzedAt() const{ return m_analyzedAt; }
    inline bool AnalyzedAtHasBeenSet() const { return m_analyzedAtHasBeenSet; }
    inline void SetAnalyzedAt(const Aws::Utils::DateTime& value) { m_analyzedAtHasBeenSet = true; m_analyzedAt = value; }
    inline void SetAnalyzedAt(Aws::Utils::DateTime&& value) { m_analyzedAtHasBeenSet = true; m_analyzedAt = std::move(value); }
    inline Finding& WithAnalyzedAt(const Aws::Utils::DateTime& value) { SetAnalyzedAt(value); return *this;}
    inline Finding& WithAnalyzedAt(Aws::Utils::DateTime&& value) { SetAnalyzedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the finding was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline Finding& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline Finding& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the finding.</p>
     */
    inline const FindingStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const FindingStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(FindingStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Finding& WithStatus(const FindingStatus& value) { SetStatus(value); return *this;}
    inline Finding& WithStatus(FindingStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID that owns the resource.</p>
     */
    inline const Aws::String& GetResourceOwnerAccount() const{ return m_resourceOwnerAccount; }
    inline bool ResourceOwnerAccountHasBeenSet() const { return m_resourceOwnerAccountHasBeenSet; }
    inline void SetResourceOwnerAccount(const Aws::String& value) { m_resourceOwnerAccountHasBeenSet = true; m_resourceOwnerAccount = value; }
    inline void SetResourceOwnerAccount(Aws::String&& value) { m_resourceOwnerAccountHasBeenSet = true; m_resourceOwnerAccount = std::move(value); }
    inline void SetResourceOwnerAccount(const char* value) { m_resourceOwnerAccountHasBeenSet = true; m_resourceOwnerAccount.assign(value); }
    inline Finding& WithResourceOwnerAccount(const Aws::String& value) { SetResourceOwnerAccount(value); return *this;}
    inline Finding& WithResourceOwnerAccount(Aws::String&& value) { SetResourceOwnerAccount(std::move(value)); return *this;}
    inline Finding& WithResourceOwnerAccount(const char* value) { SetResourceOwnerAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }
    inline Finding& WithError(const Aws::String& value) { SetError(value); return *this;}
    inline Finding& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}
    inline Finding& WithError(const char* value) { SetError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sources of the finding. This indicates how the access that generated the
     * finding is granted. It is populated for Amazon S3 bucket findings.</p>
     */
    inline const Aws::Vector<FindingSource>& GetSources() const{ return m_sources; }
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
    inline void SetSources(const Aws::Vector<FindingSource>& value) { m_sourcesHasBeenSet = true; m_sources = value; }
    inline void SetSources(Aws::Vector<FindingSource>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }
    inline Finding& WithSources(const Aws::Vector<FindingSource>& value) { SetSources(value); return *this;}
    inline Finding& WithSources(Aws::Vector<FindingSource>&& value) { SetSources(std::move(value)); return *this;}
    inline Finding& AddSources(const FindingSource& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }
    inline Finding& AddSources(FindingSource&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }
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

    bool m_isPublic;
    bool m_isPublicHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_condition;
    bool m_conditionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_analyzedAt;
    bool m_analyzedAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    FindingStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_resourceOwnerAccount;
    bool m_resourceOwnerAccountHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::Vector<FindingSource> m_sources;
    bool m_sourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
