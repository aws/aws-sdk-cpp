/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ComputeOptimizerAutomation {
namespace Model {
class AssociateAccountsResult {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API AssociateAccountsResult() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API AssociateAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API AssociateAccountsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The IDs of the member accounts that were successfully associated. </p>
   */
  inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
  template <typename AccountIdsT = Aws::Vector<Aws::String>>
  void SetAccountIds(AccountIdsT&& value) {
    m_accountIdsHasBeenSet = true;
    m_accountIds = std::forward<AccountIdsT>(value);
  }
  template <typename AccountIdsT = Aws::Vector<Aws::String>>
  AssociateAccountsResult& WithAccountIds(AccountIdsT&& value) {
    SetAccountIds(std::forward<AccountIdsT>(value));
    return *this;
  }
  template <typename AccountIdsT = Aws::String>
  AssociateAccountsResult& AddAccountIds(AccountIdsT&& value) {
    m_accountIdsHasBeenSet = true;
    m_accountIds.emplace_back(std::forward<AccountIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Any errors that occurred during the association process. </p>
   */
  inline const Aws::Vector<Aws::String>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<Aws::String>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<Aws::String>>
  AssociateAccountsResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = Aws::String>
  AssociateAccountsResult& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  AssociateAccountsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_accountIds;
  bool m_accountIdsHasBeenSet = false;

  Aws::Vector<Aws::String> m_errors;
  bool m_errorsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
