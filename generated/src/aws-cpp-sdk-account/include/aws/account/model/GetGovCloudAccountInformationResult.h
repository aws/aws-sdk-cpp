/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account/Account_EXPORTS.h>
#include <aws/account/model/AwsAccountState.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Account {
namespace Model {
class GetGovCloudAccountInformationResult {
 public:
  AWS_ACCOUNT_API GetGovCloudAccountInformationResult() = default;
  AWS_ACCOUNT_API GetGovCloudAccountInformationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ACCOUNT_API GetGovCloudAccountInformationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The account state of the linked GovCloud account.</p>
   */
  inline AwsAccountState GetAccountState() const { return m_accountState; }
  inline void SetAccountState(AwsAccountState value) {
    m_accountStateHasBeenSet = true;
    m_accountState = value;
  }
  inline GetGovCloudAccountInformationResult& WithAccountState(AwsAccountState value) {
    SetAccountState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The 12-digit account ID number of the linked GovCloud account.</p>
   */
  inline const Aws::String& GetGovCloudAccountId() const { return m_govCloudAccountId; }
  template <typename GovCloudAccountIdT = Aws::String>
  void SetGovCloudAccountId(GovCloudAccountIdT&& value) {
    m_govCloudAccountIdHasBeenSet = true;
    m_govCloudAccountId = std::forward<GovCloudAccountIdT>(value);
  }
  template <typename GovCloudAccountIdT = Aws::String>
  GetGovCloudAccountInformationResult& WithGovCloudAccountId(GovCloudAccountIdT&& value) {
    SetGovCloudAccountId(std::forward<GovCloudAccountIdT>(value));
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
  GetGovCloudAccountInformationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  AwsAccountState m_accountState{AwsAccountState::NOT_SET};

  Aws::String m_govCloudAccountId;

  Aws::String m_requestId;
  bool m_accountStateHasBeenSet = false;
  bool m_govCloudAccountIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Account
}  // namespace Aws
