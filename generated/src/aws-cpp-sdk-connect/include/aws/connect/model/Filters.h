/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/Channel.h>
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
   * <p>Contains the filter to apply when retrieving metrics.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Filters">AWS API
   * Reference</a></p>
   */
  class Filters
  {
  public:
    AWS_CONNECT_API Filters();
    AWS_CONNECT_API Filters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Filters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The queues to use to filter the metrics. You should specify at least one
     * queue, and can specify up to 100 queues per request. The
     * <code>GetCurrentMetricsData</code> API in particular requires a queue when you
     * include a <code>Filter</code> in your request. </p>
     */
    inline const Aws::Vector<Aws::String>& GetQueues() const{ return m_queues; }

    /**
     * <p>The queues to use to filter the metrics. You should specify at least one
     * queue, and can specify up to 100 queues per request. The
     * <code>GetCurrentMetricsData</code> API in particular requires a queue when you
     * include a <code>Filter</code> in your request. </p>
     */
    inline bool QueuesHasBeenSet() const { return m_queuesHasBeenSet; }

    /**
     * <p>The queues to use to filter the metrics. You should specify at least one
     * queue, and can specify up to 100 queues per request. The
     * <code>GetCurrentMetricsData</code> API in particular requires a queue when you
     * include a <code>Filter</code> in your request. </p>
     */
    inline void SetQueues(const Aws::Vector<Aws::String>& value) { m_queuesHasBeenSet = true; m_queues = value; }

    /**
     * <p>The queues to use to filter the metrics. You should specify at least one
     * queue, and can specify up to 100 queues per request. The
     * <code>GetCurrentMetricsData</code> API in particular requires a queue when you
     * include a <code>Filter</code> in your request. </p>
     */
    inline void SetQueues(Aws::Vector<Aws::String>&& value) { m_queuesHasBeenSet = true; m_queues = std::move(value); }

    /**
     * <p>The queues to use to filter the metrics. You should specify at least one
     * queue, and can specify up to 100 queues per request. The
     * <code>GetCurrentMetricsData</code> API in particular requires a queue when you
     * include a <code>Filter</code> in your request. </p>
     */
    inline Filters& WithQueues(const Aws::Vector<Aws::String>& value) { SetQueues(value); return *this;}

    /**
     * <p>The queues to use to filter the metrics. You should specify at least one
     * queue, and can specify up to 100 queues per request. The
     * <code>GetCurrentMetricsData</code> API in particular requires a queue when you
     * include a <code>Filter</code> in your request. </p>
     */
    inline Filters& WithQueues(Aws::Vector<Aws::String>&& value) { SetQueues(std::move(value)); return *this;}

    /**
     * <p>The queues to use to filter the metrics. You should specify at least one
     * queue, and can specify up to 100 queues per request. The
     * <code>GetCurrentMetricsData</code> API in particular requires a queue when you
     * include a <code>Filter</code> in your request. </p>
     */
    inline Filters& AddQueues(const Aws::String& value) { m_queuesHasBeenSet = true; m_queues.push_back(value); return *this; }

    /**
     * <p>The queues to use to filter the metrics. You should specify at least one
     * queue, and can specify up to 100 queues per request. The
     * <code>GetCurrentMetricsData</code> API in particular requires a queue when you
     * include a <code>Filter</code> in your request. </p>
     */
    inline Filters& AddQueues(Aws::String&& value) { m_queuesHasBeenSet = true; m_queues.push_back(std::move(value)); return *this; }

    /**
     * <p>The queues to use to filter the metrics. You should specify at least one
     * queue, and can specify up to 100 queues per request. The
     * <code>GetCurrentMetricsData</code> API in particular requires a queue when you
     * include a <code>Filter</code> in your request. </p>
     */
    inline Filters& AddQueues(const char* value) { m_queuesHasBeenSet = true; m_queues.push_back(value); return *this; }


    /**
     * <p>The channel to use to filter the metrics.</p>
     */
    inline const Aws::Vector<Channel>& GetChannels() const{ return m_channels; }

    /**
     * <p>The channel to use to filter the metrics.</p>
     */
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }

    /**
     * <p>The channel to use to filter the metrics.</p>
     */
    inline void SetChannels(const Aws::Vector<Channel>& value) { m_channelsHasBeenSet = true; m_channels = value; }

    /**
     * <p>The channel to use to filter the metrics.</p>
     */
    inline void SetChannels(Aws::Vector<Channel>&& value) { m_channelsHasBeenSet = true; m_channels = std::move(value); }

    /**
     * <p>The channel to use to filter the metrics.</p>
     */
    inline Filters& WithChannels(const Aws::Vector<Channel>& value) { SetChannels(value); return *this;}

    /**
     * <p>The channel to use to filter the metrics.</p>
     */
    inline Filters& WithChannels(Aws::Vector<Channel>&& value) { SetChannels(std::move(value)); return *this;}

    /**
     * <p>The channel to use to filter the metrics.</p>
     */
    inline Filters& AddChannels(const Channel& value) { m_channelsHasBeenSet = true; m_channels.push_back(value); return *this; }

    /**
     * <p>The channel to use to filter the metrics.</p>
     */
    inline Filters& AddChannels(Channel&& value) { m_channelsHasBeenSet = true; m_channels.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of up to 100 routing profile IDs or ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRoutingProfiles() const{ return m_routingProfiles; }

    /**
     * <p>A list of up to 100 routing profile IDs or ARNs.</p>
     */
    inline bool RoutingProfilesHasBeenSet() const { return m_routingProfilesHasBeenSet; }

    /**
     * <p>A list of up to 100 routing profile IDs or ARNs.</p>
     */
    inline void SetRoutingProfiles(const Aws::Vector<Aws::String>& value) { m_routingProfilesHasBeenSet = true; m_routingProfiles = value; }

    /**
     * <p>A list of up to 100 routing profile IDs or ARNs.</p>
     */
    inline void SetRoutingProfiles(Aws::Vector<Aws::String>&& value) { m_routingProfilesHasBeenSet = true; m_routingProfiles = std::move(value); }

    /**
     * <p>A list of up to 100 routing profile IDs or ARNs.</p>
     */
    inline Filters& WithRoutingProfiles(const Aws::Vector<Aws::String>& value) { SetRoutingProfiles(value); return *this;}

    /**
     * <p>A list of up to 100 routing profile IDs or ARNs.</p>
     */
    inline Filters& WithRoutingProfiles(Aws::Vector<Aws::String>&& value) { SetRoutingProfiles(std::move(value)); return *this;}

    /**
     * <p>A list of up to 100 routing profile IDs or ARNs.</p>
     */
    inline Filters& AddRoutingProfiles(const Aws::String& value) { m_routingProfilesHasBeenSet = true; m_routingProfiles.push_back(value); return *this; }

    /**
     * <p>A list of up to 100 routing profile IDs or ARNs.</p>
     */
    inline Filters& AddRoutingProfiles(Aws::String&& value) { m_routingProfilesHasBeenSet = true; m_routingProfiles.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of up to 100 routing profile IDs or ARNs.</p>
     */
    inline Filters& AddRoutingProfiles(const char* value) { m_routingProfilesHasBeenSet = true; m_routingProfiles.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_queues;
    bool m_queuesHasBeenSet = false;

    Aws::Vector<Channel> m_channels;
    bool m_channelsHasBeenSet = false;

    Aws::Vector<Aws::String> m_routingProfiles;
    bool m_routingProfilesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
