/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connect/model/RoutingProfileQueueConfig.h>
#include <aws/connect/model/MediaConcurrency.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AWS_CONNECT_API CreateRoutingProfileRequest : public ConnectRequest
  {
  public:
    CreateRoutingProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRoutingProfile"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline CreateRoutingProfileRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline CreateRoutingProfileRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance.</p>
     */
    inline CreateRoutingProfileRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The name of the routing profile. Must not be more than 127 characters.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the routing profile. Must not be more than 127 characters.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the routing profile. Must not be more than 127 characters.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the routing profile. Must not be more than 127 characters.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the routing profile. Must not be more than 127 characters.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the routing profile. Must not be more than 127 characters.</p>
     */
    inline CreateRoutingProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the routing profile. Must not be more than 127 characters.</p>
     */
    inline CreateRoutingProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the routing profile. Must not be more than 127 characters.</p>
     */
    inline CreateRoutingProfileRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Description of the routing profile. Must not be more than 250 characters.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description of the routing profile. Must not be more than 250 characters.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Description of the routing profile. Must not be more than 250 characters.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description of the routing profile. Must not be more than 250 characters.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Description of the routing profile. Must not be more than 250 characters.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description of the routing profile. Must not be more than 250 characters.</p>
     */
    inline CreateRoutingProfileRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the routing profile. Must not be more than 250 characters.</p>
     */
    inline CreateRoutingProfileRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the routing profile. Must not be more than 250 characters.</p>
     */
    inline CreateRoutingProfileRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The default outbound queue for the routing profile.</p>
     */
    inline const Aws::String& GetDefaultOutboundQueueId() const{ return m_defaultOutboundQueueId; }

    /**
     * <p>The default outbound queue for the routing profile.</p>
     */
    inline bool DefaultOutboundQueueIdHasBeenSet() const { return m_defaultOutboundQueueIdHasBeenSet; }

    /**
     * <p>The default outbound queue for the routing profile.</p>
     */
    inline void SetDefaultOutboundQueueId(const Aws::String& value) { m_defaultOutboundQueueIdHasBeenSet = true; m_defaultOutboundQueueId = value; }

    /**
     * <p>The default outbound queue for the routing profile.</p>
     */
    inline void SetDefaultOutboundQueueId(Aws::String&& value) { m_defaultOutboundQueueIdHasBeenSet = true; m_defaultOutboundQueueId = std::move(value); }

    /**
     * <p>The default outbound queue for the routing profile.</p>
     */
    inline void SetDefaultOutboundQueueId(const char* value) { m_defaultOutboundQueueIdHasBeenSet = true; m_defaultOutboundQueueId.assign(value); }

    /**
     * <p>The default outbound queue for the routing profile.</p>
     */
    inline CreateRoutingProfileRequest& WithDefaultOutboundQueueId(const Aws::String& value) { SetDefaultOutboundQueueId(value); return *this;}

    /**
     * <p>The default outbound queue for the routing profile.</p>
     */
    inline CreateRoutingProfileRequest& WithDefaultOutboundQueueId(Aws::String&& value) { SetDefaultOutboundQueueId(std::move(value)); return *this;}

    /**
     * <p>The default outbound queue for the routing profile.</p>
     */
    inline CreateRoutingProfileRequest& WithDefaultOutboundQueueId(const char* value) { SetDefaultOutboundQueueId(value); return *this;}


    /**
     * <p>The inbound queues associated with the routing profile. If no queue is added,
     * the agent can only make outbound calls.</p>
     */
    inline const Aws::Vector<RoutingProfileQueueConfig>& GetQueueConfigs() const{ return m_queueConfigs; }

    /**
     * <p>The inbound queues associated with the routing profile. If no queue is added,
     * the agent can only make outbound calls.</p>
     */
    inline bool QueueConfigsHasBeenSet() const { return m_queueConfigsHasBeenSet; }

    /**
     * <p>The inbound queues associated with the routing profile. If no queue is added,
     * the agent can only make outbound calls.</p>
     */
    inline void SetQueueConfigs(const Aws::Vector<RoutingProfileQueueConfig>& value) { m_queueConfigsHasBeenSet = true; m_queueConfigs = value; }

    /**
     * <p>The inbound queues associated with the routing profile. If no queue is added,
     * the agent can only make outbound calls.</p>
     */
    inline void SetQueueConfigs(Aws::Vector<RoutingProfileQueueConfig>&& value) { m_queueConfigsHasBeenSet = true; m_queueConfigs = std::move(value); }

    /**
     * <p>The inbound queues associated with the routing profile. If no queue is added,
     * the agent can only make outbound calls.</p>
     */
    inline CreateRoutingProfileRequest& WithQueueConfigs(const Aws::Vector<RoutingProfileQueueConfig>& value) { SetQueueConfigs(value); return *this;}

    /**
     * <p>The inbound queues associated with the routing profile. If no queue is added,
     * the agent can only make outbound calls.</p>
     */
    inline CreateRoutingProfileRequest& WithQueueConfigs(Aws::Vector<RoutingProfileQueueConfig>&& value) { SetQueueConfigs(std::move(value)); return *this;}

    /**
     * <p>The inbound queues associated with the routing profile. If no queue is added,
     * the agent can only make outbound calls.</p>
     */
    inline CreateRoutingProfileRequest& AddQueueConfigs(const RoutingProfileQueueConfig& value) { m_queueConfigsHasBeenSet = true; m_queueConfigs.push_back(value); return *this; }

    /**
     * <p>The inbound queues associated with the routing profile. If no queue is added,
     * the agent can only make outbound calls.</p>
     */
    inline CreateRoutingProfileRequest& AddQueueConfigs(RoutingProfileQueueConfig&& value) { m_queueConfigsHasBeenSet = true; m_queueConfigs.push_back(std::move(value)); return *this; }


    /**
     * <p>The channels agents can handle in the Contact Control Panel (CCP) for this
     * routing profile.</p>
     */
    inline const Aws::Vector<MediaConcurrency>& GetMediaConcurrencies() const{ return m_mediaConcurrencies; }

    /**
     * <p>The channels agents can handle in the Contact Control Panel (CCP) for this
     * routing profile.</p>
     */
    inline bool MediaConcurrenciesHasBeenSet() const { return m_mediaConcurrenciesHasBeenSet; }

    /**
     * <p>The channels agents can handle in the Contact Control Panel (CCP) for this
     * routing profile.</p>
     */
    inline void SetMediaConcurrencies(const Aws::Vector<MediaConcurrency>& value) { m_mediaConcurrenciesHasBeenSet = true; m_mediaConcurrencies = value; }

    /**
     * <p>The channels agents can handle in the Contact Control Panel (CCP) for this
     * routing profile.</p>
     */
    inline void SetMediaConcurrencies(Aws::Vector<MediaConcurrency>&& value) { m_mediaConcurrenciesHasBeenSet = true; m_mediaConcurrencies = std::move(value); }

    /**
     * <p>The channels agents can handle in the Contact Control Panel (CCP) for this
     * routing profile.</p>
     */
    inline CreateRoutingProfileRequest& WithMediaConcurrencies(const Aws::Vector<MediaConcurrency>& value) { SetMediaConcurrencies(value); return *this;}

    /**
     * <p>The channels agents can handle in the Contact Control Panel (CCP) for this
     * routing profile.</p>
     */
    inline CreateRoutingProfileRequest& WithMediaConcurrencies(Aws::Vector<MediaConcurrency>&& value) { SetMediaConcurrencies(std::move(value)); return *this;}

    /**
     * <p>The channels agents can handle in the Contact Control Panel (CCP) for this
     * routing profile.</p>
     */
    inline CreateRoutingProfileRequest& AddMediaConcurrencies(const MediaConcurrency& value) { m_mediaConcurrenciesHasBeenSet = true; m_mediaConcurrencies.push_back(value); return *this; }

    /**
     * <p>The channels agents can handle in the Contact Control Panel (CCP) for this
     * routing profile.</p>
     */
    inline CreateRoutingProfileRequest& AddMediaConcurrencies(MediaConcurrency&& value) { m_mediaConcurrenciesHasBeenSet = true; m_mediaConcurrencies.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateRoutingProfileRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline CreateRoutingProfileRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline CreateRoutingProfileRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateRoutingProfileRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateRoutingProfileRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateRoutingProfileRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateRoutingProfileRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateRoutingProfileRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateRoutingProfileRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_defaultOutboundQueueId;
    bool m_defaultOutboundQueueIdHasBeenSet;

    Aws::Vector<RoutingProfileQueueConfig> m_queueConfigs;
    bool m_queueConfigsHasBeenSet;

    Aws::Vector<MediaConcurrency> m_mediaConcurrencies;
    bool m_mediaConcurrenciesHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
