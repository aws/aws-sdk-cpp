/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>The VPC configuration that Amazon Inspector uses to connect to a source code
 * repository provider that is hosted in a private network.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CodeSecurityIntegrationVpcConfiguration">AWS
 * API Reference</a></p>
 */
class CodeSecurityIntegrationVpcConfiguration {
 public:
  AWS_INSPECTOR2_API CodeSecurityIntegrationVpcConfiguration() = default;
  AWS_INSPECTOR2_API CodeSecurityIntegrationVpcConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API CodeSecurityIntegrationVpcConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the VPC that Amazon Inspector connects through to reach the
   * repository provider.</p>
   */
  inline const Aws::String& GetVpcId() const { return m_vpcId; }
  inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
  template <typename VpcIdT = Aws::String>
  void SetVpcId(VpcIdT&& value) {
    m_vpcIdHasBeenSet = true;
    m_vpcId = std::forward<VpcIdT>(value);
  }
  template <typename VpcIdT = Aws::String>
  CodeSecurityIntegrationVpcConfiguration& WithVpcId(VpcIdT&& value) {
    SetVpcId(std::forward<VpcIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the VPC endpoint used for the connection.</p>
   */
  inline const Aws::String& GetVpcEndpointId() const { return m_vpcEndpointId; }
  inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }
  template <typename VpcEndpointIdT = Aws::String>
  void SetVpcEndpointId(VpcEndpointIdT&& value) {
    m_vpcEndpointIdHasBeenSet = true;
    m_vpcEndpointId = std::forward<VpcEndpointIdT>(value);
  }
  template <typename VpcEndpointIdT = Aws::String>
  CodeSecurityIntegrationVpcConfiguration& WithVpcEndpointId(VpcEndpointIdT&& value) {
    SetVpcEndpointId(std::forward<VpcEndpointIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the AWS CodeConnections host used for the
   * connection.</p>
   */
  inline const Aws::String& GetCodeConnectionsHostArn() const { return m_codeConnectionsHostArn; }
  inline bool CodeConnectionsHostArnHasBeenSet() const { return m_codeConnectionsHostArnHasBeenSet; }
  template <typename CodeConnectionsHostArnT = Aws::String>
  void SetCodeConnectionsHostArn(CodeConnectionsHostArnT&& value) {
    m_codeConnectionsHostArnHasBeenSet = true;
    m_codeConnectionsHostArn = std::forward<CodeConnectionsHostArnT>(value);
  }
  template <typename CodeConnectionsHostArnT = Aws::String>
  CodeSecurityIntegrationVpcConfiguration& WithCodeConnectionsHostArn(CodeConnectionsHostArnT&& value) {
    SetCodeConnectionsHostArn(std::forward<CodeConnectionsHostArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the subnets used for the connection.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
  inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  void SetSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds = std::forward<SubnetIdsT>(value);
  }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  CodeSecurityIntegrationVpcConfiguration& WithSubnetIds(SubnetIdsT&& value) {
    SetSubnetIds(std::forward<SubnetIdsT>(value));
    return *this;
  }
  template <typename SubnetIdsT = Aws::String>
  CodeSecurityIntegrationVpcConfiguration& AddSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the security groups used for the connection.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
  inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
  template <typename SecurityGroupsT = Aws::Vector<Aws::String>>
  void SetSecurityGroups(SecurityGroupsT&& value) {
    m_securityGroupsHasBeenSet = true;
    m_securityGroups = std::forward<SecurityGroupsT>(value);
  }
  template <typename SecurityGroupsT = Aws::Vector<Aws::String>>
  CodeSecurityIntegrationVpcConfiguration& WithSecurityGroups(SecurityGroupsT&& value) {
    SetSecurityGroups(std::forward<SecurityGroupsT>(value));
    return *this;
  }
  template <typename SecurityGroupsT = Aws::String>
  CodeSecurityIntegrationVpcConfiguration& AddSecurityGroups(SecurityGroupsT&& value) {
    m_securityGroupsHasBeenSet = true;
    m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The TLS certificate used to establish a trusted connection to the repository
   * provider.</p>
   */
  inline const Aws::String& GetTlsCertificate() const { return m_tlsCertificate; }
  inline bool TlsCertificateHasBeenSet() const { return m_tlsCertificateHasBeenSet; }
  template <typename TlsCertificateT = Aws::String>
  void SetTlsCertificate(TlsCertificateT&& value) {
    m_tlsCertificateHasBeenSet = true;
    m_tlsCertificate = std::forward<TlsCertificateT>(value);
  }
  template <typename TlsCertificateT = Aws::String>
  CodeSecurityIntegrationVpcConfiguration& WithTlsCertificate(TlsCertificateT&& value) {
    SetTlsCertificate(std::forward<TlsCertificateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_vpcId;

  Aws::String m_vpcEndpointId;

  Aws::String m_codeConnectionsHostArn;

  Aws::Vector<Aws::String> m_subnetIds;

  Aws::Vector<Aws::String> m_securityGroups;

  Aws::String m_tlsCertificate;
  bool m_vpcIdHasBeenSet = false;
  bool m_vpcEndpointIdHasBeenSet = false;
  bool m_codeConnectionsHostArnHasBeenSet = false;
  bool m_subnetIdsHasBeenSet = false;
  bool m_securityGroupsHasBeenSet = false;
  bool m_tlsCertificateHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
