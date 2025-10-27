/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>VPC_LATTICE egress configuration updates for modifying how the connector
 * routes traffic through customer VPCs. Changes to these settings may require
 * connector restart to take effect.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/UpdateConnectorVpcLatticeEgressConfig">AWS
 * API Reference</a></p>
 */
class UpdateConnectorVpcLatticeEgressConfig {
 public:
  AWS_TRANSFER_API UpdateConnectorVpcLatticeEgressConfig() = default;
  AWS_TRANSFER_API UpdateConnectorVpcLatticeEgressConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSFER_API UpdateConnectorVpcLatticeEgressConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Updated ARN of the VPC_LATTICE Resource Configuration. Use this to change the
   * target SFTP server location or modify the network path through the customer's
   * VPC infrastructure.</p>
   */
  inline const Aws::String& GetResourceConfigurationArn() const { return m_resourceConfigurationArn; }
  inline bool ResourceConfigurationArnHasBeenSet() const { return m_resourceConfigurationArnHasBeenSet; }
  template <typename ResourceConfigurationArnT = Aws::String>
  void SetResourceConfigurationArn(ResourceConfigurationArnT&& value) {
    m_resourceConfigurationArnHasBeenSet = true;
    m_resourceConfigurationArn = std::forward<ResourceConfigurationArnT>(value);
  }
  template <typename ResourceConfigurationArnT = Aws::String>
  UpdateConnectorVpcLatticeEgressConfig& WithResourceConfigurationArn(ResourceConfigurationArnT&& value) {
    SetResourceConfigurationArn(std::forward<ResourceConfigurationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updated port number for SFTP connections through VPC_LATTICE. Change this if
   * the target SFTP server port has been modified or if connecting to a different
   * server endpoint.</p>
   */
  inline int GetPortNumber() const { return m_portNumber; }
  inline bool PortNumberHasBeenSet() const { return m_portNumberHasBeenSet; }
  inline void SetPortNumber(int value) {
    m_portNumberHasBeenSet = true;
    m_portNumber = value;
  }
  inline UpdateConnectorVpcLatticeEgressConfig& WithPortNumber(int value) {
    SetPortNumber(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceConfigurationArn;
  bool m_resourceConfigurationArnHasBeenSet = false;

  int m_portNumber{0};
  bool m_portNumberHasBeenSet = false;
};

}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
