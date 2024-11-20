/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/MinimumLoadBalancerCapacity.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class ModifyCapacityReservationRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API ModifyCapacityReservationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyCapacityReservation"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerArn() const{ return m_loadBalancerArn; }
    inline bool LoadBalancerArnHasBeenSet() const { return m_loadBalancerArnHasBeenSet; }
    inline void SetLoadBalancerArn(const Aws::String& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = value; }
    inline void SetLoadBalancerArn(Aws::String&& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = std::move(value); }
    inline void SetLoadBalancerArn(const char* value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn.assign(value); }
    inline ModifyCapacityReservationRequest& WithLoadBalancerArn(const Aws::String& value) { SetLoadBalancerArn(value); return *this;}
    inline ModifyCapacityReservationRequest& WithLoadBalancerArn(Aws::String&& value) { SetLoadBalancerArn(std::move(value)); return *this;}
    inline ModifyCapacityReservationRequest& WithLoadBalancerArn(const char* value) { SetLoadBalancerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum load balancer capacity reserved.</p>
     */
    inline const MinimumLoadBalancerCapacity& GetMinimumLoadBalancerCapacity() const{ return m_minimumLoadBalancerCapacity; }
    inline bool MinimumLoadBalancerCapacityHasBeenSet() const { return m_minimumLoadBalancerCapacityHasBeenSet; }
    inline void SetMinimumLoadBalancerCapacity(const MinimumLoadBalancerCapacity& value) { m_minimumLoadBalancerCapacityHasBeenSet = true; m_minimumLoadBalancerCapacity = value; }
    inline void SetMinimumLoadBalancerCapacity(MinimumLoadBalancerCapacity&& value) { m_minimumLoadBalancerCapacityHasBeenSet = true; m_minimumLoadBalancerCapacity = std::move(value); }
    inline ModifyCapacityReservationRequest& WithMinimumLoadBalancerCapacity(const MinimumLoadBalancerCapacity& value) { SetMinimumLoadBalancerCapacity(value); return *this;}
    inline ModifyCapacityReservationRequest& WithMinimumLoadBalancerCapacity(MinimumLoadBalancerCapacity&& value) { SetMinimumLoadBalancerCapacity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Resets the capacity reservation.</p>
     */
    inline bool GetResetCapacityReservation() const{ return m_resetCapacityReservation; }
    inline bool ResetCapacityReservationHasBeenSet() const { return m_resetCapacityReservationHasBeenSet; }
    inline void SetResetCapacityReservation(bool value) { m_resetCapacityReservationHasBeenSet = true; m_resetCapacityReservation = value; }
    inline ModifyCapacityReservationRequest& WithResetCapacityReservation(bool value) { SetResetCapacityReservation(value); return *this;}
    ///@}
  private:

    Aws::String m_loadBalancerArn;
    bool m_loadBalancerArnHasBeenSet = false;

    MinimumLoadBalancerCapacity m_minimumLoadBalancerCapacity;
    bool m_minimumLoadBalancerCapacityHasBeenSet = false;

    bool m_resetCapacityReservation;
    bool m_resetCapacityReservationHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
