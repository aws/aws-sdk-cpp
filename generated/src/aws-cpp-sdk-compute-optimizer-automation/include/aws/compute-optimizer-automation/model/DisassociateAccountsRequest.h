/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomationRequest.h>
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 */
class DisassociateAccountsRequest : public ComputeOptimizerAutomationRequest {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API DisassociateAccountsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DisassociateAccounts"; }

  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::String SerializePayload() const override;

  AWS_COMPUTEOPTIMIZERAUTOMATION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p> The IDs of the member accounts to disassociate. </p>
   */
  inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
  inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
  template <typename AccountIdsT = Aws::Vector<Aws::String>>
  void SetAccountIds(AccountIdsT&& value) {
    m_accountIdsHasBeenSet = true;
    m_accountIds = std::forward<AccountIdsT>(value);
  }
  template <typename AccountIdsT = Aws::Vector<Aws::String>>
  DisassociateAccountsRequest& WithAccountIds(AccountIdsT&& value) {
    SetAccountIds(std::forward<AccountIdsT>(value));
    return *this;
  }
  template <typename AccountIdsT = Aws::String>
  DisassociateAccountsRequest& AddAccountIds(AccountIdsT&& value) {
    m_accountIdsHasBeenSet = true;
    m_accountIds.emplace_back(std::forward<AccountIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A unique identifier to ensure idempotency of the request. </p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  DisassociateAccountsRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_accountIds;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_accountIdsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
