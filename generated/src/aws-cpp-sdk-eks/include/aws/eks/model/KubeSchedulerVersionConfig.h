/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/NodeResourcesFitVersionConfig.h>

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
 * <p>The Kubernetes scheduler version-specific configuration defaults and
 * constraints.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/KubeSchedulerVersionConfig">AWS
 * API Reference</a></p>
 */
class KubeSchedulerVersionConfig {
 public:
  AWS_EKS_API KubeSchedulerVersionConfig() = default;
  AWS_EKS_API KubeSchedulerVersionConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API KubeSchedulerVersionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The NodeResourcesFit configuration with default value and constraints.</p>
   */
  inline const NodeResourcesFitVersionConfig& GetNodeResourcesFit() const { return m_nodeResourcesFit; }
  inline bool NodeResourcesFitHasBeenSet() const { return m_nodeResourcesFitHasBeenSet; }
  template <typename NodeResourcesFitT = NodeResourcesFitVersionConfig>
  void SetNodeResourcesFit(NodeResourcesFitT&& value) {
    m_nodeResourcesFitHasBeenSet = true;
    m_nodeResourcesFit = std::forward<NodeResourcesFitT>(value);
  }
  template <typename NodeResourcesFitT = NodeResourcesFitVersionConfig>
  KubeSchedulerVersionConfig& WithNodeResourcesFit(NodeResourcesFitT&& value) {
    SetNodeResourcesFit(std::forward<NodeResourcesFitT>(value));
    return *this;
  }
  ///@}
 private:
  NodeResourcesFitVersionConfig m_nodeResourcesFit;
  bool m_nodeResourcesFitHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
