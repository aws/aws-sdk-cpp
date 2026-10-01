/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-web/LambdaWeb_EXPORTS.h>
#include <aws/lambda-web/model/ApplicationLogLevel.h>
#include <aws/lambda-web/model/SystemLogLevel.h>

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
 * <p>The logging configuration for a web function revision.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-web-2025-03-07/LoggingConfig">AWS
 * API Reference</a></p>
 */
class LoggingConfig {
 public:
  AWS_LAMBDAWEB_API LoggingConfig() = default;
  AWS_LAMBDAWEB_API LoggingConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API LoggingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDAWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the Amazon CloudWatch Logs log group the web function sends logs
   * to. If you don't specify a value, the default is
   * <code>/aws/lambda/web/{functionName}</code>, and this default is returned in the
   * response.</p>
   */
  inline const Aws::String& GetLogGroup() const { return m_logGroup; }
  inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }
  template <typename LogGroupT = Aws::String>
  void SetLogGroup(LogGroupT&& value) {
    m_logGroupHasBeenSet = true;
    m_logGroup = std::forward<LogGroupT>(value);
  }
  template <typename LogGroupT = Aws::String>
  LoggingConfig& WithLogGroup(LogGroupT&& value) {
    SetLogGroup(std::forward<LogGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The log level for application logs emitted by the web function. If you don't
   * specify a value, the default is <code>INFO</code>, and this default is returned
   * in the response.</p>
   */
  inline ApplicationLogLevel GetApplicationLogLevel() const { return m_applicationLogLevel; }
  inline bool ApplicationLogLevelHasBeenSet() const { return m_applicationLogLevelHasBeenSet; }
  inline void SetApplicationLogLevel(ApplicationLogLevel value) {
    m_applicationLogLevelHasBeenSet = true;
    m_applicationLogLevel = value;
  }
  inline LoggingConfig& WithApplicationLogLevel(ApplicationLogLevel value) {
    SetApplicationLogLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The log level for system logs emitted by the Lambda runtime. If you don't
   * specify a value, the default is <code>INFO</code>, and this default is returned
   * in the response.</p>
   */
  inline SystemLogLevel GetSystemLogLevel() const { return m_systemLogLevel; }
  inline bool SystemLogLevelHasBeenSet() const { return m_systemLogLevelHasBeenSet; }
  inline void SetSystemLogLevel(SystemLogLevel value) {
    m_systemLogLevelHasBeenSet = true;
    m_systemLogLevel = value;
  }
  inline LoggingConfig& WithSystemLogLevel(SystemLogLevel value) {
    SetSystemLogLevel(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_logGroup;

  ApplicationLogLevel m_applicationLogLevel{ApplicationLogLevel::NOT_SET};

  SystemLogLevel m_systemLogLevel{SystemLogLevel::NOT_SET};
  bool m_logGroupHasBeenSet = false;
  bool m_applicationLogLevelHasBeenSet = false;
  bool m_systemLogLevelHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaWeb
}  // namespace Aws
