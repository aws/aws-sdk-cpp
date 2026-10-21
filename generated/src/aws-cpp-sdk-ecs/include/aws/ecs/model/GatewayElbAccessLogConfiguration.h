/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/GatewayElbAccessLogDestination.h>

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
 * <p>The access log configuration for the load balancers that a gateway
 * manages.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/GatewayElbAccessLogConfiguration">AWS
 * API Reference</a></p>
 */
class GatewayElbAccessLogConfiguration {
 public:
  AWS_ECS_API GatewayElbAccessLogConfiguration() = default;
  AWS_ECS_API GatewayElbAccessLogConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API GatewayElbAccessLogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The destination where access logs are delivered.</p>
   */
  inline const GatewayElbAccessLogDestination& GetDestination() const { return m_destination; }
  inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
  template <typename DestinationT = GatewayElbAccessLogDestination>
  void SetDestination(DestinationT&& value) {
    m_destinationHasBeenSet = true;
    m_destination = std::forward<DestinationT>(value);
  }
  template <typename DestinationT = GatewayElbAccessLogDestination>
  GatewayElbAccessLogConfiguration& WithDestination(DestinationT&& value) {
    SetDestination(std::forward<DestinationT>(value));
    return *this;
  }
  ///@}
 private:
  GatewayElbAccessLogDestination m_destination;
  bool m_destinationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
