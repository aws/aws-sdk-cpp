/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/ConnectorVpcLatticeEgressConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Transfer {
namespace Model {

/**
 * <p>Configuration structure that defines how traffic is routed from the connector
 * to the SFTP server. Contains VPC Lattice settings when using VPC_LATTICE egress
 * type for private connectivity through customer VPCs.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ConnectorEgressConfig">AWS
 * API Reference</a></p>
 */
class ConnectorEgressConfig {
 public:
  AWS_TRANSFER_API ConnectorEgressConfig() = default;
  AWS_TRANSFER_API ConnectorEgressConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSFER_API ConnectorEgressConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>VPC_LATTICE configuration for routing connector traffic through customer
   * VPCs. Enables private connectivity to SFTP servers without requiring public
   * internet access or complex network configurations.</p>
   */
  inline const ConnectorVpcLatticeEgressConfig& GetVpcLattice() const { return m_vpcLattice; }
  inline bool VpcLatticeHasBeenSet() const { return m_vpcLatticeHasBeenSet; }
  template <typename VpcLatticeT = ConnectorVpcLatticeEgressConfig>
  void SetVpcLattice(VpcLatticeT&& value) {
    m_vpcLatticeHasBeenSet = true;
    m_vpcLattice = std::forward<VpcLatticeT>(value);
  }
  template <typename VpcLatticeT = ConnectorVpcLatticeEgressConfig>
  ConnectorEgressConfig& WithVpcLattice(VpcLatticeT&& value) {
    SetVpcLattice(std::forward<VpcLatticeT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectorVpcLatticeEgressConfig m_vpcLattice;
  bool m_vpcLatticeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
