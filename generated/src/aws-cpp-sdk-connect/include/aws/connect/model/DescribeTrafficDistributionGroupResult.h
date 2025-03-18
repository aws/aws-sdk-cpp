/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TrafficDistributionGroup.h>
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
  class DescribeTrafficDistributionGroupResult
  {
  public:
    AWS_CONNECT_API DescribeTrafficDistributionGroupResult() = default;
    AWS_CONNECT_API DescribeTrafficDistributionGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeTrafficDistributionGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the traffic distribution group.</p>
     */
    inline const TrafficDistributionGroup& GetTrafficDistributionGroup() const { return m_trafficDistributionGroup; }
    template<typename TrafficDistributionGroupT = TrafficDistributionGroup>
    void SetTrafficDistributionGroup(TrafficDistributionGroupT&& value) { m_trafficDistributionGroupHasBeenSet = true; m_trafficDistributionGroup = std::forward<TrafficDistributionGroupT>(value); }
    template<typename TrafficDistributionGroupT = TrafficDistributionGroup>
    DescribeTrafficDistributionGroupResult& WithTrafficDistributionGroup(TrafficDistributionGroupT&& value) { SetTrafficDistributionGroup(std::forward<TrafficDistributionGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTrafficDistributionGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TrafficDistributionGroup m_trafficDistributionGroup;
    bool m_trafficDistributionGroupHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
