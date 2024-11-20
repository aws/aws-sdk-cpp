/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/elasticloadbalancingv2/model/MinimumLoadBalancerCapacity.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/ResponseMetadata.h>
#include <aws/elasticloadbalancingv2/model/ZonalCapacityReservationState.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{
  class DescribeCapacityReservationResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API DescribeCapacityReservationResult();
    AWS_ELASTICLOADBALANCINGV2_API DescribeCapacityReservationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API DescribeCapacityReservationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The last time the capacity reservation was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeCapacityReservationResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeCapacityReservationResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of daily capacity decreases remaining.</p>
     */
    inline int GetDecreaseRequestsRemaining() const{ return m_decreaseRequestsRemaining; }
    inline void SetDecreaseRequestsRemaining(int value) { m_decreaseRequestsRemaining = value; }
    inline DescribeCapacityReservationResult& WithDecreaseRequestsRemaining(int value) { SetDecreaseRequestsRemaining(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The requested minimum capacity reservation for the load balancer</p>
     */
    inline const MinimumLoadBalancerCapacity& GetMinimumLoadBalancerCapacity() const{ return m_minimumLoadBalancerCapacity; }
    inline void SetMinimumLoadBalancerCapacity(const MinimumLoadBalancerCapacity& value) { m_minimumLoadBalancerCapacity = value; }
    inline void SetMinimumLoadBalancerCapacity(MinimumLoadBalancerCapacity&& value) { m_minimumLoadBalancerCapacity = std::move(value); }
    inline DescribeCapacityReservationResult& WithMinimumLoadBalancerCapacity(const MinimumLoadBalancerCapacity& value) { SetMinimumLoadBalancerCapacity(value); return *this;}
    inline DescribeCapacityReservationResult& WithMinimumLoadBalancerCapacity(MinimumLoadBalancerCapacity&& value) { SetMinimumLoadBalancerCapacity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the capacity reservation.</p>
     */
    inline const Aws::Vector<ZonalCapacityReservationState>& GetCapacityReservationState() const{ return m_capacityReservationState; }
    inline void SetCapacityReservationState(const Aws::Vector<ZonalCapacityReservationState>& value) { m_capacityReservationState = value; }
    inline void SetCapacityReservationState(Aws::Vector<ZonalCapacityReservationState>&& value) { m_capacityReservationState = std::move(value); }
    inline DescribeCapacityReservationResult& WithCapacityReservationState(const Aws::Vector<ZonalCapacityReservationState>& value) { SetCapacityReservationState(value); return *this;}
    inline DescribeCapacityReservationResult& WithCapacityReservationState(Aws::Vector<ZonalCapacityReservationState>&& value) { SetCapacityReservationState(std::move(value)); return *this;}
    inline DescribeCapacityReservationResult& AddCapacityReservationState(const ZonalCapacityReservationState& value) { m_capacityReservationState.push_back(value); return *this; }
    inline DescribeCapacityReservationResult& AddCapacityReservationState(ZonalCapacityReservationState&& value) { m_capacityReservationState.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeCapacityReservationResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeCapacityReservationResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_lastModifiedTime;

    int m_decreaseRequestsRemaining;

    MinimumLoadBalancerCapacity m_minimumLoadBalancerCapacity;

    Aws::Vector<ZonalCapacityReservationState> m_capacityReservationState;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
