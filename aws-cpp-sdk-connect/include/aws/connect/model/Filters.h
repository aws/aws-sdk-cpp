/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>The filter, either channel or queues, to apply to the metric results
   * retrieved.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Filters">AWS API
   * Reference</a></p>
   */
  class AWS_CONNECT_API Filters
  {
  public:
    Filters();
    Filters(Aws::Utils::Json::JsonView jsonValue);
    Filters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of up to 100 queue IDs or queue ARNs to use to filter the metrics
     * retrieved. You can include both IDs and ARNs in a request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueues() const{ return m_queues; }

    /**
     * <p>A list of up to 100 queue IDs or queue ARNs to use to filter the metrics
     * retrieved. You can include both IDs and ARNs in a request.</p>
     */
    inline bool QueuesHasBeenSet() const { return m_queuesHasBeenSet; }

    /**
     * <p>A list of up to 100 queue IDs or queue ARNs to use to filter the metrics
     * retrieved. You can include both IDs and ARNs in a request.</p>
     */
    inline void SetQueues(const Aws::Vector<Aws::String>& value) { m_queuesHasBeenSet = true; m_queues = value; }

    /**
     * <p>A list of up to 100 queue IDs or queue ARNs to use to filter the metrics
     * retrieved. You can include both IDs and ARNs in a request.</p>
     */
    inline void SetQueues(Aws::Vector<Aws::String>&& value) { m_queuesHasBeenSet = true; m_queues = std::move(value); }

    /**
     * <p>A list of up to 100 queue IDs or queue ARNs to use to filter the metrics
     * retrieved. You can include both IDs and ARNs in a request.</p>
     */
    inline Filters& WithQueues(const Aws::Vector<Aws::String>& value) { SetQueues(value); return *this;}

    /**
     * <p>A list of up to 100 queue IDs or queue ARNs to use to filter the metrics
     * retrieved. You can include both IDs and ARNs in a request.</p>
     */
    inline Filters& WithQueues(Aws::Vector<Aws::String>&& value) { SetQueues(std::move(value)); return *this;}

    /**
     * <p>A list of up to 100 queue IDs or queue ARNs to use to filter the metrics
     * retrieved. You can include both IDs and ARNs in a request.</p>
     */
    inline Filters& AddQueues(const Aws::String& value) { m_queuesHasBeenSet = true; m_queues.push_back(value); return *this; }

    /**
     * <p>A list of up to 100 queue IDs or queue ARNs to use to filter the metrics
     * retrieved. You can include both IDs and ARNs in a request.</p>
     */
    inline Filters& AddQueues(Aws::String&& value) { m_queuesHasBeenSet = true; m_queues.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of up to 100 queue IDs or queue ARNs to use to filter the metrics
     * retrieved. You can include both IDs and ARNs in a request.</p>
     */
    inline Filters& AddQueues(const char* value) { m_queuesHasBeenSet = true; m_queues.push_back(value); return *this; }


    /**
     * <p>The Channel to use as a filter for the metrics returned. Only VOICE is
     * supported.</p>
     */
    inline const Aws::Vector<Channel>& GetChannels() const{ return m_channels; }

    /**
     * <p>The Channel to use as a filter for the metrics returned. Only VOICE is
     * supported.</p>
     */
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }

    /**
     * <p>The Channel to use as a filter for the metrics returned. Only VOICE is
     * supported.</p>
     */
    inline void SetChannels(const Aws::Vector<Channel>& value) { m_channelsHasBeenSet = true; m_channels = value; }

    /**
     * <p>The Channel to use as a filter for the metrics returned. Only VOICE is
     * supported.</p>
     */
    inline void SetChannels(Aws::Vector<Channel>&& value) { m_channelsHasBeenSet = true; m_channels = std::move(value); }

    /**
     * <p>The Channel to use as a filter for the metrics returned. Only VOICE is
     * supported.</p>
     */
    inline Filters& WithChannels(const Aws::Vector<Channel>& value) { SetChannels(value); return *this;}

    /**
     * <p>The Channel to use as a filter for the metrics returned. Only VOICE is
     * supported.</p>
     */
    inline Filters& WithChannels(Aws::Vector<Channel>&& value) { SetChannels(std::move(value)); return *this;}

    /**
     * <p>The Channel to use as a filter for the metrics returned. Only VOICE is
     * supported.</p>
     */
    inline Filters& AddChannels(const Channel& value) { m_channelsHasBeenSet = true; m_channels.push_back(value); return *this; }

    /**
     * <p>The Channel to use as a filter for the metrics returned. Only VOICE is
     * supported.</p>
     */
    inline Filters& AddChannels(Channel&& value) { m_channelsHasBeenSet = true; m_channels.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_queues;
    bool m_queuesHasBeenSet;

    Aws::Vector<Channel> m_channels;
    bool m_channelsHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
