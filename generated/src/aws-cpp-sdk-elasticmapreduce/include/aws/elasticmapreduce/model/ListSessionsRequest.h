/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/SessionState.h>

#include <utility>

namespace Aws {
namespace EMR {
namespace Model {

/**
 * <p>Input to the <code>ListSessions</code> operation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListSessionsInput">AWS
 * API Reference</a></p>
 */
class ListSessionsRequest : public EMRRequest {
 public:
  AWS_EMR_API ListSessionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListSessions"; }

  AWS_EMR_API Aws::String SerializePayload() const override;

  AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the cluster to list sessions for.</p>
   */
  inline const Aws::String& GetClusterId() const { return m_clusterId; }
  inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
  template <typename ClusterIdT = Aws::String>
  void SetClusterId(ClusterIdT&& value) {
    m_clusterIdHasBeenSet = true;
    m_clusterId = std::forward<ClusterIdT>(value);
  }
  template <typename ClusterIdT = Aws::String>
  ListSessionsRequest& WithClusterId(ClusterIdT&& value) {
    SetClusterId(std::forward<ClusterIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional filter that limits the results to sessions in the specified
   * states.</p>
   */
  inline const Aws::Vector<SessionState>& GetSessionStates() const { return m_sessionStates; }
  inline bool SessionStatesHasBeenSet() const { return m_sessionStatesHasBeenSet; }
  template <typename SessionStatesT = Aws::Vector<SessionState>>
  void SetSessionStates(SessionStatesT&& value) {
    m_sessionStatesHasBeenSet = true;
    m_sessionStates = std::forward<SessionStatesT>(value);
  }
  template <typename SessionStatesT = Aws::Vector<SessionState>>
  ListSessionsRequest& WithSessionStates(SessionStatesT&& value) {
    SetSessionStates(std::forward<SessionStatesT>(value));
    return *this;
  }
  inline ListSessionsRequest& AddSessionStates(SessionState value) {
    m_sessionStatesHasBeenSet = true;
    m_sessionStates.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token returned by a previous <code>ListSessions</code> call.
   * Use it to retrieve the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSessionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of sessions to return in each page of results.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListSessionsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterId;

  Aws::Vector<SessionState> m_sessionStates;

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_clusterIdHasBeenSet = false;
  bool m_sessionStatesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
