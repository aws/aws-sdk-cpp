/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/InvestigationRecord.h>
#include <aws/guardduty/model/InvestigationStatus.h>

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
class ListInvestigationRecordsResult {
 public:
  AWS_GUARDDUTY_API ListInvestigationRecordsResult() = default;
  AWS_GUARDDUTY_API ListInvestigationRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GUARDDUTY_API ListInvestigationRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the investigation.</p>
   */
  inline const Aws::String& GetInvestigationId() const { return m_investigationId; }
  template <typename InvestigationIdT = Aws::String>
  void SetInvestigationId(InvestigationIdT&& value) {
    m_investigationIdHasBeenSet = true;
    m_investigationId = std::forward<InvestigationIdT>(value);
  }
  template <typename InvestigationIdT = Aws::String>
  ListInvestigationRecordsResult& WithInvestigationId(InvestigationIdT&& value) {
    SetInvestigationId(std::forward<InvestigationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the investigation. Possible values are
   * <code>RUNNING</code>, <code>COMPLETED</code>, and <code>FAILED</code>. Records
   * are returned only when the status is <code>COMPLETED</code>. If the status is
   * <code>RUNNING</code> or <code>FAILED</code>, the response contains an empty list
   * of records and no <code>NextToken</code>.</p>
   */
  inline InvestigationStatus GetStatus() const { return m_status; }
  inline void SetStatus(InvestigationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListInvestigationRecordsResult& WithStatus(InvestigationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The records for the investigation, in the order that GuardDuty created them,
   * oldest first. This list can contain fewer records than <code>MaxResults</code>,
   * or no records, even when more records are available. To check for more records,
   * use <code>NextToken</code>.</p>
   */
  inline const Aws::Vector<InvestigationRecord>& GetRecords() const { return m_records; }
  template <typename RecordsT = Aws::Vector<InvestigationRecord>>
  void SetRecords(RecordsT&& value) {
    m_recordsHasBeenSet = true;
    m_records = std::forward<RecordsT>(value);
  }
  template <typename RecordsT = Aws::Vector<InvestigationRecord>>
  ListInvestigationRecordsResult& WithRecords(RecordsT&& value) {
    SetRecords(std::forward<RecordsT>(value));
    return *this;
  }
  template <typename RecordsT = InvestigationRecord>
  ListInvestigationRecordsResult& AddRecords(RecordsT&& value) {
    m_recordsHasBeenSet = true;
    m_records.emplace_back(std::forward<RecordsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination parameter to be used on the next list operation to retrieve
   * more items. If this value is absent, there are no more records to retrieve.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListInvestigationRecordsResult& WithNextToken(NextTokenT&& value) {
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
  ListInvestigationRecordsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_investigationId;

  InvestigationStatus m_status{InvestigationStatus::NOT_SET};

  Aws::Vector<InvestigationRecord> m_records;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_investigationIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_recordsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
