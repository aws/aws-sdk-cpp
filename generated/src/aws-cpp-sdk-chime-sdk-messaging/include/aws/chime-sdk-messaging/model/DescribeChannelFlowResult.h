﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/ChannelFlow.h>
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
  class DescribeChannelFlowResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API DescribeChannelFlowResult();
    AWS_CHIMESDKMESSAGING_API DescribeChannelFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API DescribeChannelFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The channel flow details.</p>
     */
    inline const ChannelFlow& GetChannelFlow() const{ return m_channelFlow; }
    inline void SetChannelFlow(const ChannelFlow& value) { m_channelFlow = value; }
    inline void SetChannelFlow(ChannelFlow&& value) { m_channelFlow = std::move(value); }
    inline DescribeChannelFlowResult& WithChannelFlow(const ChannelFlow& value) { SetChannelFlow(value); return *this;}
    inline DescribeChannelFlowResult& WithChannelFlow(ChannelFlow&& value) { SetChannelFlow(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeChannelFlowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeChannelFlowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeChannelFlowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ChannelFlow m_channelFlow;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
