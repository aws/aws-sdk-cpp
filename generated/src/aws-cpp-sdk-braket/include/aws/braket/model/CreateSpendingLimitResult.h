/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
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
namespace Braket {
namespace Model {
class CreateSpendingLimitResult {
 public:
  AWS_BRAKET_API CreateSpendingLimitResult() = default;
  AWS_BRAKET_API CreateSpendingLimitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BRAKET_API CreateSpendingLimitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the created spending limit.</p>
   */
  inline const Aws::String& GetSpendingLimitArn() const { return m_spendingLimitArn; }
  template <typename SpendingLimitArnT = Aws::String>
  void SetSpendingLimitArn(SpendingLimitArnT&& value) {
    m_spendingLimitArnHasBeenSet = true;
    m_spendingLimitArn = std::forward<SpendingLimitArnT>(value);
  }
  template <typename SpendingLimitArnT = Aws::String>
  CreateSpendingLimitResult& WithSpendingLimitArn(SpendingLimitArnT&& value) {
    SetSpendingLimitArn(std::forward<SpendingLimitArnT>(value));
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
  CreateSpendingLimitResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_spendingLimitArn;
  bool m_spendingLimitArnHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Braket
}  // namespace Aws
