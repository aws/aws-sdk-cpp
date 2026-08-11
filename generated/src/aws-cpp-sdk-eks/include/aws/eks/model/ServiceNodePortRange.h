/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>

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
 * <p>The port range for Kubernetes NodePort services.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ServiceNodePortRange">AWS
 * API Reference</a></p>
 */
class ServiceNodePortRange {
 public:
  AWS_EKS_API ServiceNodePortRange() = default;
  AWS_EKS_API ServiceNodePortRange(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API ServiceNodePortRange& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum port number in the range.</p>
   */
  inline int GetMinPort() const { return m_minPort; }
  inline bool MinPortHasBeenSet() const { return m_minPortHasBeenSet; }
  inline void SetMinPort(int value) {
    m_minPortHasBeenSet = true;
    m_minPort = value;
  }
  inline ServiceNodePortRange& WithMinPort(int value) {
    SetMinPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum port number in the range.</p>
   */
  inline int GetMaxPort() const { return m_maxPort; }
  inline bool MaxPortHasBeenSet() const { return m_maxPortHasBeenSet; }
  inline void SetMaxPort(int value) {
    m_maxPortHasBeenSet = true;
    m_maxPort = value;
  }
  inline ServiceNodePortRange& WithMaxPort(int value) {
    SetMaxPort(value);
    return *this;
  }
  ///@}
 private:
  int m_minPort{0};

  int m_maxPort{0};
  bool m_minPortHasBeenSet = false;
  bool m_maxPortHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
