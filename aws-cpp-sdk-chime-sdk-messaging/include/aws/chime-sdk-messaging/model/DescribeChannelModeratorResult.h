/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/ChannelModerator.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ChimeSDKMessaging
{
namespace Model
{
  class DescribeChannelModeratorResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API DescribeChannelModeratorResult();
    AWS_CHIMESDKMESSAGING_API DescribeChannelModeratorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API DescribeChannelModeratorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the channel moderator.</p>
     */
    inline const ChannelModerator& GetChannelModerator() const{ return m_channelModerator; }

    /**
     * <p>The details of the channel moderator.</p>
     */
    inline void SetChannelModerator(const ChannelModerator& value) { m_channelModerator = value; }

    /**
     * <p>The details of the channel moderator.</p>
     */
    inline void SetChannelModerator(ChannelModerator&& value) { m_channelModerator = std::move(value); }

    /**
     * <p>The details of the channel moderator.</p>
     */
    inline DescribeChannelModeratorResult& WithChannelModerator(const ChannelModerator& value) { SetChannelModerator(value); return *this;}

    /**
     * <p>The details of the channel moderator.</p>
     */
    inline DescribeChannelModeratorResult& WithChannelModerator(ChannelModerator&& value) { SetChannelModerator(std::move(value)); return *this;}

  private:

    ChannelModerator m_channelModerator;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
