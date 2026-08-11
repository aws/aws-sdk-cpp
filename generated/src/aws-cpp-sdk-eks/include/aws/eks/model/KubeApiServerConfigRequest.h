/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/ServiceNodePortRange.h>

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
 * <p>The configuration for the Kubernetes API server on an Amazon EKS
 * cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/KubeApiServerConfigRequest">AWS
 * API Reference</a></p>
 */
class KubeApiServerConfigRequest {
 public:
  AWS_EKS_API KubeApiServerConfigRequest() = default;
  AWS_EKS_API KubeApiServerConfigRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API KubeApiServerConfigRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The duration that Kubernetes events are retained. Valid values are
   * single-unit durations such as <code>30m</code> or <code>1h</code>.</p>
   */
  inline const Aws::String& GetEventTtl() const { return m_eventTtl; }
  inline bool EventTtlHasBeenSet() const { return m_eventTtlHasBeenSet; }
  template <typename EventTtlT = Aws::String>
  void SetEventTtl(EventTtlT&& value) {
    m_eventTtlHasBeenSet = true;
    m_eventTtl = std::forward<EventTtlT>(value);
  }
  template <typename EventTtlT = Aws::String>
  KubeApiServerConfigRequest& WithEventTtl(EventTtlT&& value) {
    SetEventTtl(std::forward<EventTtlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port range for NodePort services.</p>
   */
  inline const ServiceNodePortRange& GetServiceNodePortRange() const { return m_serviceNodePortRange; }
  inline bool ServiceNodePortRangeHasBeenSet() const { return m_serviceNodePortRangeHasBeenSet; }
  template <typename ServiceNodePortRangeT = ServiceNodePortRange>
  void SetServiceNodePortRange(ServiceNodePortRangeT&& value) {
    m_serviceNodePortRangeHasBeenSet = true;
    m_serviceNodePortRange = std::forward<ServiceNodePortRangeT>(value);
  }
  template <typename ServiceNodePortRangeT = ServiceNodePortRange>
  KubeApiServerConfigRequest& WithServiceNodePortRange(ServiceNodePortRangeT&& value) {
    SetServiceNodePortRange(std::forward<ServiceNodePortRangeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventTtl;

  ServiceNodePortRange m_serviceNodePortRange;
  bool m_eventTtlHasBeenSet = false;
  bool m_serviceNodePortRangeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
