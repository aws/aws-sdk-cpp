/**
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
    AWS_CONNECT_API RoutingProfile() = default;
    AWS_CONNECT_API RoutingProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RoutingProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    RoutingProfile& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the routing profile.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RoutingProfile& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the routing profile.</p>
     */
    inline const Aws::String& GetRoutingProfileArn() const { return m_routingProfileArn; }
    inline bool RoutingProfileArnHasBeenSet() const { return m_routingProfileArnHasBeenSet; }
    template<typename RoutingProfileArnT = Aws::String>
    void SetRoutingProfileArn(RoutingProfileArnT&& value) { m_routingProfileArnHasBeenSet = true; m_routingProfileArn = std::forward<RoutingProfileArnT>(value); }
    template<typename RoutingProfileArnT = Aws::String>
    RoutingProfile& WithRoutingProfileArn(RoutingProfileArnT&& value) { SetRoutingProfileArn(std::forward<RoutingProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline const Aws::String& GetRoutingProfileId() const { return m_routingProfileId; }
    inline bool RoutingProfileIdHasBeenSet() const { return m_routingProfileIdHasBeenSet; }
    template<typename RoutingProfileIdT = Aws::String>
    void SetRoutingProfileId(RoutingProfileIdT&& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = std::forward<RoutingProfileIdT>(value); }
    template<typename RoutingProfileIdT = Aws::String>
    RoutingProfile& WithRoutingProfileId(RoutingProfileIdT&& value) { SetRoutingProfileId(std::forward<RoutingProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the routing profile.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    RoutingProfile& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channels agents can handle in the Contact Control Panel (CCP) for this
     * routing profile.</p>
     */
    inline const Aws::Vector<MediaConcurrency>& GetMediaConcurrencies() const { return m_mediaConcurrencies; }
    inline bool MediaConcurrenciesHasBeenSet() const { return m_mediaConcurrenciesHasBeenSet; }
    template<typename MediaConcurrenciesT = Aws::Vector<MediaConcurrency>>
    void SetMediaConcurrencies(MediaConcurrenciesT&& value) { m_mediaConcurrenciesHasBeenSet = true; m_mediaConcurrencies = std::forward<MediaConcurrenciesT>(value); }
    template<typename MediaConcurrenciesT = Aws::Vector<MediaConcurrency>>
    RoutingProfile& WithMediaConcurrencies(MediaConcurrenciesT&& value) { SetMediaConcurrencies(std::forward<MediaConcurrenciesT>(value)); return *this;}
    template<typename MediaConcurrenciesT = MediaConcurrency>
    RoutingProfile& AddMediaConcurrencies(MediaConcurrenciesT&& value) { m_mediaConcurrenciesHasBeenSet = true; m_mediaConcurrencies.emplace_back(std::forward<MediaConcurrenciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the default outbound queue for this routing profile.</p>
     */
    inline const Aws::String& GetDefaultOutboundQueueId() const { return m_defaultOutboundQueueId; }
    inline bool DefaultOutboundQueueIdHasBeenSet() const { return m_defaultOutboundQueueIdHasBeenSet; }
    template<typename DefaultOutboundQueueIdT = Aws::String>
    void SetDefaultOutboundQueueId(DefaultOutboundQueueIdT&& value) { m_defaultOutboundQueueIdHasBeenSet = true; m_defaultOutboundQueueId = std::forward<DefaultOutboundQueueIdT>(value); }
    template<typename DefaultOutboundQueueIdT = Aws::String>
    RoutingProfile& WithDefaultOutboundQueueId(DefaultOutboundQueueIdT&& value) { SetDefaultOutboundQueueId(std::forward<DefaultOutboundQueueIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    RoutingProfile& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    RoutingProfile& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The number of associated queues in routing profile.</p>
     */
    inline long long GetNumberOfAssociatedQueues() const { return m_numberOfAssociatedQueues; }
    inline bool NumberOfAssociatedQueuesHasBeenSet() const { return m_numberOfAssociatedQueuesHasBeenSet; }
    inline void SetNumberOfAssociatedQueues(long long value) { m_numberOfAssociatedQueuesHasBeenSet = true; m_numberOfAssociatedQueues = value; }
    inline RoutingProfile& WithNumberOfAssociatedQueues(long long value) { SetNumberOfAssociatedQueues(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of associated users in routing profile.</p>
     */
    inline long long GetNumberOfAssociatedUsers() const { return m_numberOfAssociatedUsers; }
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
    inline AgentAvailabilityTimer GetAgentAvailabilityTimer() const { return m_agentAvailabilityTimer; }
    inline bool AgentAvailabilityTimerHasBeenSet() const { return m_agentAvailabilityTimerHasBeenSet; }
    inline void SetAgentAvailabilityTimer(AgentAvailabilityTimer value) { m_agentAvailabilityTimerHasBeenSet = true; m_agentAvailabilityTimer = value; }
    inline RoutingProfile& WithAgentAvailabilityTimer(AgentAvailabilityTimer value) { SetAgentAvailabilityTimer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    RoutingProfile& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedRegion() const { return m_lastModifiedRegion; }
    inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }
    template<typename LastModifiedRegionT = Aws::String>
    void SetLastModifiedRegion(LastModifiedRegionT&& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = std::forward<LastModifiedRegionT>(value); }
    template<typename LastModifiedRegionT = Aws::String>
    RoutingProfile& WithLastModifiedRegion(LastModifiedRegionT&& value) { SetLastModifiedRegion(std::forward<LastModifiedRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether this a default routing profile.</p>
     */
    inline bool GetIsDefault() const { return m_isDefault; }
    inline bool IsDefaultHasBeenSet() const { return m_isDefaultHasBeenSet; }
    inline void SetIsDefault(bool value) { m_isDefaultHasBeenSet = true; m_isDefault = value; }
    inline RoutingProfile& WithIsDefault(bool value) { SetIsDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the associated queue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedQueueIds() const { return m_associatedQueueIds; }
    inline bool AssociatedQueueIdsHasBeenSet() const { return m_associatedQueueIdsHasBeenSet; }
    template<typename AssociatedQueueIdsT = Aws::Vector<Aws::String>>
    void SetAssociatedQueueIds(AssociatedQueueIdsT&& value) { m_associatedQueueIdsHasBeenSet = true; m_associatedQueueIds = std::forward<AssociatedQueueIdsT>(value); }
    template<typename AssociatedQueueIdsT = Aws::Vector<Aws::String>>
    RoutingProfile& WithAssociatedQueueIds(AssociatedQueueIdsT&& value) { SetAssociatedQueueIds(std::forward<AssociatedQueueIdsT>(value)); return *this;}
    template<typename AssociatedQueueIdsT = Aws::String>
    RoutingProfile& AddAssociatedQueueIds(AssociatedQueueIdsT&& value) { m_associatedQueueIdsHasBeenSet = true; m_associatedQueueIds.emplace_back(std::forward<AssociatedQueueIdsT>(value)); return *this; }
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

    long long m_numberOfAssociatedQueues{0};
    bool m_numberOfAssociatedQueuesHasBeenSet = false;

    long long m_numberOfAssociatedUsers{0};
    bool m_numberOfAssociatedUsersHasBeenSet = false;

    AgentAvailabilityTimer m_agentAvailabilityTimer{AgentAvailabilityTimer::NOT_SET};
    bool m_agentAvailabilityTimerHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastModifiedRegion;
    bool m_lastModifiedRegionHasBeenSet = false;

    bool m_isDefault{false};
    bool m_isDefaultHasBeenSet = false;

    Aws::Vector<Aws::String> m_associatedQueueIds;
    bool m_associatedQueueIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
