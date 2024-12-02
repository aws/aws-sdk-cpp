/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>An integration in list of integrations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListIntegrationItem">AWS
   * API Reference</a></p>
   */
  class ListIntegrationItem
  {
  public:
    AWS_CUSTOMERPROFILES_API ListIntegrationItem();
    AWS_CUSTOMERPROFILES_API ListIntegrationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ListIntegrationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline ListIntegrationItem& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline ListIntegrationItem& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline ListIntegrationItem& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the S3 bucket or any other type of data source.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }
    inline ListIntegrationItem& WithUri(const Aws::String& value) { SetUri(value); return *this;}
    inline ListIntegrationItem& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}
    inline ListIntegrationItem& WithUri(const char* value) { SetUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the profile object type.</p>
     */
    inline const Aws::String& GetObjectTypeName() const{ return m_objectTypeName; }
    inline bool ObjectTypeNameHasBeenSet() const { return m_objectTypeNameHasBeenSet; }
    inline void SetObjectTypeName(const Aws::String& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = value; }
    inline void SetObjectTypeName(Aws::String&& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = std::move(value); }
    inline void SetObjectTypeName(const char* value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName.assign(value); }
    inline ListIntegrationItem& WithObjectTypeName(const Aws::String& value) { SetObjectTypeName(value); return *this;}
    inline ListIntegrationItem& WithObjectTypeName(Aws::String&& value) { SetObjectTypeName(std::move(value)); return *this;}
    inline ListIntegrationItem& WithObjectTypeName(const char* value) { SetObjectTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ListIntegrationItem& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ListIntegrationItem& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the domain was most recently edited.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline ListIntegrationItem& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline ListIntegrationItem& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ListIntegrationItem& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ListIntegrationItem& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ListIntegrationItem& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ListIntegrationItem& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ListIntegrationItem& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ListIntegrationItem& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ListIntegrationItem& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ListIntegrationItem& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ListIntegrationItem& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map in which each key is an event type from an external application such as
     * Segment or Shopify, and each value is an <code>ObjectTypeName</code> (template)
     * used to ingest the event. It supports the following event types:
     * <code>SegmentIdentify</code>, <code>ShopifyCreateCustomers</code>,
     * <code>ShopifyUpdateCustomers</code>, <code>ShopifyCreateDraftOrders</code>,
     * <code>ShopifyUpdateDraftOrders</code>, <code>ShopifyCreateOrders</code>, and
     * <code>ShopifyUpdatedOrders</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetObjectTypeNames() const{ return m_objectTypeNames; }
    inline bool ObjectTypeNamesHasBeenSet() const { return m_objectTypeNamesHasBeenSet; }
    inline void SetObjectTypeNames(const Aws::Map<Aws::String, Aws::String>& value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames = value; }
    inline void SetObjectTypeNames(Aws::Map<Aws::String, Aws::String>&& value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames = std::move(value); }
    inline ListIntegrationItem& WithObjectTypeNames(const Aws::Map<Aws::String, Aws::String>& value) { SetObjectTypeNames(value); return *this;}
    inline ListIntegrationItem& WithObjectTypeNames(Aws::Map<Aws::String, Aws::String>&& value) { SetObjectTypeNames(std::move(value)); return *this;}
    inline ListIntegrationItem& AddObjectTypeNames(const Aws::String& key, const Aws::String& value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames.emplace(key, value); return *this; }
    inline ListIntegrationItem& AddObjectTypeNames(Aws::String&& key, const Aws::String& value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames.emplace(std::move(key), value); return *this; }
    inline ListIntegrationItem& AddObjectTypeNames(const Aws::String& key, Aws::String&& value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames.emplace(key, std::move(value)); return *this; }
    inline ListIntegrationItem& AddObjectTypeNames(Aws::String&& key, Aws::String&& value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames.emplace(std::move(key), std::move(value)); return *this; }
    inline ListIntegrationItem& AddObjectTypeNames(const char* key, Aws::String&& value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames.emplace(key, std::move(value)); return *this; }
    inline ListIntegrationItem& AddObjectTypeNames(Aws::String&& key, const char* value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames.emplace(std::move(key), value); return *this; }
    inline ListIntegrationItem& AddObjectTypeNames(const char* key, const char* value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }
    inline void SetWorkflowId(const Aws::String& value) { m_workflowIdHasBeenSet = true; m_workflowId = value; }
    inline void SetWorkflowId(Aws::String&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::move(value); }
    inline void SetWorkflowId(const char* value) { m_workflowIdHasBeenSet = true; m_workflowId.assign(value); }
    inline ListIntegrationItem& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}
    inline ListIntegrationItem& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}
    inline ListIntegrationItem& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean that shows if the Flow that's associated with the Integration is
     * created in Amazon Appflow, or with ObjectTypeName equals _unstructured via
     * API/CLI in flowDefinition.</p>
     */
    inline bool GetIsUnstructured() const{ return m_isUnstructured; }
    inline bool IsUnstructuredHasBeenSet() const { return m_isUnstructuredHasBeenSet; }
    inline void SetIsUnstructured(bool value) { m_isUnstructuredHasBeenSet = true; m_isUnstructured = value; }
    inline ListIntegrationItem& WithIsUnstructured(bool value) { SetIsUnstructured(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. The Integration uses this
     * role to make Customer Profiles requests on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline ListIntegrationItem& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline ListIntegrationItem& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline ListIntegrationItem& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of unique names for active event triggers associated with the
     * integration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventTriggerNames() const{ return m_eventTriggerNames; }
    inline bool EventTriggerNamesHasBeenSet() const { return m_eventTriggerNamesHasBeenSet; }
    inline void SetEventTriggerNames(const Aws::Vector<Aws::String>& value) { m_eventTriggerNamesHasBeenSet = true; m_eventTriggerNames = value; }
    inline void SetEventTriggerNames(Aws::Vector<Aws::String>&& value) { m_eventTriggerNamesHasBeenSet = true; m_eventTriggerNames = std::move(value); }
    inline ListIntegrationItem& WithEventTriggerNames(const Aws::Vector<Aws::String>& value) { SetEventTriggerNames(value); return *this;}
    inline ListIntegrationItem& WithEventTriggerNames(Aws::Vector<Aws::String>&& value) { SetEventTriggerNames(std::move(value)); return *this;}
    inline ListIntegrationItem& AddEventTriggerNames(const Aws::String& value) { m_eventTriggerNamesHasBeenSet = true; m_eventTriggerNames.push_back(value); return *this; }
    inline ListIntegrationItem& AddEventTriggerNames(Aws::String&& value) { m_eventTriggerNamesHasBeenSet = true; m_eventTriggerNames.push_back(std::move(value)); return *this; }
    inline ListIntegrationItem& AddEventTriggerNames(const char* value) { m_eventTriggerNamesHasBeenSet = true; m_eventTriggerNames.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;

    Aws::String m_objectTypeName;
    bool m_objectTypeNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_objectTypeNames;
    bool m_objectTypeNamesHasBeenSet = false;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    bool m_isUnstructured;
    bool m_isUnstructuredHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventTriggerNames;
    bool m_eventTriggerNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
