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
 * <p>VPC_LATTICE egress configuration details in the response, containing the
 * Resource Configuration ARN and port number currently configured for the
 * connector.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribedConnectorVpcLatticeEgressConfig">AWS
 * API Reference</a></p>
 */
class DescribedConnectorVpcLatticeEgressConfig {
 public:
  AWS_TRANSFER_API DescribedConnectorVpcLatticeEgressConfig() = default;
  AWS_TRANSFER_API DescribedConnectorVpcLatticeEgressConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSFER_API DescribedConnectorVpcLatticeEgressConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>ARN of the VPC_LATTICE Resource Configuration currently used by the
   * connector. This Resource Configuration defines the network path to the SFTP
   * server through the customer's VPC.</p>
   */
  inline const Aws::String& GetResourceConfigurationArn() const { return m_resourceConfigurationArn; }
  inline bool ResourceConfigurationArnHasBeenSet() const { return m_resourceConfigurationArnHasBeenSet; }
  template <typename ResourceConfigurationArnT = Aws::String>
  void SetResourceConfigurationArn(ResourceConfigurationArnT&& value) {
    m_resourceConfigurationArnHasBeenSet = true;
    m_resourceConfigurationArn = std::forward<ResourceConfigurationArnT>(value);
  }
  template <typename ResourceConfigurationArnT = Aws::String>
  DescribedConnectorVpcLatticeEgressConfig& WithResourceConfigurationArn(ResourceConfigurationArnT&& value) {
    SetResourceConfigurationArn(std::forward<ResourceConfigurationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Port number currently configured for SFTP connections through VPC_LATTICE.
   * Shows the port on which the connector attempts to connect to the target SFTP
   * server.</p>
   */
  inline int GetPortNumber() const { return m_portNumber; }
  inline bool PortNumberHasBeenSet() const { return m_portNumberHasBeenSet; }
  inline void SetPortNumber(int value) {
    m_portNumberHasBeenSet = true;
    m_portNumber = value;
  }
  inline DescribedConnectorVpcLatticeEgressConfig& WithPortNumber(int value) {
    SetPortNumber(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceConfigurationArn;

  int m_portNumber{0};
  bool m_resourceConfigurationArnHasBeenSet = false;
  bool m_portNumberHasBeenSet = false;
};

}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
