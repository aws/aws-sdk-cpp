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
    AWS_BILLINGCONDUCTOR_API UpdatePricingRuleResult();
    AWS_BILLINGCONDUCTOR_API UpdatePricingRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BILLINGCONDUCTOR_API UpdatePricingRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the successfully updated pricing rule.
     * </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdatePricingRuleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdatePricingRuleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdatePricingRuleResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The new name of the pricing rule. The name must be unique to each pricing
     * rule. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdatePricingRuleResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdatePricingRuleResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdatePricingRuleResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdatePricingRuleResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdatePricingRuleResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdatePricingRuleResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The scope of pricing rule that indicates if it's globally applicable, or
     * it's service-specific. </p>
     */
    inline const PricingRuleScope& GetScope() const{ return m_scope; }
    inline void SetScope(const PricingRuleScope& value) { m_scope = value; }
    inline void SetScope(PricingRuleScope&& value) { m_scope = std::move(value); }
    inline UpdatePricingRuleResult& WithScope(const PricingRuleScope& value) { SetScope(value); return *this;}
    inline UpdatePricingRuleResult& WithScope(PricingRuleScope&& value) { SetScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The new pricing rule type. </p>
     */
    inline const PricingRuleType& GetType() const{ return m_type; }
    inline void SetType(const PricingRuleType& value) { m_type = value; }
    inline void SetType(PricingRuleType&& value) { m_type = std::move(value); }
    inline UpdatePricingRuleResult& WithType(const PricingRuleType& value) { SetType(value); return *this;}
    inline UpdatePricingRuleResult& WithType(PricingRuleType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The new modifier to show pricing plan rates as a percentage. </p>
     */
    inline double GetModifierPercentage() const{ return m_modifierPercentage; }
    inline void SetModifierPercentage(double value) { m_modifierPercentage = value; }
    inline UpdatePricingRuleResult& WithModifierPercentage(double value) { SetModifierPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the <code>Scope</code> attribute is set to <code>SERVICE</code>, the
     * attribute indicates which service the <code>PricingRule</code> is applicable
     * for. </p>
     */
    inline const Aws::String& GetService() const{ return m_service; }
    inline void SetService(const Aws::String& value) { m_service = value; }
    inline void SetService(Aws::String&& value) { m_service = std::move(value); }
    inline void SetService(const char* value) { m_service.assign(value); }
    inline UpdatePricingRuleResult& WithService(const Aws::String& value) { SetService(value); return *this;}
    inline UpdatePricingRuleResult& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}
    inline UpdatePricingRuleResult& WithService(const char* value) { SetService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The pricing plans count that this pricing rule is associated with. </p>
     */
    inline long long GetAssociatedPricingPlanCount() const{ return m_associatedPricingPlanCount; }
    inline void SetAssociatedPricingPlanCount(long long value) { m_associatedPricingPlanCount = value; }
    inline UpdatePricingRuleResult& WithAssociatedPricingPlanCount(long long value) { SetAssociatedPricingPlanCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The most recent time the pricing rule was modified. </p>
     */
    inline long long GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTime = value; }
    inline UpdatePricingRuleResult& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The seller of services provided by Amazon Web Services, their affiliates, or
     * third-party providers selling services via Amazon Web Services Marketplace. </p>
     */
    inline const Aws::String& GetBillingEntity() const{ return m_billingEntity; }
    inline void SetBillingEntity(const Aws::String& value) { m_billingEntity = value; }
    inline void SetBillingEntity(Aws::String&& value) { m_billingEntity = std::move(value); }
    inline void SetBillingEntity(const char* value) { m_billingEntity.assign(value); }
    inline UpdatePricingRuleResult& WithBillingEntity(const Aws::String& value) { SetBillingEntity(value); return *this;}
    inline UpdatePricingRuleResult& WithBillingEntity(Aws::String&& value) { SetBillingEntity(std::move(value)); return *this;}
    inline UpdatePricingRuleResult& WithBillingEntity(const char* value) { SetBillingEntity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline const UpdateTieringInput& GetTiering() const{ return m_tiering; }
    inline void SetTiering(const UpdateTieringInput& value) { m_tiering = value; }
    inline void SetTiering(UpdateTieringInput&& value) { m_tiering = std::move(value); }
    inline UpdatePricingRuleResult& WithTiering(const UpdateTieringInput& value) { SetTiering(value); return *this;}
    inline UpdatePricingRuleResult& WithTiering(UpdateTieringInput&& value) { SetTiering(std::move(value)); return *this;}
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
    inline const Aws::String& GetUsageType() const{ return m_usageType; }
    inline void SetUsageType(const Aws::String& value) { m_usageType = value; }
    inline void SetUsageType(Aws::String&& value) { m_usageType = std::move(value); }
    inline void SetUsageType(const char* value) { m_usageType.assign(value); }
    inline UpdatePricingRuleResult& WithUsageType(const Aws::String& value) { SetUsageType(value); return *this;}
    inline UpdatePricingRuleResult& WithUsageType(Aws::String&& value) { SetUsageType(std::move(value)); return *this;}
    inline UpdatePricingRuleResult& WithUsageType(const char* value) { SetUsageType(value); return *this;}
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
    inline const Aws::String& GetOperation() const{ return m_operation; }
    inline void SetOperation(const Aws::String& value) { m_operation = value; }
    inline void SetOperation(Aws::String&& value) { m_operation = std::move(value); }
    inline void SetOperation(const char* value) { m_operation.assign(value); }
    inline UpdatePricingRuleResult& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}
    inline UpdatePricingRuleResult& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}
    inline UpdatePricingRuleResult& WithOperation(const char* value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdatePricingRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdatePricingRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdatePricingRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_description;

    PricingRuleScope m_scope;

    PricingRuleType m_type;

    double m_modifierPercentage;

    Aws::String m_service;

    long long m_associatedPricingPlanCount;

    long long m_lastModifiedTime;

    Aws::String m_billingEntity;

    UpdateTieringInput m_tiering;

    Aws::String m_usageType;

    Aws::String m_operation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
