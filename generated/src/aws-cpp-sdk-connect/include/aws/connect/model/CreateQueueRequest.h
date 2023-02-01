/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/OutboundCallerConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class CreateQueueRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API CreateQueueRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateQueue"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline CreateQueueRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline CreateQueueRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline CreateQueueRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The name of the queue.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the queue.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the queue.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the queue.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the queue.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the queue.</p>
     */
    inline CreateQueueRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the queue.</p>
     */
    inline CreateQueueRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the queue.</p>
     */
    inline CreateQueueRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the queue.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the queue.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the queue.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the queue.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the queue.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the queue.</p>
     */
    inline CreateQueueRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the queue.</p>
     */
    inline CreateQueueRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the queue.</p>
     */
    inline CreateQueueRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The outbound caller ID name, number, and outbound whisper flow.</p>
     */
    inline const OutboundCallerConfig& GetOutboundCallerConfig() const{ return m_outboundCallerConfig; }

    /**
     * <p>The outbound caller ID name, number, and outbound whisper flow.</p>
     */
    inline bool OutboundCallerConfigHasBeenSet() const { return m_outboundCallerConfigHasBeenSet; }

    /**
     * <p>The outbound caller ID name, number, and outbound whisper flow.</p>
     */
    inline void SetOutboundCallerConfig(const OutboundCallerConfig& value) { m_outboundCallerConfigHasBeenSet = true; m_outboundCallerConfig = value; }

    /**
     * <p>The outbound caller ID name, number, and outbound whisper flow.</p>
     */
    inline void SetOutboundCallerConfig(OutboundCallerConfig&& value) { m_outboundCallerConfigHasBeenSet = true; m_outboundCallerConfig = std::move(value); }

    /**
     * <p>The outbound caller ID name, number, and outbound whisper flow.</p>
     */
    inline CreateQueueRequest& WithOutboundCallerConfig(const OutboundCallerConfig& value) { SetOutboundCallerConfig(value); return *this;}

    /**
     * <p>The outbound caller ID name, number, and outbound whisper flow.</p>
     */
    inline CreateQueueRequest& WithOutboundCallerConfig(OutboundCallerConfig&& value) { SetOutboundCallerConfig(std::move(value)); return *this;}


    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline const Aws::String& GetHoursOfOperationId() const{ return m_hoursOfOperationId; }

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline bool HoursOfOperationIdHasBeenSet() const { return m_hoursOfOperationIdHasBeenSet; }

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline void SetHoursOfOperationId(const Aws::String& value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId = value; }

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline void SetHoursOfOperationId(Aws::String&& value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId = std::move(value); }

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline void SetHoursOfOperationId(const char* value) { m_hoursOfOperationIdHasBeenSet = true; m_hoursOfOperationId.assign(value); }

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline CreateQueueRequest& WithHoursOfOperationId(const Aws::String& value) { SetHoursOfOperationId(value); return *this;}

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline CreateQueueRequest& WithHoursOfOperationId(Aws::String&& value) { SetHoursOfOperationId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the hours of operation.</p>
     */
    inline CreateQueueRequest& WithHoursOfOperationId(const char* value) { SetHoursOfOperationId(value); return *this;}


    /**
     * <p>The maximum number of contacts that can be in the queue before it is
     * considered full.</p>
     */
    inline int GetMaxContacts() const{ return m_maxContacts; }

    /**
     * <p>The maximum number of contacts that can be in the queue before it is
     * considered full.</p>
     */
    inline bool MaxContactsHasBeenSet() const { return m_maxContactsHasBeenSet; }

    /**
     * <p>The maximum number of contacts that can be in the queue before it is
     * considered full.</p>
     */
    inline void SetMaxContacts(int value) { m_maxContactsHasBeenSet = true; m_maxContacts = value; }

    /**
     * <p>The maximum number of contacts that can be in the queue before it is
     * considered full.</p>
     */
    inline CreateQueueRequest& WithMaxContacts(int value) { SetMaxContacts(value); return *this;}


    /**
     * <p>The quick connects available to agents who are working the queue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQuickConnectIds() const{ return m_quickConnectIds; }

    /**
     * <p>The quick connects available to agents who are working the queue.</p>
     */
    inline bool QuickConnectIdsHasBeenSet() const { return m_quickConnectIdsHasBeenSet; }

    /**
     * <p>The quick connects available to agents who are working the queue.</p>
     */
    inline void SetQuickConnectIds(const Aws::Vector<Aws::String>& value) { m_quickConnectIdsHasBeenSet = true; m_quickConnectIds = value; }

    /**
     * <p>The quick connects available to agents who are working the queue.</p>
     */
    inline void SetQuickConnectIds(Aws::Vector<Aws::String>&& value) { m_quickConnectIdsHasBeenSet = true; m_quickConnectIds = std::move(value); }

    /**
     * <p>The quick connects available to agents who are working the queue.</p>
     */
    inline CreateQueueRequest& WithQuickConnectIds(const Aws::Vector<Aws::String>& value) { SetQuickConnectIds(value); return *this;}

    /**
     * <p>The quick connects available to agents who are working the queue.</p>
     */
    inline CreateQueueRequest& WithQuickConnectIds(Aws::Vector<Aws::String>&& value) { SetQuickConnectIds(std::move(value)); return *this;}

    /**
     * <p>The quick connects available to agents who are working the queue.</p>
     */
    inline CreateQueueRequest& AddQuickConnectIds(const Aws::String& value) { m_quickConnectIdsHasBeenSet = true; m_quickConnectIds.push_back(value); return *this; }

    /**
     * <p>The quick connects available to agents who are working the queue.</p>
     */
    inline CreateQueueRequest& AddQuickConnectIds(Aws::String&& value) { m_quickConnectIdsHasBeenSet = true; m_quickConnectIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The quick connects available to agents who are working the queue.</p>
     */
    inline CreateQueueRequest& AddQuickConnectIds(const char* value) { m_quickConnectIdsHasBeenSet = true; m_quickConnectIds.push_back(value); return *this; }


    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateQueueRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateQueueRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateQueueRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateQueueRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateQueueRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateQueueRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateQueueRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateQueueRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateQueueRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    OutboundCallerConfig m_outboundCallerConfig;
    bool m_outboundCallerConfigHasBeenSet = false;

    Aws::String m_hoursOfOperationId;
    bool m_hoursOfOperationIdHasBeenSet = false;

    int m_maxContacts;
    bool m_maxContactsHasBeenSet = false;

    Aws::Vector<Aws::String> m_quickConnectIds;
    bool m_quickConnectIdsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
