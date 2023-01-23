/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ReservedInstanceLimitPrice.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_EC2_API PurchaseReservedInstancesOfferingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PurchaseReservedInstancesOffering"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The number of Reserved Instances to purchase.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of Reserved Instances to purchase.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>The number of Reserved Instances to purchase.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of Reserved Instances to purchase.</p>
     */
    inline PurchaseReservedInstancesOfferingRequest& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>The ID of the Reserved Instance offering to purchase.</p>
     */
    inline const Aws::String& GetReservedInstancesOfferingId() const{ return m_reservedInstancesOfferingId; }

    /**
     * <p>The ID of the Reserved Instance offering to purchase.</p>
     */
    inline bool ReservedInstancesOfferingIdHasBeenSet() const { return m_reservedInstancesOfferingIdHasBeenSet; }

    /**
     * <p>The ID of the Reserved Instance offering to purchase.</p>
     */
    inline void SetReservedInstancesOfferingId(const Aws::String& value) { m_reservedInstancesOfferingIdHasBeenSet = true; m_reservedInstancesOfferingId = value; }

    /**
     * <p>The ID of the Reserved Instance offering to purchase.</p>
     */
    inline void SetReservedInstancesOfferingId(Aws::String&& value) { m_reservedInstancesOfferingIdHasBeenSet = true; m_reservedInstancesOfferingId = std::move(value); }

    /**
     * <p>The ID of the Reserved Instance offering to purchase.</p>
     */
    inline void SetReservedInstancesOfferingId(const char* value) { m_reservedInstancesOfferingIdHasBeenSet = true; m_reservedInstancesOfferingId.assign(value); }

    /**
     * <p>The ID of the Reserved Instance offering to purchase.</p>
     */
    inline PurchaseReservedInstancesOfferingRequest& WithReservedInstancesOfferingId(const Aws::String& value) { SetReservedInstancesOfferingId(value); return *this;}

    /**
     * <p>The ID of the Reserved Instance offering to purchase.</p>
     */
    inline PurchaseReservedInstancesOfferingRequest& WithReservedInstancesOfferingId(Aws::String&& value) { SetReservedInstancesOfferingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Reserved Instance offering to purchase.</p>
     */
    inline PurchaseReservedInstancesOfferingRequest& WithReservedInstancesOfferingId(const char* value) { SetReservedInstancesOfferingId(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline PurchaseReservedInstancesOfferingRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Specified for Reserved Instance Marketplace offerings to limit the total
     * order and ensure that the Reserved Instances are not purchased at unexpected
     * prices.</p>
     */
    inline const ReservedInstanceLimitPrice& GetLimitPrice() const{ return m_limitPrice; }

    /**
     * <p>Specified for Reserved Instance Marketplace offerings to limit the total
     * order and ensure that the Reserved Instances are not purchased at unexpected
     * prices.</p>
     */
    inline bool LimitPriceHasBeenSet() const { return m_limitPriceHasBeenSet; }

    /**
     * <p>Specified for Reserved Instance Marketplace offerings to limit the total
     * order and ensure that the Reserved Instances are not purchased at unexpected
     * prices.</p>
     */
    inline void SetLimitPrice(const ReservedInstanceLimitPrice& value) { m_limitPriceHasBeenSet = true; m_limitPrice = value; }

    /**
     * <p>Specified for Reserved Instance Marketplace offerings to limit the total
     * order and ensure that the Reserved Instances are not purchased at unexpected
     * prices.</p>
     */
    inline void SetLimitPrice(ReservedInstanceLimitPrice&& value) { m_limitPriceHasBeenSet = true; m_limitPrice = std::move(value); }

    /**
     * <p>Specified for Reserved Instance Marketplace offerings to limit the total
     * order and ensure that the Reserved Instances are not purchased at unexpected
     * prices.</p>
     */
    inline PurchaseReservedInstancesOfferingRequest& WithLimitPrice(const ReservedInstanceLimitPrice& value) { SetLimitPrice(value); return *this;}

    /**
     * <p>Specified for Reserved Instance Marketplace offerings to limit the total
     * order and ensure that the Reserved Instances are not purchased at unexpected
     * prices.</p>
     */
    inline PurchaseReservedInstancesOfferingRequest& WithLimitPrice(ReservedInstanceLimitPrice&& value) { SetLimitPrice(std::move(value)); return *this;}


    /**
     * <p>The time at which to purchase the Reserved Instance, in UTC format (for
     * example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline const Aws::Utils::DateTime& GetPurchaseTime() const{ return m_purchaseTime; }

    /**
     * <p>The time at which to purchase the Reserved Instance, in UTC format (for
     * example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline bool PurchaseTimeHasBeenSet() const { return m_purchaseTimeHasBeenSet; }

    /**
     * <p>The time at which to purchase the Reserved Instance, in UTC format (for
     * example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline void SetPurchaseTime(const Aws::Utils::DateTime& value) { m_purchaseTimeHasBeenSet = true; m_purchaseTime = value; }

    /**
     * <p>The time at which to purchase the Reserved Instance, in UTC format (for
     * example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline void SetPurchaseTime(Aws::Utils::DateTime&& value) { m_purchaseTimeHasBeenSet = true; m_purchaseTime = std::move(value); }

    /**
     * <p>The time at which to purchase the Reserved Instance, in UTC format (for
     * example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline PurchaseReservedInstancesOfferingRequest& WithPurchaseTime(const Aws::Utils::DateTime& value) { SetPurchaseTime(value); return *this;}

    /**
     * <p>The time at which to purchase the Reserved Instance, in UTC format (for
     * example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
     */
    inline PurchaseReservedInstancesOfferingRequest& WithPurchaseTime(Aws::Utils::DateTime&& value) { SetPurchaseTime(std::move(value)); return *this;}

  private:

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_reservedInstancesOfferingId;
    bool m_reservedInstancesOfferingIdHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    ReservedInstanceLimitPrice m_limitPrice;
    bool m_limitPriceHasBeenSet = false;

    Aws::Utils::DateTime m_purchaseTime;
    bool m_purchaseTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
