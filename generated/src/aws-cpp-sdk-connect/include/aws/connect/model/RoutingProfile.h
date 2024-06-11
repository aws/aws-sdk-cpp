﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connect/model/AgentAvailabilityTimer.h>
#include <aws/core/utils/DateTime.h>
#include <aws/connect/model/MediaConcurrency.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains information about a routing profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RoutingProfile">AWS
   * API Reference</a></p>
   */
  class RoutingProfile
  {
  public:
    AWS_CONNECT_API RoutingProfile();
    AWS_CONNECT_API RoutingProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RoutingProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline RoutingProfile& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline RoutingProfile& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline RoutingProfile& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the routing profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RoutingProfile& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RoutingProfile& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RoutingProfile& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the routing profile.</p>
     */
    inline const Aws::String& GetRoutingProfileArn() const{ return m_routingProfileArn; }
    inline bool RoutingProfileArnHasBeenSet() const { return m_routingProfileArnHasBeenSet; }
    inline void SetRoutingProfileArn(const Aws::String& value) { m_routingProfileArnHasBeenSet = true; m_routingProfileArn = value; }
    inline void SetRoutingProfileArn(Aws::String&& value) { m_routingProfileArnHasBeenSet = true; m_routingProfileArn = std::move(value); }
    inline void SetRoutingProfileArn(const char* value) { m_routingProfileArnHasBeenSet = true; m_routingProfileArn.assign(value); }
    inline RoutingProfile& WithRoutingProfileArn(const Aws::String& value) { SetRoutingProfileArn(value); return *this;}
    inline RoutingProfile& WithRoutingProfileArn(Aws::String&& value) { SetRoutingProfileArn(std::move(value)); return *this;}
    inline RoutingProfile& WithRoutingProfileArn(const char* value) { SetRoutingProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline const Aws::String& GetRoutingProfileId() const{ return m_routingProfileId; }
    inline bool RoutingProfileIdHasBeenSet() const { return m_routingProfileIdHasBeenSet; }
    inline void SetRoutingProfileId(const Aws::String& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = value; }
    inline void SetRoutingProfileId(Aws::String&& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = std::move(value); }
    inline void SetRoutingProfileId(const char* value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId.assign(value); }
    inline RoutingProfile& WithRoutingProfileId(const Aws::String& value) { SetRoutingProfileId(value); return *this;}
    inline RoutingProfile& WithRoutingProfileId(Aws::String&& value) { SetRoutingProfileId(std::move(value)); return *this;}
    inline RoutingProfile& WithRoutingProfileId(const char* value) { SetRoutingProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the routing profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline RoutingProfile& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline RoutingProfile& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline RoutingProfile& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channels agents can handle in the Contact Control Panel (CCP) for this
     * routing profile.</p>
     */
    inline const Aws::Vector<MediaConcurrency>& GetMediaConcurrencies() const{ return m_mediaConcurrencies; }
    inline bool MediaConcurrenciesHasBeenSet() const { return m_mediaConcurrenciesHasBeenSet; }
    inline void SetMediaConcurrencies(const Aws::Vector<MediaConcurrency>& value) { m_mediaConcurrenciesHasBeenSet = true; m_mediaConcurrencies = value; }
    inline void SetMediaConcurrencies(Aws::Vector<MediaConcurrency>&& value) { m_mediaConcurrenciesHasBeenSet = true; m_mediaConcurrencies = std::move(value); }
    inline RoutingProfile& WithMediaConcurrencies(const Aws::Vector<MediaConcurrency>& value) { SetMediaConcurrencies(value); return *this;}
    inline RoutingProfile& WithMediaConcurrencies(Aws::Vector<MediaConcurrency>&& value) { SetMediaConcurrencies(std::move(value)); return *this;}
    inline RoutingProfile& AddMediaConcurrencies(const MediaConcurrency& value) { m_mediaConcurrenciesHasBeenSet = true; m_mediaConcurrencies.push_back(value); return *this; }
    inline RoutingProfile& AddMediaConcurrencies(MediaConcurrency&& value) { m_mediaConcurrenciesHasBeenSet = true; m_mediaConcurrencies.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the default outbound queue for this routing profile.</p>
     */
    inline const Aws::String& GetDefaultOutboundQueueId() const{ return m_defaultOutboundQueueId; }
    inline bool DefaultOutboundQueueIdHasBeenSet() const { return m_defaultOutboundQueueIdHasBeenSet; }
    inline void SetDefaultOutboundQueueId(const Aws::String& value) { m_defaultOutboundQueueIdHasBeenSet = true; m_defaultOutboundQueueId = value; }
    inline void SetDefaultOutboundQueueId(Aws::String&& value) { m_defaultOutboundQueueIdHasBeenSet = true; m_defaultOutboundQueueId = std::move(value); }
    inline void SetDefaultOutboundQueueId(const char* value) { m_defaultOutboundQueueIdHasBeenSet = true; m_defaultOutboundQueueId.assign(value); }
    inline RoutingProfile& WithDefaultOutboundQueueId(const Aws::String& value) { SetDefaultOutboundQueueId(value); return *this;}
    inline RoutingProfile& WithDefaultOutboundQueueId(Aws::String&& value) { SetDefaultOutboundQueueId(std::move(value)); return *this;}
    inline RoutingProfile& WithDefaultOutboundQueueId(const char* value) { SetDefaultOutboundQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline RoutingProfile& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline RoutingProfile& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline RoutingProfile& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline RoutingProfile& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline RoutingProfile& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline RoutingProfile& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline RoutingProfile& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline RoutingProfile& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline RoutingProfile& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of associated queues in routing profile.</p>
     */
    inline long long GetNumberOfAssociatedQueues() const{ return m_numberOfAssociatedQueues; }
    inline bool NumberOfAssociatedQueuesHasBeenSet() const { return m_numberOfAssociatedQueuesHasBeenSet; }
    inline void SetNumberOfAssociatedQueues(long long value) { m_numberOfAssociatedQueuesHasBeenSet = true; m_numberOfAssociatedQueues = value; }
    inline RoutingProfile& WithNumberOfAssociatedQueues(long long value) { SetNumberOfAssociatedQueues(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of associated users in routing profile.</p>
     */
    inline long long GetNumberOfAssociatedUsers() const{ return m_numberOfAssociatedUsers; }
    inline bool NumberOfAssociatedUsersHasBeenSet() const { return m_numberOfAssociatedUsersHasBeenSet; }
    inline void SetNumberOfAssociatedUsers(long long value) { m_numberOfAssociatedUsersHasBeenSet = true; m_numberOfAssociatedUsers = value; }
    inline RoutingProfile& WithNumberOfAssociatedUsers(long long value) { SetNumberOfAssociatedUsers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether agents with this routing profile will have their routing order
     * calculated based on <i>time since their last inbound contact</i> or <i>longest
     * idle time</i>. </p>
     */
    inline const AgentAvailabilityTimer& GetAgentAvailabilityTimer() const{ return m_agentAvailabilityTimer; }
    inline bool AgentAvailabilityTimerHasBeenSet() const { return m_agentAvailabilityTimerHasBeenSet; }
    inline void SetAgentAvailabilityTimer(const AgentAvailabilityTimer& value) { m_agentAvailabilityTimerHasBeenSet = true; m_agentAvailabilityTimer = value; }
    inline void SetAgentAvailabilityTimer(AgentAvailabilityTimer&& value) { m_agentAvailabilityTimerHasBeenSet = true; m_agentAvailabilityTimer = std::move(value); }
    inline RoutingProfile& WithAgentAvailabilityTimer(const AgentAvailabilityTimer& value) { SetAgentAvailabilityTimer(value); return *this;}
    inline RoutingProfile& WithAgentAvailabilityTimer(AgentAvailabilityTimer&& value) { SetAgentAvailabilityTimer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline RoutingProfile& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline RoutingProfile& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedRegion() const{ return m_lastModifiedRegion; }
    inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }
    inline void SetLastModifiedRegion(const Aws::String& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = value; }
    inline void SetLastModifiedRegion(Aws::String&& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = std::move(value); }
    inline void SetLastModifiedRegion(const char* value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion.assign(value); }
    inline RoutingProfile& WithLastModifiedRegion(const Aws::String& value) { SetLastModifiedRegion(value); return *this;}
    inline RoutingProfile& WithLastModifiedRegion(Aws::String&& value) { SetLastModifiedRegion(std::move(value)); return *this;}
    inline RoutingProfile& WithLastModifiedRegion(const char* value) { SetLastModifiedRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether this a default routing profile.</p>
     */
    inline bool GetIsDefault() const{ return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline RoutingProfile& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the associated queue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedQueueIds() const{ return m_associatedQueueIds; }
    inline bool AssociatedQueueIdsHasBeenSet() const { return m_associatedQueueIdsHasBeenSet; }
    inline void SetAssociatedQueueIds(const Aws::Vector<Aws::String>& value) { m_associatedQueueIdsHasBeenSet = true; m_associatedQueueIds = value; }
    inline void SetAssociatedQueueIds(Aws::Vector<Aws::String>&& value) { m_associatedQueueIdsHasBeenSet = true; m_associatedQueueIds = std::move(value); }
    inline RoutingProfile& WithAssociatedQueueIds(const Aws::Vector<Aws::String>& value) { SetAssociatedQueueIds(value); return *this;}
    inline RoutingProfile& WithAssociatedQueueIds(Aws::Vector<Aws::String>&& value) { SetAssociatedQueueIds(std::move(value)); return *this;}
    inline RoutingProfile& AddAssociatedQueueIds(const Aws::String& value) { m_associatedQueueIdsHasBeenSet = true; m_associatedQueueIds.push_back(value); return *this; }
    inline RoutingProfile& AddAssociatedQueueIds(Aws::String&& value) { m_associatedQueueIdsHasBeenSet = true; m_associatedQueueIds.push_back(std::move(value)); return *this; }
    inline RoutingProfile& AddAssociatedQueueIds(const char* value) { m_associatedQueueIdsHasBeenSet = true; m_associatedQueueIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_routingProfileArn;
    bool m_routingProfileArnHasBeenSet = false;

    Aws::String m_routingProfileId;
    bool m_routingProfileIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<MediaConcurrency> m_mediaConcurrencies;
    bool m_mediaConcurrenciesHasBeenSet = false;

    Aws::String m_defaultOutboundQueueId;
    bool m_defaultOutboundQueueIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    long long m_numberOfAssociatedQueues;
    bool m_numberOfAssociatedQueuesHasBeenSet = false;

    long long m_numberOfAssociatedUsers;
    bool m_numberOfAssociatedUsersHasBeenSet = false;

    AgentAvailabilityTimer m_agentAvailabilityTimer;
    bool m_agentAvailabilityTimerHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastModifiedRegion;
    bool m_lastModifiedRegionHasBeenSet = false;

    bool m_isDefault;
    bool m_isDefaultHasBeenSet = false;

    Aws::Vector<Aws::String> m_associatedQueueIds;
    bool m_associatedQueueIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
