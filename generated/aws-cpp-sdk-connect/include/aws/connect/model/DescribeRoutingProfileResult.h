/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/RoutingProfile.h>
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
  class AWS_CONNECT_API DescribeRoutingProfileResult
  {
  public:
    DescribeRoutingProfileResult();
    DescribeRoutingProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeRoutingProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The routing profile.</p>
     */
    inline const RoutingProfile& GetRoutingProfile() const{ return m_routingProfile; }

    /**
     * <p>The routing profile.</p>
     */
    inline void SetRoutingProfile(const RoutingProfile& value) { m_routingProfile = value; }

    /**
     * <p>The routing profile.</p>
     */
    inline void SetRoutingProfile(RoutingProfile&& value) { m_routingProfile = std::move(value); }

    /**
     * <p>The routing profile.</p>
     */
    inline DescribeRoutingProfileResult& WithRoutingProfile(const RoutingProfile& value) { SetRoutingProfile(value); return *this;}

    /**
     * <p>The routing profile.</p>
     */
    inline DescribeRoutingProfileResult& WithRoutingProfile(RoutingProfile&& value) { SetRoutingProfile(std::move(value)); return *this;}

  private:

    RoutingProfile m_routingProfile;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
