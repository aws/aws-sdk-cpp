/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/PricingRuleScope.h>
#include <aws/billingconductor/model/PricingRuleType.h>
#include <aws/billingconductor/model/UpdateTieringInput.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace BillingConductor
{
namespace Model
{
  class UpdatePricingRuleResult
  {
  public:
    AWS_BILLINGCONDUCTOR_API UpdatePricingRuleResult() = default;
    AWS_BILLINGCONDUCTOR_API UpdatePricingRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API UpdatePricingRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the successfully updated pricing rule.
     * </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdatePricingRuleResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The new name of the pricing rule. The name must be unique to each pricing
     * rule. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdatePricingRuleResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdatePricingRuleResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The scope of pricing rule that indicates if it's globally applicable, or
     * it's service-specific. </p>
     */
    inline PricingRuleScope GetScope() const { return m_scope; }
    inline void SetScope(PricingRuleScope value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline UpdatePricingRuleResult& WithScope(PricingRuleScope value) { SetScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The new pricing rule type. </p>
     */
    inline PricingRuleType GetType() const { return m_type; }
    inline void SetType(PricingRuleType value) { m_typeHasBeenSet = true; m_type = value; }
    inline UpdatePricingRuleResult& WithType(PricingRuleType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The new modifier to show pricing plan rates as a percentage. </p>
     */
    inline double GetModifierPercentage() const { return m_modifierPercentage; }
    inline void SetModifierPercentage(double value) { m_modifierPercentageHasBeenSet = true; m_modifierPercentage = value; }
    inline UpdatePricingRuleResult& WithModifierPercentage(double value) { SetModifierPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the <code>Scope</code> attribute is set to <code>SERVICE</code>, the
     * attribute indicates which service the <code>PricingRule</code> is applicable
     * for. </p>
     */
    inline const Aws::String& GetService() const { return m_service; }
    template<typename ServiceT = Aws::String>
    void SetService(ServiceT&& value) { m_serviceHasBeenSet = true; m_service = std::forward<ServiceT>(value); }
    template<typename ServiceT = Aws::String>
    UpdatePricingRuleResult& WithService(ServiceT&& value) { SetService(std::forward<ServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The pricing plans count that this pricing rule is associated with. </p>
     */
    inline long long GetAssociatedPricingPlanCount() const { return m_associatedPricingPlanCount; }
    inline void SetAssociatedPricingPlanCount(long long value) { m_associatedPricingPlanCountHasBeenSet = true; m_associatedPricingPlanCount = value; }
    inline UpdatePricingRuleResult& WithAssociatedPricingPlanCount(long long value) { SetAssociatedPricingPlanCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The most recent time the pricing rule was modified. </p>
     */
    inline long long GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline UpdatePricingRuleResult& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The seller of services provided by Amazon Web Services, their affiliates, or
     * third-party providers selling services via Amazon Web Services Marketplace. </p>
     */
    inline const Aws::String& GetBillingEntity() const { return m_billingEntity; }
    template<typename BillingEntityT = Aws::String>
    void SetBillingEntity(BillingEntityT&& value) { m_billingEntityHasBeenSet = true; m_billingEntity = std::forward<BillingEntityT>(value); }
    template<typename BillingEntityT = Aws::String>
    UpdatePricingRuleResult& WithBillingEntity(BillingEntityT&& value) { SetBillingEntity(std::forward<BillingEntityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline const UpdateTieringInput& GetTiering() const { return m_tiering; }
    template<typename TieringT = UpdateTieringInput>
    void SetTiering(TieringT&& value) { m_tieringHasBeenSet = true; m_tiering = std::forward<TieringT>(value); }
    template<typename TieringT = UpdateTieringInput>
    UpdatePricingRuleResult& WithTiering(TieringT&& value) { SetTiering(std::forward<TieringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Usage type is the unit that each service uses to measure the usage of a
     * specific type of resource.</p> <p>If the <code>Scope</code> attribute is set to
     * <code>SKU</code>, this attribute indicates which usage type the
     * <code>PricingRule</code> is modifying. For example,
     * <code>USW2-BoxUsage:m2.2xlarge</code> describes an <code>M2 High Memory Double
     * Extra Large</code> instance in the US West (Oregon) Region. </p>
     */
    inline const Aws::String& GetUsageType() const { return m_usageType; }
    template<typename UsageTypeT = Aws::String>
    void SetUsageType(UsageTypeT&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::forward<UsageTypeT>(value); }
    template<typename UsageTypeT = Aws::String>
    UpdatePricingRuleResult& WithUsageType(UsageTypeT&& value) { SetUsageType(std::forward<UsageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Operation refers to the specific Amazon Web Services covered by this line
     * item. This describes the specific usage of the line item.</p> <p> If the
     * <code>Scope</code> attribute is set to <code>SKU</code>, this attribute
     * indicates which operation the <code>PricingRule</code> is modifying. For
     * example, a value of <code>RunInstances:0202</code> indicates the operation of
     * running an Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetOperation() const { return m_operation; }
    template<typename OperationT = Aws::String>
    void SetOperation(OperationT&& value) { m_operationHasBeenSet = true; m_operation = std::forward<OperationT>(value); }
    template<typename OperationT = Aws::String>
    UpdatePricingRuleResult& WithOperation(OperationT&& value) { SetOperation(std::forward<OperationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdatePricingRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

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

    long long m_lastModifiedTime{0};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_billingEntity;
    bool m_billingEntityHasBeenSet = false;

    UpdateTieringInput m_tiering;
    bool m_tieringHasBeenSet = false;

    Aws::String m_usageType;
    bool m_usageTypeHasBeenSet = false;

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
