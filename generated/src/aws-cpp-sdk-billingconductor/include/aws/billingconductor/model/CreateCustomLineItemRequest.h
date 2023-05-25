/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/BillingConductorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/CustomLineItemBillingPeriodRange.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/billingconductor/model/CustomLineItemChargeDetails.h>
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
  class CreateCustomLineItemRequest : public BillingConductorRequest
  {
  public:
    AWS_BILLINGCONDUCTOR_API CreateCustomLineItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomLineItem"; }

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
    inline CreateCustomLineItemRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p> The token that is needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline CreateCustomLineItemRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p> The token that is needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline CreateCustomLineItemRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p> The name of the custom line item. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the custom line item. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the custom line item. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the custom line item. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the custom line item. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the custom line item. </p>
     */
    inline CreateCustomLineItemRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the custom line item. </p>
     */
    inline CreateCustomLineItemRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the custom line item. </p>
     */
    inline CreateCustomLineItemRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The description of the custom line item. This is shown on the Bills page in
     * association with the charge value. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of the custom line item. This is shown on the Bills page in
     * association with the charge value. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The description of the custom line item. This is shown on the Bills page in
     * association with the charge value. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The description of the custom line item. This is shown on the Bills page in
     * association with the charge value. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The description of the custom line item. This is shown on the Bills page in
     * association with the charge value. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The description of the custom line item. This is shown on the Bills page in
     * association with the charge value. </p>
     */
    inline CreateCustomLineItemRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of the custom line item. This is shown on the Bills page in
     * association with the charge value. </p>
     */
    inline CreateCustomLineItemRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of the custom line item. This is shown on the Bills page in
     * association with the charge value. </p>
     */
    inline CreateCustomLineItemRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) that references the billing group where the
     * custom line item applies to. </p>
     */
    inline const Aws::String& GetBillingGroupArn() const{ return m_billingGroupArn; }

    /**
     * <p> The Amazon Resource Name (ARN) that references the billing group where the
     * custom line item applies to. </p>
     */
    inline bool BillingGroupArnHasBeenSet() const { return m_billingGroupArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) that references the billing group where the
     * custom line item applies to. </p>
     */
    inline void SetBillingGroupArn(const Aws::String& value) { m_billingGroupArnHasBeenSet = true; m_billingGroupArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) that references the billing group where the
     * custom line item applies to. </p>
     */
    inline void SetBillingGroupArn(Aws::String&& value) { m_billingGroupArnHasBeenSet = true; m_billingGroupArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) that references the billing group where the
     * custom line item applies to. </p>
     */
    inline void SetBillingGroupArn(const char* value) { m_billingGroupArnHasBeenSet = true; m_billingGroupArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) that references the billing group where the
     * custom line item applies to. </p>
     */
    inline CreateCustomLineItemRequest& WithBillingGroupArn(const Aws::String& value) { SetBillingGroupArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) that references the billing group where the
     * custom line item applies to. </p>
     */
    inline CreateCustomLineItemRequest& WithBillingGroupArn(Aws::String&& value) { SetBillingGroupArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) that references the billing group where the
     * custom line item applies to. </p>
     */
    inline CreateCustomLineItemRequest& WithBillingGroupArn(const char* value) { SetBillingGroupArn(value); return *this;}


    /**
     * <p> A time range for which the custom line item is effective. </p>
     */
    inline const CustomLineItemBillingPeriodRange& GetBillingPeriodRange() const{ return m_billingPeriodRange; }

    /**
     * <p> A time range for which the custom line item is effective. </p>
     */
    inline bool BillingPeriodRangeHasBeenSet() const { return m_billingPeriodRangeHasBeenSet; }

    /**
     * <p> A time range for which the custom line item is effective. </p>
     */
    inline void SetBillingPeriodRange(const CustomLineItemBillingPeriodRange& value) { m_billingPeriodRangeHasBeenSet = true; m_billingPeriodRange = value; }

    /**
     * <p> A time range for which the custom line item is effective. </p>
     */
    inline void SetBillingPeriodRange(CustomLineItemBillingPeriodRange&& value) { m_billingPeriodRangeHasBeenSet = true; m_billingPeriodRange = std::move(value); }

    /**
     * <p> A time range for which the custom line item is effective. </p>
     */
    inline CreateCustomLineItemRequest& WithBillingPeriodRange(const CustomLineItemBillingPeriodRange& value) { SetBillingPeriodRange(value); return *this;}

    /**
     * <p> A time range for which the custom line item is effective. </p>
     */
    inline CreateCustomLineItemRequest& WithBillingPeriodRange(CustomLineItemBillingPeriodRange&& value) { SetBillingPeriodRange(std::move(value)); return *this;}


    /**
     * <p> A map that contains tag keys and tag values that are attached to a custom
     * line item. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a custom
     * line item. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a custom
     * line item. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a custom
     * line item. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a custom
     * line item. </p>
     */
    inline CreateCustomLineItemRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> A map that contains tag keys and tag values that are attached to a custom
     * line item. </p>
     */
    inline CreateCustomLineItemRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> A map that contains tag keys and tag values that are attached to a custom
     * line item. </p>
     */
    inline CreateCustomLineItemRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a custom
     * line item. </p>
     */
    inline CreateCustomLineItemRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a custom
     * line item. </p>
     */
    inline CreateCustomLineItemRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a custom
     * line item. </p>
     */
    inline CreateCustomLineItemRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a custom
     * line item. </p>
     */
    inline CreateCustomLineItemRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a custom
     * line item. </p>
     */
    inline CreateCustomLineItemRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a custom
     * line item. </p>
     */
    inline CreateCustomLineItemRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p> A <code>CustomLineItemChargeDetails</code> that describes the charge details
     * for a custom line item. </p>
     */
    inline const CustomLineItemChargeDetails& GetChargeDetails() const{ return m_chargeDetails; }

    /**
     * <p> A <code>CustomLineItemChargeDetails</code> that describes the charge details
     * for a custom line item. </p>
     */
    inline bool ChargeDetailsHasBeenSet() const { return m_chargeDetailsHasBeenSet; }

    /**
     * <p> A <code>CustomLineItemChargeDetails</code> that describes the charge details
     * for a custom line item. </p>
     */
    inline void SetChargeDetails(const CustomLineItemChargeDetails& value) { m_chargeDetailsHasBeenSet = true; m_chargeDetails = value; }

    /**
     * <p> A <code>CustomLineItemChargeDetails</code> that describes the charge details
     * for a custom line item. </p>
     */
    inline void SetChargeDetails(CustomLineItemChargeDetails&& value) { m_chargeDetailsHasBeenSet = true; m_chargeDetails = std::move(value); }

    /**
     * <p> A <code>CustomLineItemChargeDetails</code> that describes the charge details
     * for a custom line item. </p>
     */
    inline CreateCustomLineItemRequest& WithChargeDetails(const CustomLineItemChargeDetails& value) { SetChargeDetails(value); return *this;}

    /**
     * <p> A <code>CustomLineItemChargeDetails</code> that describes the charge details
     * for a custom line item. </p>
     */
    inline CreateCustomLineItemRequest& WithChargeDetails(CustomLineItemChargeDetails&& value) { SetChargeDetails(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_billingGroupArn;
    bool m_billingGroupArnHasBeenSet = false;

    CustomLineItemBillingPeriodRange m_billingPeriodRange;
    bool m_billingPeriodRangeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    CustomLineItemChargeDetails m_chargeDetails;
    bool m_chargeDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
