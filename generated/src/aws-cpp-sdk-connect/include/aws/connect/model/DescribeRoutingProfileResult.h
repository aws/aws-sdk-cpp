/**
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
    AWS_CONNECT_API DescribeRoutingProfileResult() = default;
    AWS_CONNECT_API DescribeRoutingProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeRoutingProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The routing profile.</p>
     */
    inline const RoutingProfile& GetRoutingProfile() const { return m_routingProfile; }
    template<typename RoutingProfileT = RoutingProfile>
    void SetRoutingProfile(RoutingProfileT&& value) { m_routingProfileHasBeenSet = true; m_routingProfile = std::forward<RoutingProfileT>(value); }
    template<typename RoutingProfileT = RoutingProfile>
    DescribeRoutingProfileResult& WithRoutingProfile(RoutingProfileT&& value) { SetRoutingProfile(std::forward<RoutingProfileT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRoutingProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RoutingProfile m_routingProfile;
    bool m_routingProfileHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
