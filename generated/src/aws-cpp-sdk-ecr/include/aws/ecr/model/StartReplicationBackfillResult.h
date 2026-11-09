/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/ECR_EXPORTS.h>
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
class StartReplicationBackfillResult {
 public:
  AWS_ECR_API StartReplicationBackfillResult() = default;
  AWS_ECR_API StartReplicationBackfillResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ECR_API StartReplicationBackfillResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the replication backfill that was started. Use this value to
   * describe or stop the backfill.</p>
   */
  inline const Aws::String& GetReplicationBackfillId() const { return m_replicationBackfillId; }
  template <typename ReplicationBackfillIdT = Aws::String>
  void SetReplicationBackfillId(ReplicationBackfillIdT&& value) {
    m_replicationBackfillIdHasBeenSet = true;
    m_replicationBackfillId = std::forward<ReplicationBackfillIdT>(value);
  }
  template <typename ReplicationBackfillIdT = Aws::String>
  StartReplicationBackfillResult& WithReplicationBackfillId(ReplicationBackfillIdT&& value) {
    SetReplicationBackfillId(std::forward<ReplicationBackfillIdT>(value));
    return *this;
  }
  ///@}

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
  StartReplicationBackfillResult& WithRegistryId(RegistryIdT&& value) {
    SetRegistryId(std::forward<RegistryIdT>(value));
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
  StartReplicationBackfillResult& WithDestination(DestinationT&& value) {
    SetDestination(std::forward<DestinationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the replication backfill. A newly started replication
   * backfill is returned with a status of <code>PREPARING</code>.</p>
   */
  inline ReplicationBackfillStatus GetStatus() const { return m_status; }
  inline void SetStatus(ReplicationBackfillStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StartReplicationBackfillResult& WithStatus(ReplicationBackfillStatus value) {
    SetStatus(value);
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
  StartReplicationBackfillResult& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
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
  StartReplicationBackfillResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_replicationBackfillId;

  Aws::String m_registryId;

  ReplicationDestination m_destination;

  ReplicationBackfillStatus m_status{ReplicationBackfillStatus::NOT_SET};

  Aws::Utils::DateTime m_startedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_replicationBackfillIdHasBeenSet = false;
  bool m_registryIdHasBeenSet = false;
  bool m_destinationHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
