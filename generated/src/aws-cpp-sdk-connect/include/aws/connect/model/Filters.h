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


    ///@{
    /**
     * <p>The queues to use to filter the metrics. You should specify at least one
     * queue, and can specify up to 100 queues per request. The
     * <code>GetCurrentMetricsData</code> API in particular requires a queue when you
     * include a <code>Filter</code> in your request. </p>
     */
    inline const Aws::Vector<Aws::String>& GetQueues() const{ return m_queues; }
    inline bool QueuesHasBeenSet() const { return m_queuesHasBeenSet; }
    inline void SetQueues(const Aws::Vector<Aws::String>& value) { m_queuesHasBeenSet = true; m_queues = value; }
    inline void SetQueues(Aws::Vector<Aws::String>&& value) { m_queuesHasBeenSet = true; m_queues = std::move(value); }
    inline Filters& WithQueues(const Aws::Vector<Aws::String>& value) { SetQueues(value); return *this;}
    inline Filters& WithQueues(Aws::Vector<Aws::String>&& value) { SetQueues(std::move(value)); return *this;}
    inline Filters& AddQueues(const Aws::String& value) { m_queuesHasBeenSet = true; m_queues.push_back(value); return *this; }
    inline Filters& AddQueues(Aws::String&& value) { m_queuesHasBeenSet = true; m_queues.push_back(std::move(value)); return *this; }
    inline Filters& AddQueues(const char* value) { m_queuesHasBeenSet = true; m_queues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The channel to use to filter the metrics.</p>
     */
    inline const Aws::Vector<Channel>& GetChannels() const{ return m_channels; }
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
    inline void SetChannels(const Aws::Vector<Channel>& value) { m_channelsHasBeenSet = true; m_channels = value; }
    inline void SetChannels(Aws::Vector<Channel>&& value) { m_channelsHasBeenSet = true; m_channels = std::move(value); }
    inline Filters& WithChannels(const Aws::Vector<Channel>& value) { SetChannels(value); return *this;}
    inline Filters& WithChannels(Aws::Vector<Channel>&& value) { SetChannels(std::move(value)); return *this;}
    inline Filters& AddChannels(const Channel& value) { m_channelsHasBeenSet = true; m_channels.push_back(value); return *this; }
    inline Filters& AddChannels(Channel&& value) { m_channelsHasBeenSet = true; m_channels.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of up to 100 routing profile IDs or ARNs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRoutingProfiles() const{ return m_routingProfiles; }
    inline bool RoutingProfilesHasBeenSet() const { return m_routingProfilesHasBeenSet; }
    inline void SetRoutingProfiles(const Aws::Vector<Aws::String>& value) { m_routingProfilesHasBeenSet = true; m_routingProfiles = value; }
    inline void SetRoutingProfiles(Aws::Vector<Aws::String>&& value) { m_routingProfilesHasBeenSet = true; m_routingProfiles = std::move(value); }
    inline Filters& WithRoutingProfiles(const Aws::Vector<Aws::String>& value) { SetRoutingProfiles(value); return *this;}
    inline Filters& WithRoutingProfiles(Aws::Vector<Aws::String>&& value) { SetRoutingProfiles(std::move(value)); return *this;}
    inline Filters& AddRoutingProfiles(const Aws::String& value) { m_routingProfilesHasBeenSet = true; m_routingProfiles.push_back(value); return *this; }
    inline Filters& AddRoutingProfiles(Aws::String&& value) { m_routingProfilesHasBeenSet = true; m_routingProfiles.push_back(std::move(value)); return *this; }
    inline Filters& AddRoutingProfiles(const char* value) { m_routingProfilesHasBeenSet = true; m_routingProfiles.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of expressions as a filter, in which an expression is an object of a
     * step in a routing criteria.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRoutingStepExpressions() const{ return m_routingStepExpressions; }
    inline bool RoutingStepExpressionsHasBeenSet() const { return m_routingStepExpressionsHasBeenSet; }
    inline void SetRoutingStepExpressions(const Aws::Vector<Aws::String>& value) { m_routingStepExpressionsHasBeenSet = true; m_routingStepExpressions = value; }
    inline void SetRoutingStepExpressions(Aws::Vector<Aws::String>&& value) { m_routingStepExpressionsHasBeenSet = true; m_routingStepExpressions = std::move(value); }
    inline Filters& WithRoutingStepExpressions(const Aws::Vector<Aws::String>& value) { SetRoutingStepExpressions(value); return *this;}
    inline Filters& WithRoutingStepExpressions(Aws::Vector<Aws::String>&& value) { SetRoutingStepExpressions(std::move(value)); return *this;}
    inline Filters& AddRoutingStepExpressions(const Aws::String& value) { m_routingStepExpressionsHasBeenSet = true; m_routingStepExpressions.push_back(value); return *this; }
    inline Filters& AddRoutingStepExpressions(Aws::String&& value) { m_routingStepExpressionsHasBeenSet = true; m_routingStepExpressions.push_back(std::move(value)); return *this; }
    inline Filters& AddRoutingStepExpressions(const char* value) { m_routingStepExpressionsHasBeenSet = true; m_routingStepExpressions.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_queues;
    bool m_queuesHasBeenSet = false;

    Aws::Vector<Channel> m_channels;
    bool m_channelsHasBeenSet = false;

    Aws::Vector<Aws::String> m_routingProfiles;
    bool m_routingProfilesHasBeenSet = false;

    Aws::Vector<Aws::String> m_routingStepExpressions;
    bool m_routingStepExpressionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
