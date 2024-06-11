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


    ///@{
    /**
     * <p> The token that's needed to support idempotency. Idempotency isn't currently
     * supported, but will be implemented in a future update. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreatePricingRuleRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreatePricingRuleRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreatePricingRuleRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The pricing rule name. The names must be unique to each pricing rule. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreatePricingRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreatePricingRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreatePricingRuleRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The pricing rule description. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreatePricingRuleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreatePricingRuleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreatePricingRuleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The scope of pricing rule that indicates if it's globally applicable, or
     * it's service-specific. </p>
     */
    inline const PricingRuleScope& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const PricingRuleScope& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(PricingRuleScope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline CreatePricingRuleRequest& WithScope(const PricingRuleScope& value) { SetScope(value); return *this;}
    inline CreatePricingRuleRequest& WithScope(PricingRuleScope&& value) { SetScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of pricing rule. </p>
     */
    inline const PricingRuleType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const PricingRuleType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(PricingRuleType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreatePricingRuleRequest& WithType(const PricingRuleType& value) { SetType(value); return *this;}
    inline CreatePricingRuleRequest& WithType(PricingRuleType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A percentage modifier that's applied on the public pricing rates. </p>
     */
    inline double GetModifierPercentage() const{ return m_modifierPercentage; }
    inline bool ModifierPercentageHasBeenSet() const { return m_modifierPercentageHasBeenSet; }
    inline void SetModifierPercentage(double value) { m_modifierPercentageHasBeenSet = true; m_modifierPercentage = value; }
    inline CreatePricingRuleRequest& WithModifierPercentage(double value) { SetModifierPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the <code>Scope</code> attribute is set to <code>SERVICE</code> or
     * <code>SKU</code>, the attribute indicates which service the
     * <code>PricingRule</code> is applicable for. </p>
     */
    inline const Aws::String& GetService() const{ return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }
    inline CreatePricingRuleRequest& WithService(const Aws::String& value) { SetService(value); return *this;}
    inline CreatePricingRuleRequest& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}
    inline CreatePricingRuleRequest& WithService(const char* value) { SetService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * rule. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreatePricingRuleRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreatePricingRuleRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreatePricingRuleRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreatePricingRuleRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreatePricingRuleRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreatePricingRuleRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreatePricingRuleRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreatePricingRuleRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreatePricingRuleRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The seller of services provided by Amazon Web Services, their affiliates, or
     * third-party providers selling services via Amazon Web Services Marketplace. </p>
     */
    inline const Aws::String& GetBillingEntity() const{ return m_billingEntity; }
    inline bool BillingEntityHasBeenSet() const { return m_billingEntityHasBeenSet; }
    inline void SetBillingEntity(const Aws::String& value) { m_billingEntityHasBeenSet = true; m_billingEntity = value; }
    inline void SetBillingEntity(Aws::String&& value) { m_billingEntityHasBeenSet = true; m_billingEntity = std::move(value); }
    inline void SetBillingEntity(const char* value) { m_billingEntityHasBeenSet = true; m_billingEntity.assign(value); }
    inline CreatePricingRuleRequest& WithBillingEntity(const Aws::String& value) { SetBillingEntity(value); return *this;}
    inline CreatePricingRuleRequest& WithBillingEntity(Aws::String&& value) { SetBillingEntity(std::move(value)); return *this;}
    inline CreatePricingRuleRequest& WithBillingEntity(const char* value) { SetBillingEntity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline const CreateTieringInput& GetTiering() const{ return m_tiering; }
    inline bool TieringHasBeenSet() const { return m_tieringHasBeenSet; }
    inline void SetTiering(const CreateTieringInput& value) { m_tieringHasBeenSet = true; m_tiering = value; }
    inline void SetTiering(CreateTieringInput&& value) { m_tieringHasBeenSet = true; m_tiering = std::move(value); }
    inline CreatePricingRuleRequest& WithTiering(const CreateTieringInput& value) { SetTiering(value); return *this;}
    inline CreatePricingRuleRequest& WithTiering(CreateTieringInput&& value) { SetTiering(std::move(value)); return *this;}
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
    inline const Aws::String& GetUsageType() const{ return m_usageType; }
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
    inline void SetUsageType(const Aws::String& value) { m_usageTypeHasBeenSet = true; m_usageType = value; }
    inline void SetUsageType(Aws::String&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::move(value); }
    inline void SetUsageType(const char* value) { m_usageTypeHasBeenSet = true; m_usageType.assign(value); }
    inline CreatePricingRuleRequest& WithUsageType(const Aws::String& value) { SetUsageType(value); return *this;}
    inline CreatePricingRuleRequest& WithUsageType(Aws::String&& value) { SetUsageType(std::move(value)); return *this;}
    inline CreatePricingRuleRequest& WithUsageType(const char* value) { SetUsageType(value); return *this;}
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
    inline const Aws::String& GetOperation() const{ return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(const Aws::String& value) { m_operationHasBeenSet = true; m_operation = value; }
    inline void SetOperation(Aws::String&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }
    inline void SetOperation(const char* value) { m_operationHasBeenSet = true; m_operation.assign(value); }
    inline CreatePricingRuleRequest& WithOperation(const Aws::String& value) { SetOperation(value); return *this;}
    inline CreatePricingRuleRequest& WithOperation(Aws::String&& value) { SetOperation(std::move(value)); return *this;}
    inline CreatePricingRuleRequest& WithOperation(const char* value) { SetOperation(value); return *this;}
    ///@}
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

    Aws::String m_usageType;
    bool m_usageTypeHasBeenSet = false;

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
