/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
   * <p>Contains information about which channels are supported, and how many
   * contacts an agent can have on a channel simultaneously.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/MediaConcurrency">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API MediaConcurrency
  {
  public:
    MediaConcurrency();
    MediaConcurrency(Aws::Utils::Json::JsonView jsonValue);
    MediaConcurrency& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The channels that agents can handle in the Contact Control Panel (CCP).</p>
     */
    inline const Channel& GetChannel() const{ return m_channel; }

    /**
     * <p>The channels that agents can handle in the Contact Control Panel (CCP).</p>
     */
    inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }

    /**
     * <p>The channels that agents can handle in the Contact Control Panel (CCP).</p>
     */
    inline void SetChannel(const Channel& value) { m_channelHasBeenSet = true; m_channel = value; }

    /**
     * <p>The channels that agents can handle in the Contact Control Panel (CCP).</p>
     */
    inline void SetChannel(Channel&& value) { m_channelHasBeenSet = true; m_channel = std::move(value); }

    /**
     * <p>The channels that agents can handle in the Contact Control Panel (CCP).</p>
     */
    inline MediaConcurrency& WithChannel(const Channel& value) { SetChannel(value); return *this;}

    /**
     * <p>The channels that agents can handle in the Contact Control Panel (CCP).</p>
     */
    inline MediaConcurrency& WithChannel(Channel&& value) { SetChannel(std::move(value)); return *this;}


    /**
     * <p>The number of contacts an agent can have on a channel simultaneously.</p>
     */
    inline int GetConcurrency() const{ return m_concurrency; }

    /**
     * <p>The number of contacts an agent can have on a channel simultaneously.</p>
     */
    inline bool ConcurrencyHasBeenSet() const { return m_concurrencyHasBeenSet; }

    /**
     * <p>The number of contacts an agent can have on a channel simultaneously.</p>
     */
    inline void SetConcurrency(int value) { m_concurrencyHasBeenSet = true; m_concurrency = value; }

    /**
     * <p>The number of contacts an agent can have on a channel simultaneously.</p>
     */
    inline MediaConcurrency& WithConcurrency(int value) { SetConcurrency(value); return *this;}

  private:

    Channel m_channel;
    bool m_channelHasBeenSet;

    int m_concurrency;
    bool m_concurrencyHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
