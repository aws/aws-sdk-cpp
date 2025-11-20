/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/ScanJobSummary.h>
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
namespace Backup {
namespace Model {
class ListScanJobSummariesResult {
 public:
  AWS_BACKUP_API ListScanJobSummariesResult() = default;
  AWS_BACKUP_API ListScanJobSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BACKUP_API ListScanJobSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The summary information.</p>
   */
  inline const Aws::Vector<ScanJobSummary>& GetScanJobSummaries() const { return m_scanJobSummaries; }
  template <typename ScanJobSummariesT = Aws::Vector<ScanJobSummary>>
  void SetScanJobSummaries(ScanJobSummariesT&& value) {
    m_scanJobSummariesHasBeenSet = true;
    m_scanJobSummaries = std::forward<ScanJobSummariesT>(value);
  }
  template <typename ScanJobSummariesT = Aws::Vector<ScanJobSummary>>
  ListScanJobSummariesResult& WithScanJobSummaries(ScanJobSummariesT&& value) {
    SetScanJobSummaries(std::forward<ScanJobSummariesT>(value));
    return *this;
  }
  template <typename ScanJobSummariesT = ScanJobSummary>
  ListScanJobSummariesResult& AddScanJobSummaries(ScanJobSummariesT&& value) {
    m_scanJobSummariesHasBeenSet = true;
    m_scanJobSummaries.emplace_back(std::forward<ScanJobSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The period for the returned results.</p> <ul> <li> <p>
   * <code>ONE_DAY</code>The daily job count for the prior 1 day.</p> </li> <li> <p>
   * <code>SEVEN_DAYS</code>The daily job count for the prior 7 days.</p> </li> <li>
   * <p> <code>FOURTEEN_DAYS</code>The daily job count for the prior 14 days.</p>
   * </li> </ul> <p>Valid Values: <code>'ONE_DAY'</code> | <code>'SEVEN_DAYS'</code>
   * | <code>'FOURTEEN_DAYS'</code> </p>
   */
  inline const Aws::String& GetAggregationPeriod() const { return m_aggregationPeriod; }
  template <typename AggregationPeriodT = Aws::String>
  void SetAggregationPeriod(AggregationPeriodT&& value) {
    m_aggregationPeriodHasBeenSet = true;
    m_aggregationPeriod = std::forward<AggregationPeriodT>(value);
  }
  template <typename AggregationPeriodT = Aws::String>
  ListScanJobSummariesResult& WithAggregationPeriod(AggregationPeriodT&& value) {
    SetAggregationPeriod(std::forward<AggregationPeriodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The next item following a partial list of returned items. For example, if a
   * request is made to return <code>MaxResults</code> number of items,
   * <code>NextToken</code> allows you to return more items in your list starting at
   * the location pointed to by the next token.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListScanJobSummariesResult& WithNextToken(NextTokenT&& value) {
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
  ListScanJobSummariesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ScanJobSummary> m_scanJobSummaries;
  bool m_scanJobSummariesHasBeenSet = false;

  Aws::String m_aggregationPeriod;
  bool m_aggregationPeriodHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
