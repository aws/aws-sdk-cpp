/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
    inline RoutingProfile& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline RoutingProfile& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline RoutingProfile& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The name of the routing profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the routing profile.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the routing profile.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the routing profile.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the routing profile.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the routing profile.</p>
     */
    inline RoutingProfile& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the routing profile.</p>
     */
    inline RoutingProfile& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the routing profile.</p>
     */
    inline RoutingProfile& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the routing profile.</p>
     */
    inline const Aws::String& GetRoutingProfileArn() const{ return m_routingProfileArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the routing profile.</p>
     */
    inline bool RoutingProfileArnHasBeenSet() const { return m_routingProfileArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the routing profile.</p>
     */
    inline void SetRoutingProfileArn(const Aws::String& value) { m_routingProfileArnHasBeenSet = true; m_routingProfileArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the routing profile.</p>
     */
    inline void SetRoutingProfileArn(Aws::String&& value) { m_routingProfileArnHasBeenSet = true; m_routingProfileArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the routing profile.</p>
     */
    inline void SetRoutingProfileArn(const char* value) { m_routingProfileArnHasBeenSet = true; m_routingProfileArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the routing profile.</p>
     */
    inline RoutingProfile& WithRoutingProfileArn(const Aws::String& value) { SetRoutingProfileArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the routing profile.</p>
     */
    inline RoutingProfile& WithRoutingProfileArn(Aws::String&& value) { SetRoutingProfileArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the routing profile.</p>
     */
    inline RoutingProfile& WithRoutingProfileArn(const char* value) { SetRoutingProfileArn(value); return *this;}


    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline const Aws::String& GetRoutingProfileId() const{ return m_routingProfileId; }

    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline bool RoutingProfileIdHasBeenSet() const { return m_routingProfileIdHasBeenSet; }

    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline void SetRoutingProfileId(const Aws::String& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = value; }

    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline void SetRoutingProfileId(Aws::String&& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = std::move(value); }

    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline void SetRoutingProfileId(const char* value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId.assign(value); }

    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline RoutingProfile& WithRoutingProfileId(const Aws::String& value) { SetRoutingProfileId(value); return *this;}

    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline RoutingProfile& WithRoutingProfileId(Aws::String&& value) { SetRoutingProfileId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline RoutingProfile& WithRoutingProfileId(const char* value) { SetRoutingProfileId(value); return *this;}


    /**
     * <p>The description of the routing profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the routing profile.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the routing profile.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the routing profile.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the routing profile.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the routing profile.</p>
     */
    inline RoutingProfile& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the routing profile.</p>
     */
    inline RoutingProfile& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the routing profile.</p>
     */
    inline RoutingProfile& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline RoutingProfile& WithMediaConcurrencies(const Aws::Vector<MediaConcurrency>& value) { SetMediaConcurrencies(value); return *this;}

    /**
     * <p>The channels agents can handle in the Contact Control Panel (CCP) for this
     * routing profile.</p>
     */
    inline RoutingProfile& WithMediaConcurrencies(Aws::Vector<MediaConcurrency>&& value) { SetMediaConcurrencies(std::move(value)); return *this;}

    /**
     * <p>The channels agents can handle in the Contact Control Panel (CCP) for this
     * routing profile.</p>
     */
    inline RoutingProfile& AddMediaConcurrencies(const MediaConcurrency& value) { m_mediaConcurrenciesHasBeenSet = true; m_mediaConcurrencies.push_back(value); return *this; }

    /**
     * <p>The channels agents can handle in the Contact Control Panel (CCP) for this
     * routing profile.</p>
     */
    inline RoutingProfile& AddMediaConcurrencies(MediaConcurrency&& value) { m_mediaConcurrenciesHasBeenSet = true; m_mediaConcurrencies.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifier of the default outbound queue for this routing profile.</p>
     */
    inline const Aws::String& GetDefaultOutboundQueueId() const{ return m_defaultOutboundQueueId; }

    /**
     * <p>The identifier of the default outbound queue for this routing profile.</p>
     */
    inline bool DefaultOutboundQueueIdHasBeenSet() const { return m_defaultOutboundQueueIdHasBeenSet; }

    /**
     * <p>The identifier of the default outbound queue for this routing profile.</p>
     */
    inline void SetDefaultOutboundQueueId(const Aws::String& value) { m_defaultOutboundQueueIdHasBeenSet = true; m_defaultOutboundQueueId = value; }

    /**
     * <p>The identifier of the default outbound queue for this routing profile.</p>
     */
    inline void SetDefaultOutboundQueueId(Aws::String&& value) { m_defaultOutboundQueueIdHasBeenSet = true; m_defaultOutboundQueueId = std::move(value); }

    /**
     * <p>The identifier of the default outbound queue for this routing profile.</p>
     */
    inline void SetDefaultOutboundQueueId(const char* value) { m_defaultOutboundQueueIdHasBeenSet = true; m_defaultOutboundQueueId.assign(value); }

    /**
     * <p>The identifier of the default outbound queue for this routing profile.</p>
     */
    inline RoutingProfile& WithDefaultOutboundQueueId(const Aws::String& value) { SetDefaultOutboundQueueId(value); return *this;}

    /**
     * <p>The identifier of the default outbound queue for this routing profile.</p>
     */
    inline RoutingProfile& WithDefaultOutboundQueueId(Aws::String&& value) { SetDefaultOutboundQueueId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the default outbound queue for this routing profile.</p>
     */
    inline RoutingProfile& WithDefaultOutboundQueueId(const char* value) { SetDefaultOutboundQueueId(value); return *this;}


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
    inline RoutingProfile& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline RoutingProfile& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline RoutingProfile& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline RoutingProfile& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline RoutingProfile& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline RoutingProfile& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline RoutingProfile& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline RoutingProfile& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline RoutingProfile& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The number of associated queues in routing profile.</p>
     */
    inline long long GetNumberOfAssociatedQueues() const{ return m_numberOfAssociatedQueues; }

    /**
     * <p>The number of associated queues in routing profile.</p>
     */
    inline bool NumberOfAssociatedQueuesHasBeenSet() const { return m_numberOfAssociatedQueuesHasBeenSet; }

    /**
     * <p>The number of associated queues in routing profile.</p>
     */
    inline void SetNumberOfAssociatedQueues(long long value) { m_numberOfAssociatedQueuesHasBeenSet = true; m_numberOfAssociatedQueues = value; }

    /**
     * <p>The number of associated queues in routing profile.</p>
     */
    inline RoutingProfile& WithNumberOfAssociatedQueues(long long value) { SetNumberOfAssociatedQueues(value); return *this;}


    /**
     * <p>The number of associated users in routing profile.</p>
     */
    inline long long GetNumberOfAssociatedUsers() const{ return m_numberOfAssociatedUsers; }

    /**
     * <p>The number of associated users in routing profile.</p>
     */
    inline bool NumberOfAssociatedUsersHasBeenSet() const { return m_numberOfAssociatedUsersHasBeenSet; }

    /**
     * <p>The number of associated users in routing profile.</p>
     */
    inline void SetNumberOfAssociatedUsers(long long value) { m_numberOfAssociatedUsersHasBeenSet = true; m_numberOfAssociatedUsers = value; }

    /**
     * <p>The number of associated users in routing profile.</p>
     */
    inline RoutingProfile& WithNumberOfAssociatedUsers(long long value) { SetNumberOfAssociatedUsers(value); return *this;}

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
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
