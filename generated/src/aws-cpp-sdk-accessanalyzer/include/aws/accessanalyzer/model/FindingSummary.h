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
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/FindingSummary">AWS
   * API Reference</a></p>
   */
  class FindingSummary
  {
  public:
    AWS_ACCESSANALYZER_API FindingSummary();
    AWS_ACCESSANALYZER_API FindingSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API FindingSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the finding.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the finding.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the finding.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the finding.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the finding.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the finding.</p>
     */
    inline FindingSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the finding.</p>
     */
    inline FindingSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the finding.</p>
     */
    inline FindingSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline void SetPrincipal(const Aws::Map<Aws::String, Aws::String>& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline void SetPrincipal(Aws::Map<Aws::String, Aws::String>&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline FindingSummary& WithPrincipal(const Aws::Map<Aws::String, Aws::String>& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline FindingSummary& WithPrincipal(Aws::Map<Aws::String, Aws::String>&& value) { SetPrincipal(std::move(value)); return *this;}

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline FindingSummary& AddPrincipal(const Aws::String& key, const Aws::String& value) { m_principalHasBeenSet = true; m_principal.emplace(key, value); return *this; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline FindingSummary& AddPrincipal(Aws::String&& key, const Aws::String& value) { m_principalHasBeenSet = true; m_principal.emplace(std::move(key), value); return *this; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline FindingSummary& AddPrincipal(const Aws::String& key, Aws::String&& value) { m_principalHasBeenSet = true; m_principal.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline FindingSummary& AddPrincipal(Aws::String&& key, Aws::String&& value) { m_principalHasBeenSet = true; m_principal.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline FindingSummary& AddPrincipal(const char* key, Aws::String&& value) { m_principalHasBeenSet = true; m_principal.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline FindingSummary& AddPrincipal(Aws::String&& key, const char* value) { m_principalHasBeenSet = true; m_principal.emplace(std::move(key), value); return *this; }

    /**
     * <p>The external principal that has access to a resource within the zone of
     * trust.</p>
     */
    inline FindingSummary& AddPrincipal(const char* key, const char* value) { m_principalHasBeenSet = true; m_principal.emplace(key, value); return *this; }


    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to use.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAction() const{ return m_action; }

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to use.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to use.</p>
     */
    inline void SetAction(const Aws::Vector<Aws::String>& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to use.</p>
     */
    inline void SetAction(Aws::Vector<Aws::String>&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to use.</p>
     */
    inline FindingSummary& WithAction(const Aws::Vector<Aws::String>& value) { SetAction(value); return *this;}

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to use.</p>
     */
    inline FindingSummary& WithAction(Aws::Vector<Aws::String>&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to use.</p>
     */
    inline FindingSummary& AddAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action.push_back(value); return *this; }

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to use.</p>
     */
    inline FindingSummary& AddAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action.push_back(std::move(value)); return *this; }

    /**
     * <p>The action in the analyzed policy statement that an external principal has
     * permission to use.</p>
     */
    inline FindingSummary& AddAction(const char* value) { m_actionHasBeenSet = true; m_action.push_back(value); return *this; }


    /**
     * <p>The resource that the external principal has access to.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The resource that the external principal has access to.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The resource that the external principal has access to.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The resource that the external principal has access to.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The resource that the external principal has access to.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The resource that the external principal has access to.</p>
     */
    inline FindingSummary& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The resource that the external principal has access to.</p>
     */
    inline FindingSummary& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The resource that the external principal has access to.</p>
     */
    inline FindingSummary& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p>Indicates whether the finding reports a resource that has a policy that
     * allows public access.</p>
     */
    inline bool GetIsPublic() const{ return m_isPublic; }

    /**
     * <p>Indicates whether the finding reports a resource that has a policy that
     * allows public access.</p>
     */
    inline bool IsPublicHasBeenSet() const { return m_isPublicHasBeenSet; }

    /**
     * <p>Indicates whether the finding reports a resource that has a policy that
     * allows public access.</p>
     */
    inline void SetIsPublic(bool value) { m_isPublicHasBeenSet = true; m_isPublic = value; }

    /**
     * <p>Indicates whether the finding reports a resource that has a policy that
     * allows public access.</p>
     */
    inline FindingSummary& WithIsPublic(bool value) { SetIsPublic(value); return *this;}


    /**
     * <p>The type of the resource that the external principal has access to.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the resource that the external principal has access to.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of the resource that the external principal has access to.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of the resource that the external principal has access to.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of the resource that the external principal has access to.</p>
     */
    inline FindingSummary& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the resource that the external principal has access to.</p>
     */
    inline FindingSummary& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCondition() const{ return m_condition; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline void SetCondition(const Aws::Map<Aws::String, Aws::String>& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline void SetCondition(Aws::Map<Aws::String, Aws::String>&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline FindingSummary& WithCondition(const Aws::Map<Aws::String, Aws::String>& value) { SetCondition(value); return *this;}

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline FindingSummary& WithCondition(Aws::Map<Aws::String, Aws::String>&& value) { SetCondition(std::move(value)); return *this;}

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline FindingSummary& AddCondition(const Aws::String& key, const Aws::String& value) { m_conditionHasBeenSet = true; m_condition.emplace(key, value); return *this; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline FindingSummary& AddCondition(Aws::String&& key, const Aws::String& value) { m_conditionHasBeenSet = true; m_condition.emplace(std::move(key), value); return *this; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline FindingSummary& AddCondition(const Aws::String& key, Aws::String&& value) { m_conditionHasBeenSet = true; m_condition.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline FindingSummary& AddCondition(Aws::String&& key, Aws::String&& value) { m_conditionHasBeenSet = true; m_condition.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline FindingSummary& AddCondition(const char* key, Aws::String&& value) { m_conditionHasBeenSet = true; m_condition.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline FindingSummary& AddCondition(Aws::String&& key, const char* value) { m_conditionHasBeenSet = true; m_condition.emplace(std::move(key), value); return *this; }

    /**
     * <p>The condition in the analyzed policy statement that resulted in a
     * finding.</p>
     */
    inline FindingSummary& AddCondition(const char* key, const char* value) { m_conditionHasBeenSet = true; m_condition.emplace(key, value); return *this; }


    /**
     * <p>The time at which the finding was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the finding was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time at which the finding was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time at which the finding was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time at which the finding was created.</p>
     */
    inline FindingSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the finding was created.</p>
     */
    inline FindingSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time at which the resource-based policy that generated the finding was
     * analyzed.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalyzedAt() const{ return m_analyzedAt; }

    /**
     * <p>The time at which the resource-based policy that generated the finding was
     * analyzed.</p>
     */
    inline bool AnalyzedAtHasBeenSet() const { return m_analyzedAtHasBeenSet; }

    /**
     * <p>The time at which the resource-based policy that generated the finding was
     * analyzed.</p>
     */
    inline void SetAnalyzedAt(const Aws::Utils::DateTime& value) { m_analyzedAtHasBeenSet = true; m_analyzedAt = value; }

    /**
     * <p>The time at which the resource-based policy that generated the finding was
     * analyzed.</p>
     */
    inline void SetAnalyzedAt(Aws::Utils::DateTime&& value) { m_analyzedAtHasBeenSet = true; m_analyzedAt = std::move(value); }

    /**
     * <p>The time at which the resource-based policy that generated the finding was
     * analyzed.</p>
     */
    inline FindingSummary& WithAnalyzedAt(const Aws::Utils::DateTime& value) { SetAnalyzedAt(value); return *this;}

    /**
     * <p>The time at which the resource-based policy that generated the finding was
     * analyzed.</p>
     */
    inline FindingSummary& WithAnalyzedAt(Aws::Utils::DateTime&& value) { SetAnalyzedAt(std::move(value)); return *this;}


    /**
     * <p>The time at which the finding was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The time at which the finding was most recently updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The time at which the finding was most recently updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The time at which the finding was most recently updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The time at which the finding was most recently updated.</p>
     */
    inline FindingSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time at which the finding was most recently updated.</p>
     */
    inline FindingSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The status of the finding.</p>
     */
    inline const FindingStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the finding.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the finding.</p>
     */
    inline void SetStatus(const FindingStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the finding.</p>
     */
    inline void SetStatus(FindingStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the finding.</p>
     */
    inline FindingSummary& WithStatus(const FindingStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the finding.</p>
     */
    inline FindingSummary& WithStatus(FindingStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services account ID that owns the resource.</p>
     */
    inline const Aws::String& GetResourceOwnerAccount() const{ return m_resourceOwnerAccount; }

    /**
     * <p>The Amazon Web Services account ID that owns the resource.</p>
     */
    inline bool ResourceOwnerAccountHasBeenSet() const { return m_resourceOwnerAccountHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID that owns the resource.</p>
     */
    inline void SetResourceOwnerAccount(const Aws::String& value) { m_resourceOwnerAccountHasBeenSet = true; m_resourceOwnerAccount = value; }

    /**
     * <p>The Amazon Web Services account ID that owns the resource.</p>
     */
    inline void SetResourceOwnerAccount(Aws::String&& value) { m_resourceOwnerAccountHasBeenSet = true; m_resourceOwnerAccount = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID that owns the resource.</p>
     */
    inline void SetResourceOwnerAccount(const char* value) { m_resourceOwnerAccountHasBeenSet = true; m_resourceOwnerAccount.assign(value); }

    /**
     * <p>The Amazon Web Services account ID that owns the resource.</p>
     */
    inline FindingSummary& WithResourceOwnerAccount(const Aws::String& value) { SetResourceOwnerAccount(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID that owns the resource.</p>
     */
    inline FindingSummary& WithResourceOwnerAccount(Aws::String&& value) { SetResourceOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID that owns the resource.</p>
     */
    inline FindingSummary& WithResourceOwnerAccount(const char* value) { SetResourceOwnerAccount(value); return *this;}


    /**
     * <p>The error that resulted in an Error finding.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }

    /**
     * <p>The error that resulted in an Error finding.</p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>The error that resulted in an Error finding.</p>
     */
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>The error that resulted in an Error finding.</p>
     */
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>The error that resulted in an Error finding.</p>
     */
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }

    /**
     * <p>The error that resulted in an Error finding.</p>
     */
    inline FindingSummary& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>The error that resulted in an Error finding.</p>
     */
    inline FindingSummary& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    /**
     * <p>The error that resulted in an Error finding.</p>
     */
    inline FindingSummary& WithError(const char* value) { SetError(value); return *this;}


    /**
     * <p>The sources of the finding. This indicates how the access that generated the
     * finding is granted. It is populated for Amazon S3 bucket findings.</p>
     */
    inline const Aws::Vector<FindingSource>& GetSources() const{ return m_sources; }

    /**
     * <p>The sources of the finding. This indicates how the access that generated the
     * finding is granted. It is populated for Amazon S3 bucket findings.</p>
     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * <p>The sources of the finding. This indicates how the access that generated the
     * finding is granted. It is populated for Amazon S3 bucket findings.</p>
     */
    inline void SetSources(const Aws::Vector<FindingSource>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * <p>The sources of the finding. This indicates how the access that generated the
     * finding is granted. It is populated for Amazon S3 bucket findings.</p>
     */
    inline void SetSources(Aws::Vector<FindingSource>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * <p>The sources of the finding. This indicates how the access that generated the
     * finding is granted. It is populated for Amazon S3 bucket findings.</p>
     */
    inline FindingSummary& WithSources(const Aws::Vector<FindingSource>& value) { SetSources(value); return *this;}

    /**
     * <p>The sources of the finding. This indicates how the access that generated the
     * finding is granted. It is populated for Amazon S3 bucket findings.</p>
     */
    inline FindingSummary& WithSources(Aws::Vector<FindingSource>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * <p>The sources of the finding. This indicates how the access that generated the
     * finding is granted. It is populated for Amazon S3 bucket findings.</p>
     */
    inline FindingSummary& AddSources(const FindingSource& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * <p>The sources of the finding. This indicates how the access that generated the
     * finding is granted. It is populated for Amazon S3 bucket findings.</p>
     */
    inline FindingSummary& AddSources(FindingSource&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }

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
