/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/AuditFinding.h>
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
namespace ApplicationSignals {
namespace Model {
class ListAuditFindingsResult {
 public:
  AWS_APPLICATIONSIGNALS_API ListAuditFindingsResult() = default;
  AWS_APPLICATIONSIGNALS_API ListAuditFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_APPLICATIONSIGNALS_API ListAuditFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of structures, where each structure contains information about one
   * audit finding, including the auditor results, severity, and associated metric
   * and dependency graphs.</p>
   */
  inline const Aws::Vector<AuditFinding>& GetAuditFindings() const { return m_auditFindings; }
  template <typename AuditFindingsT = Aws::Vector<AuditFinding>>
  void SetAuditFindings(AuditFindingsT&& value) {
    m_auditFindingsHasBeenSet = true;
    m_auditFindings = std::forward<AuditFindingsT>(value);
  }
  template <typename AuditFindingsT = Aws::Vector<AuditFinding>>
  ListAuditFindingsResult& WithAuditFindings(AuditFindingsT&& value) {
    SetAuditFindings(std::forward<AuditFindingsT>(value));
    return *this;
  }
  template <typename AuditFindingsT = AuditFinding>
  ListAuditFindingsResult& AddAuditFindings(AuditFindingsT&& value) {
    m_auditFindingsHasBeenSet = true;
    m_auditFindings.emplace_back(std::forward<AuditFindingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Include this value in your next use of this API to get the next set of audit
   * findings.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAuditFindingsResult& WithNextToken(NextTokenT&& value) {
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
  ListAuditFindingsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AuditFinding> m_auditFindings;
  bool m_auditFindingsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
