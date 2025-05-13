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
    AWS_BILLINGCONDUCTOR_API CreatePricingRuleRequest() = default;

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
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreatePricingRuleRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The pricing rule name. The names must be unique to each pricing rule. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreatePricingRuleRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The pricing rule description. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreatePricingRuleRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The scope of pricing rule that indicates if it's globally applicable, or
     * it's service-specific. </p>
     */
    inline PricingRuleScope GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(PricingRuleScope value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline CreatePricingRuleRequest& WithScope(PricingRuleScope value) { SetScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of pricing rule. </p>
     */
    inline PricingRuleType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(PricingRuleType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreatePricingRuleRequest& WithType(PricingRuleType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A percentage modifier that's applied on the public pricing rates. </p>
     */
    inline double GetModifierPercentage() const { return m_modifierPercentage; }
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
    inline const Aws::String& GetService() const { return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    template<typename ServiceT = Aws::String>
    void SetService(ServiceT&& value) { m_serviceHasBeenSet = true; m_service = std::forward<ServiceT>(value); }
    template<typename ServiceT = Aws::String>
    CreatePricingRuleRequest& WithService(ServiceT&& value) { SetService(std::forward<ServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A map that contains tag keys and tag values that are attached to a pricing
     * rule. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreatePricingRuleRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreatePricingRuleRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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
    CreatePricingRuleRequest& WithBillingEntity(BillingEntityT&& value) { SetBillingEntity(std::forward<BillingEntityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The set of tiering configurations for the pricing rule. </p>
     */
    inline const CreateTieringInput& GetTiering() const { return m_tiering; }
    inline bool TieringHasBeenSet() const { return m_tieringHasBeenSet; }
    template<typename TieringT = CreateTieringInput>
    void SetTiering(TieringT&& value) { m_tieringHasBeenSet = true; m_tiering = std::forward<TieringT>(value); }
    template<typename TieringT = CreateTieringInput>
    CreatePricingRuleRequest& WithTiering(TieringT&& value) { SetTiering(std::forward<TieringT>(value)); return *this;}
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
    CreatePricingRuleRequest& WithUsageType(UsageTypeT&& value) { SetUsageType(std::forward<UsageTypeT>(value)); return *this;}
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
    CreatePricingRuleRequest& WithOperation(OperationT&& value) { SetOperation(std::forward<OperationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

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
