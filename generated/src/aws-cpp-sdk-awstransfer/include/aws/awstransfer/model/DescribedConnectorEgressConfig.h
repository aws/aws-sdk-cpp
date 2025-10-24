/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/DescribedConnectorVpcLatticeEgressConfig.h>

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
 * <p>Response structure containing the current egress configuration details for
 * the connector. Shows how traffic is currently routed from the connector to the
 * SFTP server.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribedConnectorEgressConfig">AWS
 * API Reference</a></p>
 */
class DescribedConnectorEgressConfig {
 public:
  AWS_TRANSFER_API DescribedConnectorEgressConfig() = default;
  AWS_TRANSFER_API DescribedConnectorEgressConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSFER_API DescribedConnectorEgressConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>VPC_LATTICE configuration details in the response, showing the current
   * Resource Configuration ARN and port settings for VPC-based connectivity.</p>
   */
  inline const DescribedConnectorVpcLatticeEgressConfig& GetVpcLattice() const { return m_vpcLattice; }
  inline bool VpcLatticeHasBeenSet() const { return m_vpcLatticeHasBeenSet; }
  template <typename VpcLatticeT = DescribedConnectorVpcLatticeEgressConfig>
  void SetVpcLattice(VpcLatticeT&& value) {
    m_vpcLatticeHasBeenSet = true;
    m_vpcLattice = std::forward<VpcLatticeT>(value);
  }
  template <typename VpcLatticeT = DescribedConnectorVpcLatticeEgressConfig>
  DescribedConnectorEgressConfig& WithVpcLattice(VpcLatticeT&& value) {
    SetVpcLattice(std::forward<VpcLatticeT>(value));
    return *this;
  }
  ///@}
 private:
  DescribedConnectorVpcLatticeEgressConfig m_vpcLattice;
  bool m_vpcLatticeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
