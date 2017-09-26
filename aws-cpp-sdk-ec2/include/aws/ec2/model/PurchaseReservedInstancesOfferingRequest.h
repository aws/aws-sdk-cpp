/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_EC2_API PurchaseReservedInstancesOfferingRequest : public EC2Request
  {
  public:
    PurchaseReservedInstancesOfferingRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PurchaseReservedInstancesOffering"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The number of Reserved Instances to purchase.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

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

  private:

    int m_instanceCount;
    bool m_instanceCountHasBeenSet;

    Aws::String m_reservedInstancesOfferingId;
    bool m_reservedInstancesOfferingIdHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    ReservedInstanceLimitPrice m_limitPrice;
    bool m_limitPriceHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
