/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-messaging/model/Identity.h>
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
  class CreateChannelModeratorResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API CreateChannelModeratorResult();
    AWS_CHIMESDKMESSAGING_API CreateChannelModeratorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API CreateChannelModeratorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArn = value; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArn = std::move(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArn.assign(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline CreateChannelModeratorResult& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline CreateChannelModeratorResult& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline CreateChannelModeratorResult& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The ARNs of the channel and the moderator.</p>
     */
    inline const Identity& GetChannelModerator() const{ return m_channelModerator; }

    /**
     * <p>The ARNs of the channel and the moderator.</p>
     */
    inline void SetChannelModerator(const Identity& value) { m_channelModerator = value; }

    /**
     * <p>The ARNs of the channel and the moderator.</p>
     */
    inline void SetChannelModerator(Identity&& value) { m_channelModerator = std::move(value); }

    /**
     * <p>The ARNs of the channel and the moderator.</p>
     */
    inline CreateChannelModeratorResult& WithChannelModerator(const Identity& value) { SetChannelModerator(value); return *this;}

    /**
     * <p>The ARNs of the channel and the moderator.</p>
     */
    inline CreateChannelModeratorResult& WithChannelModerator(Identity&& value) { SetChannelModerator(std::move(value)); return *this;}

  private:

    Aws::String m_channelArn;

    Identity m_channelModerator;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
