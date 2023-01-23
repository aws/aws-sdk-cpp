/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TrafficDistributionGroup.h>
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
    AWS_CONNECT_API DescribeTrafficDistributionGroupResult();
    AWS_CONNECT_API DescribeTrafficDistributionGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeTrafficDistributionGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the traffic distribution group.</p>
     */
    inline const TrafficDistributionGroup& GetTrafficDistributionGroup() const{ return m_trafficDistributionGroup; }

    /**
     * <p>Information about the traffic distribution group.</p>
     */
    inline void SetTrafficDistributionGroup(const TrafficDistributionGroup& value) { m_trafficDistributionGroup = value; }

    /**
     * <p>Information about the traffic distribution group.</p>
     */
    inline void SetTrafficDistributionGroup(TrafficDistributionGroup&& value) { m_trafficDistributionGroup = std::move(value); }

    /**
     * <p>Information about the traffic distribution group.</p>
     */
    inline DescribeTrafficDistributionGroupResult& WithTrafficDistributionGroup(const TrafficDistributionGroup& value) { SetTrafficDistributionGroup(value); return *this;}

    /**
     * <p>Information about the traffic distribution group.</p>
     */
    inline DescribeTrafficDistributionGroupResult& WithTrafficDistributionGroup(TrafficDistributionGroup&& value) { SetTrafficDistributionGroup(std::move(value)); return *this;}

  private:

    TrafficDistributionGroup m_trafficDistributionGroup;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
