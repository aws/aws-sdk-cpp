/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>
#include <aws/lambda-web/model/LoggingConfig.h>

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
 * <p>The telemetry configuration for a web function revision.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/TelemetryConfig">AWS
 * API Reference</a></p>
 */
class TelemetryConfig {
 public:
  AWS_LAMBDAWEB_API TelemetryConfig() = default;
  AWS_LAMBDAWEB_API TelemetryConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API TelemetryConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The logging configuration for the web function.</p>
   */
  inline const LoggingConfig& GetLoggingConfig() const { return m_loggingConfig; }
  inline bool LoggingConfigHasBeenSet() const { return m_loggingConfigHasBeenSet; }
  template <typename LoggingConfigT = LoggingConfig>
  void SetLoggingConfig(LoggingConfigT&& value) {
    m_loggingConfigHasBeenSet = true;
    m_loggingConfig = std::forward<LoggingConfigT>(value);
  }
  template <typename LoggingConfigT = LoggingConfig>
  TelemetryConfig& WithLoggingConfig(LoggingConfigT&& value) {
    SetLoggingConfig(std::forward<LoggingConfigT>(value));
    return *this;
  }
  ///@}
 private:
  LoggingConfig m_loggingConfig;
  bool m_loggingConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
