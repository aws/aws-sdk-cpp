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


    ///@{
    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }
    inline void SetChannelArn(const Aws::String& value) { m_channelArn = value; }
    inline void SetChannelArn(Aws::String&& value) { m_channelArn = std::move(value); }
    inline void SetChannelArn(const char* value) { m_channelArn.assign(value); }
    inline ChannelFlowCallbackResult& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}
    inline ChannelFlowCallbackResult& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}
    inline ChannelFlowCallbackResult& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The call back ID passed in the request.</p>
     */
    inline const Aws::String& GetCallbackId() const{ return m_callbackId; }
    inline void SetCallbackId(const Aws::String& value) { m_callbackId = value; }
    inline void SetCallbackId(Aws::String&& value) { m_callbackId = std::move(value); }
    inline void SetCallbackId(const char* value) { m_callbackId.assign(value); }
    inline ChannelFlowCallbackResult& WithCallbackId(const Aws::String& value) { SetCallbackId(value); return *this;}
    inline ChannelFlowCallbackResult& WithCallbackId(Aws::String&& value) { SetCallbackId(std::move(value)); return *this;}
    inline ChannelFlowCallbackResult& WithCallbackId(const char* value) { SetCallbackId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ChannelFlowCallbackResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ChannelFlowCallbackResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ChannelFlowCallbackResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;

    Aws::String m_callbackId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
