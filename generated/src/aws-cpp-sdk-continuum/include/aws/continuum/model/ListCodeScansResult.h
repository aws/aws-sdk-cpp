/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/CodeScanSummary.h>
#include <aws/core/http/HttpResponse.h>
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
namespace Continuum {
namespace Model {
class ListCodeScansResult {
 public:
  AWS_CONTINUUM_API ListCodeScansResult() = default;
  AWS_CONTINUUM_API ListCodeScansResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONTINUUM_API ListCodeScansResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Customer-visible scans ordered by scanRunId descending.</p>
   */
  inline const Aws::Vector<CodeScanSummary>& GetScans() const { return m_scans; }
  template <typename ScansT = Aws::Vector<CodeScanSummary>>
  void SetScans(ScansT&& value) {
    m_scansHasBeenSet = true;
    m_scans = std::forward<ScansT>(value);
  }
  template <typename ScansT = Aws::Vector<CodeScanSummary>>
  ListCodeScansResult& WithScans(ScansT&& value) {
    SetScans(std::forward<ScansT>(value));
    return *this;
  }
  template <typename ScansT = CodeScanSummary>
  ListCodeScansResult& AddScans(ScansT&& value) {
    m_scansHasBeenSet = true;
    m_scans.emplace_back(std::forward<ScansT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token for the next page, if present.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListCodeScansResult& WithNextToken(NextTokenT&& value) {
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
  ListCodeScansResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<CodeScanSummary> m_scans;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_scansHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
