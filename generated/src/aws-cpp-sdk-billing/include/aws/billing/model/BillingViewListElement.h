/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billing/model/BillingViewType.h>
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
    AWS_BILLING_API BillingViewListElement();
    AWS_BILLING_API BillingViewListElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLING_API BillingViewListElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that can be used to uniquely identify the
     * billing view. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline BillingViewListElement& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline BillingViewListElement& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline BillingViewListElement& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of names of the Billing view. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline BillingViewListElement& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline BillingViewListElement& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline BillingViewListElement& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description of the billing view. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline BillingViewListElement& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline BillingViewListElement& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline BillingViewListElement& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of owners of the Billing view. </p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = value; }
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::move(value); }
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId.assign(value); }
    inline BillingViewListElement& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}
    inline BillingViewListElement& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}
    inline BillingViewListElement& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of billing view.</p>
     */
    inline const BillingViewType& GetBillingViewType() const{ return m_billingViewType; }
    inline bool BillingViewTypeHasBeenSet() const { return m_billingViewTypeHasBeenSet; }
    inline void SetBillingViewType(const BillingViewType& value) { m_billingViewTypeHasBeenSet = true; m_billingViewType = value; }
    inline void SetBillingViewType(BillingViewType&& value) { m_billingViewTypeHasBeenSet = true; m_billingViewType = std::move(value); }
    inline BillingViewListElement& WithBillingViewType(const BillingViewType& value) { SetBillingViewType(value); return *this;}
    inline BillingViewListElement& WithBillingViewType(BillingViewType&& value) { SetBillingViewType(std::move(value)); return *this;}
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

    BillingViewType m_billingViewType;
    bool m_billingViewTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Billing
} // namespace Aws
