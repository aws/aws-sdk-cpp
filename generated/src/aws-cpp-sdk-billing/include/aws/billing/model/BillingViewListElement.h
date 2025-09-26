/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billing/model/BillingViewType.h>
#include <aws/billing/model/BillingViewHealthStatus.h>
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
namespace Billing
{
namespace Model
{

  /**
   * <p>A representation of a billing view.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/BillingViewListElement">AWS
   * API Reference</a></p>
   */
  class BillingViewListElement
  {
  public:
    AWS_BILLING_API BillingViewListElement() = default;
    AWS_BILLING_API BillingViewListElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLING_API BillingViewListElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that can be used to uniquely identify the
     * billing view. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    BillingViewListElement& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of names of the Billing view. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    BillingViewListElement& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the billing view. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    BillingViewListElement& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of owners of the Billing view. </p>
     */
    inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    template<typename OwnerAccountIdT = Aws::String>
    void SetOwnerAccountId(OwnerAccountIdT&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::forward<OwnerAccountIdT>(value); }
    template<typename OwnerAccountIdT = Aws::String>
    BillingViewListElement& WithOwnerAccountId(OwnerAccountIdT&& value) { SetOwnerAccountId(std::forward<OwnerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account ID that owns the source billing view, if
     * this is a derived billing view. </p>
     */
    inline const Aws::String& GetSourceAccountId() const { return m_sourceAccountId; }
    inline bool SourceAccountIdHasBeenSet() const { return m_sourceAccountIdHasBeenSet; }
    template<typename SourceAccountIdT = Aws::String>
    void SetSourceAccountId(SourceAccountIdT&& value) { m_sourceAccountIdHasBeenSet = true; m_sourceAccountId = std::forward<SourceAccountIdT>(value); }
    template<typename SourceAccountIdT = Aws::String>
    BillingViewListElement& WithSourceAccountId(SourceAccountIdT&& value) { SetSourceAccountId(std::forward<SourceAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of billing view.</p>
     */
    inline BillingViewType GetBillingViewType() const { return m_billingViewType; }
    inline bool BillingViewTypeHasBeenSet() const { return m_billingViewTypeHasBeenSet; }
    inline void SetBillingViewType(BillingViewType value) { m_billingViewTypeHasBeenSet = true; m_billingViewType = value; }
    inline BillingViewListElement& WithBillingViewType(BillingViewType value) { SetBillingViewType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current health status of the billing view. </p>
     */
    inline const BillingViewHealthStatus& GetHealthStatus() const { return m_healthStatus; }
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }
    template<typename HealthStatusT = BillingViewHealthStatus>
    void SetHealthStatus(HealthStatusT&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::forward<HealthStatusT>(value); }
    template<typename HealthStatusT = BillingViewHealthStatus>
    BillingViewListElement& WithHealthStatus(HealthStatusT&& value) { SetHealthStatus(std::forward<HealthStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    Aws::String m_sourceAccountId;
    bool m_sourceAccountIdHasBeenSet = false;

    BillingViewType m_billingViewType{BillingViewType::NOT_SET};
    bool m_billingViewTypeHasBeenSet = false;

    BillingViewHealthStatus m_healthStatus;
    bool m_healthStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Billing
} // namespace Aws
