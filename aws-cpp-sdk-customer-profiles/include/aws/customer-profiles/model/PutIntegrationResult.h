﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class AWS_CUSTOMERPROFILES_API PutIntegrationResult
  {
  public:
    PutIntegrationResult();
    PutIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline PutIntegrationResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline PutIntegrationResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline PutIntegrationResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The URI of the S3 bucket or any other type of data source.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>The URI of the S3 bucket or any other type of data source.</p>
     */
    inline void SetUri(const Aws::String& value) { m_uri = value; }

    /**
     * <p>The URI of the S3 bucket or any other type of data source.</p>
     */
    inline void SetUri(Aws::String&& value) { m_uri = std::move(value); }

    /**
     * <p>The URI of the S3 bucket or any other type of data source.</p>
     */
    inline void SetUri(const char* value) { m_uri.assign(value); }

    /**
     * <p>The URI of the S3 bucket or any other type of data source.</p>
     */
    inline PutIntegrationResult& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>The URI of the S3 bucket or any other type of data source.</p>
     */
    inline PutIntegrationResult& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * <p>The URI of the S3 bucket or any other type of data source.</p>
     */
    inline PutIntegrationResult& WithUri(const char* value) { SetUri(value); return *this;}


    /**
     * <p>The name of the profile object type.</p>
     */
    inline const Aws::String& GetObjectTypeName() const{ return m_objectTypeName; }

    /**
     * <p>The name of the profile object type.</p>
     */
    inline void SetObjectTypeName(const Aws::String& value) { m_objectTypeName = value; }

    /**
     * <p>The name of the profile object type.</p>
     */
    inline void SetObjectTypeName(Aws::String&& value) { m_objectTypeName = std::move(value); }

    /**
     * <p>The name of the profile object type.</p>
     */
    inline void SetObjectTypeName(const char* value) { m_objectTypeName.assign(value); }

    /**
     * <p>The name of the profile object type.</p>
     */
    inline PutIntegrationResult& WithObjectTypeName(const Aws::String& value) { SetObjectTypeName(value); return *this;}

    /**
     * <p>The name of the profile object type.</p>
     */
    inline PutIntegrationResult& WithObjectTypeName(Aws::String&& value) { SetObjectTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the profile object type.</p>
     */
    inline PutIntegrationResult& WithObjectTypeName(const char* value) { SetObjectTypeName(value); return *this;}


    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline PutIntegrationResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the domain was created.</p>
     */
    inline PutIntegrationResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the domain was most recently edited.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The timestamp of when the domain was most recently edited.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The timestamp of when the domain was most recently edited.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the domain was most recently edited.</p>
     */
    inline PutIntegrationResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the domain was most recently edited.</p>
     */
    inline PutIntegrationResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutIntegrationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutIntegrationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutIntegrationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutIntegrationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutIntegrationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutIntegrationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutIntegrationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutIntegrationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline PutIntegrationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


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

    /**
     * <p>A map in which each key is an event type from an external application such as
     * Segment or Shopify, and each value is an <code>ObjectTypeName</code> (template)
     * used to ingest the event. It supports the following event types:
     * <code>SegmentIdentify</code>, <code>ShopifyCreateCustomers</code>,
     * <code>ShopifyUpdateCustomers</code>, <code>ShopifyCreateDraftOrders</code>,
     * <code>ShopifyUpdateDraftOrders</code>, <code>ShopifyCreateOrders</code>, and
     * <code>ShopifyUpdatedOrders</code>.</p>
     */
    inline void SetObjectTypeNames(const Aws::Map<Aws::String, Aws::String>& value) { m_objectTypeNames = value; }

    /**
     * <p>A map in which each key is an event type from an external application such as
     * Segment or Shopify, and each value is an <code>ObjectTypeName</code> (template)
     * used to ingest the event. It supports the following event types:
     * <code>SegmentIdentify</code>, <code>ShopifyCreateCustomers</code>,
     * <code>ShopifyUpdateCustomers</code>, <code>ShopifyCreateDraftOrders</code>,
     * <code>ShopifyUpdateDraftOrders</code>, <code>ShopifyCreateOrders</code>, and
     * <code>ShopifyUpdatedOrders</code>.</p>
     */
    inline void SetObjectTypeNames(Aws::Map<Aws::String, Aws::String>&& value) { m_objectTypeNames = std::move(value); }

    /**
     * <p>A map in which each key is an event type from an external application such as
     * Segment or Shopify, and each value is an <code>ObjectTypeName</code> (template)
     * used to ingest the event. It supports the following event types:
     * <code>SegmentIdentify</code>, <code>ShopifyCreateCustomers</code>,
     * <code>ShopifyUpdateCustomers</code>, <code>ShopifyCreateDraftOrders</code>,
     * <code>ShopifyUpdateDraftOrders</code>, <code>ShopifyCreateOrders</code>, and
     * <code>ShopifyUpdatedOrders</code>.</p>
     */
    inline PutIntegrationResult& WithObjectTypeNames(const Aws::Map<Aws::String, Aws::String>& value) { SetObjectTypeNames(value); return *this;}

    /**
     * <p>A map in which each key is an event type from an external application such as
     * Segment or Shopify, and each value is an <code>ObjectTypeName</code> (template)
     * used to ingest the event. It supports the following event types:
     * <code>SegmentIdentify</code>, <code>ShopifyCreateCustomers</code>,
     * <code>ShopifyUpdateCustomers</code>, <code>ShopifyCreateDraftOrders</code>,
     * <code>ShopifyUpdateDraftOrders</code>, <code>ShopifyCreateOrders</code>, and
     * <code>ShopifyUpdatedOrders</code>.</p>
     */
    inline PutIntegrationResult& WithObjectTypeNames(Aws::Map<Aws::String, Aws::String>&& value) { SetObjectTypeNames(std::move(value)); return *this;}

    /**
     * <p>A map in which each key is an event type from an external application such as
     * Segment or Shopify, and each value is an <code>ObjectTypeName</code> (template)
     * used to ingest the event. It supports the following event types:
     * <code>SegmentIdentify</code>, <code>ShopifyCreateCustomers</code>,
     * <code>ShopifyUpdateCustomers</code>, <code>ShopifyCreateDraftOrders</code>,
     * <code>ShopifyUpdateDraftOrders</code>, <code>ShopifyCreateOrders</code>, and
     * <code>ShopifyUpdatedOrders</code>.</p>
     */
    inline PutIntegrationResult& AddObjectTypeNames(const Aws::String& key, const Aws::String& value) { m_objectTypeNames.emplace(key, value); return *this; }

    /**
     * <p>A map in which each key is an event type from an external application such as
     * Segment or Shopify, and each value is an <code>ObjectTypeName</code> (template)
     * used to ingest the event. It supports the following event types:
     * <code>SegmentIdentify</code>, <code>ShopifyCreateCustomers</code>,
     * <code>ShopifyUpdateCustomers</code>, <code>ShopifyCreateDraftOrders</code>,
     * <code>ShopifyUpdateDraftOrders</code>, <code>ShopifyCreateOrders</code>, and
     * <code>ShopifyUpdatedOrders</code>.</p>
     */
    inline PutIntegrationResult& AddObjectTypeNames(Aws::String&& key, const Aws::String& value) { m_objectTypeNames.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map in which each key is an event type from an external application such as
     * Segment or Shopify, and each value is an <code>ObjectTypeName</code> (template)
     * used to ingest the event. It supports the following event types:
     * <code>SegmentIdentify</code>, <code>ShopifyCreateCustomers</code>,
     * <code>ShopifyUpdateCustomers</code>, <code>ShopifyCreateDraftOrders</code>,
     * <code>ShopifyUpdateDraftOrders</code>, <code>ShopifyCreateOrders</code>, and
     * <code>ShopifyUpdatedOrders</code>.</p>
     */
    inline PutIntegrationResult& AddObjectTypeNames(const Aws::String& key, Aws::String&& value) { m_objectTypeNames.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map in which each key is an event type from an external application such as
     * Segment or Shopify, and each value is an <code>ObjectTypeName</code> (template)
     * used to ingest the event. It supports the following event types:
     * <code>SegmentIdentify</code>, <code>ShopifyCreateCustomers</code>,
     * <code>ShopifyUpdateCustomers</code>, <code>ShopifyCreateDraftOrders</code>,
     * <code>ShopifyUpdateDraftOrders</code>, <code>ShopifyCreateOrders</code>, and
     * <code>ShopifyUpdatedOrders</code>.</p>
     */
    inline PutIntegrationResult& AddObjectTypeNames(Aws::String&& key, Aws::String&& value) { m_objectTypeNames.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map in which each key is an event type from an external application such as
     * Segment or Shopify, and each value is an <code>ObjectTypeName</code> (template)
     * used to ingest the event. It supports the following event types:
     * <code>SegmentIdentify</code>, <code>ShopifyCreateCustomers</code>,
     * <code>ShopifyUpdateCustomers</code>, <code>ShopifyCreateDraftOrders</code>,
     * <code>ShopifyUpdateDraftOrders</code>, <code>ShopifyCreateOrders</code>, and
     * <code>ShopifyUpdatedOrders</code>.</p>
     */
    inline PutIntegrationResult& AddObjectTypeNames(const char* key, Aws::String&& value) { m_objectTypeNames.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map in which each key is an event type from an external application such as
     * Segment or Shopify, and each value is an <code>ObjectTypeName</code> (template)
     * used to ingest the event. It supports the following event types:
     * <code>SegmentIdentify</code>, <code>ShopifyCreateCustomers</code>,
     * <code>ShopifyUpdateCustomers</code>, <code>ShopifyCreateDraftOrders</code>,
     * <code>ShopifyUpdateDraftOrders</code>, <code>ShopifyCreateOrders</code>, and
     * <code>ShopifyUpdatedOrders</code>.</p>
     */
    inline PutIntegrationResult& AddObjectTypeNames(Aws::String&& key, const char* value) { m_objectTypeNames.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map in which each key is an event type from an external application such as
     * Segment or Shopify, and each value is an <code>ObjectTypeName</code> (template)
     * used to ingest the event. It supports the following event types:
     * <code>SegmentIdentify</code>, <code>ShopifyCreateCustomers</code>,
     * <code>ShopifyUpdateCustomers</code>, <code>ShopifyCreateDraftOrders</code>,
     * <code>ShopifyUpdateDraftOrders</code>, <code>ShopifyCreateOrders</code>, and
     * <code>ShopifyUpdatedOrders</code>.</p>
     */
    inline PutIntegrationResult& AddObjectTypeNames(const char* key, const char* value) { m_objectTypeNames.emplace(key, value); return *this; }


    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline const Aws::String& GetWorkflowId() const{ return m_workflowId; }

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline void SetWorkflowId(const Aws::String& value) { m_workflowId = value; }

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline void SetWorkflowId(Aws::String&& value) { m_workflowId = std::move(value); }

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline void SetWorkflowId(const char* value) { m_workflowId.assign(value); }

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline PutIntegrationResult& WithWorkflowId(const Aws::String& value) { SetWorkflowId(value); return *this;}

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline PutIntegrationResult& WithWorkflowId(Aws::String&& value) { SetWorkflowId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the workflow.</p>
     */
    inline PutIntegrationResult& WithWorkflowId(const char* value) { SetWorkflowId(value); return *this;}

  private:

    Aws::String m_domainName;

    Aws::String m_uri;

    Aws::String m_objectTypeName;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Map<Aws::String, Aws::String> m_objectTypeNames;

    Aws::String m_workflowId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
