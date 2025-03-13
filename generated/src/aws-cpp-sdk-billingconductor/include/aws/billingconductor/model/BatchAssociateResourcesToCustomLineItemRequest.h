/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/BillingConductorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/billingconductor/model/CustomLineItemBillingPeriodRange.h>
#include <utility>

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

  /**
   */
  class BatchAssociateResourcesToCustomLineItemRequest : public BillingConductorRequest
  {
  public:
    AWS_BILLINGCONDUCTOR_API BatchAssociateResourcesToCustomLineItemRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchAssociateResourcesToCustomLineItem"; }

    AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> A percentage custom line item ARN to associate the resources to. </p>
     */
    inline const Aws::String& GetTargetArn() const { return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    template<typename TargetArnT = Aws::String>
    void SetTargetArn(TargetArnT&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::forward<TargetArnT>(value); }
    template<typename TargetArnT = Aws::String>
    BatchAssociateResourcesToCustomLineItemRequest& WithTargetArn(TargetArnT&& value) { SetTargetArn(std::forward<TargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list containing the ARNs of the resources to be associated. </p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const { return m_resourceArns; }
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }
    template<typename ResourceArnsT = Aws::Vector<Aws::String>>
    void SetResourceArns(ResourceArnsT&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::forward<ResourceArnsT>(value); }
    template<typename ResourceArnsT = Aws::Vector<Aws::String>>
    BatchAssociateResourcesToCustomLineItemRequest& WithResourceArns(ResourceArnsT&& value) { SetResourceArns(std::forward<ResourceArnsT>(value)); return *this;}
    template<typename ResourceArnsT = Aws::String>
    BatchAssociateResourcesToCustomLineItemRequest& AddResourceArns(ResourceArnsT&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.emplace_back(std::forward<ResourceArnsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const CustomLineItemBillingPeriodRange& GetBillingPeriodRange() const { return m_billingPeriodRange; }
    inline bool BillingPeriodRangeHasBeenSet() const { return m_billingPeriodRangeHasBeenSet; }
    template<typename BillingPeriodRangeT = CustomLineItemBillingPeriodRange>
    void SetBillingPeriodRange(BillingPeriodRangeT&& value) { m_billingPeriodRangeHasBeenSet = true; m_billingPeriodRange = std::forward<BillingPeriodRangeT>(value); }
    template<typename BillingPeriodRangeT = CustomLineItemBillingPeriodRange>
    BatchAssociateResourcesToCustomLineItemRequest& WithBillingPeriodRange(BillingPeriodRangeT&& value) { SetBillingPeriodRange(std::forward<BillingPeriodRangeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceArns;
    bool m_resourceArnsHasBeenSet = false;

    CustomLineItemBillingPeriodRange m_billingPeriodRange;
    bool m_billingPeriodRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
