/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>
#include <aws/lambda-web/model/TelemetryConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaWeb {
namespace Model {

/**
 * <p>The service configuration for a web function revision, including execution
 * role, timeout, concurrency, and telemetry settings.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/ServiceConfig">AWS
 * API Reference</a></p>
 */
class ServiceConfig {
 public:
  AWS_LAMBDAWEB_API ServiceConfig() = default;
  AWS_LAMBDAWEB_API ServiceConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API ServiceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the IAM role that the web function assumes when it runs. This role
   * provides permissions to access AWS services and resources.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  ServiceConfig& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of time (in seconds) that Lambda allows the web function to run
   * before stopping it. Minimum value of 3, maximum value of 900. If you don't
   * specify a value, the default is 30, and this default is returned in the
   * response.</p>
   */
  inline int GetTimeoutSeconds() const { return m_timeoutSeconds; }
  inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }
  inline void SetTimeoutSeconds(int value) {
    m_timeoutSecondsHasBeenSet = true;
    m_timeoutSeconds = value;
  }
  inline ServiceConfig& WithTimeoutSeconds(int value) {
    SetTimeoutSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of concurrent requests handled per execution environment.
   * Minimum value of 1, maximum value of 128. If you don't specify a value, the
   * default is 64, and this default is returned in the response.</p>
   */
  inline int GetMaxConcurrencyPerEnvironment() const { return m_maxConcurrencyPerEnvironment; }
  inline bool MaxConcurrencyPerEnvironmentHasBeenSet() const { return m_maxConcurrencyPerEnvironmentHasBeenSet; }
  inline void SetMaxConcurrencyPerEnvironment(int value) {
    m_maxConcurrencyPerEnvironmentHasBeenSet = true;
    m_maxConcurrencyPerEnvironment = value;
  }
  inline ServiceConfig& WithMaxConcurrencyPerEnvironment(int value) {
    SetMaxConcurrencyPerEnvironment(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of environment variable key-value pairs available to the web function
   * at runtime. Environment variable values are sensitive.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const { return m_environmentVariables; }
  inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
  template <typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  void SetEnvironmentVariables(EnvironmentVariablesT&& value) {
    m_environmentVariablesHasBeenSet = true;
    m_environmentVariables = std::forward<EnvironmentVariablesT>(value);
  }
  template <typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  ServiceConfig& WithEnvironmentVariables(EnvironmentVariablesT&& value) {
    SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value));
    return *this;
  }
  template <typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
  ServiceConfig& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
    m_environmentVariablesHasBeenSet = true;
    m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The telemetry configuration for the web function, including logging
   * settings.</p>
   */
  inline const TelemetryConfig& GetTelemetryConfig() const { return m_telemetryConfig; }
  inline bool TelemetryConfigHasBeenSet() const { return m_telemetryConfigHasBeenSet; }
  template <typename TelemetryConfigT = TelemetryConfig>
  void SetTelemetryConfig(TelemetryConfigT&& value) {
    m_telemetryConfigHasBeenSet = true;
    m_telemetryConfig = std::forward<TelemetryConfigT>(value);
  }
  template <typename TelemetryConfigT = TelemetryConfig>
  ServiceConfig& WithTelemetryConfig(TelemetryConfigT&& value) {
    SetTelemetryConfig(std::forward<TelemetryConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_executionRoleArn;

  int m_timeoutSeconds{0};

  int m_maxConcurrencyPerEnvironment{0};

  Aws::Map<Aws::String, Aws::String> m_environmentVariables;

  TelemetryConfig m_telemetryConfig;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_timeoutSecondsHasBeenSet = false;
  bool m_maxConcurrencyPerEnvironmentHasBeenSet = false;
  bool m_environmentVariablesHasBeenSet = false;
  bool m_telemetryConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
