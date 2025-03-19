/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/ReservedInstanceLimitPrice.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for PurchaseReservedInstancesOffering.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PurchaseReservedInstancesOfferingRequest">AWS
   * API Reference</a></p>
   */
  class PurchaseReservedInstancesOfferingRequest : public EC2Request
  {
  public:
    AWS_EC2_API PurchaseReservedInstancesOfferingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PurchaseReservedInstancesOffering"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The number of Reserved Instances to purchase.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline PurchaseReservedInstancesOfferingRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Reserved Instance offering to purchase.</p>
     */
    inline const Aws::String& GetReservedInstancesOfferingId() const { return m_reservedInstancesOfferingId; }
    inline bool ReservedInstancesOfferingIdHasBeenSet() const { return m_reservedInstancesOfferingIdHasBeenSet; }
    template<typename ReservedInstancesOfferingIdT = Aws::String>
    void SetReservedInstancesOfferingId(ReservedInstancesOfferingIdT&& value) { m_reservedInstancesOfferingIdHasBeenSet = true; m_reservedInstancesOfferingId = std::forward<ReservedInstancesOfferingIdT>(value); }
    template<typename ReservedInstancesOfferingIdT = Aws::String>
    PurchaseReservedInstancesOfferingRequest& WithReservedInstancesOfferingId(ReservedInstancesOfferingIdT&& value) { SetReservedInstancesOfferingId(std::forward<ReservedInstancesOfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which to purchase the Reserved Instance, in UTC format (for
     * example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline const Aws::Utils::DateTime& GetPurchaseTime() const { return m_purchaseTime; }
    inline bool PurchaseTimeHasBeenSet() const { return m_purchaseTimeHasBeenSet; }
    template<typename PurchaseTimeT = Aws::Utils::DateTime>
    void SetPurchaseTime(PurchaseTimeT&& value) { m_purchaseTimeHasBeenSet = true; m_purchaseTime = std::forward<PurchaseTimeT>(value); }
    template<typename PurchaseTimeT = Aws::Utils::DateTime>
    PurchaseReservedInstancesOfferingRequest& WithPurchaseTime(PurchaseTimeT&& value) { SetPurchaseTime(std::forward<PurchaseTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline PurchaseReservedInstancesOfferingRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specified for Reserved Instance Marketplace offerings to limit the total
     * order and ensure that the Reserved Instances are not purchased at unexpected
     * prices.</p>
     */
    inline const ReservedInstanceLimitPrice& GetLimitPrice() const { return m_limitPrice; }
    inline bool LimitPriceHasBeenSet() const { return m_limitPriceHasBeenSet; }
    template<typename LimitPriceT = ReservedInstanceLimitPrice>
    void SetLimitPrice(LimitPriceT&& value) { m_limitPriceHasBeenSet = true; m_limitPrice = std::forward<LimitPriceT>(value); }
    template<typename LimitPriceT = ReservedInstanceLimitPrice>
    PurchaseReservedInstancesOfferingRequest& WithLimitPrice(LimitPriceT&& value) { SetLimitPrice(std::forward<LimitPriceT>(value)); return *this;}
    ///@}
  private:

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_reservedInstancesOfferingId;
    bool m_reservedInstancesOfferingIdHasBeenSet = false;

    Aws::Utils::DateTime m_purchaseTime{};
    bool m_purchaseTimeHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    ReservedInstanceLimitPrice m_limitPrice;
    bool m_limitPriceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
