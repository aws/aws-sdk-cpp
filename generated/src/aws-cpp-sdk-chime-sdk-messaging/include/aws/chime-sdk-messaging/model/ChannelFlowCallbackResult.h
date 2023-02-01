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
  class ChannelFlowCallbackResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API ChannelFlowCallbackResult();
    AWS_CHIMESDKMESSAGING_API ChannelFlowCallbackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API ChannelFlowCallbackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ChannelFlowCallbackResult& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline ChannelFlowCallbackResult& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline ChannelFlowCallbackResult& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The call back ID passed in the request.</p>
     */
    inline const Aws::String& GetCallbackId() const{ return m_callbackId; }

    /**
     * <p>The call back ID passed in the request.</p>
     */
    inline void SetCallbackId(const Aws::String& value) { m_callbackId = value; }

    /**
     * <p>The call back ID passed in the request.</p>
     */
    inline void SetCallbackId(Aws::String&& value) { m_callbackId = std::move(value); }

    /**
     * <p>The call back ID passed in the request.</p>
     */
    inline void SetCallbackId(const char* value) { m_callbackId.assign(value); }

    /**
     * <p>The call back ID passed in the request.</p>
     */
    inline ChannelFlowCallbackResult& WithCallbackId(const Aws::String& value) { SetCallbackId(value); return *this;}

    /**
     * <p>The call back ID passed in the request.</p>
     */
    inline ChannelFlowCallbackResult& WithCallbackId(Aws::String&& value) { SetCallbackId(std::move(value)); return *this;}

    /**
     * <p>The call back ID passed in the request.</p>
     */
    inline ChannelFlowCallbackResult& WithCallbackId(const char* value) { SetCallbackId(value); return *this;}

  private:

    Aws::String m_channelArn;

    Aws::String m_callbackId;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
