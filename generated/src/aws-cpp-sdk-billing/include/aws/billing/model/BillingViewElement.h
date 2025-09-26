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
   * <p>The metadata associated to the billing view. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/BillingViewElement">AWS
   * API Reference</a></p>
   */
  class BillingViewElement
  {
  public:
    AWS_BILLING_API BillingViewElement() = default;
    AWS_BILLING_API BillingViewElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLING_API BillingViewElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    BillingViewElement& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The account name of the billing view. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    BillingViewElement& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    BillingViewElement& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of billing group. </p>
     */
    inline BillingViewType GetBillingViewType() const { return m_billingViewType; }
    inline bool BillingViewTypeHasBeenSet() const { return m_billingViewTypeHasBeenSet; }
    inline void SetBillingViewType(BillingViewType value) { m_billingViewTypeHasBeenSet = true; m_billingViewType = value; }
    inline BillingViewElement& WithBillingViewType(BillingViewType value) { SetBillingViewType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account owner of the billing view. </p>
     */
    inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    template<typename OwnerAccountIdT = Aws::String>
    void SetOwnerAccountId(OwnerAccountIdT&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::forward<OwnerAccountIdT>(value); }
    template<typename OwnerAccountIdT = Aws::String>
    BillingViewElement& WithOwnerAccountId(OwnerAccountIdT&& value) { SetOwnerAccountId(std::forward<OwnerAccountIdT>(value)); return *this;}
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
    BillingViewElement& WithSourceAccountId(SourceAccountIdT&& value) { SetSourceAccountId(std::forward<SourceAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> See <a
     * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_billing_Expression.html">Expression</a>.
     * Billing view only supports <code>LINKED_ACCOUNT</code> and <code>Tags</code>.
     * </p>
     */
    inline const Expression& GetDataFilterExpression() const { return m_dataFilterExpression; }
    inline bool DataFilterExpressionHasBeenSet() const { return m_dataFilterExpressionHasBeenSet; }
    template<typename DataFilterExpressionT = Expression>
    void SetDataFilterExpression(DataFilterExpressionT&& value) { m_dataFilterExpressionHasBeenSet = true; m_dataFilterExpression = std::forward<DataFilterExpressionT>(value); }
    template<typename DataFilterExpressionT = Expression>
    BillingViewElement& WithDataFilterExpression(DataFilterExpressionT&& value) { SetDataFilterExpression(std::forward<DataFilterExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the billing view was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    BillingViewElement& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the billing view was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    BillingViewElement& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of billing views that use this billing view as a source. </p>
     */
    inline int GetDerivedViewCount() const { return m_derivedViewCount; }
    inline bool DerivedViewCountHasBeenSet() const { return m_derivedViewCountHasBeenSet; }
    inline void SetDerivedViewCount(int value) { m_derivedViewCountHasBeenSet = true; m_derivedViewCount = value; }
    inline BillingViewElement& WithDerivedViewCount(int value) { SetDerivedViewCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of source views associated with this billing view. </p>
     */
    inline int GetSourceViewCount() const { return m_sourceViewCount; }
    inline bool SourceViewCountHasBeenSet() const { return m_sourceViewCountHasBeenSet; }
    inline void SetSourceViewCount(int value) { m_sourceViewCountHasBeenSet = true; m_sourceViewCount = value; }
    inline BillingViewElement& WithSourceViewCount(int value) { SetSourceViewCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of when the billing view definition was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetViewDefinitionLastUpdatedAt() const { return m_viewDefinitionLastUpdatedAt; }
    inline bool ViewDefinitionLastUpdatedAtHasBeenSet() const { return m_viewDefinitionLastUpdatedAtHasBeenSet; }
    template<typename ViewDefinitionLastUpdatedAtT = Aws::Utils::DateTime>
    void SetViewDefinitionLastUpdatedAt(ViewDefinitionLastUpdatedAtT&& value) { m_viewDefinitionLastUpdatedAtHasBeenSet = true; m_viewDefinitionLastUpdatedAt = std::forward<ViewDefinitionLastUpdatedAtT>(value); }
    template<typename ViewDefinitionLastUpdatedAtT = Aws::Utils::DateTime>
    BillingViewElement& WithViewDefinitionLastUpdatedAt(ViewDefinitionLastUpdatedAtT&& value) { SetViewDefinitionLastUpdatedAt(std::forward<ViewDefinitionLastUpdatedAtT>(value)); return *this;}
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
    BillingViewElement& WithHealthStatus(HealthStatusT&& value) { SetHealthStatus(std::forward<HealthStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    BillingViewType m_billingViewType{BillingViewType::NOT_SET};
    bool m_billingViewTypeHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    Aws::String m_sourceAccountId;
    bool m_sourceAccountIdHasBeenSet = false;

    Expression m_dataFilterExpression;
    bool m_dataFilterExpressionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    int m_derivedViewCount{0};
    bool m_derivedViewCountHasBeenSet = false;

    int m_sourceViewCount{0};
    bool m_sourceViewCountHasBeenSet = false;

    Aws::Utils::DateTime m_viewDefinitionLastUpdatedAt{};
    bool m_viewDefinitionLastUpdatedAtHasBeenSet = false;

    BillingViewHealthStatus m_healthStatus;
    bool m_healthStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Billing
} // namespace Aws
