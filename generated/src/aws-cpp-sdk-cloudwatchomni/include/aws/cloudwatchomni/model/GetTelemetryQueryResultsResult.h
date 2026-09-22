/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/QueryStatistics.h>
#include <aws/cloudwatchomni/model/QueryStatus.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {
class GetTelemetryQueryResultsResult {
 public:
  AWS_CLOUDWATCHOMNI_API GetTelemetryQueryResultsResult() = default;
  AWS_CLOUDWATCHOMNI_API GetTelemetryQueryResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_CLOUDWATCHOMNI_API GetTelemetryQueryResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The current execution status of the query.</p>
   */
  inline QueryStatus GetStatus() const { return m_status; }
  inline void SetStatus(QueryStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetTelemetryQueryResultsResult& WithStatus(QueryStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result rows returned by the query.</p>
   */
  inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetRows() const { return m_rows; }
  template <typename RowsT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
  void SetRows(RowsT&& value) {
    m_rowsHasBeenSet = true;
    m_rows = std::forward<RowsT>(value);
  }
  template <typename RowsT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
  GetTelemetryQueryResultsResult& WithRows(RowsT&& value) {
    SetRows(std::forward<RowsT>(value));
    return *this;
  }
  template <typename RowsT = Aws::Map<Aws::String, Aws::String>>
  GetTelemetryQueryResultsResult& AddRows(RowsT&& value) {
    m_rowsHasBeenSet = true;
    m_rows.emplace_back(std::forward<RowsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to retrieve the next page of results, or null if there are no more
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetTelemetryQueryResultsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Statistics about the query execution.</p>
   */
  inline const QueryStatistics& GetStatistics() const { return m_statistics; }
  template <typename StatisticsT = QueryStatistics>
  void SetStatistics(StatisticsT&& value) {
    m_statisticsHasBeenSet = true;
    m_statistics = std::forward<StatisticsT>(value);
  }
  template <typename StatisticsT = QueryStatistics>
  GetTelemetryQueryResultsResult& WithStatistics(StatisticsT&& value) {
    SetStatistics(std::forward<StatisticsT>(value));
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
  GetTelemetryQueryResultsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  QueryStatus m_status{QueryStatus::NOT_SET};

  Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_rows;

  Aws::String m_nextToken;

  QueryStatistics m_statistics;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_rowsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_statisticsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
