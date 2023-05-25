/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/BillingConductorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

  /**
   */
  class UpdatePricingPlanRequest : public BillingConductorRequest
  {
  public:
    AWS_BILLINGCONDUCTOR_API UpdatePricingPlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePricingPlan"; }

    AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the pricing plan that you're updating. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pricing plan that you're updating. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pricing plan that you're updating. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pricing plan that you're updating. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pricing plan that you're updating. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pricing plan that you're updating. </p>
     */
    inline UpdatePricingPlanRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pricing plan that you're updating. </p>
     */
    inline UpdatePricingPlanRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pricing plan that you're updating. </p>
     */
    inline UpdatePricingPlanRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the pricing plan. The name must be unique to each pricing plan.
     * </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the pricing plan. The name must be unique to each pricing plan.
     * </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the pricing plan. The name must be unique to each pricing plan.
     * </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the pricing plan. The name must be unique to each pricing plan.
     * </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the pricing plan. The name must be unique to each pricing plan.
     * </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the pricing plan. The name must be unique to each pricing plan.
     * </p>
     */
    inline UpdatePricingPlanRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the pricing plan. The name must be unique to each pricing plan.
     * </p>
     */
    inline UpdatePricingPlanRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the pricing plan. The name must be unique to each pricing plan.
     * </p>
     */
    inline UpdatePricingPlanRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the pricing plan. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the pricing plan. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the pricing plan. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the pricing plan. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the pricing plan. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the pricing plan. </p>
     */
    inline UpdatePricingPlanRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the pricing plan. </p>
     */
    inline UpdatePricingPlanRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the pricing plan. </p>
     */
    inline UpdatePricingPlanRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
