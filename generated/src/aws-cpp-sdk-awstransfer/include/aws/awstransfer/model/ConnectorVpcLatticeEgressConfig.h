/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Transfer
{
namespace Model
{

  /**
   * <p>VPC_LATTICE egress configuration that specifies the Resource Configuration
   * ARN and port for connecting to SFTP servers through customer VPCs. Requires a
   * valid Resource Configuration with appropriate network access.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ConnectorVpcLatticeEgressConfig">AWS
   * API Reference</a></p>
   */
  class ConnectorVpcLatticeEgressConfig
  {
  public:
    AWS_TRANSFER_API ConnectorVpcLatticeEgressConfig() = default;
    AWS_TRANSFER_API ConnectorVpcLatticeEgressConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ConnectorVpcLatticeEgressConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of the VPC_LATTICE Resource Configuration that defines the target SFTP
     * server location. Must point to a valid Resource Configuration in the customer's
     * VPC with appropriate network connectivity to the SFTP server.</p>
     */
    inline const Aws::String& GetResourceConfigurationArn() const { return m_resourceConfigurationArn; }
    inline bool ResourceConfigurationArnHasBeenSet() const { return m_resourceConfigurationArnHasBeenSet; }
    template<typename ResourceConfigurationArnT = Aws::String>
    void SetResourceConfigurationArn(ResourceConfigurationArnT&& value) { m_resourceConfigurationArnHasBeenSet = true; m_resourceConfigurationArn = std::forward<ResourceConfigurationArnT>(value); }
    template<typename ResourceConfigurationArnT = Aws::String>
    ConnectorVpcLatticeEgressConfig& WithResourceConfigurationArn(ResourceConfigurationArnT&& value) { SetResourceConfigurationArn(std::forward<ResourceConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Port number for connecting to the SFTP server through VPC_LATTICE. Defaults
     * to 22 if not specified. Must match the port on which the target SFTP server is
     * listening.</p>
     */
    inline int GetPortNumber() const { return m_portNumber; }
    inline bool PortNumberHasBeenSet() const { return m_portNumberHasBeenSet; }
    inline void SetPortNumber(int value) { m_portNumberHasBeenSet = true; m_portNumber = value; }
    inline ConnectorVpcLatticeEgressConfig& WithPortNumber(int value) { SetPortNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceConfigurationArn;
    bool m_resourceConfigurationArnHasBeenSet = false;

    int m_portNumber{0};
    bool m_portNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
