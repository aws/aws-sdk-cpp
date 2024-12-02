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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CustomerProfiles
{
namespace Model
{
  class PutIntegrationResult
  {
  public:
    AWS_CUSTOMERPROFILES_API PutIntegrationResult();
    AWS_CUSTOMERPROFILES_API PutIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API PutIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }
    inline PutIntegrationResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline PutIntegrationResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline PutIntegrationResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the S3 bucket or any other type of data source.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }
    inline void SetUri(const Aws::String& value) { m_uri = value; }
    inline void SetUri(Aws::String&& value) { m_uri = std::move(value); }
    inline void SetUri(const char* value) { m_uri.assign(value); }
    inline PutIntegrationResult& WithUri(const Aws::String& value) { SetUri(value); return *this;}
    inline PutIntegrationResult& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}
    inline PutIntegrationResult& WithUri(const char* value) { SetUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the profile object type.</p>
     */
    inline const Aws::String& GetObjectTypeName() const{ return m_objectTypeName; }
    inline void SetObjectTypeName(const Aws::String& value) { m_objectTypeName = value; }
    inline void SetObjectTypeName(Aws::String&& value) { m_objectTypeName = std::move(value); }
    inline void SetObjectTypeName(const char* value) { m_objectTypeName.assign(value); }
    inline PutIntegrationResult& WithObjectTypeName(const Aws::String& value) { SetObjectTypeName(value); return *this;}
    inline PutIntegrationResult& WithObjectTypeName(Aws::String&& value) { SetObjectTypeName(std::move(value)); return *this;}
    inline PutIntegrationResult& WithObjectTypeName(const char* value) { SetObjectTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline PutIntegrationResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline PutIntegrationResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the domain was most recently edited.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline PutIntegrationResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline PutIntegrationResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline PutIntegrationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline PutIntegrationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline PutIntegrationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline PutIntegrationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline PutIntegrationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline PutIntegrationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline PutIntegrationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline PutIntegrationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline PutIntegrationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
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
    inline void SetObjectTypeNames(const Aws::Map<Aws::String, Aws::String>& value) { m_objectTypeNames = value; }
    inline void SetObjectTypeNames(Aws::Map<Aws::String, Aws::String>&& value) { m_objectTypeNames = std::move(value); }
    inline PutIntegrationResult& WithObjectTypeNames(const Aws::Map<Aws::String, Aws::String>& value) { SetObjectTypeNames(value); return *this;}
    inline PutIntegrationResult& WithObjectTypeNames(Aws::Map<Aws::String, Aws::String>&& value) { SetObjectTypeNames(std::move(value)); return *this;}
    inline PutIntegrationResult& AddObjectTypeNames(const Aws::String& key, const Aws::String& value) { m_objectTypeNames.emplace(key, value); return *this; }
    inline PutIntegrationResult& AddObjectTypeNames(Aws::String&& key, const Aws::String& value) { m_objectTypeNames.emplace(std::move(key), value); return *this; }
    inline PutIntegrationResult& AddObjectTypeNames(const Aws::String& key, Aws::String&& value) { m_objectTypeNames.emplace(key, std::move(value)); return *this; }
    inline PutIntegrationResult& AddObjectTypeNames(Aws::String&& key, Aws::String&& value) { m_objectTypeNames.emplace(std::move(key), std::move(value)); return *this; }
    inline PutIntegrationResult& AddObjectTypeNames(const char* key, Aws::String&& value) { m_objectTypeNames.emplace(key, std::move(value)); return *this; }
    inline PutIntegrationResult& AddObjectTypeNames(Aws::String&& key, const char* value) { m_objectTypeNames.emplace(std::move(key), value); return *this; }
    inline PutIntegrationResult& AddObjectTypeNames(const char* key, const char* value) { m_objectTypeNames.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }
    inline void SetWorkflowId(const Aws::String& value) { m_workflowId = value; }
    inline void SetWorkflowId(Aws::String&& value) { m_workflowId = std::move(value); }
    inline void SetWorkflowId(const char* value) { m_workflowId.assign(value); }
    inline PutIntegrationResult& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}
    inline PutIntegrationResult& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}
    inline PutIntegrationResult& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean that shows if the Flow that's associated with the Integration is
     * created in Amazon Appflow, or with ObjectTypeName equals _unstructured via
     * API/CLI in flowDefinition.</p>
     */
    inline bool GetIsUnstructured() const{ return m_isUnstructured; }
    inline void SetIsUnstructured(bool value) { m_isUnstructured = value; }
    inline PutIntegrationResult& WithIsUnstructured(bool value) { SetIsUnstructured(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. The Integration uses this
     * role to make Customer Profiles requests on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline PutIntegrationResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline PutIntegrationResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline PutIntegrationResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of unique names for active event triggers associated with the
     * integration. This list would be empty if no Event Trigger is associated with the
     * integration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEventTriggerNames() const{ return m_eventTriggerNames; }
    inline void SetEventTriggerNames(const Aws::Vector<Aws::String>& value) { m_eventTriggerNames = value; }
    inline void SetEventTriggerNames(Aws::Vector<Aws::String>&& value) { m_eventTriggerNames = std::move(value); }
    inline PutIntegrationResult& WithEventTriggerNames(const Aws::Vector<Aws::String>& value) { SetEventTriggerNames(value); return *this;}
    inline PutIntegrationResult& WithEventTriggerNames(Aws::Vector<Aws::String>&& value) { SetEventTriggerNames(std::move(value)); return *this;}
    inline PutIntegrationResult& AddEventTriggerNames(const Aws::String& value) { m_eventTriggerNames.push_back(value); return *this; }
    inline PutIntegrationResult& AddEventTriggerNames(Aws::String&& value) { m_eventTriggerNames.push_back(std::move(value)); return *this; }
    inline PutIntegrationResult& AddEventTriggerNames(const char* value) { m_eventTriggerNames.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutIntegrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutIntegrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutIntegrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;

    Aws::String m_uri;

    Aws::String m_objectTypeName;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Map<Aws::String, Aws::String> m_objectTypeNames;

    Aws::String m_workflowId;

    bool m_isUnstructured;

    Aws::String m_roleArn;

    Aws::Vector<Aws::String> m_eventTriggerNames;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
