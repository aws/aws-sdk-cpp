/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/NodeResourcesFitConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EKS {
namespace Model {

/**
 * <p>The Kubernetes scheduler configuration for an Amazon EKS
 * cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/KubeSchedulerConfigResponse">AWS
 * API Reference</a></p>
 */
class KubeSchedulerConfigResponse {
 public:
  AWS_EKS_API KubeSchedulerConfigResponse() = default;
  AWS_EKS_API KubeSchedulerConfigResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API KubeSchedulerConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The node resource fit scoring configuration for the scheduler.</p>
   */
  inline const NodeResourcesFitConfig& GetNodeResourcesFit() const { return m_nodeResourcesFit; }
  inline bool NodeResourcesFitHasBeenSet() const { return m_nodeResourcesFitHasBeenSet; }
  template <typename NodeResourcesFitT = NodeResourcesFitConfig>
  void SetNodeResourcesFit(NodeResourcesFitT&& value) {
    m_nodeResourcesFitHasBeenSet = true;
    m_nodeResourcesFit = std::forward<NodeResourcesFitT>(value);
  }
  template <typename NodeResourcesFitT = NodeResourcesFitConfig>
  KubeSchedulerConfigResponse& WithNodeResourcesFit(NodeResourcesFitT&& value) {
    SetNodeResourcesFit(std::forward<NodeResourcesFitT>(value));
    return *this;
  }
  ///@}
 private:
  NodeResourcesFitConfig m_nodeResourcesFit;
  bool m_nodeResourcesFitHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
