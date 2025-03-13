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
    AWS_CUSTOMERPROFILES_API ListIntegrationItem() = default;
    AWS_CUSTOMERPROFILES_API ListIntegrationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ListIntegrationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    ListIntegrationItem& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the S3 bucket or any other type of data source.</p>
     */
    inline const Aws::String& GetUri() const { return m_uri; }
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
    template<typename UriT = Aws::String>
    void SetUri(UriT&& value) { m_uriHasBeenSet = true; m_uri = std::forward<UriT>(value); }
    template<typename UriT = Aws::String>
    ListIntegrationItem& WithUri(UriT&& value) { SetUri(std::forward<UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the profile object type.</p>
     */
    inline const Aws::String& GetObjectTypeName() const { return m_objectTypeName; }
    inline bool ObjectTypeNameHasBeenSet() const { return m_objectTypeNameHasBeenSet; }
    template<typename ObjectTypeNameT = Aws::String>
    void SetObjectTypeName(ObjectTypeNameT&& value) { m_objectTypeNameHasBeenSet = true; m_objectTypeName = std::forward<ObjectTypeNameT>(value); }
    template<typename ObjectTypeNameT = Aws::String>
    ListIntegrationItem& WithObjectTypeName(ObjectTypeNameT&& value) { SetObjectTypeName(std::forward<ObjectTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ListIntegrationItem& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the domain was most recently edited.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    ListIntegrationItem& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ListIntegrationItem& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ListIntegrationItem& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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
    inline const Aws::Map<Aws::String, Aws::String>& GetObjectTypeNames() const { return m_objectTypeNames; }
    inline bool ObjectTypeNamesHasBeenSet() const { return m_objectTypeNamesHasBeenSet; }
    template<typename ObjectTypeNamesT = Aws::Map<Aws::String, Aws::String>>
    void SetObjectTypeNames(ObjectTypeNamesT&& value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames = std::forward<ObjectTypeNamesT>(value); }
    template<typename ObjectTypeNamesT = Aws::Map<Aws::String, Aws::String>>
    ListIntegrationItem& WithObjectTypeNames(ObjectTypeNamesT&& value) { SetObjectTypeNames(std::forward<ObjectTypeNamesT>(value)); return *this;}
    template<typename ObjectTypeNamesKeyT = Aws::String, typename ObjectTypeNamesValueT = Aws::String>
    ListIntegrationItem& AddObjectTypeNames(ObjectTypeNamesKeyT&& key, ObjectTypeNamesValueT&& value) {
      m_objectTypeNamesHasBeenSet = true; m_objectTypeNames.emplace(std::forward<ObjectTypeNamesKeyT>(key), std::forward<ObjectTypeNamesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const { return m_workflowId; }
    inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }
    template<typename WorkflowIdT = Aws::String>
    void SetWorkflowId(WorkflowIdT&& value) { m_workflowIdHasBeenSet = true; m_workflowId = std::forward<WorkflowIdT>(value); }
    template<typename WorkflowIdT = Aws::String>
    ListIntegrationItem& WithWorkflowId(WorkflowIdT&& value) { SetWorkflowId(std::forward<WorkflowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean that shows if the Flow that's associated with the Integration is
     * created in Amazon Appflow, or with ObjectTypeName equals _unstructured via
     * API/CLI in flowDefinition.</p>
     */
    inline bool GetIsUnstructured() const { return m_isUnstructured; }
    inline bool IsUnstructuredHasBeenSet() const { return m_isUnstructuredHasBeenSet; }
    inline void SetIsUnstructured(bool value) { m_isUnstructuredHasBeenSet = true; m_isUnstructured = value; }
    inline ListIntegrationItem& WithIsUnstructured(bool value) { SetIsUnstructured(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. The Integration uses this
     * role to make Customer Profiles requests on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    ListIntegrationItem& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of unique names for active event triggers associated with the
     * integration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventTriggerNames() const { return m_eventTriggerNames; }
    inline bool EventTriggerNamesHasBeenSet() const { return m_eventTriggerNamesHasBeenSet; }
    template<typename EventTriggerNamesT = Aws::Vector<Aws::String>>
    void SetEventTriggerNames(EventTriggerNamesT&& value) { m_eventTriggerNamesHasBeenSet = true; m_eventTriggerNames = std::forward<EventTriggerNamesT>(value); }
    template<typename EventTriggerNamesT = Aws::Vector<Aws::String>>
    ListIntegrationItem& WithEventTriggerNames(EventTriggerNamesT&& value) { SetEventTriggerNames(std::forward<EventTriggerNamesT>(value)); return *this;}
    template<typename EventTriggerNamesT = Aws::String>
    ListIntegrationItem& AddEventTriggerNames(EventTriggerNamesT&& value) { m_eventTriggerNamesHasBeenSet = true; m_eventTriggerNames.emplace_back(std::forward<EventTriggerNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;

    Aws::String m_objectTypeName;
    bool m_objectTypeNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_objectTypeNames;
    bool m_objectTypeNamesHasBeenSet = false;

    Aws::String m_workflowId;
    bool m_workflowIdHasBeenSet = false;

    bool m_isUnstructured{false};
    bool m_isUnstructuredHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventTriggerNames;
    bool m_eventTriggerNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
