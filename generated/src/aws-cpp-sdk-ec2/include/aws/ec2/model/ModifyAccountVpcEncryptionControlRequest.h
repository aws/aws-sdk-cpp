/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/AccountVpcEncryptionControlMode.h>
#include <aws/ec2/model/VpcEncryptionControlExclusionStateInput.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class ModifyAccountVpcEncryptionControlRequest : public EC2Request {
 public:
  AWS_EC2_API ModifyAccountVpcEncryptionControlRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ModifyAccountVpcEncryptionControl"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>Checks whether you have the required permissions for the action, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline ModifyAccountVpcEncryptionControlRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption mode for the account encryption control configuration.</p>
   */
  inline AccountVpcEncryptionControlMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(AccountVpcEncryptionControlMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline ModifyAccountVpcEncryptionControlRequest& WithMode(AccountVpcEncryptionControlMode value) {
    SetMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to exclude internet gateway resource from account-level
   * encryption enforcement.</p>
   */
  inline VpcEncryptionControlExclusionStateInput GetInternetGateway() const { return m_internetGateway; }
  inline bool InternetGatewayHasBeenSet() const { return m_internetGatewayHasBeenSet; }
  inline void SetInternetGateway(VpcEncryptionControlExclusionStateInput value) {
    m_internetGatewayHasBeenSet = true;
    m_internetGateway = value;
  }
  inline ModifyAccountVpcEncryptionControlRequest& WithInternetGateway(VpcEncryptionControlExclusionStateInput value) {
    SetInternetGateway(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to exclude egress-only internet gateway resource from
   * account-level encryption enforcement.</p>
   */
  inline VpcEncryptionControlExclusionStateInput GetEgressOnlyInternetGateway() const { return m_egressOnlyInternetGateway; }
  inline bool EgressOnlyInternetGatewayHasBeenSet() const { return m_egressOnlyInternetGatewayHasBeenSet; }
  inline void SetEgressOnlyInternetGateway(VpcEncryptionControlExclusionStateInput value) {
    m_egressOnlyInternetGatewayHasBeenSet = true;
    m_egressOnlyInternetGateway = value;
  }
  inline ModifyAccountVpcEncryptionControlRequest& WithEgressOnlyInternetGateway(VpcEncryptionControlExclusionStateInput value) {
    SetEgressOnlyInternetGateway(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to exclude NAT gateway resource from account-level
   * encryption enforcement.</p>
   */
  inline VpcEncryptionControlExclusionStateInput GetNatGateway() const { return m_natGateway; }
  inline bool NatGatewayHasBeenSet() const { return m_natGatewayHasBeenSet; }
  inline void SetNatGateway(VpcEncryptionControlExclusionStateInput value) {
    m_natGatewayHasBeenSet = true;
    m_natGateway = value;
  }
  inline ModifyAccountVpcEncryptionControlRequest& WithNatGateway(VpcEncryptionControlExclusionStateInput value) {
    SetNatGateway(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to exclude virtual private gateway resource from
   * account-level encryption enforcement.</p>
   */
  inline VpcEncryptionControlExclusionStateInput GetVirtualPrivateGateway() const { return m_virtualPrivateGateway; }
  inline bool VirtualPrivateGatewayHasBeenSet() const { return m_virtualPrivateGatewayHasBeenSet; }
  inline void SetVirtualPrivateGateway(VpcEncryptionControlExclusionStateInput value) {
    m_virtualPrivateGatewayHasBeenSet = true;
    m_virtualPrivateGateway = value;
  }
  inline ModifyAccountVpcEncryptionControlRequest& WithVirtualPrivateGateway(VpcEncryptionControlExclusionStateInput value) {
    SetVirtualPrivateGateway(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to exclude VPC peering connection resource from
   * account-level encryption enforcement.</p>
   */
  inline VpcEncryptionControlExclusionStateInput GetVpcPeering() const { return m_vpcPeering; }
  inline bool VpcPeeringHasBeenSet() const { return m_vpcPeeringHasBeenSet; }
  inline void SetVpcPeering(VpcEncryptionControlExclusionStateInput value) {
    m_vpcPeeringHasBeenSet = true;
    m_vpcPeering = value;
  }
  inline ModifyAccountVpcEncryptionControlRequest& WithVpcPeering(VpcEncryptionControlExclusionStateInput value) {
    SetVpcPeering(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to exclude Lambda service from account-level encryption
   * enforcement.</p>
   */
  inline VpcEncryptionControlExclusionStateInput GetLambda() const { return m_lambda; }
  inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
  inline void SetLambda(VpcEncryptionControlExclusionStateInput value) {
    m_lambdaHasBeenSet = true;
    m_lambda = value;
  }
  inline ModifyAccountVpcEncryptionControlRequest& WithLambda(VpcEncryptionControlExclusionStateInput value) {
    SetLambda(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to exclude VPC Lattice service from account-level
   * encryption enforcement.</p>
   */
  inline VpcEncryptionControlExclusionStateInput GetVpcLattice() const { return m_vpcLattice; }
  inline bool VpcLatticeHasBeenSet() const { return m_vpcLatticeHasBeenSet; }
  inline void SetVpcLattice(VpcEncryptionControlExclusionStateInput value) {
    m_vpcLatticeHasBeenSet = true;
    m_vpcLattice = value;
  }
  inline ModifyAccountVpcEncryptionControlRequest& WithVpcLattice(VpcEncryptionControlExclusionStateInput value) {
    SetVpcLattice(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to exclude Elastic File System service from account-level
   * encryption enforcement.</p>
   */
  inline VpcEncryptionControlExclusionStateInput GetElasticFileSystem() const { return m_elasticFileSystem; }
  inline bool ElasticFileSystemHasBeenSet() const { return m_elasticFileSystemHasBeenSet; }
  inline void SetElasticFileSystem(VpcEncryptionControlExclusionStateInput value) {
    m_elasticFileSystemHasBeenSet = true;
    m_elasticFileSystem = value;
  }
  inline ModifyAccountVpcEncryptionControlRequest& WithElasticFileSystem(VpcEncryptionControlExclusionStateInput value) {
    SetElasticFileSystem(value);
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};

  AccountVpcEncryptionControlMode m_mode{AccountVpcEncryptionControlMode::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_internetGateway{VpcEncryptionControlExclusionStateInput::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_egressOnlyInternetGateway{VpcEncryptionControlExclusionStateInput::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_natGateway{VpcEncryptionControlExclusionStateInput::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_virtualPrivateGateway{VpcEncryptionControlExclusionStateInput::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_vpcPeering{VpcEncryptionControlExclusionStateInput::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_lambda{VpcEncryptionControlExclusionStateInput::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_vpcLattice{VpcEncryptionControlExclusionStateInput::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_elasticFileSystem{VpcEncryptionControlExclusionStateInput::NOT_SET};
  bool m_dryRunHasBeenSet = false;
  bool m_modeHasBeenSet = false;
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
