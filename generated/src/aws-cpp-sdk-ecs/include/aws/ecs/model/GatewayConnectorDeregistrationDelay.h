/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>

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
 * <p>The amount of time to allow in-flight requests to complete before a
 * deregistering target is removed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/GatewayConnectorDeregistrationDelay">AWS
 * API Reference</a></p>
 */
class GatewayConnectorDeregistrationDelay {
 public:
  AWS_ECS_API GatewayConnectorDeregistrationDelay() = default;
  AWS_ECS_API GatewayConnectorDeregistrationDelay(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API GatewayConnectorDeregistrationDelay& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The amount of time, in seconds, to wait before a deregistering target is
   * removed. A value of <code>0</code> removes the target immediately. The valid
   * range is 0-3600 seconds. The default value is 300 seconds.</p>
   */
  inline int GetTimeoutSeconds() const { return m_timeoutSeconds; }
  inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }
  inline void SetTimeoutSeconds(int value) {
    m_timeoutSecondsHasBeenSet = true;
    m_timeoutSeconds = value;
  }
  inline GatewayConnectorDeregistrationDelay& WithTimeoutSeconds(int value) {
    SetTimeoutSeconds(value);
    return *this;
  }
  ///@}
 private:
  int m_timeoutSeconds{0};
  bool m_timeoutSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
