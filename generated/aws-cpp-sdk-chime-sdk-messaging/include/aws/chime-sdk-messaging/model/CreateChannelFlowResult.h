﻿/**
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
  class AWS_CHIMESDKMESSAGING_API CreateChannelFlowResult
  {
  public:
    CreateChannelFlowResult();
    CreateChannelFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateChannelFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline const Aws::String& GetChannelFlowArn() const{ return m_channelFlowArn; }

    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline void SetChannelFlowArn(const Aws::String& value) { m_channelFlowArn = value; }

    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline void SetChannelFlowArn(Aws::String&& value) { m_channelFlowArn = std::move(value); }

    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline void SetChannelFlowArn(const char* value) { m_channelFlowArn.assign(value); }

    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline CreateChannelFlowResult& WithChannelFlowArn(const Aws::String& value) { SetChannelFlowArn(value); return *this;}

    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline CreateChannelFlowResult& WithChannelFlowArn(Aws::String&& value) { SetChannelFlowArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline CreateChannelFlowResult& WithChannelFlowArn(const char* value) { SetChannelFlowArn(value); return *this;}

  private:

    Aws::String m_channelFlowArn;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
