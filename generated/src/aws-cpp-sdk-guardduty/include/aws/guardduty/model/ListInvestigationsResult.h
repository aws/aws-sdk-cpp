/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/InvestigationSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {
class ListInvestigationsResult {
 public:
  AWS_GUARDDUTY_API ListInvestigationsResult() = default;
  AWS_GUARDDUTY_API ListInvestigationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GUARDDUTY_API ListInvestigationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of investigation summaries associated with the specified detector.</p>
   */
  inline const Aws::Vector<InvestigationSummary>& GetInvestigations() const { return m_investigations; }
  template <typename InvestigationsT = Aws::Vector<InvestigationSummary>>
  void SetInvestigations(InvestigationsT&& value) {
    m_investigationsHasBeenSet = true;
    m_investigations = std::forward<InvestigationsT>(value);
  }
  template <typename InvestigationsT = Aws::Vector<InvestigationSummary>>
  ListInvestigationsResult& WithInvestigations(InvestigationsT&& value) {
    SetInvestigations(std::forward<InvestigationsT>(value));
    return *this;
  }
  template <typename InvestigationsT = InvestigationSummary>
  ListInvestigationsResult& AddInvestigations(InvestigationsT&& value) {
    m_investigationsHasBeenSet = true;
    m_investigations.emplace_back(std::forward<InvestigationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination parameter to be used on the next list operation to retrieve
   * more items.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListInvestigationsResult& WithNextToken(NextTokenT&& value) {
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
  ListInvestigationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<InvestigationSummary> m_investigations;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_investigationsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
