/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/GatewayClusterAssociationStatus.h>

#include <utility>

namespace Aws {
namespace ECS {
namespace Model {

/**
 */
class ListGatewayClusterAssociationsRequest : public ECSRequest {
 public:
  AWS_ECS_API ListGatewayClusterAssociationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListGatewayClusterAssociations"; }

  AWS_ECS_API Aws::String SerializePayload() const override;

  AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name or Amazon Resource Name (ARN) of a gateway to filter the results
   * by.</p>
   */
  inline const Aws::String& GetGateway() const { return m_gateway; }
  inline bool GatewayHasBeenSet() const { return m_gatewayHasBeenSet; }
  template <typename GatewayT = Aws::String>
  void SetGateway(GatewayT&& value) {
    m_gatewayHasBeenSet = true;
    m_gateway = std::forward<GatewayT>(value);
  }
  template <typename GatewayT = Aws::String>
  ListGatewayClusterAssociationsRequest& WithGateway(GatewayT&& value) {
    SetGateway(std::forward<GatewayT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name or Amazon Resource Name (ARN) of a cluster to filter the results
   * by.</p>
   */
  inline const Aws::String& GetCluster() const { return m_cluster; }
  inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
  template <typename ClusterT = Aws::String>
  void SetCluster(ClusterT&& value) {
    m_clusterHasBeenSet = true;
    m_cluster = std::forward<ClusterT>(value);
  }
  template <typename ClusterT = Aws::String>
  ListGatewayClusterAssociationsRequest& WithCluster(ClusterT&& value) {
    SetCluster(std::forward<ClusterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The association status to filter the results by.</p>
   */
  inline const Aws::Vector<GatewayClusterAssociationStatus>& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::Vector<GatewayClusterAssociationStatus>>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::Vector<GatewayClusterAssociationStatus>>
  ListGatewayClusterAssociationsRequest& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  inline ListGatewayClusterAssociationsRequest& AddStatus(GatewayClusterAssociationStatus value) {
    m_statusHasBeenSet = true;
    m_status.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results that the operation returns in a single page.
   * The default is 100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListGatewayClusterAssociationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>nextToken</code> value returned from a previous paginated
   * request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListGatewayClusterAssociationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_gateway;

  Aws::String m_cluster;

  Aws::Vector<GatewayClusterAssociationStatus> m_status;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_gatewayHasBeenSet = false;
  bool m_clusterHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
