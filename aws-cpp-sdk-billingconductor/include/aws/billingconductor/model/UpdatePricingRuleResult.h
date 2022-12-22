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


    /**
     * <p> The Amazon Resource Name (ARN) of the successfully updated pricing rule.
     * </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the successfully updated pricing rule.
     * </p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the successfully updated pricing rule.
     * </p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the successfully updated pricing rule.
     * </p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the successfully updated pricing rule.
     * </p>
     */
    inline UpdatePricingRuleResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the successfully updated pricing rule.
     * </p>
     */
    inline UpdatePricingRuleResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the successfully updated pricing rule.
     * </p>
     */
    inline UpdatePricingRuleResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The new name of the pricing rule. The name must be unique to each pricing
     * rule. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The new name of the pricing rule. The name must be unique to each pricing
     * rule. </p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p> The new name of the pricing rule. The name must be unique to each pricing
     * rule. </p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p> The new name of the pricing rule. The name must be unique to each pricing
     * rule. </p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p> The new name of the pricing rule. The name must be unique to each pricing
     * rule. </p>
     */
    inline UpdatePricingRuleResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The new name of the pricing rule. The name must be unique to each pricing
     * rule. </p>
     */
    inline UpdatePricingRuleResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The new name of the pricing rule. The name must be unique to each pricing
     * rule. </p>
     */
    inline UpdatePricingRuleResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline UpdatePricingRuleResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline UpdatePricingRuleResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The new description for the pricing rule. </p>
     */
    inline UpdatePricingRuleResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The scope of pricing rule that indicates if it's globally applicable, or
     * it's service-specific. </p>
     */
    inline const PricingRuleScope& GetScope() const{ return m_scope; }

    /**
     * <p> The scope of pricing rule that indicates if it's globally applicable, or
     * it's service-specific. </p>
     */
    inline void SetScope(const PricingRuleScope& value) { m_scope = value; }

    /**
     * <p> The scope of pricing rule that indicates if it's globally applicable, or
     * it's service-specific. </p>
     */
    inline void SetScope(PricingRuleScope&& value) { m_scope = std::move(value); }

    /**
     * <p> The scope of pricing rule that indicates if it's globally applicable, or
     * it's service-specific. </p>
     */
    inline UpdatePricingRuleResult& WithScope(const PricingRuleScope& value) { SetScope(value); return *this;}

    /**
     * <p> The scope of pricing rule that indicates if it's globally applicable, or
     * it's service-specific. </p>
     */
    inline UpdatePricingRuleResult& WithScope(PricingRuleScope&& value) { SetScope(std::move(value)); return *this;}


    /**
     * <p> The new pricing rule type. </p>
     */
    inline const PricingRuleType& GetType() const{ return m_type; }

    /**
     * <p> The new pricing rule type. </p>
     */
    inline void SetType(const PricingRuleType& value) { m_type = value; }

    /**
     * <p> The new pricing rule type. </p>
     */
    inline void SetType(PricingRuleType&& value) { m_type = std::move(value); }

    /**
     * <p> The new pricing rule type. </p>
     */
    inline UpdatePricingRuleResult& WithType(const PricingRuleType& value) { SetType(value); return *this;}

    /**
     * <p> The new pricing rule type. </p>
     */
    inline UpdatePricingRuleResult& WithType(PricingRuleType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p> The new modifier to show pricing plan rates as a percentage. </p>
     */
    inline double GetModifierPercentage() const{ return m_modifierPercentage; }

    /**
     * <p> The new modifier to show pricing plan rates as a percentage. </p>
     */
    inline void SetModifierPercentage(double value) { m_modifierPercentage = value; }

    /**
     * <p> The new modifier to show pricing plan rates as a percentage. </p>
     */
    inline UpdatePricingRuleResult& WithModifierPercentage(double value) { SetModifierPercentage(value); return *this;}


    /**
     * <p> If the <code>Scope</code> attribute is set to <code>SERVICE</code>, the
     * attribute indicates which service the <code>PricingRule</code> is applicable
     * for. </p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p> If the <code>Scope</code> attribute is set to <code>SERVICE</code>, the
     * attribute indicates which service the <code>PricingRule</code> is applicable
     * for. </p>
     */
    inline void SetService(const Aws::String& value) { m_service = value; }

    /**
     * <p> If the <code>Scope</code> attribute is set to <code>SERVICE</code>, the
     * attribute indicates which service the <code>PricingRule</code> is applicable
     * for. </p>
     */
    inline void SetService(Aws::String&& value) { m_service = std::move(value); }

    /**
     * <p> If the <code>Scope</code> attribute is set to <code>SERVICE</code>, the
     * attribute indicates which service the <code>PricingRule</code> is applicable
     * for. </p>
     */
    inline void SetService(const char* value) { m_service.assign(value); }

    /**
     * <p> If the <code>Scope</code> attribute is set to <code>SERVICE</code>, the
     * attribute indicates which service the <code>PricingRule</code> is applicable
     * for. </p>
     */
    inline UpdatePricingRuleResult& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p> If the <code>Scope</code> attribute is set to <code>SERVICE</code>, the
     * attribute indicates which service the <code>PricingRule</code> is applicable
     * for. </p>
     */
    inline UpdatePricingRuleResult& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p> If the <code>Scope</code> attribute is set to <code>SERVICE</code>, the
     * attribute indicates which service the <code>PricingRule</code> is applicable
     * for. </p>
     */
    inline UpdatePricingRuleResult& WithService(const char* value) { SetService(value); return *this;}


    /**
     * <p> The pricing plans count that this pricing rule is associated with. </p>
     */
    inline long long GetAssociatedPricingPlanCount() const{ return m_associatedPricingPlanCount; }

    /**
     * <p> The pricing plans count that this pricing rule is associated with. </p>
     */
    inline void SetAssociatedPricingPlanCount(long long value) { m_associatedPricingPlanCount = value; }

    /**
     * <p> The pricing plans count that this pricing rule is associated with. </p>
     */
    inline UpdatePricingRuleResult& WithAssociatedPricingPlanCount(long long value) { SetAssociatedPricingPlanCount(value); return *this;}


    /**
     * <p> The most recent time the pricing rule was modified. </p>
     */
    inline long long GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p> The most recent time the pricing rule was modified. </p>
     */
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTime = value; }

    /**
     * <p> The most recent time the pricing rule was modified. </p>
     */
    inline UpdatePricingRuleResult& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}


    /**
     * <p> The seller of services provided by Amazon Web Services, their affiliates, or
     * third-party providers selling services via Amazon Web Services Marketplace. </p>
     */
    inline const Aws::String& GetBillingEntity() const{ return m_billingEntity; }

    /**
     * <p> The seller of services provided by Amazon Web Services, their affiliates, or
     * third-party providers selling services via Amazon Web Services Marketplace. </p>
     */
    inline void SetBillingEntity(const Aws::String& value) { m_billingEntity = value; }

    /**
     * <p> The seller of services provided by Amazon Web Services, their affiliates, or
     * third-party providers selling services via Amazon Web Services Marketplace. </p>
     */
    inline void SetBillingEntity(Aws::String&& value) { m_billingEntity = std::move(value); }

    /**
     * <p> The seller of services provided by Amazon Web Services, their affiliates, or
     * third-party providers selling services via Amazon Web Services Marketplace. </p>
     */
    inline void SetBillingEntity(const char* value) { m_billingEntity.assign(value); }

    /**
     * <p> The seller of services provided by Amazon Web Services, their affiliates, or
     * third-party providers selling services via Amazon Web Services Marketplace. </p>
     */
    inline UpdatePricingRuleResult& WithBillingEntity(const Aws::String& value) { SetBillingEntity(value); return *this;}

    /**
     * <p> The seller of services provided by Amazon Web Services, their affiliates, or
     * third-party providers selling services via Amazon Web Services Marketplace. </p>
     */
    inline UpdatePricingRuleResult& WithBillingEntity(Aws::String&& value) { SetBillingEntity(std::move(value)); return *this;}

    /**
     * <p> The seller of services provided by Amazon Web Services, their affiliates, or
     * third-party providers selling services via Amazon Web Services Marketplace. </p>
     */
    inline UpdatePricingRuleResult& WithBillingEntity(const char* value) { SetBillingEntity(value); return *this;}


    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline const UpdateTieringInput& GetTiering() const{ return m_tiering; }

    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline void SetTiering(const UpdateTieringInput& value) { m_tiering = value; }

    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline void SetTiering(UpdateTieringInput&& value) { m_tiering = std::move(value); }

    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline UpdatePricingRuleResult& WithTiering(const UpdateTieringInput& value) { SetTiering(value); return *this;}

    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline UpdatePricingRuleResult& WithTiering(UpdateTieringInput&& value) { SetTiering(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
