/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ApproximateDriftedResourceCount.h>
#include <aws/connect/model/ReplicationFinding.h>
#include <aws/connect/model/ResourceReplicationStatus.h>
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
namespace Connect {
namespace Model {
class ListReplicationFindingsResult {
 public:
  AWS_CONNECT_API ListReplicationFindingsResult() = default;
  AWS_CONNECT_API ListReplicationFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API ListReplicationFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of replication findings for the requested resource type. Only findings
   * that require your action are returned, so this list can be empty even when a
   * drift count is nonzero. Results are paginated.</p>
   */
  inline const Aws::Vector<ReplicationFinding>& GetReplicationFindingsList() const { return m_replicationFindingsList; }
  template <typename ReplicationFindingsListT = Aws::Vector<ReplicationFinding>>
  void SetReplicationFindingsList(ReplicationFindingsListT&& value) {
    m_replicationFindingsListHasBeenSet = true;
    m_replicationFindingsList = std::forward<ReplicationFindingsListT>(value);
  }
  template <typename ReplicationFindingsListT = Aws::Vector<ReplicationFinding>>
  ListReplicationFindingsResult& WithReplicationFindingsList(ReplicationFindingsListT&& value) {
    SetReplicationFindingsList(std::forward<ReplicationFindingsListT>(value));
    return *this;
  }
  template <typename ReplicationFindingsListT = ReplicationFinding>
  ListReplicationFindingsResult& AddReplicationFindingsList(ReplicationFindingsListT&& value) {
    m_replicationFindingsListHasBeenSet = true;
    m_replicationFindingsList.emplace_back(std::forward<ReplicationFindingsListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The approximate number of resources of the requested type that are not yet in
   * sync, reported per Amazon Web Services Region. This count is independent of
   * <code>ReplicationFindingsList</code> and can be higher than the number of
   * findings returned. It is eventually consistent and can lag the current state of
   * the instance. Each entry is the <code>ApproximateDriftedResourceCount</code> for
   * one Region; a Region appears only when its count has been computed.</p>
   */
  inline const Aws::Vector<ApproximateDriftedResourceCount>& GetApproximateDriftedResourceCounts() const {
    return m_approximateDriftedResourceCounts;
  }
  template <typename ApproximateDriftedResourceCountsT = Aws::Vector<ApproximateDriftedResourceCount>>
  void SetApproximateDriftedResourceCounts(ApproximateDriftedResourceCountsT&& value) {
    m_approximateDriftedResourceCountsHasBeenSet = true;
    m_approximateDriftedResourceCounts = std::forward<ApproximateDriftedResourceCountsT>(value);
  }
  template <typename ApproximateDriftedResourceCountsT = Aws::Vector<ApproximateDriftedResourceCount>>
  ListReplicationFindingsResult& WithApproximateDriftedResourceCounts(ApproximateDriftedResourceCountsT&& value) {
    SetApproximateDriftedResourceCounts(std::forward<ApproximateDriftedResourceCountsT>(value));
    return *this;
  }
  template <typename ApproximateDriftedResourceCountsT = ApproximateDriftedResourceCount>
  ListReplicationFindingsResult& AddApproximateDriftedResourceCounts(ApproximateDriftedResourceCountsT&& value) {
    m_approximateDriftedResourceCountsHasBeenSet = true;
    m_approximateDriftedResourceCounts.emplace_back(std::forward<ApproximateDriftedResourceCountsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If there are additional results, this is the token for retrieving the next
   * page of <code>ReplicationFindingsList</code>.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListReplicationFindingsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The replication status of the requested resource type in each Amazon Web
   * Services Region across which the Connect Customer instance is deployed for
   * Global Resiliency, with one entry per Region. This set describes the overall
   * replication state for the request and is returned in full on every page of
   * results, so it does not change as you paginate.</p>
   */
  inline const Aws::Vector<ResourceReplicationStatus>& GetResourceReplicationStatuses() const { return m_resourceReplicationStatuses; }
  template <typename ResourceReplicationStatusesT = Aws::Vector<ResourceReplicationStatus>>
  void SetResourceReplicationStatuses(ResourceReplicationStatusesT&& value) {
    m_resourceReplicationStatusesHasBeenSet = true;
    m_resourceReplicationStatuses = std::forward<ResourceReplicationStatusesT>(value);
  }
  template <typename ResourceReplicationStatusesT = Aws::Vector<ResourceReplicationStatus>>
  ListReplicationFindingsResult& WithResourceReplicationStatuses(ResourceReplicationStatusesT&& value) {
    SetResourceReplicationStatuses(std::forward<ResourceReplicationStatusesT>(value));
    return *this;
  }
  template <typename ResourceReplicationStatusesT = ResourceReplicationStatus>
  ListReplicationFindingsResult& AddResourceReplicationStatuses(ResourceReplicationStatusesT&& value) {
    m_resourceReplicationStatusesHasBeenSet = true;
    m_resourceReplicationStatuses.emplace_back(std::forward<ResourceReplicationStatusesT>(value));
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
  ListReplicationFindingsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ReplicationFinding> m_replicationFindingsList;

  Aws::Vector<ApproximateDriftedResourceCount> m_approximateDriftedResourceCounts;

  Aws::String m_nextToken;

  Aws::Vector<ResourceReplicationStatus> m_resourceReplicationStatuses;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_replicationFindingsListHasBeenSet = false;
  bool m_approximateDriftedResourceCountsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_resourceReplicationStatusesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
