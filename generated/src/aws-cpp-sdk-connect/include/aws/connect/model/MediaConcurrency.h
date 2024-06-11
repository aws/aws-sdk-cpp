﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Channel.h>
#include <aws/connect/model/CrossChannelBehavior.h>
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
   * <p>Contains information about which channels are supported, and how many
   * contacts an agent can have on a channel simultaneously.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/MediaConcurrency">AWS
   * API Reference</a></p>
   */
  class MediaConcurrency
  {
  public:
    AWS_CONNECT_API MediaConcurrency();
    AWS_CONNECT_API MediaConcurrency(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API MediaConcurrency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The channels that agents can handle in the Contact Control Panel (CCP).</p>
     */
    inline const Channel& GetChannel() const{ return m_channel; }
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
    inline void SetChannel(const Channel& value) { m_channelHasBeenSet = true; m_channel = value; }
    inline void SetChannel(Channel&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }
    inline MediaConcurrency& WithChannel(const Channel& value) { SetChannel(value); return *this;}
    inline MediaConcurrency& WithChannel(Channel&& value) { SetChannel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of contacts an agent can have on a channel simultaneously.</p>
     * <p>Valid Range for <code>VOICE</code>: Minimum value of 1. Maximum value of
     * 1.</p> <p>Valid Range for <code>CHAT</code>: Minimum value of 1. Maximum value
     * of 10.</p> <p>Valid Range for <code>TASK</code>: Minimum value of 1. Maximum
     * value of 10.</p>
     */
    inline int GetConcurrency() const{ return m_concurrency; }
    inline bool ConcurrencyHasBeenSet() const { return m_concurrencyHasBeenSet; }
    inline void SetConcurrency(int value) { m_concurrencyHasBeenSet = true; m_concurrency = value; }
    inline MediaConcurrency& WithConcurrency(int value) { SetConcurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the cross-channel routing behavior for each channel that is enabled
     * for this Routing Profile. For example, this allows you to offer an agent a
     * different contact from another channel when they are currently working with a
     * contact from a Voice channel.</p>
     */
    inline const CrossChannelBehavior& GetCrossChannelBehavior() const{ return m_crossChannelBehavior; }
    inline bool CrossChannelBehaviorHasBeenSet() const { return m_crossChannelBehaviorHasBeenSet; }
    inline void SetCrossChannelBehavior(const CrossChannelBehavior& value) { m_crossChannelBehaviorHasBeenSet = true; m_crossChannelBehavior = value; }
    inline void SetCrossChannelBehavior(CrossChannelBehavior&& value) { m_crossChannelBehaviorHasBeenSet = true; m_crossChannelBehavior = std::move(value); }
    inline MediaConcurrency& WithCrossChannelBehavior(const CrossChannelBehavior& value) { SetCrossChannelBehavior(value); return *this;}
    inline MediaConcurrency& WithCrossChannelBehavior(CrossChannelBehavior&& value) { SetCrossChannelBehavior(std::move(value)); return *this;}
    ///@}
  private:

    Channel m_channel;
    bool m_channelHasBeenSet = false;

    int m_concurrency;
    bool m_concurrencyHasBeenSet = false;

    CrossChannelBehavior m_crossChannelBehavior;
    bool m_crossChannelBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
