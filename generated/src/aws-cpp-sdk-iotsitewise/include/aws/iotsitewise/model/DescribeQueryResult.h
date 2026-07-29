/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/QueryStatistics.h>
#include <aws/iotsitewise/model/QueryStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {
/**
 * <p>Contains the response for the DescribeQuery operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/DescribeQueryResponse">AWS
 * API Reference</a></p>
 */
class DescribeQueryResult {
 public:
  AWS_IOTSITEWISE_API DescribeQueryResult() = default;
  AWS_IOTSITEWISE_API DescribeQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTSITEWISE_API DescribeQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier for the query execution.</p>
   */
  inline const Aws::String& GetQueryId() const { return m_queryId; }
  template <typename QueryIdT = Aws::String>
  void SetQueryId(QueryIdT&& value) {
    m_queryIdHasBeenSet = true;
    m_queryId = std::forward<QueryIdT>(value);
  }
  template <typename QueryIdT = Aws::String>
  DescribeQueryResult& WithQueryId(QueryIdT&& value) {
    SetQueryId(std::forward<QueryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current query status.</p>
   */
  inline QueryStatus GetStatus() const { return m_status; }
  inline void SetStatus(QueryStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeQueryResult& WithStatus(QueryStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the query was submitted, in Unix epoch time.</p>
   */
  inline const Aws::Utils::DateTime& GetSubmittedAt() const { return m_submittedAt; }
  template <typename SubmittedAtT = Aws::Utils::DateTime>
  void SetSubmittedAt(SubmittedAtT&& value) {
    m_submittedAtHasBeenSet = true;
    m_submittedAt = std::forward<SubmittedAtT>(value);
  }
  template <typename SubmittedAtT = Aws::Utils::DateTime>
  DescribeQueryResult& WithSubmittedAt(SubmittedAtT&& value) {
    SetSubmittedAt(std::forward<SubmittedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the query reached a terminal state, in Unix epoch
   * time. This field is present when the query status is COMPLETED, FAILED, or
   * CANCELED.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  void SetCompletedAt(CompletedAtT&& value) {
    m_completedAtHasBeenSet = true;
    m_completedAt = std::forward<CompletedAtT>(value);
  }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  DescribeQueryResult& WithCompletedAt(CompletedAtT&& value) {
    SetCompletedAt(std::forward<CompletedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The query execution statistics. This field is present when the query status
   * is COMPLETED.</p>
   */
  inline const QueryStatistics& GetStatistics() const { return m_statistics; }
  template <typename StatisticsT = QueryStatistics>
  void SetStatistics(StatisticsT&& value) {
    m_statisticsHasBeenSet = true;
    m_statistics = std::forward<StatisticsT>(value);
  }
  template <typename StatisticsT = QueryStatistics>
  DescribeQueryResult& WithStatistics(StatisticsT&& value) {
    SetStatistics(std::forward<StatisticsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable error description. This field is present when the query
   * status is FAILED.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  DescribeQueryResult& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
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
  DescribeQueryResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_queryId;

  QueryStatus m_status{QueryStatus::NOT_SET};

  Aws::Utils::DateTime m_submittedAt{};

  Aws::Utils::DateTime m_completedAt{};

  QueryStatistics m_statistics;

  Aws::String m_errorMessage;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_queryIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_submittedAtHasBeenSet = false;
  bool m_completedAtHasBeenSet = false;
  bool m_statisticsHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
