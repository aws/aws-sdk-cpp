/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductorRequest.h>
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/model/ComputationRuleEnum.h>
#include <aws/billingconductor/model/CustomLineItemBillingPeriodRange.h>
#include <aws/billingconductor/model/CustomLineItemChargeDetails.h>
#include <aws/billingconductor/model/PresentationObject.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BillingConductor {
namespace Model {

/**
 */
class CreateCustomLineItemRequest : public BillingConductorRequest {
 public:
  AWS_BILLINGCONDUCTOR_API CreateCustomLineItemRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateCustomLineItem"; }

  AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;

  AWS_BILLINGCONDUCTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you specify to ensure idempotency of
   * the request. Idempotency ensures that an API request completes no more than one
   * time. With an idempotent request, if the original request completes
   * successfully, any subsequent retries complete successfully without performing
   * any further actions.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateCustomLineItemRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The name of the custom line item. </p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateCustomLineItemRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The description of the custom line item. This is shown on the Bills page in
   * association with the charge value. </p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateCustomLineItemRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) that references the billing group where the
   * custom line item applies to. </p>
   */
  inline const Aws::String& GetBillingGroupArn() const { return m_billingGroupArn; }
  inline bool BillingGroupArnHasBeenSet() const { return m_billingGroupArnHasBeenSet; }
  template <typename BillingGroupArnT = Aws::String>
  void SetBillingGroupArn(BillingGroupArnT&& value) {
    m_billingGroupArnHasBeenSet = true;
    m_billingGroupArn = std::forward<BillingGroupArnT>(value);
  }
  template <typename BillingGroupArnT = Aws::String>
  CreateCustomLineItemRequest& WithBillingGroupArn(BillingGroupArnT&& value) {
    SetBillingGroupArn(std::forward<BillingGroupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A time range for which the custom line item is effective. </p>
   */
  inline const CustomLineItemBillingPeriodRange& GetBillingPeriodRange() const { return m_billingPeriodRange; }
  inline bool BillingPeriodRangeHasBeenSet() const { return m_billingPeriodRangeHasBeenSet; }
  template <typename BillingPeriodRangeT = CustomLineItemBillingPeriodRange>
  void SetBillingPeriodRange(BillingPeriodRangeT&& value) {
    m_billingPeriodRangeHasBeenSet = true;
    m_billingPeriodRange = std::forward<BillingPeriodRangeT>(value);
  }
  template <typename BillingPeriodRangeT = CustomLineItemBillingPeriodRange>
  CreateCustomLineItemRequest& WithBillingPeriodRange(BillingPeriodRangeT&& value) {
    SetBillingPeriodRange(std::forward<BillingPeriodRangeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A map that contains tag keys and tag values that are attached to a custom
   * line item. </p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateCustomLineItemRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateCustomLineItemRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A <code>CustomLineItemChargeDetails</code> that describes the charge details
   * for a custom line item. </p>
   */
  inline const CustomLineItemChargeDetails& GetChargeDetails() const { return m_chargeDetails; }
  inline bool ChargeDetailsHasBeenSet() const { return m_chargeDetailsHasBeenSet; }
  template <typename ChargeDetailsT = CustomLineItemChargeDetails>
  void SetChargeDetails(ChargeDetailsT&& value) {
    m_chargeDetailsHasBeenSet = true;
    m_chargeDetails = std::forward<ChargeDetailsT>(value);
  }
  template <typename ChargeDetailsT = CustomLineItemChargeDetails>
  CreateCustomLineItemRequest& WithChargeDetails(ChargeDetailsT&& value) {
    SetChargeDetails(std::forward<ChargeDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account in which this custom line item will be
   * applied to.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  CreateCustomLineItemRequest& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Specifies how the custom line item charges are computed. </p>
   */
  inline ComputationRuleEnum GetComputationRule() const { return m_computationRule; }
  inline bool ComputationRuleHasBeenSet() const { return m_computationRuleHasBeenSet; }
  inline void SetComputationRule(ComputationRuleEnum value) {
    m_computationRuleHasBeenSet = true;
    m_computationRule = value;
  }
  inline CreateCustomLineItemRequest& WithComputationRule(ComputationRuleEnum value) {
    SetComputationRule(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Details controlling how the custom line item charges are presented in the
   * bill. Contains specifications for which service the charges will be shown under.
   * </p>
   */
  inline const PresentationObject& GetPresentationDetails() const { return m_presentationDetails; }
  inline bool PresentationDetailsHasBeenSet() const { return m_presentationDetailsHasBeenSet; }
  template <typename PresentationDetailsT = PresentationObject>
  void SetPresentationDetails(PresentationDetailsT&& value) {
    m_presentationDetailsHasBeenSet = true;
    m_presentationDetails = std::forward<PresentationDetailsT>(value);
  }
  template <typename PresentationDetailsT = PresentationObject>
  CreateCustomLineItemRequest& WithPresentationDetails(PresentationDetailsT&& value) {
    SetPresentationDetails(std::forward<PresentationDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  Aws::String m_billingGroupArn;
  bool m_billingGroupArnHasBeenSet = false;

  CustomLineItemBillingPeriodRange m_billingPeriodRange;
  bool m_billingPeriodRangeHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;

  CustomLineItemChargeDetails m_chargeDetails;
  bool m_chargeDetailsHasBeenSet = false;

  Aws::String m_accountId;
  bool m_accountIdHasBeenSet = false;

  ComputationRuleEnum m_computationRule{ComputationRuleEnum::NOT_SET};
  bool m_computationRuleHasBeenSet = false;

  PresentationObject m_presentationDetails;
  bool m_presentationDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BillingConductor
}  // namespace Aws
