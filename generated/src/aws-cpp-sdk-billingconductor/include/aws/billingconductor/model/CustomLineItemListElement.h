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
   * <p>A representation of a custom line item.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/CustomLineItemListElement">AWS
   * API Reference</a></p>
   */
  class CustomLineItemListElement
  {
  public:
    AWS_BILLINGCONDUCTOR_API CustomLineItemListElement();
    AWS_BILLINGCONDUCTOR_API CustomLineItemListElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API CustomLineItemListElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) for custom line items.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline CustomLineItemListElement& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CustomLineItemListElement& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CustomLineItemListElement& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom line item's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CustomLineItemListElement& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CustomLineItemListElement& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CustomLineItemListElement& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>ListCustomLineItemChargeDetails</code> that describes the charge
     * details of a custom line item.</p>
     */
    inline const ListCustomLineItemChargeDetails& GetChargeDetails() const{ return m_chargeDetails; }
    inline bool ChargeDetailsHasBeenSet() const { return m_chargeDetailsHasBeenSet; }
    inline void SetChargeDetails(const ListCustomLineItemChargeDetails& value) { m_chargeDetailsHasBeenSet = true; m_chargeDetails = value; }
    inline void SetChargeDetails(ListCustomLineItemChargeDetails&& value) { m_chargeDetailsHasBeenSet = true; m_chargeDetails = std::move(value); }
    inline CustomLineItemListElement& WithChargeDetails(const ListCustomLineItemChargeDetails& value) { SetChargeDetails(value); return *this;}
    inline CustomLineItemListElement& WithChargeDetails(ListCustomLineItemChargeDetails&& value) { SetChargeDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom line item's charge value currency. Only one of the valid values
     * can be used.</p>
     */
    inline const CurrencyCode& GetCurrencyCode() const{ return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(const CurrencyCode& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline void SetCurrencyCode(CurrencyCode&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }
    inline CustomLineItemListElement& WithCurrencyCode(const CurrencyCode& value) { SetCurrencyCode(value); return *this;}
    inline CustomLineItemListElement& WithCurrencyCode(CurrencyCode&& value) { SetCurrencyCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom line item's description. This is shown on the Bills page in
     * association with the charge value.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CustomLineItemListElement& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CustomLineItemListElement& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CustomLineItemListElement& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product code that's associated with the custom line item.</p>
     */
    inline const Aws::String& GetProductCode() const{ return m_productCode; }
    inline bool ProductCodeHasBeenSet() const { return m_productCodeHasBeenSet; }
    inline void SetProductCode(const Aws::String& value) { m_productCodeHasBeenSet = true; m_productCode = value; }
    inline void SetProductCode(Aws::String&& value) { m_productCodeHasBeenSet = true; m_productCode = std::move(value); }
    inline void SetProductCode(const char* value) { m_productCodeHasBeenSet = true; m_productCode.assign(value); }
    inline CustomLineItemListElement& WithProductCode(const Aws::String& value) { SetProductCode(value); return *this;}
    inline CustomLineItemListElement& WithProductCode(Aws::String&& value) { SetProductCode(std::move(value)); return *this;}
    inline CustomLineItemListElement& WithProductCode(const char* value) { SetProductCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that references the billing group where the
     * custom line item applies to.</p>
     */
    inline const Aws::String& GetBillingGroupArn() const{ return m_billingGroupArn; }
    inline bool BillingGroupArnHasBeenSet() const { return m_billingGroupArnHasBeenSet; }
    inline void SetBillingGroupArn(const Aws::String& value) { m_billingGroupArnHasBeenSet = true; m_billingGroupArn = value; }
    inline void SetBillingGroupArn(Aws::String&& value) { m_billingGroupArnHasBeenSet = true; m_billingGroupArn = std::move(value); }
    inline void SetBillingGroupArn(const char* value) { m_billingGroupArnHasBeenSet = true; m_billingGroupArn.assign(value); }
    inline CustomLineItemListElement& WithBillingGroupArn(const Aws::String& value) { SetBillingGroupArn(value); return *this;}
    inline CustomLineItemListElement& WithBillingGroupArn(Aws::String&& value) { SetBillingGroupArn(std::move(value)); return *this;}
    inline CustomLineItemListElement& WithBillingGroupArn(const char* value) { SetBillingGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time created.</p>
     */
    inline long long GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline CustomLineItemListElement& WithCreationTime(long long value) { SetCreationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time when the custom line item was modified.</p>
     */
    inline long long GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline CustomLineItemListElement& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resources that are associated to the custom line item.</p>
     */
    inline long long GetAssociationSize() const{ return m_associationSize; }
    inline bool AssociationSizeHasBeenSet() const { return m_associationSizeHasBeenSet; }
    inline void SetAssociationSize(long long value) { m_associationSizeHasBeenSet = true; m_associationSize = value; }
    inline CustomLineItemListElement& WithAssociationSize(long long value) { SetAssociationSize(value); return *this;}
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
    inline CustomLineItemListElement& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline CustomLineItemListElement& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline CustomLineItemListElement& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

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

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
