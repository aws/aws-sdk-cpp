/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniRequest.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/EdgeFilters.h>
#include <aws/cloudwatchomni/model/NodeFilters.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>The request for retrieving a slice of the context graph.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/GetContextGraphInput">AWS
 * API Reference</a></p>
 */
class GetContextGraphRequest : public CloudWatchOmniRequest {
 public:
  AWS_CLOUDWATCHOMNI_API GetContextGraphRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetContextGraph"; }

  AWS_CLOUDWATCHOMNI_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCHOMNI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Criteria restricting which nodes are returned.</p>
   */
  inline const NodeFilters& GetNodeFilters() const { return m_nodeFilters; }
  inline bool NodeFiltersHasBeenSet() const { return m_nodeFiltersHasBeenSet; }
  template <typename NodeFiltersT = NodeFilters>
  void SetNodeFilters(NodeFiltersT&& value) {
    m_nodeFiltersHasBeenSet = true;
    m_nodeFilters = std::forward<NodeFiltersT>(value);
  }
  template <typename NodeFiltersT = NodeFilters>
  GetContextGraphRequest& WithNodeFilters(NodeFiltersT&& value) {
    SetNodeFilters(std::forward<NodeFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Criteria restricting which edges are returned.</p>
   */
  inline const EdgeFilters& GetEdgeFilters() const { return m_edgeFilters; }
  inline bool EdgeFiltersHasBeenSet() const { return m_edgeFiltersHasBeenSet; }
  template <typename EdgeFiltersT = EdgeFilters>
  void SetEdgeFilters(EdgeFiltersT&& value) {
    m_edgeFiltersHasBeenSet = true;
    m_edgeFilters = std::forward<EdgeFiltersT>(value);
  }
  template <typename EdgeFiltersT = EdgeFilters>
  GetContextGraphRequest& WithEdgeFilters(EdgeFiltersT&& value) {
    SetEdgeFilters(std::forward<EdgeFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Start of the time range (UTC), inclusive.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  GetContextGraphRequest& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>End of the time range (UTC), inclusive.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  GetContextGraphRequest& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How many hops to traverse out from the nodes matched by nodeFilters. 0
   * returns only the matched nodes themselves.</p>
   */
  inline int GetDepth() const { return m_depth; }
  inline bool DepthHasBeenSet() const { return m_depthHasBeenSet; }
  inline void SetDepth(int value) {
    m_depthHasBeenSet = true;
    m_depth = value;
  }
  inline GetContextGraphRequest& WithDepth(int value) {
    SetDepth(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of nodes to return in a single page.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline GetContextGraphRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of edges to return per node, bounding the fan-out of a
   * densely connected node.</p>
   */
  inline int GetMaxEdgesPerNode() const { return m_maxEdgesPerNode; }
  inline bool MaxEdgesPerNodeHasBeenSet() const { return m_maxEdgesPerNodeHasBeenSet; }
  inline void SetMaxEdgesPerNode(int value) {
    m_maxEdgesPerNodeHasBeenSet = true;
    m_maxEdgesPerNode = value;
  }
  inline GetContextGraphRequest& WithMaxEdgesPerNode(int value) {
    SetMaxEdgesPerNode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to return the metadata block, semantics included, on each node and
   * edge. Off by default because it costs an extra lookup per returned node.</p>
   */
  inline bool GetIncludeMetadata() const { return m_includeMetadata; }
  inline bool IncludeMetadataHasBeenSet() const { return m_includeMetadataHasBeenSet; }
  inline void SetIncludeMetadata(bool value) {
    m_includeMetadataHasBeenSet = true;
    m_includeMetadata = value;
  }
  inline GetContextGraphRequest& WithIncludeMetadata(bool value) {
    SetIncludeMetadata(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token from a previous response, to retrieve the next page.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetContextGraphRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  NodeFilters m_nodeFilters;

  EdgeFilters m_edgeFilters;

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  int m_depth{0};

  int m_maxResults{0};

  int m_maxEdgesPerNode{0};

  bool m_includeMetadata{false};

  Aws::String m_nextToken;
  bool m_nodeFiltersHasBeenSet = false;
  bool m_edgeFiltersHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_depthHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_maxEdgesPerNodeHasBeenSet = false;
  bool m_includeMetadataHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
