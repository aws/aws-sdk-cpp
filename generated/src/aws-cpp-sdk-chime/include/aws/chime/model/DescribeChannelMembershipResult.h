﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/ChannelMembership.h>
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
namespace Chime
{
namespace Model
{
  class DescribeChannelMembershipResult
  {
  public:
    AWS_CHIME_API DescribeChannelMembershipResult();
    AWS_CHIME_API DescribeChannelMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API DescribeChannelMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the membership.</p>
     */
    inline const ChannelMembership& GetChannelMembership() const{ return m_channelMembership; }

    /**
     * <p>The details of the membership.</p>
     */
    inline void SetChannelMembership(const ChannelMembership& value) { m_channelMembership = value; }

    /**
     * <p>The details of the membership.</p>
     */
    inline void SetChannelMembership(ChannelMembership&& value) { m_channelMembership = std::move(value); }

    /**
     * <p>The details of the membership.</p>
     */
    inline DescribeChannelMembershipResult& WithChannelMembership(const ChannelMembership& value) { SetChannelMembership(value); return *this;}

    /**
     * <p>The details of the membership.</p>
     */
    inline DescribeChannelMembershipResult& WithChannelMembership(ChannelMembership&& value) { SetChannelMembership(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeChannelMembershipResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeChannelMembershipResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeChannelMembershipResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ChannelMembership m_channelMembership;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
