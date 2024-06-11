/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/ListCustomLineItemChargeDetails.h>
#include <aws/billingconductor/model/CurrencyCode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BillingConductor
{
namespace Model
{

  /**
   * <p>A representation of a custom line item version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/CustomLineItemVersionListElement">AWS
   * API Reference</a></p>
   */
  class CustomLineItemVersionListElement
  {
  public:
    AWS_BILLINGCONDUCTOR_API CustomLineItemVersionListElement();
    AWS_BILLINGCONDUCTOR_API CustomLineItemVersionListElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API CustomLineItemVersionListElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the custom line item.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CustomLineItemVersionListElement& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CustomLineItemVersionListElement& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CustomLineItemVersionListElement& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    
    inline const ListCustomLineItemChargeDetails& GetChargeDetails() const{ return m_chargeDetails; }
    inline bool ChargeDetailsHasBeenSet() const { return m_chargeDetailsHasBeenSet; }
    inline void SetChargeDetails(const ListCustomLineItemChargeDetails& value) { m_chargeDetailsHasBeenSet = true; m_chargeDetails = value; }
    inline void SetChargeDetails(ListCustomLineItemChargeDetails&& value) { m_chargeDetailsHasBeenSet = true; m_chargeDetails = std::move(value); }
    inline CustomLineItemVersionListElement& WithChargeDetails(const ListCustomLineItemChargeDetails& value) { SetChargeDetails(value); return *this;}
    inline CustomLineItemVersionListElement& WithChargeDetails(ListCustomLineItemChargeDetails&& value) { SetChargeDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The charge value currency of the custom line item.</p>
     */
    inline const CurrencyCode& GetCurrencyCode() const{ return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(const CurrencyCode& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline void SetCurrencyCode(CurrencyCode&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }
    inline CustomLineItemVersionListElement& WithCurrencyCode(const CurrencyCode& value) { SetCurrencyCode(value); return *this;}
    inline CustomLineItemVersionListElement& WithCurrencyCode(CurrencyCode&& value) { SetCurrencyCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the custom line item.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CustomLineItemVersionListElement& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CustomLineItemVersionListElement& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CustomLineItemVersionListElement& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product code that’s associated with the custom line item.</p>
     */
    inline const Aws::String& GetProductCode() const{ return m_productCode; }
    inline bool ProductCodeHasBeenSet() const { return m_productCodeHasBeenSet; }
    inline void SetProductCode(const Aws::String& value) { m_productCodeHasBeenSet = true; m_productCode = value; }
    inline void SetProductCode(Aws::String&& value) { m_productCodeHasBeenSet = true; m_productCode = std::move(value); }
    inline void SetProductCode(const char* value) { m_productCodeHasBeenSet = true; m_productCode.assign(value); }
    inline CustomLineItemVersionListElement& WithProductCode(const Aws::String& value) { SetProductCode(value); return *this;}
    inline CustomLineItemVersionListElement& WithProductCode(Aws::String&& value) { SetProductCode(std::move(value)); return *this;}
    inline CustomLineItemVersionListElement& WithProductCode(const char* value) { SetProductCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the billing group that the custom line item
     * applies to.</p>
     */
    inline const Aws::String& GetBillingGroupArn() const{ return m_billingGroupArn; }
    inline bool BillingGroupArnHasBeenSet() const { return m_billingGroupArnHasBeenSet; }
    inline void SetBillingGroupArn(const Aws::String& value) { m_billingGroupArnHasBeenSet = true; m_billingGroupArn = value; }
    inline void SetBillingGroupArn(Aws::String&& value) { m_billingGroupArnHasBeenSet = true; m_billingGroupArn = std::move(value); }
    inline void SetBillingGroupArn(const char* value) { m_billingGroupArnHasBeenSet = true; m_billingGroupArn.assign(value); }
    inline CustomLineItemVersionListElement& WithBillingGroupArn(const Aws::String& value) { SetBillingGroupArn(value); return *this;}
    inline CustomLineItemVersionListElement& WithBillingGroupArn(Aws::String&& value) { SetBillingGroupArn(std::move(value)); return *this;}
    inline CustomLineItemVersionListElement& WithBillingGroupArn(const char* value) { SetBillingGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the custom line item version was created.</p>
     */
    inline long long GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline CustomLineItemVersionListElement& WithCreationTime(long long value) { SetCreationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time that the custom line item version was modified.</p>
     */
    inline long long GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline CustomLineItemVersionListElement& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resources that are associated with the custom line item.</p>
     */
    inline long long GetAssociationSize() const{ return m_associationSize; }
    inline bool AssociationSizeHasBeenSet() const { return m_associationSizeHasBeenSet; }
    inline void SetAssociationSize(long long value) { m_associationSizeHasBeenSet = true; m_associationSize = value; }
    inline CustomLineItemVersionListElement& WithAssociationSize(long long value) { SetAssociationSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start billing period of the custom line item version.</p>
     */
    inline const Aws::String& GetStartBillingPeriod() const{ return m_startBillingPeriod; }
    inline bool StartBillingPeriodHasBeenSet() const { return m_startBillingPeriodHasBeenSet; }
    inline void SetStartBillingPeriod(const Aws::String& value) { m_startBillingPeriodHasBeenSet = true; m_startBillingPeriod = value; }
    inline void SetStartBillingPeriod(Aws::String&& value) { m_startBillingPeriodHasBeenSet = true; m_startBillingPeriod = std::move(value); }
    inline void SetStartBillingPeriod(const char* value) { m_startBillingPeriodHasBeenSet = true; m_startBillingPeriod.assign(value); }
    inline CustomLineItemVersionListElement& WithStartBillingPeriod(const Aws::String& value) { SetStartBillingPeriod(value); return *this;}
    inline CustomLineItemVersionListElement& WithStartBillingPeriod(Aws::String&& value) { SetStartBillingPeriod(std::move(value)); return *this;}
    inline CustomLineItemVersionListElement& WithStartBillingPeriod(const char* value) { SetStartBillingPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end billing period of the custom line item version.</p>
     */
    inline const Aws::String& GetEndBillingPeriod() const{ return m_endBillingPeriod; }
    inline bool EndBillingPeriodHasBeenSet() const { return m_endBillingPeriodHasBeenSet; }
    inline void SetEndBillingPeriod(const Aws::String& value) { m_endBillingPeriodHasBeenSet = true; m_endBillingPeriod = value; }
    inline void SetEndBillingPeriod(Aws::String&& value) { m_endBillingPeriodHasBeenSet = true; m_endBillingPeriod = std::move(value); }
    inline void SetEndBillingPeriod(const char* value) { m_endBillingPeriodHasBeenSet = true; m_endBillingPeriod.assign(value); }
    inline CustomLineItemVersionListElement& WithEndBillingPeriod(const Aws::String& value) { SetEndBillingPeriod(value); return *this;}
    inline CustomLineItemVersionListElement& WithEndBillingPeriod(Aws::String&& value) { SetEndBillingPeriod(std::move(value)); return *this;}
    inline CustomLineItemVersionListElement& WithEndBillingPeriod(const char* value) { SetEndBillingPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of custom line item Amazon Resource Names (ARNs) to retrieve
     * information. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline CustomLineItemVersionListElement& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CustomLineItemVersionListElement& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CustomLineItemVersionListElement& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The inclusive start time. </p>
     */
    inline long long GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(long long value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline CustomLineItemVersionListElement& WithStartTime(long long value) { SetStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account in which this custom line item will be
     * applied to.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline CustomLineItemVersionListElement& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline CustomLineItemVersionListElement& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline CustomLineItemVersionListElement& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ListCustomLineItemChargeDetails m_chargeDetails;
    bool m_chargeDetailsHasBeenSet = false;

    CurrencyCode m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_productCode;
    bool m_productCodeHasBeenSet = false;

    Aws::String m_billingGroupArn;
    bool m_billingGroupArnHasBeenSet = false;

    long long m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    long long m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    long long m_associationSize;
    bool m_associationSizeHasBeenSet = false;

    Aws::String m_startBillingPeriod;
    bool m_startBillingPeriodHasBeenSet = false;

    Aws::String m_endBillingPeriod;
    bool m_endBillingPeriodHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    long long m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
