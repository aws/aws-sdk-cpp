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
  class ModifyCapacityReservationResult
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API ModifyCapacityReservationResult() = default;
    AWS_ELASTICLOADBALANCINGV2_API ModifyCapacityReservationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICLOADBALANCINGV2_API ModifyCapacityReservationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The last time the capacity reservation was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    ModifyCapacityReservationResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of daily capacity decreases remaining.</p>
     */
    inline int GetDecreaseRequestsRemaining() const { return m_decreaseRequestsRemaining; }
    inline void SetDecreaseRequestsRemaining(int value) { m_decreaseRequestsRemainingHasBeenSet = true; m_decreaseRequestsRemaining = value; }
    inline ModifyCapacityReservationResult& WithDecreaseRequestsRemaining(int value) { SetDecreaseRequestsRemaining(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The requested minimum capacity reservation for the load balancer</p>
     */
    inline const MinimumLoadBalancerCapacity& GetMinimumLoadBalancerCapacity() const { return m_minimumLoadBalancerCapacity; }
    template<typename MinimumLoadBalancerCapacityT = MinimumLoadBalancerCapacity>
    void SetMinimumLoadBalancerCapacity(MinimumLoadBalancerCapacityT&& value) { m_minimumLoadBalancerCapacityHasBeenSet = true; m_minimumLoadBalancerCapacity = std::forward<MinimumLoadBalancerCapacityT>(value); }
    template<typename MinimumLoadBalancerCapacityT = MinimumLoadBalancerCapacity>
    ModifyCapacityReservationResult& WithMinimumLoadBalancerCapacity(MinimumLoadBalancerCapacityT&& value) { SetMinimumLoadBalancerCapacity(std::forward<MinimumLoadBalancerCapacityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the capacity reservation.</p>
     */
    inline const Aws::Vector<ZonalCapacityReservationState>& GetCapacityReservationState() const { return m_capacityReservationState; }
    template<typename CapacityReservationStateT = Aws::Vector<ZonalCapacityReservationState>>
    void SetCapacityReservationState(CapacityReservationStateT&& value) { m_capacityReservationStateHasBeenSet = true; m_capacityReservationState = std::forward<CapacityReservationStateT>(value); }
    template<typename CapacityReservationStateT = Aws::Vector<ZonalCapacityReservationState>>
    ModifyCapacityReservationResult& WithCapacityReservationState(CapacityReservationStateT&& value) { SetCapacityReservationState(std::forward<CapacityReservationStateT>(value)); return *this;}
    template<typename CapacityReservationStateT = ZonalCapacityReservationState>
    ModifyCapacityReservationResult& AddCapacityReservationState(CapacityReservationStateT&& value) { m_capacityReservationStateHasBeenSet = true; m_capacityReservationState.emplace_back(std::forward<CapacityReservationStateT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyCapacityReservationResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    int m_decreaseRequestsRemaining{0};
    bool m_decreaseRequestsRemainingHasBeenSet = false;

    MinimumLoadBalancerCapacity m_minimumLoadBalancerCapacity;
    bool m_minimumLoadBalancerCapacityHasBeenSet = false;

    Aws::Vector<ZonalCapacityReservationState> m_capacityReservationState;
    bool m_capacityReservationStateHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
