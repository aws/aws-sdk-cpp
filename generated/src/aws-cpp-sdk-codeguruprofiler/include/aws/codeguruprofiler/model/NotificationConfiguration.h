/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeguruprofiler/model/Channel.h>
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
namespace CodeGuruProfiler
{
namespace Model
{

  /**
   * <p>The configuration for notifications stored for each profiling group. This
   * includes up to to two channels and a list of event publishers associated with
   * each channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/NotificationConfiguration">AWS
   * API Reference</a></p>
   */
  class NotificationConfiguration
  {
  public:
    AWS_CODEGURUPROFILER_API NotificationConfiguration();
    AWS_CODEGURUPROFILER_API NotificationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API NotificationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of up to two channels to be used for sending notifications for events
     * detected from the application profile.</p>
     */
    inline const Aws::Vector<Channel>& GetChannels() const{ return m_channels; }

    /**
     * <p>List of up to two channels to be used for sending notifications for events
     * detected from the application profile.</p>
     */
    inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }

    /**
     * <p>List of up to two channels to be used for sending notifications for events
     * detected from the application profile.</p>
     */
    inline void SetChannels(const Aws::Vector<Channel>& value) { m_channelsHasBeenSet = true; m_channels = value; }

    /**
     * <p>List of up to two channels to be used for sending notifications for events
     * detected from the application profile.</p>
     */
    inline void SetChannels(Aws::Vector<Channel>&& value) { m_channelsHasBeenSet = true; m_channels = std::move(value); }

    /**
     * <p>List of up to two channels to be used for sending notifications for events
     * detected from the application profile.</p>
     */
    inline NotificationConfiguration& WithChannels(const Aws::Vector<Channel>& value) { SetChannels(value); return *this;}

    /**
     * <p>List of up to two channels to be used for sending notifications for events
     * detected from the application profile.</p>
     */
    inline NotificationConfiguration& WithChannels(Aws::Vector<Channel>&& value) { SetChannels(std::move(value)); return *this;}

    /**
     * <p>List of up to two channels to be used for sending notifications for events
     * detected from the application profile.</p>
     */
    inline NotificationConfiguration& AddChannels(const Channel& value) { m_channelsHasBeenSet = true; m_channels.push_back(value); return *this; }

    /**
     * <p>List of up to two channels to be used for sending notifications for events
     * detected from the application profile.</p>
     */
    inline NotificationConfiguration& AddChannels(Channel&& value) { m_channelsHasBeenSet = true; m_channels.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Channel> m_channels;
    bool m_channelsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
