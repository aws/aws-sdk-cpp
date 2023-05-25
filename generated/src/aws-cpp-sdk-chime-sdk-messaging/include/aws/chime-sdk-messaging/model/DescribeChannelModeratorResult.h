/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/ChannelModerator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeChannelModeratorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeChannelModeratorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeChannelModeratorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ChannelModerator m_channelModerator;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
