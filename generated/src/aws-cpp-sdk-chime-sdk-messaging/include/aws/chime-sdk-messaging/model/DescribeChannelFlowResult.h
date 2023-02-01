/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/ChannelFlow.h>
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


    /**
     * <p>The channel flow details.</p>
     */
    inline const ChannelFlow& GetChannelFlow() const{ return m_channelFlow; }

    /**
     * <p>The channel flow details.</p>
     */
    inline void SetChannelFlow(const ChannelFlow& value) { m_channelFlow = value; }

    /**
     * <p>The channel flow details.</p>
     */
    inline void SetChannelFlow(ChannelFlow&& value) { m_channelFlow = std::move(value); }

    /**
     * <p>The channel flow details.</p>
     */
    inline DescribeChannelFlowResult& WithChannelFlow(const ChannelFlow& value) { SetChannelFlow(value); return *this;}

    /**
     * <p>The channel flow details.</p>
     */
    inline DescribeChannelFlowResult& WithChannelFlow(ChannelFlow&& value) { SetChannelFlow(std::move(value)); return *this;}

  private:

    ChannelFlow m_channelFlow;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
