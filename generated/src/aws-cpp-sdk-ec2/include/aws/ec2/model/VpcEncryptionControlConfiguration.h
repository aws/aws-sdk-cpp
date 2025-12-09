/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/VpcEncryptionControlExclusionStateInput.h>
#include <aws/ec2/model/VpcEncryptionControlMode.h>

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
 * <p>Describes the configuration settings for VPC Encryption Control.</p> <p>For
 * more information, see <a
 * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-encryption-controls.html">Enforce
 * VPC encryption in transit</a> in the <i>Amazon VPC User Guide</i>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpcEncryptionControlConfiguration">AWS
 * API Reference</a></p>
 */
class VpcEncryptionControlConfiguration {
 public:
  AWS_EC2_API VpcEncryptionControlConfiguration() = default;
  AWS_EC2_API VpcEncryptionControlConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API VpcEncryptionControlConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The encryption mode for the VPC Encryption Control configuration.</p>
   */
  inline VpcEncryptionControlMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(VpcEncryptionControlMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline VpcEncryptionControlConfiguration& WithMode(VpcEncryptionControlMode value) {
    SetMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to exclude internet gateway traffic from encryption
   * enforcement.</p>
   */
  inline VpcEncryptionControlExclusionStateInput GetInternetGatewayExclusion() const { return m_internetGatewayExclusion; }
  inline bool InternetGatewayExclusionHasBeenSet() const { return m_internetGatewayExclusionHasBeenSet; }
  inline void SetInternetGatewayExclusion(VpcEncryptionControlExclusionStateInput value) {
    m_internetGatewayExclusionHasBeenSet = true;
    m_internetGatewayExclusion = value;
  }
  inline VpcEncryptionControlConfiguration& WithInternetGatewayExclusion(VpcEncryptionControlExclusionStateInput value) {
    SetInternetGatewayExclusion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to exclude egress-only internet gateway traffic from
   * encryption enforcement.</p>
   */
  inline VpcEncryptionControlExclusionStateInput GetEgressOnlyInternetGatewayExclusion() const {
    return m_egressOnlyInternetGatewayExclusion;
  }
  inline bool EgressOnlyInternetGatewayExclusionHasBeenSet() const { return m_egressOnlyInternetGatewayExclusionHasBeenSet; }
  inline void SetEgressOnlyInternetGatewayExclusion(VpcEncryptionControlExclusionStateInput value) {
    m_egressOnlyInternetGatewayExclusionHasBeenSet = true;
    m_egressOnlyInternetGatewayExclusion = value;
  }
  inline VpcEncryptionControlConfiguration& WithEgressOnlyInternetGatewayExclusion(VpcEncryptionControlExclusionStateInput value) {
    SetEgressOnlyInternetGatewayExclusion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to exclude NAT gateway traffic from encryption
   * enforcement.</p>
   */
  inline VpcEncryptionControlExclusionStateInput GetNatGatewayExclusion() const { return m_natGatewayExclusion; }
  inline bool NatGatewayExclusionHasBeenSet() const { return m_natGatewayExclusionHasBeenSet; }
  inline void SetNatGatewayExclusion(VpcEncryptionControlExclusionStateInput value) {
    m_natGatewayExclusionHasBeenSet = true;
    m_natGatewayExclusion = value;
  }
  inline VpcEncryptionControlConfiguration& WithNatGatewayExclusion(VpcEncryptionControlExclusionStateInput value) {
    SetNatGatewayExclusion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to exclude virtual private gateway traffic from encryption
   * enforcement.</p>
   */
  inline VpcEncryptionControlExclusionStateInput GetVirtualPrivateGatewayExclusion() const { return m_virtualPrivateGatewayExclusion; }
  inline bool VirtualPrivateGatewayExclusionHasBeenSet() const { return m_virtualPrivateGatewayExclusionHasBeenSet; }
  inline void SetVirtualPrivateGatewayExclusion(VpcEncryptionControlExclusionStateInput value) {
    m_virtualPrivateGatewayExclusionHasBeenSet = true;
    m_virtualPrivateGatewayExclusion = value;
  }
  inline VpcEncryptionControlConfiguration& WithVirtualPrivateGatewayExclusion(VpcEncryptionControlExclusionStateInput value) {
    SetVirtualPrivateGatewayExclusion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to exclude VPC peering connection traffic from encryption
   * enforcement.</p>
   */
  inline VpcEncryptionControlExclusionStateInput GetVpcPeeringExclusion() const { return m_vpcPeeringExclusion; }
  inline bool VpcPeeringExclusionHasBeenSet() const { return m_vpcPeeringExclusionHasBeenSet; }
  inline void SetVpcPeeringExclusion(VpcEncryptionControlExclusionStateInput value) {
    m_vpcPeeringExclusionHasBeenSet = true;
    m_vpcPeeringExclusion = value;
  }
  inline VpcEncryptionControlConfiguration& WithVpcPeeringExclusion(VpcEncryptionControlExclusionStateInput value) {
    SetVpcPeeringExclusion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to exclude Lambda function traffic from encryption
   * enforcement.</p>
   */
  inline VpcEncryptionControlExclusionStateInput GetLambdaExclusion() const { return m_lambdaExclusion; }
  inline bool LambdaExclusionHasBeenSet() const { return m_lambdaExclusionHasBeenSet; }
  inline void SetLambdaExclusion(VpcEncryptionControlExclusionStateInput value) {
    m_lambdaExclusionHasBeenSet = true;
    m_lambdaExclusion = value;
  }
  inline VpcEncryptionControlConfiguration& WithLambdaExclusion(VpcEncryptionControlExclusionStateInput value) {
    SetLambdaExclusion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to exclude VPC Lattice traffic from encryption
   * enforcement.</p>
   */
  inline VpcEncryptionControlExclusionStateInput GetVpcLatticeExclusion() const { return m_vpcLatticeExclusion; }
  inline bool VpcLatticeExclusionHasBeenSet() const { return m_vpcLatticeExclusionHasBeenSet; }
  inline void SetVpcLatticeExclusion(VpcEncryptionControlExclusionStateInput value) {
    m_vpcLatticeExclusionHasBeenSet = true;
    m_vpcLatticeExclusion = value;
  }
  inline VpcEncryptionControlConfiguration& WithVpcLatticeExclusion(VpcEncryptionControlExclusionStateInput value) {
    SetVpcLatticeExclusion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to exclude Elastic File System traffic from encryption
   * enforcement.</p>
   */
  inline VpcEncryptionControlExclusionStateInput GetElasticFileSystemExclusion() const { return m_elasticFileSystemExclusion; }
  inline bool ElasticFileSystemExclusionHasBeenSet() const { return m_elasticFileSystemExclusionHasBeenSet; }
  inline void SetElasticFileSystemExclusion(VpcEncryptionControlExclusionStateInput value) {
    m_elasticFileSystemExclusionHasBeenSet = true;
    m_elasticFileSystemExclusion = value;
  }
  inline VpcEncryptionControlConfiguration& WithElasticFileSystemExclusion(VpcEncryptionControlExclusionStateInput value) {
    SetElasticFileSystemExclusion(value);
    return *this;
  }
  ///@}
 private:
  VpcEncryptionControlMode m_mode{VpcEncryptionControlMode::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_internetGatewayExclusion{VpcEncryptionControlExclusionStateInput::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_egressOnlyInternetGatewayExclusion{VpcEncryptionControlExclusionStateInput::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_natGatewayExclusion{VpcEncryptionControlExclusionStateInput::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_virtualPrivateGatewayExclusion{VpcEncryptionControlExclusionStateInput::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_vpcPeeringExclusion{VpcEncryptionControlExclusionStateInput::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_lambdaExclusion{VpcEncryptionControlExclusionStateInput::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_vpcLatticeExclusion{VpcEncryptionControlExclusionStateInput::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_elasticFileSystemExclusion{VpcEncryptionControlExclusionStateInput::NOT_SET};
  bool m_modeHasBeenSet = false;
  bool m_internetGatewayExclusionHasBeenSet = false;
  bool m_egressOnlyInternetGatewayExclusionHasBeenSet = false;
  bool m_natGatewayExclusionHasBeenSet = false;
  bool m_virtualPrivateGatewayExclusionHasBeenSet = false;
  bool m_vpcPeeringExclusionHasBeenSet = false;
  bool m_lambdaExclusionHasBeenSet = false;
  bool m_vpcLatticeExclusionHasBeenSet = false;
  bool m_elasticFileSystemExclusionHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
