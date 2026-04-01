/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/CreatedAt.h>
#include <aws/ecs/model/DaemonDeploymentStatus.h>

#include <utility>

namespace Aws {
namespace ECS {
namespace Model {

/**
 */
class ListDaemonDeploymentsRequest : public ECSRequest {
 public:
  AWS_ECS_API ListDaemonDeploymentsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListDaemonDeployments"; }

  AWS_ECS_API Aws::String SerializePayload() const override;

  AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the daemon to list deployments for.</p>
   */
  inline const Aws::String& GetDaemonArn() const { return m_daemonArn; }
  inline bool DaemonArnHasBeenSet() const { return m_daemonArnHasBeenSet; }
  template <typename DaemonArnT = Aws::String>
  void SetDaemonArn(DaemonArnT&& value) {
    m_daemonArnHasBeenSet = true;
    m_daemonArn = std::forward<DaemonArnT>(value);
  }
  template <typename DaemonArnT = Aws::String>
  ListDaemonDeploymentsRequest& WithDaemonArn(DaemonArnT&& value) {
    SetDaemonArn(std::forward<DaemonArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional filter to narrow the <code>ListDaemonDeployments</code> results
   * by deployment status. If you don't specify a status, all deployments are
   * returned.</p>
   */
  inline const Aws::Vector<DaemonDeploymentStatus>& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::Vector<DaemonDeploymentStatus>>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::Vector<DaemonDeploymentStatus>>
  ListDaemonDeploymentsRequest& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  inline ListDaemonDeploymentsRequest& AddStatus(DaemonDeploymentStatus value) {
    m_statusHasBeenSet = true;
    m_status.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional filter to narrow the <code>ListDaemonDeployments</code> results
   * by creation time. If you don't specify a time range, all deployments are
   * returned.</p>
   */
  inline const CreatedAt& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = CreatedAt>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = CreatedAt>
  ListDaemonDeploymentsRequest& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of daemon deployment results that
   * <code>ListDaemonDeployments</code> returned in paginated output. When this
   * parameter is used, <code>ListDaemonDeployments</code> only returns
   * <code>maxResults</code> results in a single page along with a
   * <code>nextToken</code> response element. The remaining results of the initial
   * request can be seen by sending another <code>ListDaemonDeployments</code>
   * request with the returned <code>nextToken</code> value. This value can be
   * between 1 and 100. If this parameter isn't used, then
   * <code>ListDaemonDeployments</code> returns up to 20 results and a
   * <code>nextToken</code> value if applicable.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListDaemonDeploymentsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>nextToken</code> value returned from a
   * <code>ListDaemonDeployments</code> request indicating that more results are
   * available to fulfill the request and further calls will be needed. If
   * <code>maxResults</code> was provided, it's possible for the number of results to
   * be fewer than <code>maxResults</code>.</p>  <p>This token should be
   * treated as an opaque identifier that is only used to retrieve the next items in
   * a list and not for other programmatic purposes.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDaemonDeploymentsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_daemonArn;

  Aws::Vector<DaemonDeploymentStatus> m_status;

  CreatedAt m_createdAt;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_daemonArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
