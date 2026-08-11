/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/DurationParameterConfig.h>
#include <aws/eks/model/PortRangeParameterConfig.h>

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
 * <p>The Kubernetes API server version-specific configuration defaults and
 * constraints.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/KubeApiServerVersionConfig">AWS
 * API Reference</a></p>
 */
class KubeApiServerVersionConfig {
 public:
  AWS_EKS_API KubeApiServerVersionConfig() = default;
  AWS_EKS_API KubeApiServerVersionConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API KubeApiServerVersionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The event TTL configuration with default value and constraints.</p>
   */
  inline const DurationParameterConfig& GetEventTtl() const { return m_eventTtl; }
  inline bool EventTtlHasBeenSet() const { return m_eventTtlHasBeenSet; }
  template <typename EventTtlT = DurationParameterConfig>
  void SetEventTtl(EventTtlT&& value) {
    m_eventTtlHasBeenSet = true;
    m_eventTtl = std::forward<EventTtlT>(value);
  }
  template <typename EventTtlT = DurationParameterConfig>
  KubeApiServerVersionConfig& WithEventTtl(EventTtlT&& value) {
    SetEventTtl(std::forward<EventTtlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service node port range configuration with default value and
   * constraints.</p>
   */
  inline const PortRangeParameterConfig& GetServiceNodePortRange() const { return m_serviceNodePortRange; }
  inline bool ServiceNodePortRangeHasBeenSet() const { return m_serviceNodePortRangeHasBeenSet; }
  template <typename ServiceNodePortRangeT = PortRangeParameterConfig>
  void SetServiceNodePortRange(ServiceNodePortRangeT&& value) {
    m_serviceNodePortRangeHasBeenSet = true;
    m_serviceNodePortRange = std::forward<ServiceNodePortRangeT>(value);
  }
  template <typename ServiceNodePortRangeT = PortRangeParameterConfig>
  KubeApiServerVersionConfig& WithServiceNodePortRange(ServiceNodePortRangeT&& value) {
    SetServiceNodePortRange(std::forward<ServiceNodePortRangeT>(value));
    return *this;
  }
  ///@}
 private:
  DurationParameterConfig m_eventTtl;

  PortRangeParameterConfig m_serviceNodePortRange;
  bool m_eventTtlHasBeenSet = false;
  bool m_serviceNodePortRangeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
