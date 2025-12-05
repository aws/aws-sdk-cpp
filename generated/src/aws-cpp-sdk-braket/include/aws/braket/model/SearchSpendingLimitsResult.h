/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/SpendingLimitSummary.h>
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
namespace Braket {
namespace Model {
class SearchSpendingLimitsResult {
 public:
  AWS_BRAKET_API SearchSpendingLimitsResult() = default;
  AWS_BRAKET_API SearchSpendingLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BRAKET_API SearchSpendingLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of spending limit summaries that match the specified filters.</p>
   */
  inline const Aws::Vector<SpendingLimitSummary>& GetSpendingLimits() const { return m_spendingLimits; }
  template <typename SpendingLimitsT = Aws::Vector<SpendingLimitSummary>>
  void SetSpendingLimits(SpendingLimitsT&& value) {
    m_spendingLimitsHasBeenSet = true;
    m_spendingLimits = std::forward<SpendingLimitsT>(value);
  }
  template <typename SpendingLimitsT = Aws::Vector<SpendingLimitSummary>>
  SearchSpendingLimitsResult& WithSpendingLimits(SpendingLimitsT&& value) {
    SetSpendingLimits(std::forward<SpendingLimitsT>(value));
    return *this;
  }
  template <typename SpendingLimitsT = SpendingLimitSummary>
  SearchSpendingLimitsResult& AddSpendingLimits(SpendingLimitsT&& value) {
    m_spendingLimitsHasBeenSet = true;
    m_spendingLimits.emplace_back(std::forward<SpendingLimitsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to retrieve the next page of results. This value is null when there
   * are no more results to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  SearchSpendingLimitsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  SearchSpendingLimitsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<SpendingLimitSummary> m_spendingLimits;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_spendingLimitsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Braket
}  // namespace Aws
