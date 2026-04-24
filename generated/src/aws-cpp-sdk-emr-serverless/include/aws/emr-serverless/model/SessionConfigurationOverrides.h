/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>
#include <aws/emr-serverless/model/Configuration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EMRServerless {
namespace Model {

/**
 * <p>The configuration overrides for a session.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/SessionConfigurationOverrides">AWS
 * API Reference</a></p>
 */
class SessionConfigurationOverrides {
 public:
  AWS_EMRSERVERLESS_API SessionConfigurationOverrides() = default;
  AWS_EMRSERVERLESS_API SessionConfigurationOverrides(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRSERVERLESS_API SessionConfigurationOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The runtime configuration for the session. Contains Spark configuration
   * properties specified at session creation time.</p>
   */
  inline const Aws::Vector<Configuration>& GetRuntimeConfiguration() const { return m_runtimeConfiguration; }
  inline bool RuntimeConfigurationHasBeenSet() const { return m_runtimeConfigurationHasBeenSet; }
  template <typename RuntimeConfigurationT = Aws::Vector<Configuration>>
  void SetRuntimeConfiguration(RuntimeConfigurationT&& value) {
    m_runtimeConfigurationHasBeenSet = true;
    m_runtimeConfiguration = std::forward<RuntimeConfigurationT>(value);
  }
  template <typename RuntimeConfigurationT = Aws::Vector<Configuration>>
  SessionConfigurationOverrides& WithRuntimeConfiguration(RuntimeConfigurationT&& value) {
    SetRuntimeConfiguration(std::forward<RuntimeConfigurationT>(value));
    return *this;
  }
  template <typename RuntimeConfigurationT = Configuration>
  SessionConfigurationOverrides& AddRuntimeConfiguration(RuntimeConfigurationT&& value) {
    m_runtimeConfigurationHasBeenSet = true;
    m_runtimeConfiguration.emplace_back(std::forward<RuntimeConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Configuration> m_runtimeConfiguration;
  bool m_runtimeConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMRServerless
}  // namespace Aws
