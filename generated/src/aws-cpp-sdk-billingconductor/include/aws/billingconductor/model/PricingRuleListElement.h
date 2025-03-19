/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/PricingRuleScope.h>
#include <aws/billingconductor/model/PricingRuleType.h>
#include <aws/billingconductor/model/Tiering.h>
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
   * <p>A representation of a pricing rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/PricingRuleListElement">AWS
   * API Reference</a></p>
   */
  class PricingRuleListElement
  {
  public:
    AWS_BILLINGCONDUCTOR_API PricingRuleListElement() = default;
    AWS_BILLINGCONDUCTOR_API PricingRuleListElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API PricingRuleListElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a pricing rule.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PricingRuleListElement& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) used to uniquely identify a pricing rule.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    PricingRuleListElement& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pricing rule description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PricingRuleListElement& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scope of pricing rule that indicates if it is globally applicable, or if
     * it is service-specific.</p>
     */
    inline PricingRuleScope GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(PricingRuleScope value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline PricingRuleListElement& WithScope(PricingRuleScope value) { SetScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of pricing rule.</p>
     */
    inline PricingRuleType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(PricingRuleType value) { m_typeHasBeenSet = true; m_type = value; }
    inline PricingRuleListElement& WithType(PricingRuleType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A percentage modifier applied on the public pricing rates.</p>
     */
    inline double GetModifierPercentage() const { return m_modifierPercentage; }
    inline bool ModifierPercentageHasBeenSet() const { return m_modifierPercentageHasBeenSet; }
    inline void SetModifierPercentage(double value) { m_modifierPercentageHasBeenSet = true; m_modifierPercentage = value; }
    inline PricingRuleListElement& WithModifierPercentage(double value) { SetModifierPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>Scope</code> attribute is <code>SERVICE</code>, this attribute
     * indicates which service the <code>PricingRule</code> is applicable for.</p>
     */
    inline const Aws::String& GetService() const { return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    template<typename ServiceT = Aws::String>
    void SetService(ServiceT&& value) { m_serviceHasBeenSet = true; m_service = std::forward<ServiceT>(value); }
    template<typename ServiceT = Aws::String>
    PricingRuleListElement& WithService(ServiceT&& value) { SetService(std::forward<ServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pricing plans count that this pricing rule is associated with.</p>
     */
    inline long long GetAssociatedPricingPlanCount() const { return m_associatedPricingPlanCount; }
    inline bool AssociatedPricingPlanCountHasBeenSet() const { return m_associatedPricingPlanCountHasBeenSet; }
    inline void SetAssociatedPricingPlanCount(long long value) { m_associatedPricingPlanCountHasBeenSet = true; m_associatedPricingPlanCount = value; }
    inline PricingRuleListElement& WithAssociatedPricingPlanCount(long long value) { SetAssociatedPricingPlanCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the pricing rule was created.</p>
     */
    inline long long GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline PricingRuleListElement& WithCreationTime(long long value) { SetCreationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The most recent time when the pricing rule was modified.</p>
     */
    inline long long GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline PricingRuleListElement& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The seller of services provided by Amazon Web Services, their affiliates, or
     * third-party providers selling services via Amazon Web Services Marketplace. </p>
     */
    inline const Aws::String& GetBillingEntity() const { return m_billingEntity; }
    inline bool BillingEntityHasBeenSet() const { return m_billingEntityHasBeenSet; }
    template<typename BillingEntityT = Aws::String>
    void SetBillingEntity(BillingEntityT&& value) { m_billingEntityHasBeenSet = true; m_billingEntity = std::forward<BillingEntityT>(value); }
    template<typename BillingEntityT = Aws::String>
    PricingRuleListElement& WithBillingEntity(BillingEntityT&& value) { SetBillingEntity(std::forward<BillingEntityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline const Tiering& GetTiering() const { return m_tiering; }
    inline bool TieringHasBeenSet() const { return m_tieringHasBeenSet; }
    template<typename TieringT = Tiering>
    void SetTiering(TieringT&& value) { m_tieringHasBeenSet = true; m_tiering = std::forward<TieringT>(value); }
    template<typename TieringT = Tiering>
    PricingRuleListElement& WithTiering(TieringT&& value) { SetTiering(std::forward<TieringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Usage type is the unit that each service uses to measure the usage of a
     * specific type of resource.</p> <p>If the <code>Scope</code> attribute is set to
     * <code>SKU</code>, this attribute indicates which usage type the
     * <code>PricingRule</code> is modifying. For example,
     * <code>USW2-BoxUsage:m2.2xlarge</code> describes an<code> M2 High Memory Double
     * Extra Large</code> instance in the US West (Oregon) Region.
     * <pre><code>&lt;/p&gt; </code></pre>
     */
    inline const Aws::String& GetUsageType() const { return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    template<typename UsageTypeT = Aws::String>
    void SetUsageType(UsageTypeT&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::forward<UsageTypeT>(value); }
    template<typename UsageTypeT = Aws::String>
    PricingRuleListElement& WithUsageType(UsageTypeT&& value) { SetUsageType(std::forward<UsageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Operation is the specific Amazon Web Services action covered by this line
     * item. This describes the specific usage of the line item.</p> <p> If the
     * <code>Scope</code> attribute is set to <code>SKU</code>, this attribute
     * indicates which operation the <code>PricingRule</code> is modifying. For
     * example, a value of <code>RunInstances:0202</code> indicates the operation of
     * running an Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    template<typename OperationT = Aws::String>
    void SetOperation(OperationT&& value) { m_operationHasBeenSet = true; m_operation = std::forward<OperationT>(value); }
    template<typename OperationT = Aws::String>
    PricingRuleListElement& WithOperation(OperationT&& value) { SetOperation(std::forward<OperationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    PricingRuleScope m_scope{PricingRuleScope::NOT_SET};
    bool m_scopeHasBeenSet = false;

    PricingRuleType m_type{PricingRuleType::NOT_SET};
    bool m_typeHasBeenSet = false;

    double m_modifierPercentage{0.0};
    bool m_modifierPercentageHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    long long m_associatedPricingPlanCount{0};
    bool m_associatedPricingPlanCountHasBeenSet = false;

    long long m_creationTime{0};
    bool m_creationTimeHasBeenSet = false;

    long long m_lastModifiedTime{0};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_billingEntity;
    bool m_billingEntityHasBeenSet = false;

    Tiering m_tiering;
    bool m_tieringHasBeenSet = false;

    Aws::String m_usageType;
    bool m_usageTypeHasBeenSet = false;

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
