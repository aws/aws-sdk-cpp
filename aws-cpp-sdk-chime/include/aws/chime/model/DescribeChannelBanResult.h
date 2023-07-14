﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/ChannelBan.h>
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
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API DescribeChannelBanResult
  {
  public:
    DescribeChannelBanResult();
    DescribeChannelBanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeChannelBanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
} // namespace Chime
} // namespace Aws
