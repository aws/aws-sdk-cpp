/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/VpcEncryptionControlExclusionState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes the exclusion configurations for the various resource types in the
 * account-level VPC Encryption Control configuration.</p> <p>For more information,
 * see <a
 * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-encryption-controls.html">Enforce
 * VPC encryption in transit</a> in the <i>Amazon VPC User Guide</i>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AccountVpcEncryptionControlExclusions">AWS
 * API Reference</a></p>
 */
class AccountVpcEncryptionControlExclusions {
 public:
  AWS_EC2_API AccountVpcEncryptionControlExclusions() = default;
  AWS_EC2_API AccountVpcEncryptionControlExclusions(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API AccountVpcEncryptionControlExclusions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The exclusion configuration for internet gateway resource.</p>
   */
  inline VpcEncryptionControlExclusionState GetInternetGateway() const { return m_internetGateway; }
  inline bool InternetGatewayHasBeenSet() const { return m_internetGatewayHasBeenSet; }
  inline void SetInternetGateway(VpcEncryptionControlExclusionState value) {
    m_internetGatewayHasBeenSet = true;
    m_internetGateway = value;
  }
  inline AccountVpcEncryptionControlExclusions& WithInternetGateway(VpcEncryptionControlExclusionState value) {
    SetInternetGateway(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exclusion configuration for egress-only internet gateway resource.</p>
   */
  inline VpcEncryptionControlExclusionState GetEgressOnlyInternetGateway() const { return m_egressOnlyInternetGateway; }
  inline bool EgressOnlyInternetGatewayHasBeenSet() const { return m_egressOnlyInternetGatewayHasBeenSet; }
  inline void SetEgressOnlyInternetGateway(VpcEncryptionControlExclusionState value) {
    m_egressOnlyInternetGatewayHasBeenSet = true;
    m_egressOnlyInternetGateway = value;
  }
  inline AccountVpcEncryptionControlExclusions& WithEgressOnlyInternetGateway(VpcEncryptionControlExclusionState value) {
    SetEgressOnlyInternetGateway(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exclusion configuration for NAT gateway resource.</p>
   */
  inline VpcEncryptionControlExclusionState GetNatGateway() const { return m_natGateway; }
  inline bool NatGatewayHasBeenSet() const { return m_natGatewayHasBeenSet; }
  inline void SetNatGateway(VpcEncryptionControlExclusionState value) {
    m_natGatewayHasBeenSet = true;
    m_natGateway = value;
  }
  inline AccountVpcEncryptionControlExclusions& WithNatGateway(VpcEncryptionControlExclusionState value) {
    SetNatGateway(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exclusion configuration for virtual private gateway resource.</p>
   */
  inline VpcEncryptionControlExclusionState GetVirtualPrivateGateway() const { return m_virtualPrivateGateway; }
  inline bool VirtualPrivateGatewayHasBeenSet() const { return m_virtualPrivateGatewayHasBeenSet; }
  inline void SetVirtualPrivateGateway(VpcEncryptionControlExclusionState value) {
    m_virtualPrivateGatewayHasBeenSet = true;
    m_virtualPrivateGateway = value;
  }
  inline AccountVpcEncryptionControlExclusions& WithVirtualPrivateGateway(VpcEncryptionControlExclusionState value) {
    SetVirtualPrivateGateway(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exclusion configuration for VPC peering connection resource.</p>
   */
  inline VpcEncryptionControlExclusionState GetVpcPeering() const { return m_vpcPeering; }
  inline bool VpcPeeringHasBeenSet() const { return m_vpcPeeringHasBeenSet; }
  inline void SetVpcPeering(VpcEncryptionControlExclusionState value) {
    m_vpcPeeringHasBeenSet = true;
    m_vpcPeering = value;
  }
  inline AccountVpcEncryptionControlExclusions& WithVpcPeering(VpcEncryptionControlExclusionState value) {
    SetVpcPeering(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exclusion configuration for Lambda service.</p>
   */
  inline VpcEncryptionControlExclusionState GetLambda() const { return m_lambda; }
  inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
  inline void SetLambda(VpcEncryptionControlExclusionState value) {
    m_lambdaHasBeenSet = true;
    m_lambda = value;
  }
  inline AccountVpcEncryptionControlExclusions& WithLambda(VpcEncryptionControlExclusionState value) {
    SetLambda(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exclusion configuration for VPC Lattice service.</p>
   */
  inline VpcEncryptionControlExclusionState GetVpcLattice() const { return m_vpcLattice; }
  inline bool VpcLatticeHasBeenSet() const { return m_vpcLatticeHasBeenSet; }
  inline void SetVpcLattice(VpcEncryptionControlExclusionState value) {
    m_vpcLatticeHasBeenSet = true;
    m_vpcLattice = value;
  }
  inline AccountVpcEncryptionControlExclusions& WithVpcLattice(VpcEncryptionControlExclusionState value) {
    SetVpcLattice(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exclusion configuration for Elastic File System service.</p>
   */
  inline VpcEncryptionControlExclusionState GetElasticFileSystem() const { return m_elasticFileSystem; }
  inline bool ElasticFileSystemHasBeenSet() const { return m_elasticFileSystemHasBeenSet; }
  inline void SetElasticFileSystem(VpcEncryptionControlExclusionState value) {
    m_elasticFileSystemHasBeenSet = true;
    m_elasticFileSystem = value;
  }
  inline AccountVpcEncryptionControlExclusions& WithElasticFileSystem(VpcEncryptionControlExclusionState value) {
    SetElasticFileSystem(value);
    return *this;
  }
  ///@}
 private:
  VpcEncryptionControlExclusionState m_internetGateway{VpcEncryptionControlExclusionState::NOT_SET};

  VpcEncryptionControlExclusionState m_egressOnlyInternetGateway{VpcEncryptionControlExclusionState::NOT_SET};

  VpcEncryptionControlExclusionState m_natGateway{VpcEncryptionControlExclusionState::NOT_SET};

  VpcEncryptionControlExclusionState m_virtualPrivateGateway{VpcEncryptionControlExclusionState::NOT_SET};

  VpcEncryptionControlExclusionState m_vpcPeering{VpcEncryptionControlExclusionState::NOT_SET};

  VpcEncryptionControlExclusionState m_lambda{VpcEncryptionControlExclusionState::NOT_SET};

  VpcEncryptionControlExclusionState m_vpcLattice{VpcEncryptionControlExclusionState::NOT_SET};

  VpcEncryptionControlExclusionState m_elasticFileSystem{VpcEncryptionControlExclusionState::NOT_SET};
  bool m_internetGatewayHasBeenSet = false;
  bool m_egressOnlyInternetGatewayHasBeenSet = false;
  bool m_natGatewayHasBeenSet = false;
  bool m_virtualPrivateGatewayHasBeenSet = false;
  bool m_vpcPeeringHasBeenSet = false;
  bool m_lambdaHasBeenSet = false;
  bool m_vpcLatticeHasBeenSet = false;
  bool m_elasticFileSystemHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
