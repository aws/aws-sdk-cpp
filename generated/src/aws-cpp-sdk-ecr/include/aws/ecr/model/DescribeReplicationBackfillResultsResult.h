/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/ReplicationBackfillProgress.h>
#include <aws/ecr/model/ReplicationBackfillResult.h>
#include <aws/ecr/model/ReplicationBackfillStatus.h>
#include <aws/ecr/model/ReplicationDestination.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ECR {
namespace Model {
class DescribeReplicationBackfillResultsResult {
 public:
  AWS_ECR_API DescribeReplicationBackfillResultsResult() = default;
  AWS_ECR_API DescribeReplicationBackfillResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ECR_API DescribeReplicationBackfillResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The registry ID associated with the request.</p>
   */
  inline const Aws::String& GetRegistryId() const { return m_registryId; }
  template <typename RegistryIdT = Aws::String>
  void SetRegistryId(RegistryIdT&& value) {
    m_registryIdHasBeenSet = true;
    m_registryId = std::forward<RegistryIdT>(value);
  }
  template <typename RegistryIdT = Aws::String>
  DescribeReplicationBackfillResultsResult& WithRegistryId(RegistryIdT&& value) {
    SetRegistryId(std::forward<RegistryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the replication backfill.</p>
   */
  inline const Aws::String& GetReplicationBackfillId() const { return m_replicationBackfillId; }
  template <typename ReplicationBackfillIdT = Aws::String>
  void SetReplicationBackfillId(ReplicationBackfillIdT&& value) {
    m_replicationBackfillIdHasBeenSet = true;
    m_replicationBackfillId = std::forward<ReplicationBackfillIdT>(value);
  }
  template <typename ReplicationBackfillIdT = Aws::String>
  DescribeReplicationBackfillResultsResult& WithReplicationBackfillId(ReplicationBackfillIdT&& value) {
    SetReplicationBackfillId(std::forward<ReplicationBackfillIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination Region and registry to which the images are replicated.</p>
   */
  inline const ReplicationDestination& GetDestination() const { return m_destination; }
  template <typename DestinationT = ReplicationDestination>
  void SetDestination(DestinationT&& value) {
    m_destinationHasBeenSet = true;
    m_destination = std::forward<DestinationT>(value);
  }
  template <typename DestinationT = ReplicationDestination>
  DescribeReplicationBackfillResultsResult& WithDestination(DestinationT&& value) {
    SetDestination(std::forward<DestinationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the replication backfill.</p>
   */
  inline ReplicationBackfillStatus GetStatus() const { return m_status; }
  inline void SetStatus(ReplicationBackfillStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeReplicationBackfillResultsResult& WithStatus(ReplicationBackfillStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The failure code for a replication backfill that has failed.</p>
   */
  inline const Aws::String& GetFailureCode() const { return m_failureCode; }
  template <typename FailureCodeT = Aws::String>
  void SetFailureCode(FailureCodeT&& value) {
    m_failureCodeHasBeenSet = true;
    m_failureCode = std::forward<FailureCodeT>(value);
  }
  template <typename FailureCodeT = Aws::String>
  DescribeReplicationBackfillResultsResult& WithFailureCode(FailureCodeT&& value) {
    SetFailureCode(std::forward<FailureCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The progress of the replication backfill, including the total, completed, and
   * failed replication counts. This value is <code>null</code> until the replication
   * backfill finishes preparing the set of images to replicate. It is therefore
   * <code>null</code> while the replication backfill is <code>PREPARING</code>, and
   * remains <code>null</code> if the replication backfill is stopped before
   * preparation completes.</p>
   */
  inline const ReplicationBackfillProgress& GetProgress() const { return m_progress; }
  template <typename ProgressT = ReplicationBackfillProgress>
  void SetProgress(ProgressT&& value) {
    m_progressHasBeenSet = true;
    m_progress = std::forward<ProgressT>(value);
  }
  template <typename ProgressT = ReplicationBackfillProgress>
  DescribeReplicationBackfillResultsResult& WithProgress(ProgressT&& value) {
    SetProgress(std::forward<ProgressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The per-image results for the replication backfill. Results are available
   * only after the replication backfill reaches a terminal status.</p>
   */
  inline const Aws::Vector<ReplicationBackfillResult>& GetResults() const { return m_results; }
  template <typename ResultsT = Aws::Vector<ReplicationBackfillResult>>
  void SetResults(ResultsT&& value) {
    m_resultsHasBeenSet = true;
    m_results = std::forward<ResultsT>(value);
  }
  template <typename ResultsT = Aws::Vector<ReplicationBackfillResult>>
  DescribeReplicationBackfillResultsResult& WithResults(ResultsT&& value) {
    SetResults(std::forward<ResultsT>(value));
    return *this;
  }
  template <typename ResultsT = ReplicationBackfillResult>
  DescribeReplicationBackfillResultsResult& AddResults(ResultsT&& value) {
    m_resultsHasBeenSet = true;
    m_results.emplace_back(std::forward<ResultsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time, in JavaScript date format, when the replication backfill
   * was started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  DescribeReplicationBackfillResultsResult& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time, in JavaScript date format, when the replication backfill
   * ended. This value is <code>null</code> while the replication backfill is still
   * in progress.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  DescribeReplicationBackfillResultsResult& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>nextToken</code> value to include in a future
   * <code>DescribeReplicationBackfillResults</code> request. When the results of a
   * <code>DescribeReplicationBackfillResults</code> request exceed
   * <code>maxResults</code>, this value can be used to retrieve the next page of
   * results. This value is <code>null</code> when there are no more results to
   * return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeReplicationBackfillResultsResult& WithNextToken(NextTokenT&& value) {
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
  DescribeReplicationBackfillResultsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_registryId;

  Aws::String m_replicationBackfillId;

  ReplicationDestination m_destination;

  ReplicationBackfillStatus m_status{ReplicationBackfillStatus::NOT_SET};

  Aws::String m_failureCode;

  ReplicationBackfillProgress m_progress;

  Aws::Vector<ReplicationBackfillResult> m_results;

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_endedAt{};

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_registryIdHasBeenSet = false;
  bool m_replicationBackfillIdHasBeenSet = false;
  bool m_destinationHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_failureCodeHasBeenSet = false;
  bool m_progressHasBeenSet = false;
  bool m_resultsHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
