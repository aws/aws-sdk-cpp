/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/BillingConductorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

  /**
   */
  class CreatePricingPlanRequest : public BillingConductorRequest
  {
  public:
    AWS_BILLINGCONDUCTOR_API CreatePricingPlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePricingPlan"; }

    AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;

    AWS_BILLINGCONDUCTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The token that is needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p> The token that is needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p> The token that is needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p> The token that is needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p> The token that is needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p> The token that is needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline CreatePricingPlanRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p> The token that is needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline CreatePricingPlanRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p> The token that is needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline CreatePricingPlanRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The name of the pricing plan. The names must be unique to each pricing plan.
     * </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the pricing plan. The names must be unique to each pricing plan.
     * </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the pricing plan. The names must be unique to each pricing plan.
     * </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the pricing plan. The names must be unique to each pricing plan.
     * </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the pricing plan. The names must be unique to each pricing plan.
     * </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the pricing plan. The names must be unique to each pricing plan.
     * </p>
     */
    inline CreatePricingPlanRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the pricing plan. The names must be unique to each pricing plan.
     * </p>
     */
    inline CreatePricingPlanRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the pricing plan. The names must be unique to each pricing plan.
     * </p>
     */
    inline CreatePricingPlanRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline CreatePricingPlanRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the pricing plan. </p>
     */
    inline CreatePricingPlanRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the pricing plan. </p>
     */
    inline CreatePricingPlanRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> A list of Amazon Resource Names (ARNs) that define the pricing plan
     * parameters. </p>
     */
    inline const Aws::Vector<Aws::String>& GetPricingRuleArns() const{ return m_pricingRuleArns; }

    /**
     * <p> A list of Amazon Resource Names (ARNs) that define the pricing plan
     * parameters. </p>
     */
    inline bool PricingRuleArnsHasBeenSet() const { return m_pricingRuleArnsHasBeenSet; }

    /**
     * <p> A list of Amazon Resource Names (ARNs) that define the pricing plan
     * parameters. </p>
     */
    inline void SetPricingRuleArns(const Aws::Vector<Aws::String>& value) { m_pricingRuleArnsHasBeenSet = true; m_pricingRuleArns = value; }

    /**
     * <p> A list of Amazon Resource Names (ARNs) that define the pricing plan
     * parameters. </p>
     */
    inline void SetPricingRuleArns(Aws::Vector<Aws::String>&& value) { m_pricingRuleArnsHasBeenSet = true; m_pricingRuleArns = std::move(value); }

    /**
     * <p> A list of Amazon Resource Names (ARNs) that define the pricing plan
     * parameters. </p>
     */
    inline CreatePricingPlanRequest& WithPricingRuleArns(const Aws::Vector<Aws::String>& value) { SetPricingRuleArns(value); return *this;}

    /**
     * <p> A list of Amazon Resource Names (ARNs) that define the pricing plan
     * parameters. </p>
     */
    inline CreatePricingPlanRequest& WithPricingRuleArns(Aws::Vector<Aws::String>&& value) { SetPricingRuleArns(std::move(value)); return *this;}

    /**
     * <p> A list of Amazon Resource Names (ARNs) that define the pricing plan
     * parameters. </p>
     */
    inline CreatePricingPlanRequest& AddPricingRuleArns(const Aws::String& value) { m_pricingRuleArnsHasBeenSet = true; m_pricingRuleArns.push_back(value); return *this; }

    /**
     * <p> A list of Amazon Resource Names (ARNs) that define the pricing plan
     * parameters. </p>
     */
    inline CreatePricingPlanRequest& AddPricingRuleArns(Aws::String&& value) { m_pricingRuleArnsHasBeenSet = true; m_pricingRuleArns.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of Amazon Resource Names (ARNs) that define the pricing plan
     * parameters. </p>
     */
    inline CreatePricingPlanRequest& AddPricingRuleArns(const char* value) { m_pricingRuleArnsHasBeenSet = true; m_pricingRuleArns.push_back(value); return *this; }


    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * plan. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * plan. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * plan. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * plan. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * plan. </p>
     */
    inline CreatePricingPlanRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * plan. </p>
     */
    inline CreatePricingPlanRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * plan. </p>
     */
    inline CreatePricingPlanRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * plan. </p>
     */
    inline CreatePricingPlanRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * plan. </p>
     */
    inline CreatePricingPlanRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * plan. </p>
     */
    inline CreatePricingPlanRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * plan. </p>
     */
    inline CreatePricingPlanRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * plan. </p>
     */
    inline CreatePricingPlanRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * plan. </p>
     */
    inline CreatePricingPlanRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_pricingRuleArns;
    bool m_pricingRuleArnsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
