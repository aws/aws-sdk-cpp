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
    AWS_CUSTOMERPROFILES_API PutIntegrationRequest();

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
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline PutIntegrationRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline PutIntegrationRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline PutIntegrationRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
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
    inline PutIntegrationRequest& WithUri(const Aws::String& value) { SetUri(value); return *this;}
    inline PutIntegrationRequest& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}
    inline PutIntegrationRequest& WithUri(const char* value) { SetUri(value); return *this;}
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
    inline PutIntegrationRequest& WithObjectTypeName(const Aws::String& value) { SetObjectTypeName(value); return *this;}
    inline PutIntegrationRequest& WithObjectTypeName(Aws::String&& value) { SetObjectTypeName(std::move(value)); return *this;}
    inline PutIntegrationRequest& WithObjectTypeName(const char* value) { SetObjectTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline PutIntegrationRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline PutIntegrationRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline PutIntegrationRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline PutIntegrationRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline PutIntegrationRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline PutIntegrationRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline PutIntegrationRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline PutIntegrationRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline PutIntegrationRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration that controls how Customer Profiles retrieves data from the
     * source.</p>
     */
    inline const FlowDefinition& GetFlowDefinition() const{ return m_flowDefinition; }
    inline bool FlowDefinitionHasBeenSet() const { return m_flowDefinitionHasBeenSet; }
    inline void SetFlowDefinition(const FlowDefinition& value) { m_flowDefinitionHasBeenSet = true; m_flowDefinition = value; }
    inline void SetFlowDefinition(FlowDefinition&& value) { m_flowDefinitionHasBeenSet = true; m_flowDefinition = std::move(value); }
    inline PutIntegrationRequest& WithFlowDefinition(const FlowDefinition& value) { SetFlowDefinition(value); return *this;}
    inline PutIntegrationRequest& WithFlowDefinition(FlowDefinition&& value) { SetFlowDefinition(std::move(value)); return *this;}
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
    inline PutIntegrationRequest& WithObjectTypeNames(const Aws::Map<Aws::String, Aws::String>& value) { SetObjectTypeNames(value); return *this;}
    inline PutIntegrationRequest& WithObjectTypeNames(Aws::Map<Aws::String, Aws::String>&& value) { SetObjectTypeNames(std::move(value)); return *this;}
    inline PutIntegrationRequest& AddObjectTypeNames(const Aws::String& key, const Aws::String& value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames.emplace(key, value); return *this; }
    inline PutIntegrationRequest& AddObjectTypeNames(Aws::String&& key, const Aws::String& value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames.emplace(std::move(key), value); return *this; }
    inline PutIntegrationRequest& AddObjectTypeNames(const Aws::String& key, Aws::String&& value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames.emplace(key, std::move(value)); return *this; }
    inline PutIntegrationRequest& AddObjectTypeNames(Aws::String&& key, Aws::String&& value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames.emplace(std::move(key), std::move(value)); return *this; }
    inline PutIntegrationRequest& AddObjectTypeNames(const char* key, Aws::String&& value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames.emplace(key, std::move(value)); return *this; }
    inline PutIntegrationRequest& AddObjectTypeNames(Aws::String&& key, const char* value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames.emplace(std::move(key), value); return *this; }
    inline PutIntegrationRequest& AddObjectTypeNames(const char* key, const char* value) { m_objectTypeNamesHasBeenSet = true; m_objectTypeNames.emplace(key, value); return *this; }
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
    inline PutIntegrationRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline PutIntegrationRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline PutIntegrationRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
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
    inline PutIntegrationRequest& WithEventTriggerNames(const Aws::Vector<Aws::String>& value) { SetEventTriggerNames(value); return *this;}
    inline PutIntegrationRequest& WithEventTriggerNames(Aws::Vector<Aws::String>&& value) { SetEventTriggerNames(std::move(value)); return *this;}
    inline PutIntegrationRequest& AddEventTriggerNames(const Aws::String& value) { m_eventTriggerNamesHasBeenSet = true; m_eventTriggerNames.push_back(value); return *this; }
    inline PutIntegrationRequest& AddEventTriggerNames(Aws::String&& value) { m_eventTriggerNamesHasBeenSet = true; m_eventTriggerNames.push_back(std::move(value)); return *this; }
    inline PutIntegrationRequest& AddEventTriggerNames(const char* value) { m_eventTriggerNamesHasBeenSet = true; m_eventTriggerNames.push_back(value); return *this; }
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
