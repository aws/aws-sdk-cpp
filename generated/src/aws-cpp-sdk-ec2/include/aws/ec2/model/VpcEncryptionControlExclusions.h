/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/VpcEncryptionControlExclusion.h>

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
 * <p>Describes the exclusion configurations for various resource types in VPC
 * Encryption Control.</p> <p>For more information, see <a
 * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-encryption-controls.html">Enforce
 * VPC encryption in transit</a> in the <i>Amazon VPC User Guide</i>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpcEncryptionControlExclusions">AWS
 * API Reference</a></p>
 */
class VpcEncryptionControlExclusions {
 public:
  AWS_EC2_API VpcEncryptionControlExclusions() = default;
  AWS_EC2_API VpcEncryptionControlExclusions(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API VpcEncryptionControlExclusions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The exclusion configuration for internet gateway traffic.</p>
   */
  inline const VpcEncryptionControlExclusion& GetInternetGateway() const { return m_internetGateway; }
  inline bool InternetGatewayHasBeenSet() const { return m_internetGatewayHasBeenSet; }
  template <typename InternetGatewayT = VpcEncryptionControlExclusion>
  void SetInternetGateway(InternetGatewayT&& value) {
    m_internetGatewayHasBeenSet = true;
    m_internetGateway = std::forward<InternetGatewayT>(value);
  }
  template <typename InternetGatewayT = VpcEncryptionControlExclusion>
  VpcEncryptionControlExclusions& WithInternetGateway(InternetGatewayT&& value) {
    SetInternetGateway(std::forward<InternetGatewayT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exclusion configuration for egress-only internet gateway traffic.</p>
   */
  inline const VpcEncryptionControlExclusion& GetEgressOnlyInternetGateway() const { return m_egressOnlyInternetGateway; }
  inline bool EgressOnlyInternetGatewayHasBeenSet() const { return m_egressOnlyInternetGatewayHasBeenSet; }
  template <typename EgressOnlyInternetGatewayT = VpcEncryptionControlExclusion>
  void SetEgressOnlyInternetGateway(EgressOnlyInternetGatewayT&& value) {
    m_egressOnlyInternetGatewayHasBeenSet = true;
    m_egressOnlyInternetGateway = std::forward<EgressOnlyInternetGatewayT>(value);
  }
  template <typename EgressOnlyInternetGatewayT = VpcEncryptionControlExclusion>
  VpcEncryptionControlExclusions& WithEgressOnlyInternetGateway(EgressOnlyInternetGatewayT&& value) {
    SetEgressOnlyInternetGateway(std::forward<EgressOnlyInternetGatewayT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exclusion configuration for NAT gateway traffic.</p>
   */
  inline const VpcEncryptionControlExclusion& GetNatGateway() const { return m_natGateway; }
  inline bool NatGatewayHasBeenSet() const { return m_natGatewayHasBeenSet; }
  template <typename NatGatewayT = VpcEncryptionControlExclusion>
  void SetNatGateway(NatGatewayT&& value) {
    m_natGatewayHasBeenSet = true;
    m_natGateway = std::forward<NatGatewayT>(value);
  }
  template <typename NatGatewayT = VpcEncryptionControlExclusion>
  VpcEncryptionControlExclusions& WithNatGateway(NatGatewayT&& value) {
    SetNatGateway(std::forward<NatGatewayT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exclusion configuration for virtual private gateway traffic.</p>
   */
  inline const VpcEncryptionControlExclusion& GetVirtualPrivateGateway() const { return m_virtualPrivateGateway; }
  inline bool VirtualPrivateGatewayHasBeenSet() const { return m_virtualPrivateGatewayHasBeenSet; }
  template <typename VirtualPrivateGatewayT = VpcEncryptionControlExclusion>
  void SetVirtualPrivateGateway(VirtualPrivateGatewayT&& value) {
    m_virtualPrivateGatewayHasBeenSet = true;
    m_virtualPrivateGateway = std::forward<VirtualPrivateGatewayT>(value);
  }
  template <typename VirtualPrivateGatewayT = VpcEncryptionControlExclusion>
  VpcEncryptionControlExclusions& WithVirtualPrivateGateway(VirtualPrivateGatewayT&& value) {
    SetVirtualPrivateGateway(std::forward<VirtualPrivateGatewayT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exclusion configuration for VPC peering connection traffic.</p>
   */
  inline const VpcEncryptionControlExclusion& GetVpcPeering() const { return m_vpcPeering; }
  inline bool VpcPeeringHasBeenSet() const { return m_vpcPeeringHasBeenSet; }
  template <typename VpcPeeringT = VpcEncryptionControlExclusion>
  void SetVpcPeering(VpcPeeringT&& value) {
    m_vpcPeeringHasBeenSet = true;
    m_vpcPeering = std::forward<VpcPeeringT>(value);
  }
  template <typename VpcPeeringT = VpcEncryptionControlExclusion>
  VpcEncryptionControlExclusions& WithVpcPeering(VpcPeeringT&& value) {
    SetVpcPeering(std::forward<VpcPeeringT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exclusion configuration for Lambda function traffic.</p>
   */
  inline const VpcEncryptionControlExclusion& GetLambda() const { return m_lambda; }
  inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
  template <typename LambdaT = VpcEncryptionControlExclusion>
  void SetLambda(LambdaT&& value) {
    m_lambdaHasBeenSet = true;
    m_lambda = std::forward<LambdaT>(value);
  }
  template <typename LambdaT = VpcEncryptionControlExclusion>
  VpcEncryptionControlExclusions& WithLambda(LambdaT&& value) {
    SetLambda(std::forward<LambdaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exclusion configuration for VPC Lattice traffic.</p>
   */
  inline const VpcEncryptionControlExclusion& GetVpcLattice() const { return m_vpcLattice; }
  inline bool VpcLatticeHasBeenSet() const { return m_vpcLatticeHasBeenSet; }
  template <typename VpcLatticeT = VpcEncryptionControlExclusion>
  void SetVpcLattice(VpcLatticeT&& value) {
    m_vpcLatticeHasBeenSet = true;
    m_vpcLattice = std::forward<VpcLatticeT>(value);
  }
  template <typename VpcLatticeT = VpcEncryptionControlExclusion>
  VpcEncryptionControlExclusions& WithVpcLattice(VpcLatticeT&& value) {
    SetVpcLattice(std::forward<VpcLatticeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exclusion configuration for Elastic File System traffic.</p>
   */
  inline const VpcEncryptionControlExclusion& GetElasticFileSystem() const { return m_elasticFileSystem; }
  inline bool ElasticFileSystemHasBeenSet() const { return m_elasticFileSystemHasBeenSet; }
  template <typename ElasticFileSystemT = VpcEncryptionControlExclusion>
  void SetElasticFileSystem(ElasticFileSystemT&& value) {
    m_elasticFileSystemHasBeenSet = true;
    m_elasticFileSystem = std::forward<ElasticFileSystemT>(value);
  }
  template <typename ElasticFileSystemT = VpcEncryptionControlExclusion>
  VpcEncryptionControlExclusions& WithElasticFileSystem(ElasticFileSystemT&& value) {
    SetElasticFileSystem(std::forward<ElasticFileSystemT>(value));
    return *this;
  }
  ///@}
 private:
  VpcEncryptionControlExclusion m_internetGateway;
  bool m_internetGatewayHasBeenSet = false;

  VpcEncryptionControlExclusion m_egressOnlyInternetGateway;
  bool m_egressOnlyInternetGatewayHasBeenSet = false;

  VpcEncryptionControlExclusion m_natGateway;
  bool m_natGatewayHasBeenSet = false;

  VpcEncryptionControlExclusion m_virtualPrivateGateway;
  bool m_virtualPrivateGatewayHasBeenSet = false;

  VpcEncryptionControlExclusion m_vpcPeering;
  bool m_vpcPeeringHasBeenSet = false;

  VpcEncryptionControlExclusion m_lambda;
  bool m_lambdaHasBeenSet = false;

  VpcEncryptionControlExclusion m_vpcLattice;
  bool m_vpcLatticeHasBeenSet = false;

  VpcEncryptionControlExclusion m_elasticFileSystem;
  bool m_elasticFileSystemHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
