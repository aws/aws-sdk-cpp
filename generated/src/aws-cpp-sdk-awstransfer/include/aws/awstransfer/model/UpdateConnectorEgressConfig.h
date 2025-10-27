/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/UpdateConnectorVpcLatticeEgressConfig.h>

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
 * <p>Structure for updating the egress configuration of an existing connector.
 * Allows modification of how traffic is routed from the connector to the SFTP
 * server, including VPC_LATTICE settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/UpdateConnectorEgressConfig">AWS
 * API Reference</a></p>
 */
class UpdateConnectorEgressConfig {
 public:
  AWS_TRANSFER_API UpdateConnectorEgressConfig() = default;
  AWS_TRANSFER_API UpdateConnectorEgressConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSFER_API UpdateConnectorEgressConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>VPC_LATTICE configuration updates for the connector. Use this to modify the
   * Resource Configuration ARN or port number for VPC-based connectivity.</p>
   */
  inline const UpdateConnectorVpcLatticeEgressConfig& GetVpcLattice() const { return m_vpcLattice; }
  inline bool VpcLatticeHasBeenSet() const { return m_vpcLatticeHasBeenSet; }
  template <typename VpcLatticeT = UpdateConnectorVpcLatticeEgressConfig>
  void SetVpcLattice(VpcLatticeT&& value) {
    m_vpcLatticeHasBeenSet = true;
    m_vpcLattice = std::forward<VpcLatticeT>(value);
  }
  template <typename VpcLatticeT = UpdateConnectorVpcLatticeEgressConfig>
  UpdateConnectorEgressConfig& WithVpcLattice(VpcLatticeT&& value) {
    SetVpcLattice(std::forward<VpcLatticeT>(value));
    return *this;
  }
  ///@}
 private:
  UpdateConnectorVpcLatticeEgressConfig m_vpcLattice;
  bool m_vpcLatticeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
