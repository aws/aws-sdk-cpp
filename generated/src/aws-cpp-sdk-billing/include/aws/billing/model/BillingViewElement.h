/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billing/model/BillingViewType.h>
#include <aws/billing/model/Expression.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The metadata associated to the billing view. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/BillingViewElement">AWS
   * API Reference</a></p>
   */
  class BillingViewElement
  {
  public:
    AWS_BILLING_API BillingViewElement();
    AWS_BILLING_API BillingViewElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLING_API BillingViewElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) that can be used to uniquely identify the
     * billing view. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline BillingViewElement& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline BillingViewElement& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline BillingViewElement& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of names of the billing view. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline BillingViewElement& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline BillingViewElement& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline BillingViewElement& WithName(const char* value) { SetName(value); return *this;}
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
    inline BillingViewElement& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline BillingViewElement& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline BillingViewElement& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of billing group. </p>
     */
    inline const BillingViewType& GetBillingViewType() const{ return m_billingViewType; }
    inline bool BillingViewTypeHasBeenSet() const { return m_billingViewTypeHasBeenSet; }
    inline void SetBillingViewType(const BillingViewType& value) { m_billingViewTypeHasBeenSet = true; m_billingViewType = value; }
    inline void SetBillingViewType(BillingViewType&& value) { m_billingViewTypeHasBeenSet = true; m_billingViewType = std::move(value); }
    inline BillingViewElement& WithBillingViewType(const BillingViewType& value) { SetBillingViewType(value); return *this;}
    inline BillingViewElement& WithBillingViewType(BillingViewType&& value) { SetBillingViewType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of owners of the billing view. </p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = value; }
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::move(value); }
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId.assign(value); }
    inline BillingViewElement& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}
    inline BillingViewElement& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}
    inline BillingViewElement& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> See <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>.
     * Billing view only supports <code>LINKED_ACCOUNT</code> and <code>Tags</code>.
     * </p>
     */
    inline const Expression& GetDataFilterExpression() const{ return m_dataFilterExpression; }
    inline bool DataFilterExpressionHasBeenSet() const { return m_dataFilterExpressionHasBeenSet; }
    inline void SetDataFilterExpression(const Expression& value) { m_dataFilterExpressionHasBeenSet = true; m_dataFilterExpression = value; }
    inline void SetDataFilterExpression(Expression&& value) { m_dataFilterExpressionHasBeenSet = true; m_dataFilterExpression = std::move(value); }
    inline BillingViewElement& WithDataFilterExpression(const Expression& value) { SetDataFilterExpression(value); return *this;}
    inline BillingViewElement& WithDataFilterExpression(Expression&& value) { SetDataFilterExpression(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the billing view was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline BillingViewElement& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline BillingViewElement& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the billing view was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline BillingViewElement& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline BillingViewElement& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    BillingViewType m_billingViewType;
    bool m_billingViewTypeHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    Expression m_dataFilterExpression;
    bool m_dataFilterExpressionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Billing
} // namespace Aws
