/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/IntegerRangeConstraint.h>

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
 * <p>Constraints for a port range parameter.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/PortRangeConstraints">AWS
 * API Reference</a></p>
 */
class PortRangeConstraints {
 public:
  AWS_EKS_API PortRangeConstraints() = default;
  AWS_EKS_API PortRangeConstraints(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API PortRangeConstraints& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The constraints for the minimum port value.</p>
   */
  inline const IntegerRangeConstraint& GetMinPort() const { return m_minPort; }
  inline bool MinPortHasBeenSet() const { return m_minPortHasBeenSet; }
  template <typename MinPortT = IntegerRangeConstraint>
  void SetMinPort(MinPortT&& value) {
    m_minPortHasBeenSet = true;
    m_minPort = std::forward<MinPortT>(value);
  }
  template <typename MinPortT = IntegerRangeConstraint>
  PortRangeConstraints& WithMinPort(MinPortT&& value) {
    SetMinPort(std::forward<MinPortT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The constraints for the maximum port value.</p>
   */
  inline const IntegerRangeConstraint& GetMaxPort() const { return m_maxPort; }
  inline bool MaxPortHasBeenSet() const { return m_maxPortHasBeenSet; }
  template <typename MaxPortT = IntegerRangeConstraint>
  void SetMaxPort(MaxPortT&& value) {
    m_maxPortHasBeenSet = true;
    m_maxPort = std::forward<MaxPortT>(value);
  }
  template <typename MaxPortT = IntegerRangeConstraint>
  PortRangeConstraints& WithMaxPort(MaxPortT&& value) {
    SetMaxPort(std::forward<MaxPortT>(value));
    return *this;
  }
  ///@}
 private:
  IntegerRangeConstraint m_minPort;

  IntegerRangeConstraint m_maxPort;
  bool m_minPortHasBeenSet = false;
  bool m_maxPortHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
