/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductorRequest.h>
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/model/AutoTransferBillingGroupCreationPreference.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BillingConductor {
namespace Model {

/**
 */
class UpdateBillingTransferPreferenceRequest : public BillingConductorRequest {
 public:
  AWS_BILLINGCONDUCTOR_API UpdateBillingTransferPreferenceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateBillingTransferPreference"; }

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
  UpdateBillingTransferPreferenceRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the billing transfer whose preference you
   * want to set.</p>
   */
  inline const Aws::String& GetResponsibilityTransferArn() const { return m_responsibilityTransferArn; }
  inline bool ResponsibilityTransferArnHasBeenSet() const { return m_responsibilityTransferArnHasBeenSet; }
  template <typename ResponsibilityTransferArnT = Aws::String>
  void SetResponsibilityTransferArn(ResponsibilityTransferArnT&& value) {
    m_responsibilityTransferArnHasBeenSet = true;
    m_responsibilityTransferArn = std::forward<ResponsibilityTransferArnT>(value);
  }
  template <typename ResponsibilityTransferArnT = Aws::String>
  UpdateBillingTransferPreferenceRequest& WithResponsibilityTransferArn(ResponsibilityTransferArnT&& value) {
    SetResponsibilityTransferArn(std::forward<ResponsibilityTransferArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The auto billing group creation preference to set for the billing
   * transfer.</p>
   */
  inline const AutoTransferBillingGroupCreationPreference& GetAutoBillingTransferBillingGroupCreation() const {
    return m_autoBillingTransferBillingGroupCreation;
  }
  inline bool AutoBillingTransferBillingGroupCreationHasBeenSet() const { return m_autoBillingTransferBillingGroupCreationHasBeenSet; }
  template <typename AutoBillingTransferBillingGroupCreationT = AutoTransferBillingGroupCreationPreference>
  void SetAutoBillingTransferBillingGroupCreation(AutoBillingTransferBillingGroupCreationT&& value) {
    m_autoBillingTransferBillingGroupCreationHasBeenSet = true;
    m_autoBillingTransferBillingGroupCreation = std::forward<AutoBillingTransferBillingGroupCreationT>(value);
  }
  template <typename AutoBillingTransferBillingGroupCreationT = AutoTransferBillingGroupCreationPreference>
  UpdateBillingTransferPreferenceRequest& WithAutoBillingTransferBillingGroupCreation(AutoBillingTransferBillingGroupCreationT&& value) {
    SetAutoBillingTransferBillingGroupCreation(std::forward<AutoBillingTransferBillingGroupCreationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_responsibilityTransferArn;

  AutoTransferBillingGroupCreationPreference m_autoBillingTransferBillingGroupCreation;
  bool m_clientTokenHasBeenSet = true;
  bool m_responsibilityTransferArnHasBeenSet = false;
  bool m_autoBillingTransferBillingGroupCreationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BillingConductor
}  // namespace Aws
