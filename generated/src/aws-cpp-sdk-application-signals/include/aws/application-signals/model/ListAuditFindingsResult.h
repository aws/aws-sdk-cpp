/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/AuditFinding.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The start of the time period that the returned audit findings apply to. When
   * used in a raw HTTP Query API, it is formatted as epoch time in seconds. For
   * example, <code>1698778057</code> </p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  ListAuditFindingsResult& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end of the time period that the returned audit findings apply to. When
   * used in a raw HTTP Query API, it is formatted as epoch time in seconds. For
   * example, <code>1698778057</code> </p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  ListAuditFindingsResult& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

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
  Aws::Utils::DateTime m_startTime{};
  bool m_startTimeHasBeenSet = false;

  Aws::Utils::DateTime m_endTime{};
  bool m_endTimeHasBeenSet = false;

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
