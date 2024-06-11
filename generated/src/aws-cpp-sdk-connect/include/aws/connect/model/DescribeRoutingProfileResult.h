﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/RoutingProfile.h>
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
namespace Connect
{
namespace Model
{
  class DescribeRoutingProfileResult
  {
  public:
    AWS_CONNECT_API DescribeRoutingProfileResult();
    AWS_CONNECT_API DescribeRoutingProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeRoutingProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The routing profile.</p>
     */
    inline const RoutingProfile& GetRoutingProfile() const{ return m_routingProfile; }
    inline void SetRoutingProfile(const RoutingProfile& value) { m_routingProfile = value; }
    inline void SetRoutingProfile(RoutingProfile&& value) { m_routingProfile = std::move(value); }
    inline DescribeRoutingProfileResult& WithRoutingProfile(const RoutingProfile& value) { SetRoutingProfile(value); return *this;}
    inline DescribeRoutingProfileResult& WithRoutingProfile(RoutingProfile&& value) { SetRoutingProfile(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeRoutingProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeRoutingProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeRoutingProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RoutingProfile m_routingProfile;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
