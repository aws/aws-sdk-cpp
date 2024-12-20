/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/BillingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billing/model/Expression.h>
#include <utility>

namespace Aws
{
namespace Billing
{
namespace Model
{

  /**
   */
  class UpdateBillingViewRequest : public BillingRequest
  {
  public:
    AWS_BILLING_API UpdateBillingViewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBillingView"; }

    AWS_BILLING_API Aws::String SerializePayload() const override;

    AWS_BILLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline UpdateBillingViewRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateBillingViewRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateBillingViewRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the billing view. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateBillingViewRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateBillingViewRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateBillingViewRequest& WithName(const char* value) { SetName(value); return *this;}
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
    inline UpdateBillingViewRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateBillingViewRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateBillingViewRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>See <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_Expression.html">Expression</a>.
     * Billing view only supports <code>LINKED_ACCOUNT</code> and <code>Tags</code>.
     * </p>
     */
    inline const Expression& GetDataFilterExpression() const{ return m_dataFilterExpression; }
    inline bool DataFilterExpressionHasBeenSet() const { return m_dataFilterExpressionHasBeenSet; }
    inline void SetDataFilterExpression(const Expression& value) { m_dataFilterExpressionHasBeenSet = true; m_dataFilterExpression = value; }
    inline void SetDataFilterExpression(Expression&& value) { m_dataFilterExpressionHasBeenSet = true; m_dataFilterExpression = std::move(value); }
    inline UpdateBillingViewRequest& WithDataFilterExpression(const Expression& value) { SetDataFilterExpression(value); return *this;}
    inline UpdateBillingViewRequest& WithDataFilterExpression(Expression&& value) { SetDataFilterExpression(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Expression m_dataFilterExpression;
    bool m_dataFilterExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace Billing
} // namespace Aws
