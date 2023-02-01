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
    AWS_BILLINGCONDUCTOR_API BatchAssociateResourcesToCustomLineItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchAssociateResourcesToCustomLineItem"; }

    AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;


    /**
     * <p> A percentage custom line item ARN to associate the resources to. </p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p> A percentage custom line item ARN to associate the resources to. </p>
     */
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }

    /**
     * <p> A percentage custom line item ARN to associate the resources to. </p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p> A percentage custom line item ARN to associate the resources to. </p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p> A percentage custom line item ARN to associate the resources to. </p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p> A percentage custom line item ARN to associate the resources to. </p>
     */
    inline BatchAssociateResourcesToCustomLineItemRequest& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p> A percentage custom line item ARN to associate the resources to. </p>
     */
    inline BatchAssociateResourcesToCustomLineItemRequest& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p> A percentage custom line item ARN to associate the resources to. </p>
     */
    inline BatchAssociateResourcesToCustomLineItemRequest& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}


    /**
     * <p> A list containing the ARNs of the resources to be associated. </p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceArns() const{ return m_resourceArns; }

    /**
     * <p> A list containing the ARNs of the resources to be associated. </p>
     */
    inline bool ResourceArnsHasBeenSet() const { return m_resourceArnsHasBeenSet; }

    /**
     * <p> A list containing the ARNs of the resources to be associated. </p>
     */
    inline void SetResourceArns(const Aws::Vector<Aws::String>& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = value; }

    /**
     * <p> A list containing the ARNs of the resources to be associated. </p>
     */
    inline void SetResourceArns(Aws::Vector<Aws::String>&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns = std::move(value); }

    /**
     * <p> A list containing the ARNs of the resources to be associated. </p>
     */
    inline BatchAssociateResourcesToCustomLineItemRequest& WithResourceArns(const Aws::Vector<Aws::String>& value) { SetResourceArns(value); return *this;}

    /**
     * <p> A list containing the ARNs of the resources to be associated. </p>
     */
    inline BatchAssociateResourcesToCustomLineItemRequest& WithResourceArns(Aws::Vector<Aws::String>&& value) { SetResourceArns(std::move(value)); return *this;}

    /**
     * <p> A list containing the ARNs of the resources to be associated. </p>
     */
    inline BatchAssociateResourcesToCustomLineItemRequest& AddResourceArns(const Aws::String& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }

    /**
     * <p> A list containing the ARNs of the resources to be associated. </p>
     */
    inline BatchAssociateResourcesToCustomLineItemRequest& AddResourceArns(Aws::String&& value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p> A list containing the ARNs of the resources to be associated. </p>
     */
    inline BatchAssociateResourcesToCustomLineItemRequest& AddResourceArns(const char* value) { m_resourceArnsHasBeenSet = true; m_resourceArns.push_back(value); return *this; }


    
    inline const CustomLineItemBillingPeriodRange& GetBillingPeriodRange() const{ return m_billingPeriodRange; }

    
    inline bool BillingPeriodRangeHasBeenSet() const { return m_billingPeriodRangeHasBeenSet; }

    
    inline void SetBillingPeriodRange(const CustomLineItemBillingPeriodRange& value) { m_billingPeriodRangeHasBeenSet = true; m_billingPeriodRange = value; }

    
    inline void SetBillingPeriodRange(CustomLineItemBillingPeriodRange&& value) { m_billingPeriodRangeHasBeenSet = true; m_billingPeriodRange = std::move(value); }

    
    inline BatchAssociateResourcesToCustomLineItemRequest& WithBillingPeriodRange(const CustomLineItemBillingPeriodRange& value) { SetBillingPeriodRange(value); return *this;}

    
    inline BatchAssociateResourcesToCustomLineItemRequest& WithBillingPeriodRange(CustomLineItemBillingPeriodRange&& value) { SetBillingPeriodRange(std::move(value)); return *this;}

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
