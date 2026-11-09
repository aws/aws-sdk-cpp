/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/BillingRequest.h>
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Billing {
namespace Model {

/**
 */
class DisassociateContractRequest : public BillingRequest {
 public:
  AWS_BILLING_API DisassociateContractRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DisassociateContract"; }

  AWS_BILLING_API Aws::String SerializePayload() const override;

  AWS_BILLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the contract to disassociate from your
   * account.</p>
   */
  inline const Aws::String& GetContractArn() const { return m_contractArn; }
  inline bool ContractArnHasBeenSet() const { return m_contractArnHasBeenSet; }
  template <typename ContractArnT = Aws::String>
  void SetContractArn(ContractArnT&& value) {
    m_contractArnHasBeenSet = true;
    m_contractArn = std::forward<ContractArnT>(value);
  }
  template <typename ContractArnT = Aws::String>
  DisassociateContractRequest& WithContractArn(ContractArnT&& value) {
    SetContractArn(std::forward<ContractArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_contractArn;
  bool m_contractArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
