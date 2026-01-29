/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/EventSourceMappingSystemLogLevel.h>

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
 * <p>(Amazon MSK, and self-managed Apache Kafka only) The logging configuration
 * for your event source. Use this configuration object to define the level of logs
 * for your event source mapping. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/EventSourceMappingLoggingConfig">AWS
 * API Reference</a></p>
 */
class EventSourceMappingLoggingConfig {
 public:
  AWS_LAMBDA_API EventSourceMappingLoggingConfig() = default;
  AWS_LAMBDA_API EventSourceMappingLoggingConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API EventSourceMappingLoggingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The log level you want your event source mapping to use. Lambda event poller
   * only sends system logs at the selected level of detail and lower, where
   * <code>DEBUG</code> is the highest level and <code>WARN</code> is the lowest. For
   * more information about these metrics, see <a
   * href="https://docs.aws.amazon.com/lambda/latest/dg/esm-logging.html"> Event
   * source mapping logging</a>. </p>
   */
  inline EventSourceMappingSystemLogLevel GetSystemLogLevel() const { return m_systemLogLevel; }
  inline bool SystemLogLevelHasBeenSet() const { return m_systemLogLevelHasBeenSet; }
  inline void SetSystemLogLevel(EventSourceMappingSystemLogLevel value) {
    m_systemLogLevelHasBeenSet = true;
    m_systemLogLevel = value;
  }
  inline EventSourceMappingLoggingConfig& WithSystemLogLevel(EventSourceMappingSystemLogLevel value) {
    SetSystemLogLevel(value);
    return *this;
  }
  ///@}
 private:
  EventSourceMappingSystemLogLevel m_systemLogLevel{EventSourceMappingSystemLogLevel::NOT_SET};
  bool m_systemLogLevelHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
