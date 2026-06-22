/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>
#include <aws/lambda-microvms/model/PortRange.h>
#include <aws/lambda-microvms/model/Unit.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaMicrovms {
namespace Model {

/**
 * <p>Specifies which ports are accessible on a MicroVM. Only one of the port
 * specification options can be set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-microvms-2025-09-09/PortSpecification">AWS
 * API Reference</a></p>
 */
class PortSpecification {
 public:
  AWS_LAMBDAMICROVMS_API PortSpecification() = default;
  AWS_LAMBDAMICROVMS_API PortSpecification(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API PortSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAMICROVMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A single port number.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline PortSpecification& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A range of ports.</p>
   */
  inline const PortRange& GetRange() const { return m_range; }
  inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }
  template <typename RangeT = PortRange>
  void SetRange(RangeT&& value) {
    m_rangeHasBeenSet = true;
    m_range = std::forward<RangeT>(value);
  }
  template <typename RangeT = PortRange>
  PortSpecification& WithRange(RangeT&& value) {
    SetRange(std::forward<RangeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates that all ports are accessible.</p>
   */
  inline const Unit& GetAllPorts() const { return m_allPorts; }
  inline bool AllPortsHasBeenSet() const { return m_allPortsHasBeenSet; }
  template <typename AllPortsT = Unit>
  void SetAllPorts(AllPortsT&& value) {
    m_allPortsHasBeenSet = true;
    m_allPorts = std::forward<AllPortsT>(value);
  }
  template <typename AllPortsT = Unit>
  PortSpecification& WithAllPorts(AllPortsT&& value) {
    SetAllPorts(std::forward<AllPortsT>(value));
    return *this;
  }
  ///@}
 private:
  int m_port{0};

  PortRange m_range;

  Unit m_allPorts;
  bool m_portHasBeenSet = false;
  bool m_rangeHasBeenSet = false;
  bool m_allPortsHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
