/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

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
 * <p>Configuration for Dynatrace monitoring integration.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/DynatraceConfiguration">AWS
 * API Reference</a></p>
 */
class DynatraceConfiguration {
 public:
  AWS_DEVOPSAGENT_API DynatraceConfiguration() = default;
  AWS_DEVOPSAGENT_API DynatraceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API DynatraceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Dynatrace environment id</p>
   */
  inline const Aws::String& GetEnvId() const { return m_envId; }
  inline bool EnvIdHasBeenSet() const { return m_envIdHasBeenSet; }
  template <typename EnvIdT = Aws::String>
  void SetEnvId(EnvIdT&& value) {
    m_envIdHasBeenSet = true;
    m_envId = std::forward<EnvIdT>(value);
  }
  template <typename EnvIdT = Aws::String>
  DynatraceConfiguration& WithEnvId(EnvIdT&& value) {
    SetEnvId(std::forward<EnvIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of Dynatrace resources to monitor</p>
   */
  inline const Aws::Vector<Aws::String>& GetResources() const { return m_resources; }
  inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
  template <typename ResourcesT = Aws::Vector<Aws::String>>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = Aws::Vector<Aws::String>>
  DynatraceConfiguration& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  template <typename ResourcesT = Aws::String>
  DynatraceConfiguration& AddResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources.emplace_back(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_envId;

  Aws::Vector<Aws::String> m_resources;
  bool m_envIdHasBeenSet = false;
  bool m_resourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
