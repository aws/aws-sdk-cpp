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
    AWS_BILLINGCONDUCTOR_API CustomLineItemListElement() = default;
    AWS_BILLINGCONDUCTOR_API CustomLineItemListElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API CustomLineItemListElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) for custom line items.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CustomLineItemListElement& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom line item's name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CustomLineItemListElement& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>ListCustomLineItemChargeDetails</code> that describes the charge
     * details of a custom line item.</p>
     */
    inline const ListCustomLineItemChargeDetails& GetChargeDetails() const { return m_chargeDetails; }
    inline bool ChargeDetailsHasBeenSet() const { return m_chargeDetailsHasBeenSet; }
    template<typename ChargeDetailsT = ListCustomLineItemChargeDetails>
    void SetChargeDetails(ChargeDetailsT&& value) { m_chargeDetailsHasBeenSet = true; m_chargeDetails = std::forward<ChargeDetailsT>(value); }
    template<typename ChargeDetailsT = ListCustomLineItemChargeDetails>
    CustomLineItemListElement& WithChargeDetails(ChargeDetailsT&& value) { SetChargeDetails(std::forward<ChargeDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom line item's charge value currency. Only one of the valid values
     * can be used.</p>
     */
    inline CurrencyCode GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(CurrencyCode value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline CustomLineItemListElement& WithCurrencyCode(CurrencyCode value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom line item's description. This is shown on the Bills page in
     * association with the charge value.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CustomLineItemListElement& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product code that's associated with the custom line item.</p>
     */
    inline const Aws::String& GetProductCode() const { return m_productCode; }
    inline bool ProductCodeHasBeenSet() const { return m_productCodeHasBeenSet; }
    template<typename ProductCodeT = Aws::String>
    void SetProductCode(ProductCodeT&& value) { m_productCodeHasBeenSet = true; m_productCode = std::forward<ProductCodeT>(value); }
    template<typename ProductCodeT = Aws::String>
    CustomLineItemListElement& WithProductCode(ProductCodeT&& value) { SetProductCode(std::forward<ProductCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that references the billing group where the
     * custom line item applies to.</p>
     */
    inline const Aws::String& GetBillingGroupArn() const { return m_billingGroupArn; }
    inline bool BillingGroupArnHasBeenSet() const { return m_billingGroupArnHasBeenSet; }
    template<typename BillingGroupArnT = Aws::String>
    void SetBillingGroupArn(BillingGroupArnT&& value) { m_billingGroupArnHasBeenSet = true; m_billingGroupArn = std::forward<BillingGroupArnT>(value); }
    template<typename BillingGroupArnT = Aws::String>
    CustomLineItemListElement& WithBillingGroupArn(BillingGroupArnT&& value) { SetBillingGroupArn(std::forward<BillingGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time created.</p>
     */
    inline long long GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline CustomLineItemListElement& WithCreationTime(long long value) { SetCreationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time when the custom line item was modified.</p>
     */
    inline long long GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline CustomLineItemListElement& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resources that are associated to the custom line item.</p>
     */
    inline long long GetAssociationSize() const { return m_associationSize; }
    inline bool AssociationSizeHasBeenSet() const { return m_associationSizeHasBeenSet; }
    inline void SetAssociationSize(long long value) { m_associationSizeHasBeenSet = true; m_associationSize = value; }
    inline CustomLineItemListElement& WithAssociationSize(long long value) { SetAssociationSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account in which this custom line item will be
     * applied to.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    CustomLineItemListElement& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ListCustomLineItemChargeDetails m_chargeDetails;
    bool m_chargeDetailsHasBeenSet = false;

    CurrencyCode m_currencyCode{CurrencyCode::NOT_SET};
    bool m_currencyCodeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_productCode;
    bool m_productCodeHasBeenSet = false;

    Aws::String m_billingGroupArn;
    bool m_billingGroupArnHasBeenSet = false;

    long long m_creationTime{0};
    bool m_creationTimeHasBeenSet = false;

    long long m_lastModifiedTime{0};
    bool m_lastModifiedTimeHasBeenSet = false;

    long long m_associationSize{0};
    bool m_associationSizeHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
