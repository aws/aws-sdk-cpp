/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/VpcEncryptionControlExclusionStateInput.h>
#include <aws/ec2/model/VpcEncryptionControlMode.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class ModifyVpcEncryptionControlRequest : public EC2Request {
 public:
  AWS_EC2_API ModifyVpcEncryptionControlRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ModifyVpcEncryptionControl"; }

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
  inline ModifyVpcEncryptionControlRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the VPC Encryption Control resource to modify.</p>
   */
  inline const Aws::String& GetVpcEncryptionControlId() const { return m_vpcEncryptionControlId; }
  inline bool VpcEncryptionControlIdHasBeenSet() const { return m_vpcEncryptionControlIdHasBeenSet; }
  template <typename VpcEncryptionControlIdT = Aws::String>
  void SetVpcEncryptionControlId(VpcEncryptionControlIdT&& value) {
    m_vpcEncryptionControlIdHasBeenSet = true;
    m_vpcEncryptionControlId = std::forward<VpcEncryptionControlIdT>(value);
  }
  template <typename VpcEncryptionControlIdT = Aws::String>
  ModifyVpcEncryptionControlRequest& WithVpcEncryptionControlId(VpcEncryptionControlIdT&& value) {
    SetVpcEncryptionControlId(std::forward<VpcEncryptionControlIdT>(value));
    return *this;
  }
  ///@}

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
  inline ModifyVpcEncryptionControlRequest& WithMode(VpcEncryptionControlMode value) {
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
  inline ModifyVpcEncryptionControlRequest& WithInternetGatewayExclusion(VpcEncryptionControlExclusionStateInput value) {
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
  inline ModifyVpcEncryptionControlRequest& WithEgressOnlyInternetGatewayExclusion(VpcEncryptionControlExclusionStateInput value) {
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
  inline ModifyVpcEncryptionControlRequest& WithNatGatewayExclusion(VpcEncryptionControlExclusionStateInput value) {
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
  inline ModifyVpcEncryptionControlRequest& WithVirtualPrivateGatewayExclusion(VpcEncryptionControlExclusionStateInput value) {
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
  inline ModifyVpcEncryptionControlRequest& WithVpcPeeringExclusion(VpcEncryptionControlExclusionStateInput value) {
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
  inline ModifyVpcEncryptionControlRequest& WithLambdaExclusion(VpcEncryptionControlExclusionStateInput value) {
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
  inline ModifyVpcEncryptionControlRequest& WithVpcLatticeExclusion(VpcEncryptionControlExclusionStateInput value) {
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
  inline ModifyVpcEncryptionControlRequest& WithElasticFileSystemExclusion(VpcEncryptionControlExclusionStateInput value) {
    SetElasticFileSystemExclusion(value);
    return *this;
  }
  ///@}
 private:
  bool m_dryRun{false};

  Aws::String m_vpcEncryptionControlId;

  VpcEncryptionControlMode m_mode{VpcEncryptionControlMode::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_internetGatewayExclusion{VpcEncryptionControlExclusionStateInput::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_egressOnlyInternetGatewayExclusion{VpcEncryptionControlExclusionStateInput::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_natGatewayExclusion{VpcEncryptionControlExclusionStateInput::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_virtualPrivateGatewayExclusion{VpcEncryptionControlExclusionStateInput::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_vpcPeeringExclusion{VpcEncryptionControlExclusionStateInput::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_lambdaExclusion{VpcEncryptionControlExclusionStateInput::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_vpcLatticeExclusion{VpcEncryptionControlExclusionStateInput::NOT_SET};

  VpcEncryptionControlExclusionStateInput m_elasticFileSystemExclusion{VpcEncryptionControlExclusionStateInput::NOT_SET};
  bool m_dryRunHasBeenSet = false;
  bool m_vpcEncryptionControlIdHasBeenSet = false;
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
