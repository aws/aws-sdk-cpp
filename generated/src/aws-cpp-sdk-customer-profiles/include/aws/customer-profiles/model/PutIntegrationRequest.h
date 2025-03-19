/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/customer-profiles/model/FlowDefinition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class PutIntegrationRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API PutIntegrationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutIntegration"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    PutIntegrationRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
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
    PutIntegrationRequest& WithUri(UriT&& value) { SetUri(std::forward<UriT>(value)); return *this;}
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
    PutIntegrationRequest& WithObjectTypeName(ObjectTypeNameT&& value) { SetObjectTypeName(std::forward<ObjectTypeNameT>(value)); return *this;}
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
    PutIntegrationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    PutIntegrationRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The configuration that controls how Customer Profiles retrieves data from the
     * source.</p>
     */
    inline const FlowDefinition& GetFlowDefinition() const { return m_flowDefinition; }
    inline bool FlowDefinitionHasBeenSet() const { return m_flowDefinitionHasBeenSet; }
    template<typename FlowDefinitionT = FlowDefinition>
    void SetFlowDefinition(FlowDefinitionT&& value) { m_flowDefinitionHasBeenSet = true; m_flowDefinition = std::forward<FlowDefinitionT>(value); }
    template<typename FlowDefinitionT = FlowDefinition>
    PutIntegrationRequest& WithFlowDefinition(FlowDefinitionT&& value) { SetFlowDefinition(std::forward<FlowDefinitionT>(value)); return *this;}
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
    PutIntegrationRequest& WithObjectTypeNames(ObjectTypeNamesT&& value) { SetObjectTypeNames(std::forward<ObjectTypeNamesT>(value)); return *this;}
    template<typename ObjectTypeNamesKeyT = Aws::String, typename ObjectTypeNamesValueT = Aws::String>
    PutIntegrationRequest& AddObjectTypeNames(ObjectTypeNamesKeyT&& key, ObjectTypeNamesValueT&& value) {
      m_objectTypeNamesHasBeenSet = true; m_objectTypeNames.emplace(std::forward<ObjectTypeNamesKeyT>(key), std::forward<ObjectTypeNamesValueT>(value)); return *this;
    }
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
    PutIntegrationRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
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
    PutIntegrationRequest& WithEventTriggerNames(EventTriggerNamesT&& value) { SetEventTriggerNames(std::forward<EventTriggerNamesT>(value)); return *this;}
    template<typename EventTriggerNamesT = Aws::String>
    PutIntegrationRequest& AddEventTriggerNames(EventTriggerNamesT&& value) { m_eventTriggerNamesHasBeenSet = true; m_eventTriggerNames.emplace_back(std::forward<EventTriggerNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;

    Aws::String m_objectTypeName;
    bool m_objectTypeNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    FlowDefinition m_flowDefinition;
    bool m_flowDefinitionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_objectTypeNames;
    bool m_objectTypeNamesHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_eventTriggerNames;
    bool m_eventTriggerNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
