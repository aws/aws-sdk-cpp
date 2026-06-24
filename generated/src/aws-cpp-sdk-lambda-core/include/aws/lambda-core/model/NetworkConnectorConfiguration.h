/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/model/NetworkConnectorVpcEgressConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaCore {
namespace Model {

/**
 * <p>The network configuration for a network connector. Different connector types
 * use different configuration shapes; specify the configuration that matches your
 * connector type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/NetworkConnectorConfiguration">AWS
 * API Reference</a></p>
 */
class NetworkConnectorConfiguration {
 public:
  AWS_LAMBDACORE_API NetworkConnectorConfiguration() = default;
  AWS_LAMBDACORE_API NetworkConnectorConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API NetworkConnectorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration for a VPC egress network connector. Specifies the subnets,
   * security groups, and network protocol for routing outbound traffic through your
   * VPC.</p>
   */
  inline const NetworkConnectorVpcEgressConfiguration& GetVpcEgressConfiguration() const { return m_vpcEgressConfiguration; }
  inline bool VpcEgressConfigurationHasBeenSet() const { return m_vpcEgressConfigurationHasBeenSet; }
  template <typename VpcEgressConfigurationT = NetworkConnectorVpcEgressConfiguration>
  void SetVpcEgressConfiguration(VpcEgressConfigurationT&& value) {
    m_vpcEgressConfigurationHasBeenSet = true;
    m_vpcEgressConfiguration = std::forward<VpcEgressConfigurationT>(value);
  }
  template <typename VpcEgressConfigurationT = NetworkConnectorVpcEgressConfiguration>
  NetworkConnectorConfiguration& WithVpcEgressConfiguration(VpcEgressConfigurationT&& value) {
    SetVpcEgressConfiguration(std::forward<VpcEgressConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  NetworkConnectorVpcEgressConfiguration m_vpcEgressConfiguration;
  bool m_vpcEgressConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
