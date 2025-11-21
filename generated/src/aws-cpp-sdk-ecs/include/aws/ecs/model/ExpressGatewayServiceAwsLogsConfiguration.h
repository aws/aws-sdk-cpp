/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>Specifies the Amazon CloudWatch Logs configuration for the Express service
 * container.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ExpressGatewayServiceAwsLogsConfiguration">AWS
 * API Reference</a></p>
 */
class ExpressGatewayServiceAwsLogsConfiguration {
 public:
  AWS_ECS_API ExpressGatewayServiceAwsLogsConfiguration() = default;
  AWS_ECS_API ExpressGatewayServiceAwsLogsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ExpressGatewayServiceAwsLogsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the CloudWatch Logs log group to send container logs to.</p>
   */
  inline const Aws::String& GetLogGroup() const { return m_logGroup; }
  inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }
  template <typename LogGroupT = Aws::String>
  void SetLogGroup(LogGroupT&& value) {
    m_logGroupHasBeenSet = true;
    m_logGroup = std::forward<LogGroupT>(value);
  }
  template <typename LogGroupT = Aws::String>
  ExpressGatewayServiceAwsLogsConfiguration& WithLogGroup(LogGroupT&& value) {
    SetLogGroup(std::forward<LogGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The prefix for the CloudWatch Logs log stream names. The default for an
   * Express service is <code>ecs</code>.</p>
   */
  inline const Aws::String& GetLogStreamPrefix() const { return m_logStreamPrefix; }
  inline bool LogStreamPrefixHasBeenSet() const { return m_logStreamPrefixHasBeenSet; }
  template <typename LogStreamPrefixT = Aws::String>
  void SetLogStreamPrefix(LogStreamPrefixT&& value) {
    m_logStreamPrefixHasBeenSet = true;
    m_logStreamPrefix = std::forward<LogStreamPrefixT>(value);
  }
  template <typename LogStreamPrefixT = Aws::String>
  ExpressGatewayServiceAwsLogsConfiguration& WithLogStreamPrefix(LogStreamPrefixT&& value) {
    SetLogStreamPrefix(std::forward<LogStreamPrefixT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_logGroup;
  bool m_logGroupHasBeenSet = false;

  Aws::String m_logStreamPrefix;
  bool m_logStreamPrefixHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
