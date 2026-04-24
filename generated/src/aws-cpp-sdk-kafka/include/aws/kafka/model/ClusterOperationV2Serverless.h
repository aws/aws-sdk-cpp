/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ServerlessConnectivityInfo.h>
#include <aws/kafka/model/VpcConnectionInfoServerless.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kafka {
namespace Model {

/**
 *
          <p>Returns information about a serverless cluster
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ClusterOperationV2Serverless">AWS
 * API Reference</a></p>
 */
class ClusterOperationV2Serverless {
 public:
  AWS_KAFKA_API ClusterOperationV2Serverless() = default;
  AWS_KAFKA_API ClusterOperationV2Serverless(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API ClusterOperationV2Serverless& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   *
          <p>Describes the cluster's attributes before any updates are
   * applied. For example, networkType, which can be either IPv4 or DUAL.</p>
   */
  inline const ServerlessConnectivityInfo& GetSourceClusterInfo() const { return m_sourceClusterInfo; }
  inline bool SourceClusterInfoHasBeenSet() const { return m_sourceClusterInfoHasBeenSet; }
  template <typename SourceClusterInfoT = ServerlessConnectivityInfo>
  void SetSourceClusterInfo(SourceClusterInfoT&& value) {
    m_sourceClusterInfoHasBeenSet = true;
    m_sourceClusterInfo = std::forward<SourceClusterInfoT>(value);
  }
  template <typename SourceClusterInfoT = ServerlessConnectivityInfo>
  ClusterOperationV2Serverless& WithSourceClusterInfo(SourceClusterInfoT&& value) {
    SetSourceClusterInfo(std::forward<SourceClusterInfoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
           <p>Describes the cluster's attributes after any updates are
   * applied. For example, networkType, which can be either IPv4 or DUAL.</p>
   */
  inline const ServerlessConnectivityInfo& GetTargetClusterInfo() const { return m_targetClusterInfo; }
  inline bool TargetClusterInfoHasBeenSet() const { return m_targetClusterInfoHasBeenSet; }
  template <typename TargetClusterInfoT = ServerlessConnectivityInfo>
  void SetTargetClusterInfo(TargetClusterInfoT&& value) {
    m_targetClusterInfoHasBeenSet = true;
    m_targetClusterInfo = std::forward<TargetClusterInfoT>(value);
  }
  template <typename TargetClusterInfoT = ServerlessConnectivityInfo>
  ClusterOperationV2Serverless& WithTargetClusterInfo(TargetClusterInfoT&& value) {
    SetTargetClusterInfo(std::forward<TargetClusterInfoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>Description of the VPC connection for CreateVpcConnection and
   * DeleteVpcConnection operations.</p>
   */
  inline const VpcConnectionInfoServerless& GetVpcConnectionInfo() const { return m_vpcConnectionInfo; }
  inline bool VpcConnectionInfoHasBeenSet() const { return m_vpcConnectionInfoHasBeenSet; }
  template <typename VpcConnectionInfoT = VpcConnectionInfoServerless>
  void SetVpcConnectionInfo(VpcConnectionInfoT&& value) {
    m_vpcConnectionInfoHasBeenSet = true;
    m_vpcConnectionInfo = std::forward<VpcConnectionInfoT>(value);
  }
  template <typename VpcConnectionInfoT = VpcConnectionInfoServerless>
  ClusterOperationV2Serverless& WithVpcConnectionInfo(VpcConnectionInfoT&& value) {
    SetVpcConnectionInfo(std::forward<VpcConnectionInfoT>(value));
    return *this;
  }
  ///@}
 private:
  ServerlessConnectivityInfo m_sourceClusterInfo;

  ServerlessConnectivityInfo m_targetClusterInfo;

  VpcConnectionInfoServerless m_vpcConnectionInfo;
  bool m_sourceClusterInfoHasBeenSet = false;
  bool m_targetClusterInfoHasBeenSet = false;
  bool m_vpcConnectionInfoHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
