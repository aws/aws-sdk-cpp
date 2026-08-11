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
 * <p>The configuration for the Kubernetes scheduler on an Amazon EKS
 * cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/KubeSchedulerConfigRequest">AWS
 * API Reference</a></p>
 */
class KubeSchedulerConfigRequest {
 public:
  AWS_EKS_API KubeSchedulerConfigRequest() = default;
  AWS_EKS_API KubeSchedulerConfigRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API KubeSchedulerConfigRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  KubeSchedulerConfigRequest& WithNodeResourcesFit(NodeResourcesFitT&& value) {
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
