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
    AWS_BILLING_API UpdateBillingViewRequest() = default;

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
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateBillingViewRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the billing view. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateBillingViewRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    UpdateBillingViewRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>See <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_billing_Expression.html">Expression</a>.
     * Billing view only supports <code>LINKED_ACCOUNT</code> and <code>Tags</code>.
     * </p>
     */
    inline const Expression& GetDataFilterExpression() const { return m_dataFilterExpression; }
    inline bool DataFilterExpressionHasBeenSet() const { return m_dataFilterExpressionHasBeenSet; }
    template<typename DataFilterExpressionT = Expression>
    void SetDataFilterExpression(DataFilterExpressionT&& value) { m_dataFilterExpressionHasBeenSet = true; m_dataFilterExpression = std::forward<DataFilterExpressionT>(value); }
    template<typename DataFilterExpressionT = Expression>
    UpdateBillingViewRequest& WithDataFilterExpression(DataFilterExpressionT&& value) { SetDataFilterExpression(std::forward<DataFilterExpressionT>(value)); return *this;}
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
