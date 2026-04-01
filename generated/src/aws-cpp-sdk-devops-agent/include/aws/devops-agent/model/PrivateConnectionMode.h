/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/SelfManagedInput.h>
#include <aws/devops-agent/model/ServiceManagedInput.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Private Connection mode — either service-managed or
 * self-managed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/PrivateConnectionMode">AWS
 * API Reference</a></p>
 */
class PrivateConnectionMode {
 public:
  AWS_DEVOPSAGENT_API PrivateConnectionMode() = default;
  AWS_DEVOPSAGENT_API PrivateConnectionMode(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API PrivateConnectionMode& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Service manages the Resource Gateway lifecycle.</p>
   */
  inline const ServiceManagedInput& GetServiceManaged() const { return m_serviceManaged; }
  inline bool ServiceManagedHasBeenSet() const { return m_serviceManagedHasBeenSet; }
  template <typename ServiceManagedT = ServiceManagedInput>
  void SetServiceManaged(ServiceManagedT&& value) {
    m_serviceManagedHasBeenSet = true;
    m_serviceManaged = std::forward<ServiceManagedT>(value);
  }
  template <typename ServiceManagedT = ServiceManagedInput>
  PrivateConnectionMode& WithServiceManaged(ServiceManagedT&& value) {
    SetServiceManaged(std::forward<ServiceManagedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Caller manages their own resource configuration.</p>
   */
  inline const SelfManagedInput& GetSelfManaged() const { return m_selfManaged; }
  inline bool SelfManagedHasBeenSet() const { return m_selfManagedHasBeenSet; }
  template <typename SelfManagedT = SelfManagedInput>
  void SetSelfManaged(SelfManagedT&& value) {
    m_selfManagedHasBeenSet = true;
    m_selfManaged = std::forward<SelfManagedT>(value);
  }
  template <typename SelfManagedT = SelfManagedInput>
  PrivateConnectionMode& WithSelfManaged(SelfManagedT&& value) {
    SetSelfManaged(std::forward<SelfManagedT>(value));
    return *this;
  }
  ///@}
 private:
  ServiceManagedInput m_serviceManaged;

  SelfManagedInput m_selfManaged;
  bool m_serviceManagedHasBeenSet = false;
  bool m_selfManagedHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
