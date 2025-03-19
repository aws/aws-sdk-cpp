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
#include <aws/connect/model/AgentAvailabilityTimer.h>
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
  class CreateRoutingProfileRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API CreateRoutingProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRoutingProfile"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


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
    CreateRoutingProfileRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the routing profile. Must not be more than 127 characters.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateRoutingProfileRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the routing profile. Must not be more than 250 characters.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateRoutingProfileRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default outbound queue for the routing profile.</p>
     */
    inline const Aws::String& GetDefaultOutboundQueueId() const { return m_defaultOutboundQueueId; }
    inline bool DefaultOutboundQueueIdHasBeenSet() const { return m_defaultOutboundQueueIdHasBeenSet; }
    template<typename DefaultOutboundQueueIdT = Aws::String>
    void SetDefaultOutboundQueueId(DefaultOutboundQueueIdT&& value) { m_defaultOutboundQueueIdHasBeenSet = true; m_defaultOutboundQueueId = std::forward<DefaultOutboundQueueIdT>(value); }
    template<typename DefaultOutboundQueueIdT = Aws::String>
    CreateRoutingProfileRequest& WithDefaultOutboundQueueId(DefaultOutboundQueueIdT&& value) { SetDefaultOutboundQueueId(std::forward<DefaultOutboundQueueIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inbound queues associated with the routing profile. If no queue is added,
     * the agent can make only outbound calls.</p> <p>The limit of 10 array members
     * applies to the maximum number of <code>RoutingProfileQueueConfig</code> objects
     * that can be passed during a CreateRoutingProfile API request. It is different
     * from the quota of 50 queues per routing profile per instance that is listed in
     * <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon
     * Connect service quotas</a>. </p>
     */
    inline const Aws::Vector<RoutingProfileQueueConfig>& GetQueueConfigs() const { return m_queueConfigs; }
    inline bool QueueConfigsHasBeenSet() const { return m_queueConfigsHasBeenSet; }
    template<typename QueueConfigsT = Aws::Vector<RoutingProfileQueueConfig>>
    void SetQueueConfigs(QueueConfigsT&& value) { m_queueConfigsHasBeenSet = true; m_queueConfigs = std::forward<QueueConfigsT>(value); }
    template<typename QueueConfigsT = Aws::Vector<RoutingProfileQueueConfig>>
    CreateRoutingProfileRequest& WithQueueConfigs(QueueConfigsT&& value) { SetQueueConfigs(std::forward<QueueConfigsT>(value)); return *this;}
    template<typename QueueConfigsT = RoutingProfileQueueConfig>
    CreateRoutingProfileRequest& AddQueueConfigs(QueueConfigsT&& value) { m_queueConfigsHasBeenSet = true; m_queueConfigs.emplace_back(std::forward<QueueConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The channels that agents can handle in the Contact Control Panel (CCP) for
     * this routing profile.</p>
     */
    inline const Aws::Vector<MediaConcurrency>& GetMediaConcurrencies() const { return m_mediaConcurrencies; }
    inline bool MediaConcurrenciesHasBeenSet() const { return m_mediaConcurrenciesHasBeenSet; }
    template<typename MediaConcurrenciesT = Aws::Vector<MediaConcurrency>>
    void SetMediaConcurrencies(MediaConcurrenciesT&& value) { m_mediaConcurrenciesHasBeenSet = true; m_mediaConcurrencies = std::forward<MediaConcurrenciesT>(value); }
    template<typename MediaConcurrenciesT = Aws::Vector<MediaConcurrency>>
    CreateRoutingProfileRequest& WithMediaConcurrencies(MediaConcurrenciesT&& value) { SetMediaConcurrencies(std::forward<MediaConcurrenciesT>(value)); return *this;}
    template<typename MediaConcurrenciesT = MediaConcurrency>
    CreateRoutingProfileRequest& AddMediaConcurrencies(MediaConcurrenciesT&& value) { m_mediaConcurrenciesHasBeenSet = true; m_mediaConcurrencies.emplace_back(std::forward<MediaConcurrenciesT>(value)); return *this; }
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
    CreateRoutingProfileRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateRoutingProfileRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Whether agents with this routing profile will have their routing order
     * calculated based on <i>longest idle time</i> or <i>time since their last inbound
     * contact</i>. </p>
     */
    inline AgentAvailabilityTimer GetAgentAvailabilityTimer() const { return m_agentAvailabilityTimer; }
    inline bool AgentAvailabilityTimerHasBeenSet() const { return m_agentAvailabilityTimerHasBeenSet; }
    inline void SetAgentAvailabilityTimer(AgentAvailabilityTimer value) { m_agentAvailabilityTimerHasBeenSet = true; m_agentAvailabilityTimer = value; }
    inline CreateRoutingProfileRequest& WithAgentAvailabilityTimer(AgentAvailabilityTimer value) { SetAgentAvailabilityTimer(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_defaultOutboundQueueId;
    bool m_defaultOutboundQueueIdHasBeenSet = false;

    Aws::Vector<RoutingProfileQueueConfig> m_queueConfigs;
    bool m_queueConfigsHasBeenSet = false;

    Aws::Vector<MediaConcurrency> m_mediaConcurrencies;
    bool m_mediaConcurrenciesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    AgentAvailabilityTimer m_agentAvailabilityTimer{AgentAvailabilityTimer::NOT_SET};
    bool m_agentAvailabilityTimerHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
