/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/SystemLogLevel.h>

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
 * <p>The capacity provider's Amazon CloudWatch Logs configuration
 * settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CapacityProviderLoggingConfig">AWS
 * API Reference</a></p>
 */
class CapacityProviderLoggingConfig {
 public:
  AWS_LAMBDA_API CapacityProviderLoggingConfig() = default;
  AWS_LAMBDA_API CapacityProviderLoggingConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API CapacityProviderLoggingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Set this property to filter the system logs for your capacity provider that
   * Lambda sends to CloudWatch. Lambda only sends system logs at the selected level
   * of detail and lower, where <code>DEBUG</code> is the highest level and
   * <code>WARN</code> is the lowest.</p>
   */
  inline SystemLogLevel GetSystemLogLevel() const { return m_systemLogLevel; }
  inline bool SystemLogLevelHasBeenSet() const { return m_systemLogLevelHasBeenSet; }
  inline void SetSystemLogLevel(SystemLogLevel value) {
    m_systemLogLevelHasBeenSet = true;
    m_systemLogLevel = value;
  }
  inline CapacityProviderLoggingConfig& WithSystemLogLevel(SystemLogLevel value) {
    SetSystemLogLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Amazon CloudWatch log group the capacity provider sends logs
   * to. By default, Lambda capacity providers send logs to a default log group named
   * <code>/aws/lambda/capacity-provider/&lt;capacity provider name&gt;</code>. To
   * use a different log group, enter an existing log group or enter a new log group
   * name.</p>
   */
  inline const Aws::String& GetLogGroup() const { return m_logGroup; }
  inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }
  template <typename LogGroupT = Aws::String>
  void SetLogGroup(LogGroupT&& value) {
    m_logGroupHasBeenSet = true;
    m_logGroup = std::forward<LogGroupT>(value);
  }
  template <typename LogGroupT = Aws::String>
  CapacityProviderLoggingConfig& WithLogGroup(LogGroupT&& value) {
    SetLogGroup(std::forward<LogGroupT>(value));
    return *this;
  }
  ///@}
 private:
  SystemLogLevel m_systemLogLevel{SystemLogLevel::NOT_SET};

  Aws::String m_logGroup;
  bool m_systemLogLevelHasBeenSet = false;
  bool m_logGroupHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
