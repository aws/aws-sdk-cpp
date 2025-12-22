/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/Rebalancing.h>

#include <utility>

namespace Aws {
namespace Kafka {
namespace Model {

/**
 */
class UpdateRebalancingRequest : public KafkaRequest {
 public:
  AWS_KAFKA_API UpdateRebalancingRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateRebalancing"; }

  AWS_KAFKA_API Aws::String SerializePayload() const override;

  ///@{
  /**
   *
          <p>The Amazon Resource Name (ARN) of the cluster.</p>

   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  UpdateRebalancingRequest& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>The current version of the cluster.</p>

   */
  inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
  inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
  template <typename CurrentVersionT = Aws::String>
  void SetCurrentVersion(CurrentVersionT&& value) {
    m_currentVersionHasBeenSet = true;
    m_currentVersion = std::forward<CurrentVersionT>(value);
  }
  template <typename CurrentVersionT = Aws::String>
  UpdateRebalancingRequest& WithCurrentVersion(CurrentVersionT&& value) {
    SetCurrentVersion(std::forward<CurrentVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>Specifies if intelligent rebalancing should be turned on for
   * your cluster. The default intelligent rebalancing status is ACTIVE for all new
   * MSK Provisioned clusters that you create with Express brokers.</p>

   */
  inline const Rebalancing& GetRebalancing() const { return m_rebalancing; }
  inline bool RebalancingHasBeenSet() const { return m_rebalancingHasBeenSet; }
  template <typename RebalancingT = Rebalancing>
  void SetRebalancing(RebalancingT&& value) {
    m_rebalancingHasBeenSet = true;
    m_rebalancing = std::forward<RebalancingT>(value);
  }
  template <typename RebalancingT = Rebalancing>
  UpdateRebalancingRequest& WithRebalancing(RebalancingT&& value) {
    SetRebalancing(std::forward<RebalancingT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterArn;

  Aws::String m_currentVersion;

  Rebalancing m_rebalancing;
  bool m_clusterArnHasBeenSet = false;
  bool m_currentVersionHasBeenSet = false;
  bool m_rebalancingHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
