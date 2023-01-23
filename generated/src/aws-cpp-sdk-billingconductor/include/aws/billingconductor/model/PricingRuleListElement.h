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
   * <p> A representation of a pricing rule. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/PricingRuleListElement">AWS
   * API Reference</a></p>
   */
  class PricingRuleListElement
  {
  public:
    AWS_BILLINGCONDUCTOR_API PricingRuleListElement();
    AWS_BILLINGCONDUCTOR_API PricingRuleListElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API PricingRuleListElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of a pricing rule. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of a pricing rule. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of a pricing rule. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of a pricing rule. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of a pricing rule. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of a pricing rule. </p>
     */
    inline PricingRuleListElement& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of a pricing rule. </p>
     */
    inline PricingRuleListElement& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of a pricing rule. </p>
     */
    inline PricingRuleListElement& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) used to uniquely identify a pricing rule.
     * </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) used to uniquely identify a pricing rule.
     * </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) used to uniquely identify a pricing rule.
     * </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) used to uniquely identify a pricing rule.
     * </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) used to uniquely identify a pricing rule.
     * </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) used to uniquely identify a pricing rule.
     * </p>
     */
    inline PricingRuleListElement& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) used to uniquely identify a pricing rule.
     * </p>
     */
    inline PricingRuleListElement& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) used to uniquely identify a pricing rule.
     * </p>
     */
    inline PricingRuleListElement& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The pricing rule description. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The pricing rule description. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p> The pricing rule description. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p> The pricing rule description. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p> The pricing rule description. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p> The pricing rule description. </p>
     */
    inline PricingRuleListElement& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The pricing rule description. </p>
     */
    inline PricingRuleListElement& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The pricing rule description. </p>
     */
    inline PricingRuleListElement& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The scope of pricing rule that indicates if it is globally applicable, or if
     * it is service-specific. </p>
     */
    inline const PricingRuleScope& GetScope() const{ return m_scope; }

    /**
     * <p> The scope of pricing rule that indicates if it is globally applicable, or if
     * it is service-specific. </p>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p> The scope of pricing rule that indicates if it is globally applicable, or if
     * it is service-specific. </p>
     */
    inline void SetScope(const PricingRuleScope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p> The scope of pricing rule that indicates if it is globally applicable, or if
     * it is service-specific. </p>
     */
    inline void SetScope(PricingRuleScope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p> The scope of pricing rule that indicates if it is globally applicable, or if
     * it is service-specific. </p>
     */
    inline PricingRuleListElement& WithScope(const PricingRuleScope& value) { SetScope(value); return *this;}

    /**
     * <p> The scope of pricing rule that indicates if it is globally applicable, or if
     * it is service-specific. </p>
     */
    inline PricingRuleListElement& WithScope(PricingRuleScope&& value) { SetScope(std::move(value)); return *this;}


    /**
     * <p> The type of pricing rule. </p>
     */
    inline const PricingRuleType& GetType() const{ return m_type; }

    /**
     * <p> The type of pricing rule. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The type of pricing rule. </p>
     */
    inline void SetType(const PricingRuleType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The type of pricing rule. </p>
     */
    inline void SetType(PricingRuleType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The type of pricing rule. </p>
     */
    inline PricingRuleListElement& WithType(const PricingRuleType& value) { SetType(value); return *this;}

    /**
     * <p> The type of pricing rule. </p>
     */
    inline PricingRuleListElement& WithType(PricingRuleType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p> A percentage modifier applied on the public pricing rates. </p>
     */
    inline double GetModifierPercentage() const{ return m_modifierPercentage; }

    /**
     * <p> A percentage modifier applied on the public pricing rates. </p>
     */
    inline bool ModifierPercentageHasBeenSet() const { return m_modifierPercentageHasBeenSet; }

    /**
     * <p> A percentage modifier applied on the public pricing rates. </p>
     */
    inline void SetModifierPercentage(double value) { m_modifierPercentageHasBeenSet = true; m_modifierPercentage = value; }

    /**
     * <p> A percentage modifier applied on the public pricing rates. </p>
     */
    inline PricingRuleListElement& WithModifierPercentage(double value) { SetModifierPercentage(value); return *this;}


    /**
     * <p> If the <code>Scope</code> attribute is <code>SERVICE</code>, this attribute
     * indicates which service the <code>PricingRule</code> is applicable for. </p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p> If the <code>Scope</code> attribute is <code>SERVICE</code>, this attribute
     * indicates which service the <code>PricingRule</code> is applicable for. </p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p> If the <code>Scope</code> attribute is <code>SERVICE</code>, this attribute
     * indicates which service the <code>PricingRule</code> is applicable for. </p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p> If the <code>Scope</code> attribute is <code>SERVICE</code>, this attribute
     * indicates which service the <code>PricingRule</code> is applicable for. </p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p> If the <code>Scope</code> attribute is <code>SERVICE</code>, this attribute
     * indicates which service the <code>PricingRule</code> is applicable for. </p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p> If the <code>Scope</code> attribute is <code>SERVICE</code>, this attribute
     * indicates which service the <code>PricingRule</code> is applicable for. </p>
     */
    inline PricingRuleListElement& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p> If the <code>Scope</code> attribute is <code>SERVICE</code>, this attribute
     * indicates which service the <code>PricingRule</code> is applicable for. </p>
     */
    inline PricingRuleListElement& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p> If the <code>Scope</code> attribute is <code>SERVICE</code>, this attribute
     * indicates which service the <code>PricingRule</code> is applicable for. </p>
     */
    inline PricingRuleListElement& WithService(const char* value) { SetService(value); return *this;}


    /**
     * <p> The pricing plans count that this pricing rule is associated with. </p>
     */
    inline long long GetAssociatedPricingPlanCount() const{ return m_associatedPricingPlanCount; }

    /**
     * <p> The pricing plans count that this pricing rule is associated with. </p>
     */
    inline bool AssociatedPricingPlanCountHasBeenSet() const { return m_associatedPricingPlanCountHasBeenSet; }

    /**
     * <p> The pricing plans count that this pricing rule is associated with. </p>
     */
    inline void SetAssociatedPricingPlanCount(long long value) { m_associatedPricingPlanCountHasBeenSet = true; m_associatedPricingPlanCount = value; }

    /**
     * <p> The pricing plans count that this pricing rule is associated with. </p>
     */
    inline PricingRuleListElement& WithAssociatedPricingPlanCount(long long value) { SetAssociatedPricingPlanCount(value); return *this;}


    /**
     * <p> The time when the pricing rule was created. </p>
     */
    inline long long GetCreationTime() const{ return m_creationTime; }

    /**
     * <p> The time when the pricing rule was created. </p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p> The time when the pricing rule was created. </p>
     */
    inline void SetCreationTime(long long value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p> The time when the pricing rule was created. </p>
     */
    inline PricingRuleListElement& WithCreationTime(long long value) { SetCreationTime(value); return *this;}


    /**
     * <p> The most recent time when the pricing rule was modified. </p>
     */
    inline long long GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p> The most recent time when the pricing rule was modified. </p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p> The most recent time when the pricing rule was modified. </p>
     */
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p> The most recent time when the pricing rule was modified. </p>
     */
    inline PricingRuleListElement& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}


    /**
     * <p> The seller of services provided by Amazon Web Services, their affiliates, or
     * third-party providers selling services via Amazon Web Services Marketplace. </p>
     */
    inline const Aws::String& GetBillingEntity() const{ return m_billingEntity; }

    /**
     * <p> The seller of services provided by Amazon Web Services, their affiliates, or
     * third-party providers selling services via Amazon Web Services Marketplace. </p>
     */
    inline bool BillingEntityHasBeenSet() const { return m_billingEntityHasBeenSet; }

    /**
     * <p> The seller of services provided by Amazon Web Services, their affiliates, or
     * third-party providers selling services via Amazon Web Services Marketplace. </p>
     */
    inline void SetBillingEntity(const Aws::String& value) { m_billingEntityHasBeenSet = true; m_billingEntity = value; }

    /**
     * <p> The seller of services provided by Amazon Web Services, their affiliates, or
     * third-party providers selling services via Amazon Web Services Marketplace. </p>
     */
    inline void SetBillingEntity(Aws::String&& value) { m_billingEntityHasBeenSet = true; m_billingEntity = std::move(value); }

    /**
     * <p> The seller of services provided by Amazon Web Services, their affiliates, or
     * third-party providers selling services via Amazon Web Services Marketplace. </p>
     */
    inline void SetBillingEntity(const char* value) { m_billingEntityHasBeenSet = true; m_billingEntity.assign(value); }

    /**
     * <p> The seller of services provided by Amazon Web Services, their affiliates, or
     * third-party providers selling services via Amazon Web Services Marketplace. </p>
     */
    inline PricingRuleListElement& WithBillingEntity(const Aws::String& value) { SetBillingEntity(value); return *this;}

    /**
     * <p> The seller of services provided by Amazon Web Services, their affiliates, or
     * third-party providers selling services via Amazon Web Services Marketplace. </p>
     */
    inline PricingRuleListElement& WithBillingEntity(Aws::String&& value) { SetBillingEntity(std::move(value)); return *this;}

    /**
     * <p> The seller of services provided by Amazon Web Services, their affiliates, or
     * third-party providers selling services via Amazon Web Services Marketplace. </p>
     */
    inline PricingRuleListElement& WithBillingEntity(const char* value) { SetBillingEntity(value); return *this;}


    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline const Tiering& GetTiering() const{ return m_tiering; }

    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline bool TieringHasBeenSet() const { return m_tieringHasBeenSet; }

    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline void SetTiering(const Tiering& value) { m_tieringHasBeenSet = true; m_tiering = value; }

    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline void SetTiering(Tiering&& value) { m_tieringHasBeenSet = true; m_tiering = std::move(value); }

    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline PricingRuleListElement& WithTiering(const Tiering& value) { SetTiering(value); return *this;}

    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline PricingRuleListElement& WithTiering(Tiering&& value) { SetTiering(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    PricingRuleScope m_scope;
    bool m_scopeHasBeenSet = false;

    PricingRuleType m_type;
    bool m_typeHasBeenSet = false;

    double m_modifierPercentage;
    bool m_modifierPercentageHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    long long m_associatedPricingPlanCount;
    bool m_associatedPricingPlanCountHasBeenSet = false;

    long long m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    long long m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_billingEntity;
    bool m_billingEntityHasBeenSet = false;

    Tiering m_tiering;
    bool m_tieringHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
