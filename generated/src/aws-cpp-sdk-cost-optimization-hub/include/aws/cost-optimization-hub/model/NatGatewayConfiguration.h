/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CostOptimizationHub {
namespace Model {

/**
 * <p>The NAT Gateway configuration used for recommendations.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/NatGatewayConfiguration">AWS
 * API Reference</a></p>
 */
class NatGatewayConfiguration {
 public:
  AWS_COSTOPTIMIZATIONHUB_API NatGatewayConfiguration() = default;
  AWS_COSTOPTIMIZATIONHUB_API NatGatewayConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_COSTOPTIMIZATIONHUB_API NatGatewayConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of active connections through the NAT Gateway.</p>
   */
  inline long long GetActiveConnectionCount() const { return m_activeConnectionCount; }
  inline bool ActiveConnectionCountHasBeenSet() const { return m_activeConnectionCountHasBeenSet; }
  inline void SetActiveConnectionCount(long long value) {
    m_activeConnectionCountHasBeenSet = true;
    m_activeConnectionCount = value;
  }
  inline NatGatewayConfiguration& WithActiveConnectionCount(long long value) {
    SetActiveConnectionCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of packets received from the source through the NAT Gateway.</p>
   */
  inline long long GetPacketsInFromSource() const { return m_packetsInFromSource; }
  inline bool PacketsInFromSourceHasBeenSet() const { return m_packetsInFromSourceHasBeenSet; }
  inline void SetPacketsInFromSource(long long value) {
    m_packetsInFromSourceHasBeenSet = true;
    m_packetsInFromSource = value;
  }
  inline NatGatewayConfiguration& WithPacketsInFromSource(long long value) {
    SetPacketsInFromSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of packets received from the destination through the NAT
   * Gateway.</p>
   */
  inline long long GetPacketsInFromDestination() const { return m_packetsInFromDestination; }
  inline bool PacketsInFromDestinationHasBeenSet() const { return m_packetsInFromDestinationHasBeenSet; }
  inline void SetPacketsInFromDestination(long long value) {
    m_packetsInFromDestinationHasBeenSet = true;
    m_packetsInFromDestination = value;
  }
  inline NatGatewayConfiguration& WithPacketsInFromDestination(long long value) {
    SetPacketsInFromDestination(value);
    return *this;
  }
  ///@}
 private:
  long long m_activeConnectionCount{0};
  bool m_activeConnectionCountHasBeenSet = false;

  long long m_packetsInFromSource{0};
  bool m_packetsInFromSourceHasBeenSet = false;

  long long m_packetsInFromDestination{0};
  bool m_packetsInFromDestinationHasBeenSet = false;
};

}  // namespace Model
}  // namespace CostOptimizationHub
}  // namespace Aws
