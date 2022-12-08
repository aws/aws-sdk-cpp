/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/savingsplans/SavingsPlansRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SavingsPlans
{
namespace Model
{

  /**
   */
  class CreateSavingsPlanRequest : public SavingsPlansRequest
  {
  public:
    AWS_SAVINGSPLANS_API CreateSavingsPlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSavingsPlan"; }

    AWS_SAVINGSPLANS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the offering.</p>
     */
    inline const Aws::String& GetSavingsPlanOfferingId() const{ return m_savingsPlanOfferingId; }

    /**
     * <p>The ID of the offering.</p>
     */
    inline bool SavingsPlanOfferingIdHasBeenSet() const { return m_savingsPlanOfferingIdHasBeenSet; }

    /**
     * <p>The ID of the offering.</p>
     */
    inline void SetSavingsPlanOfferingId(const Aws::String& value) { m_savingsPlanOfferingIdHasBeenSet = true; m_savingsPlanOfferingId = value; }

    /**
     * <p>The ID of the offering.</p>
     */
    inline void SetSavingsPlanOfferingId(Aws::String&& value) { m_savingsPlanOfferingIdHasBeenSet = true; m_savingsPlanOfferingId = std::move(value); }

    /**
     * <p>The ID of the offering.</p>
     */
    inline void SetSavingsPlanOfferingId(const char* value) { m_savingsPlanOfferingIdHasBeenSet = true; m_savingsPlanOfferingId.assign(value); }

    /**
     * <p>The ID of the offering.</p>
     */
    inline CreateSavingsPlanRequest& WithSavingsPlanOfferingId(const Aws::String& value) { SetSavingsPlanOfferingId(value); return *this;}

    /**
     * <p>The ID of the offering.</p>
     */
    inline CreateSavingsPlanRequest& WithSavingsPlanOfferingId(Aws::String&& value) { SetSavingsPlanOfferingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the offering.</p>
     */
    inline CreateSavingsPlanRequest& WithSavingsPlanOfferingId(const char* value) { SetSavingsPlanOfferingId(value); return *this;}


    /**
     * <p>The hourly commitment, in USD. This is a value between 0.001 and 1 million.
     * You cannot specify more than five digits after the decimal point.</p>
     */
    inline const Aws::String& GetCommitment() const{ return m_commitment; }

    /**
     * <p>The hourly commitment, in USD. This is a value between 0.001 and 1 million.
     * You cannot specify more than five digits after the decimal point.</p>
     */
    inline bool CommitmentHasBeenSet() const { return m_commitmentHasBeenSet; }

    /**
     * <p>The hourly commitment, in USD. This is a value between 0.001 and 1 million.
     * You cannot specify more than five digits after the decimal point.</p>
     */
    inline void SetCommitment(const Aws::String& value) { m_commitmentHasBeenSet = true; m_commitment = value; }

    /**
     * <p>The hourly commitment, in USD. This is a value between 0.001 and 1 million.
     * You cannot specify more than five digits after the decimal point.</p>
     */
    inline void SetCommitment(Aws::String&& value) { m_commitmentHasBeenSet = true; m_commitment = std::move(value); }

    /**
     * <p>The hourly commitment, in USD. This is a value between 0.001 and 1 million.
     * You cannot specify more than five digits after the decimal point.</p>
     */
    inline void SetCommitment(const char* value) { m_commitmentHasBeenSet = true; m_commitment.assign(value); }

    /**
     * <p>The hourly commitment, in USD. This is a value between 0.001 and 1 million.
     * You cannot specify more than five digits after the decimal point.</p>
     */
    inline CreateSavingsPlanRequest& WithCommitment(const Aws::String& value) { SetCommitment(value); return *this;}

    /**
     * <p>The hourly commitment, in USD. This is a value between 0.001 and 1 million.
     * You cannot specify more than five digits after the decimal point.</p>
     */
    inline CreateSavingsPlanRequest& WithCommitment(Aws::String&& value) { SetCommitment(std::move(value)); return *this;}

    /**
     * <p>The hourly commitment, in USD. This is a value between 0.001 and 1 million.
     * You cannot specify more than five digits after the decimal point.</p>
     */
    inline CreateSavingsPlanRequest& WithCommitment(const char* value) { SetCommitment(value); return *this;}


    /**
     * <p>The up-front payment amount. This is a whole number between 50 and 99 percent
     * of the total value of the Savings Plan. This parameter is supported only if the
     * payment option is <code>Partial Upfront</code>.</p>
     */
    inline const Aws::String& GetUpfrontPaymentAmount() const{ return m_upfrontPaymentAmount; }

    /**
     * <p>The up-front payment amount. This is a whole number between 50 and 99 percent
     * of the total value of the Savings Plan. This parameter is supported only if the
     * payment option is <code>Partial Upfront</code>.</p>
     */
    inline bool UpfrontPaymentAmountHasBeenSet() const { return m_upfrontPaymentAmountHasBeenSet; }

    /**
     * <p>The up-front payment amount. This is a whole number between 50 and 99 percent
     * of the total value of the Savings Plan. This parameter is supported only if the
     * payment option is <code>Partial Upfront</code>.</p>
     */
    inline void SetUpfrontPaymentAmount(const Aws::String& value) { m_upfrontPaymentAmountHasBeenSet = true; m_upfrontPaymentAmount = value; }

    /**
     * <p>The up-front payment amount. This is a whole number between 50 and 99 percent
     * of the total value of the Savings Plan. This parameter is supported only if the
     * payment option is <code>Partial Upfront</code>.</p>
     */
    inline void SetUpfrontPaymentAmount(Aws::String&& value) { m_upfrontPaymentAmountHasBeenSet = true; m_upfrontPaymentAmount = std::move(value); }

    /**
     * <p>The up-front payment amount. This is a whole number between 50 and 99 percent
     * of the total value of the Savings Plan. This parameter is supported only if the
     * payment option is <code>Partial Upfront</code>.</p>
     */
    inline void SetUpfrontPaymentAmount(const char* value) { m_upfrontPaymentAmountHasBeenSet = true; m_upfrontPaymentAmount.assign(value); }

    /**
     * <p>The up-front payment amount. This is a whole number between 50 and 99 percent
     * of the total value of the Savings Plan. This parameter is supported only if the
     * payment option is <code>Partial Upfront</code>.</p>
     */
    inline CreateSavingsPlanRequest& WithUpfrontPaymentAmount(const Aws::String& value) { SetUpfrontPaymentAmount(value); return *this;}

    /**
     * <p>The up-front payment amount. This is a whole number between 50 and 99 percent
     * of the total value of the Savings Plan. This parameter is supported only if the
     * payment option is <code>Partial Upfront</code>.</p>
     */
    inline CreateSavingsPlanRequest& WithUpfrontPaymentAmount(Aws::String&& value) { SetUpfrontPaymentAmount(std::move(value)); return *this;}

    /**
     * <p>The up-front payment amount. This is a whole number between 50 and 99 percent
     * of the total value of the Savings Plan. This parameter is supported only if the
     * payment option is <code>Partial Upfront</code>.</p>
     */
    inline CreateSavingsPlanRequest& WithUpfrontPaymentAmount(const char* value) { SetUpfrontPaymentAmount(value); return *this;}


    /**
     * <p>The time at which to purchase the Savings Plan, in UTC format
     * (YYYY-MM-DDTHH:MM:SSZ).</p>
     */
    inline const Aws::Utils::DateTime& GetPurchaseTime() const{ return m_purchaseTime; }

    /**
     * <p>The time at which to purchase the Savings Plan, in UTC format
     * (YYYY-MM-DDTHH:MM:SSZ).</p>
     */
    inline bool PurchaseTimeHasBeenSet() const { return m_purchaseTimeHasBeenSet; }

    /**
     * <p>The time at which to purchase the Savings Plan, in UTC format
     * (YYYY-MM-DDTHH:MM:SSZ).</p>
     */
    inline void SetPurchaseTime(const Aws::Utils::DateTime& value) { m_purchaseTimeHasBeenSet = true; m_purchaseTime = value; }

    /**
     * <p>The time at which to purchase the Savings Plan, in UTC format
     * (YYYY-MM-DDTHH:MM:SSZ).</p>
     */
    inline void SetPurchaseTime(Aws::Utils::DateTime&& value) { m_purchaseTimeHasBeenSet = true; m_purchaseTime = std::move(value); }

    /**
     * <p>The time at which to purchase the Savings Plan, in UTC format
     * (YYYY-MM-DDTHH:MM:SSZ).</p>
     */
    inline CreateSavingsPlanRequest& WithPurchaseTime(const Aws::Utils::DateTime& value) { SetPurchaseTime(value); return *this;}

    /**
     * <p>The time at which to purchase the Savings Plan, in UTC format
     * (YYYY-MM-DDTHH:MM:SSZ).</p>
     */
    inline CreateSavingsPlanRequest& WithPurchaseTime(Aws::Utils::DateTime&& value) { SetPurchaseTime(std::move(value)); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateSavingsPlanRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateSavingsPlanRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline CreateSavingsPlanRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>One or more tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateSavingsPlanRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline CreateSavingsPlanRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more tags.</p>
     */
    inline CreateSavingsPlanRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateSavingsPlanRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateSavingsPlanRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateSavingsPlanRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateSavingsPlanRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateSavingsPlanRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more tags.</p>
     */
    inline CreateSavingsPlanRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_savingsPlanOfferingId;
    bool m_savingsPlanOfferingIdHasBeenSet = false;

    Aws::String m_commitment;
    bool m_commitmentHasBeenSet = false;

    Aws::String m_upfrontPaymentAmount;
    bool m_upfrontPaymentAmountHasBeenSet = false;

    Aws::Utils::DateTime m_purchaseTime;
    bool m_purchaseTimeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
