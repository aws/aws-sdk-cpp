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
  class UpdateChannelFlowResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API UpdateChannelFlowResult();
    AWS_CHIMESDKMESSAGING_API UpdateChannelFlowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API UpdateChannelFlowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline UpdateChannelFlowResult& WithChannelFlowArn(const Aws::String& value) { SetChannelFlowArn(value); return *this;}

    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline UpdateChannelFlowResult& WithChannelFlowArn(Aws::String&& value) { SetChannelFlowArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel flow.</p>
     */
    inline UpdateChannelFlowResult& WithChannelFlowArn(const char* value) { SetChannelFlowArn(value); return *this;}

  private:

    Aws::String m_channelFlowArn;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
