/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/ContractDetails.h>
#include <aws/core/http/HttpResponse.h>
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
namespace Billing {
namespace Model {
class GetContractInformationResult {
 public:
  AWS_BILLING_API GetContractInformationResult() = default;
  AWS_BILLING_API GetContractInformationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BILLING_API GetContractInformationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The contract details such as term (duration), eligible payer accounts,
   * investment accounts, and legal entities.</p>
   */
  inline const ContractDetails& GetContract() const { return m_contract; }
  template <typename ContractT = ContractDetails>
  void SetContract(ContractT&& value) {
    m_contractHasBeenSet = true;
    m_contract = std::forward<ContractT>(value);
  }
  template <typename ContractT = ContractDetails>
  GetContractInformationResult& WithContract(ContractT&& value) {
    SetContract(std::forward<ContractT>(value));
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
  GetContractInformationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ContractDetails m_contract;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_contractHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
