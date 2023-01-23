/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/ChannelBan.h>
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
  class DescribeChannelBanResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API DescribeChannelBanResult();
    AWS_CHIMESDKMESSAGING_API DescribeChannelBanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API DescribeChannelBanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the ban.</p>
     */
    inline const ChannelBan& GetChannelBan() const{ return m_channelBan; }

    /**
     * <p>The details of the ban.</p>
     */
    inline void SetChannelBan(const ChannelBan& value) { m_channelBan = value; }

    /**
     * <p>The details of the ban.</p>
     */
    inline void SetChannelBan(ChannelBan&& value) { m_channelBan = std::move(value); }

    /**
     * <p>The details of the ban.</p>
     */
    inline DescribeChannelBanResult& WithChannelBan(const ChannelBan& value) { SetChannelBan(value); return *this;}

    /**
     * <p>The details of the ban.</p>
     */
    inline DescribeChannelBanResult& WithChannelBan(ChannelBan&& value) { SetChannelBan(std::move(value)); return *this;}

  private:

    ChannelBan m_channelBan;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
