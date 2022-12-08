/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
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
  class UpdateChannelReadMarkerResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API UpdateChannelReadMarkerResult();
    AWS_CHIMESDKMESSAGING_API UpdateChannelReadMarkerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API UpdateChannelReadMarkerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline UpdateChannelReadMarkerResult& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline UpdateChannelReadMarkerResult& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline UpdateChannelReadMarkerResult& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The ID of the SubChannel in the response.</p>
     */
    inline const Aws::String& GetSubChannelId() const{ return m_subChannelId; }

    /**
     * <p>The ID of the SubChannel in the response.</p>
     */
    inline void SetSubChannelId(const Aws::String& value) { m_subChannelId = value; }

    /**
     * <p>The ID of the SubChannel in the response.</p>
     */
    inline void SetSubChannelId(Aws::String&& value) { m_subChannelId = std::move(value); }

    /**
     * <p>The ID of the SubChannel in the response.</p>
     */
    inline void SetSubChannelId(const char* value) { m_subChannelId.assign(value); }

    /**
     * <p>The ID of the SubChannel in the response.</p>
     */
    inline UpdateChannelReadMarkerResult& WithSubChannelId(const Aws::String& value) { SetSubChannelId(value); return *this;}

    /**
     * <p>The ID of the SubChannel in the response.</p>
     */
    inline UpdateChannelReadMarkerResult& WithSubChannelId(Aws::String&& value) { SetSubChannelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the SubChannel in the response.</p>
     */
    inline UpdateChannelReadMarkerResult& WithSubChannelId(const char* value) { SetSubChannelId(value); return *this;}

  private:

    Aws::String m_channelArn;

    Aws::String m_subChannelId;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
