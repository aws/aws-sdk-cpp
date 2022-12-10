/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/BillingConductorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/PricingRuleScope.h>
#include <aws/billingconductor/model/PricingRuleType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/billingconductor/model/CreateTieringInput.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

  /**
   */
  class CreatePricingRuleRequest : public BillingConductorRequest
  {
  public:
    AWS_BILLINGCONDUCTOR_API CreatePricingRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePricingRule"; }

    AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;

    AWS_BILLINGCONDUCTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The token that's needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p> The token that's needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p> The token that's needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p> The token that's needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p> The token that's needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p> The token that's needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline CreatePricingRuleRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p> The token that's needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline CreatePricingRuleRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p> The token that's needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline CreatePricingRuleRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p> The pricing rule name. The names must be unique to each pricing rule. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The pricing rule name. The names must be unique to each pricing rule. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The pricing rule name. The names must be unique to each pricing rule. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The pricing rule name. The names must be unique to each pricing rule. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The pricing rule name. The names must be unique to each pricing rule. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The pricing rule name. The names must be unique to each pricing rule. </p>
     */
    inline CreatePricingRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The pricing rule name. The names must be unique to each pricing rule. </p>
     */
    inline CreatePricingRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The pricing rule name. The names must be unique to each pricing rule. </p>
     */
    inline CreatePricingRuleRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline CreatePricingRuleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The pricing rule description. </p>
     */
    inline CreatePricingRuleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The pricing rule description. </p>
     */
    inline CreatePricingRuleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The scope of pricing rule that indicates if it's globally applicable, or
     * it's service-specific. </p>
     */
    inline const PricingRuleScope& GetScope() const{ return m_scope; }

    /**
     * <p> The scope of pricing rule that indicates if it's globally applicable, or
     * it's service-specific. </p>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p> The scope of pricing rule that indicates if it's globally applicable, or
     * it's service-specific. </p>
     */
    inline void SetScope(const PricingRuleScope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p> The scope of pricing rule that indicates if it's globally applicable, or
     * it's service-specific. </p>
     */
    inline void SetScope(PricingRuleScope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p> The scope of pricing rule that indicates if it's globally applicable, or
     * it's service-specific. </p>
     */
    inline CreatePricingRuleRequest& WithScope(const PricingRuleScope& value) { SetScope(value); return *this;}

    /**
     * <p> The scope of pricing rule that indicates if it's globally applicable, or
     * it's service-specific. </p>
     */
    inline CreatePricingRuleRequest& WithScope(PricingRuleScope&& value) { SetScope(std::move(value)); return *this;}


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
    inline CreatePricingRuleRequest& WithType(const PricingRuleType& value) { SetType(value); return *this;}

    /**
     * <p> The type of pricing rule. </p>
     */
    inline CreatePricingRuleRequest& WithType(PricingRuleType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p> A percentage modifier that's applied on the public pricing rates. </p>
     */
    inline double GetModifierPercentage() const{ return m_modifierPercentage; }

    /**
     * <p> A percentage modifier that's applied on the public pricing rates. </p>
     */
    inline bool ModifierPercentageHasBeenSet() const { return m_modifierPercentageHasBeenSet; }

    /**
     * <p> A percentage modifier that's applied on the public pricing rates. </p>
     */
    inline void SetModifierPercentage(double value) { m_modifierPercentageHasBeenSet = true; m_modifierPercentage = value; }

    /**
     * <p> A percentage modifier that's applied on the public pricing rates. </p>
     */
    inline CreatePricingRuleRequest& WithModifierPercentage(double value) { SetModifierPercentage(value); return *this;}


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
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p> If the <code>Scope</code> attribute is set to <code>SERVICE</code>, the
     * attribute indicates which service the <code>PricingRule</code> is applicable
     * for. </p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p> If the <code>Scope</code> attribute is set to <code>SERVICE</code>, the
     * attribute indicates which service the <code>PricingRule</code> is applicable
     * for. </p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p> If the <code>Scope</code> attribute is set to <code>SERVICE</code>, the
     * attribute indicates which service the <code>PricingRule</code> is applicable
     * for. </p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p> If the <code>Scope</code> attribute is set to <code>SERVICE</code>, the
     * attribute indicates which service the <code>PricingRule</code> is applicable
     * for. </p>
     */
    inline CreatePricingRuleRequest& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p> If the <code>Scope</code> attribute is set to <code>SERVICE</code>, the
     * attribute indicates which service the <code>PricingRule</code> is applicable
     * for. </p>
     */
    inline CreatePricingRuleRequest& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p> If the <code>Scope</code> attribute is set to <code>SERVICE</code>, the
     * attribute indicates which service the <code>PricingRule</code> is applicable
     * for. </p>
     */
    inline CreatePricingRuleRequest& WithService(const char* value) { SetService(value); return *this;}


    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * rule. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * rule. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * rule. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * rule. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * rule. </p>
     */
    inline CreatePricingRuleRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * rule. </p>
     */
    inline CreatePricingRuleRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * rule. </p>
     */
    inline CreatePricingRuleRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * rule. </p>
     */
    inline CreatePricingRuleRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * rule. </p>
     */
    inline CreatePricingRuleRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * rule. </p>
     */
    inline CreatePricingRuleRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * rule. </p>
     */
    inline CreatePricingRuleRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * rule. </p>
     */
    inline CreatePricingRuleRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * rule. </p>
     */
    inline CreatePricingRuleRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


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
    inline CreatePricingRuleRequest& WithBillingEntity(const Aws::String& value) { SetBillingEntity(value); return *this;}

    /**
     * <p> The seller of services provided by Amazon Web Services, their affiliates, or
     * third-party providers selling services via Amazon Web Services Marketplace. </p>
     */
    inline CreatePricingRuleRequest& WithBillingEntity(Aws::String&& value) { SetBillingEntity(std::move(value)); return *this;}

    /**
     * <p> The seller of services provided by Amazon Web Services, their affiliates, or
     * third-party providers selling services via Amazon Web Services Marketplace. </p>
     */
    inline CreatePricingRuleRequest& WithBillingEntity(const char* value) { SetBillingEntity(value); return *this;}


    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline const CreateTieringInput& GetTiering() const{ return m_tiering; }

    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline bool TieringHasBeenSet() const { return m_tieringHasBeenSet; }

    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline void SetTiering(const CreateTieringInput& value) { m_tieringHasBeenSet = true; m_tiering = value; }

    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline void SetTiering(CreateTieringInput&& value) { m_tieringHasBeenSet = true; m_tiering = std::move(value); }

    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline CreatePricingRuleRequest& WithTiering(const CreateTieringInput& value) { SetTiering(value); return *this;}

    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline CreatePricingRuleRequest& WithTiering(CreateTieringInput&& value) { SetTiering(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_billingEntity;
    bool m_billingEntityHasBeenSet = false;

    CreateTieringInput m_tiering;
    bool m_tieringHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
