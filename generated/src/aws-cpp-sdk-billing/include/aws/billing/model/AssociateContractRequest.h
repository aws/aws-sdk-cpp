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
class AssociateContractRequest : public BillingRequest {
 public:
  AWS_BILLING_API AssociateContractRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociateContract"; }

  AWS_BILLING_API Aws::String SerializePayload() const override;

  AWS_BILLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the contract to associate with your
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
  AssociateContractRequest& WithContractArn(ContractArnT&& value) {
    SetContractArn(std::forward<ContractArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The contract ID from the contract document. It can be found in the top right
   * corner of your contract's pages. This value confirms that you have access to the
   * contract you are associating.</p>
   */
  inline const Aws::String& GetContractDocumentId() const { return m_contractDocumentId; }
  inline bool ContractDocumentIdHasBeenSet() const { return m_contractDocumentIdHasBeenSet; }
  template <typename ContractDocumentIdT = Aws::String>
  void SetContractDocumentId(ContractDocumentIdT&& value) {
    m_contractDocumentIdHasBeenSet = true;
    m_contractDocumentId = std::forward<ContractDocumentIdT>(value);
  }
  template <typename ContractDocumentIdT = Aws::String>
  AssociateContractRequest& WithContractDocumentId(ContractDocumentIdT&& value) {
    SetContractDocumentId(std::forward<ContractDocumentIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_contractArn;

  Aws::String m_contractDocumentId;
  bool m_contractArnHasBeenSet = false;
  bool m_contractDocumentIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
