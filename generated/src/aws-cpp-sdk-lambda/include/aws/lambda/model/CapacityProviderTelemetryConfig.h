/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/CapacityProviderLoggingConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {

/**
 * <p>Configuration that specifies the telemetry collection for the capacity
 * provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CapacityProviderTelemetryConfig">AWS
 * API Reference</a></p>
 */
class CapacityProviderTelemetryConfig {
 public:
  AWS_LAMBDA_API CapacityProviderTelemetryConfig() = default;
  AWS_LAMBDA_API CapacityProviderTelemetryConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API CapacityProviderTelemetryConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The capacity provider's Amazon CloudWatch Logs configuration settings.</p>
   */
  inline const CapacityProviderLoggingConfig& GetLoggingConfig() const { return m_loggingConfig; }
  inline bool LoggingConfigHasBeenSet() const { return m_loggingConfigHasBeenSet; }
  template <typename LoggingConfigT = CapacityProviderLoggingConfig>
  void SetLoggingConfig(LoggingConfigT&& value) {
    m_loggingConfigHasBeenSet = true;
    m_loggingConfig = std::forward<LoggingConfigT>(value);
  }
  template <typename LoggingConfigT = CapacityProviderLoggingConfig>
  CapacityProviderTelemetryConfig& WithLoggingConfig(LoggingConfigT&& value) {
    SetLoggingConfig(std::forward<LoggingConfigT>(value));
    return *this;
  }
  ///@}
 private:
  CapacityProviderLoggingConfig m_loggingConfig;
  bool m_loggingConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
