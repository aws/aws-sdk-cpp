/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/ConnectionStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The VPC connection properties returned in responses.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/VpcPropertiesOutput">AWS
 * API Reference</a></p>
 */
class VpcPropertiesOutput {
 public:
  AWS_DATAZONE_API VpcPropertiesOutput() = default;
  AWS_DATAZONE_API VpcPropertiesOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API VpcPropertiesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the VPC.</p>
   */
  inline const Aws::String& GetVpcId() const { return m_vpcId; }
  inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
  template <typename VpcIdT = Aws::String>
  void SetVpcId(VpcIdT&& value) {
    m_vpcIdHasBeenSet = true;
    m_vpcId = std::forward<VpcIdT>(value);
  }
  template <typename VpcIdT = Aws::String>
  VpcPropertiesOutput& WithVpcId(VpcIdT&& value) {
    SetVpcId(std::forward<VpcIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subnet IDs of the VPC connection.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
  inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  void SetSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds = std::forward<SubnetIdsT>(value);
  }
  template <typename SubnetIdsT = Aws::Vector<Aws::String>>
  VpcPropertiesOutput& WithSubnetIds(SubnetIdsT&& value) {
    SetSubnetIds(std::forward<SubnetIdsT>(value));
    return *this;
  }
  template <typename SubnetIdsT = Aws::String>
  VpcPropertiesOutput& AddSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the VPC connection.</p>
   */
  inline ConnectionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ConnectionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline VpcPropertiesOutput& WithStatus(ConnectionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The security group ID of the VPC connection.</p>
   */
  inline const Aws::String& GetSecurityGroupId() const { return m_securityGroupId; }
  inline bool SecurityGroupIdHasBeenSet() const { return m_securityGroupIdHasBeenSet; }
  template <typename SecurityGroupIdT = Aws::String>
  void SetSecurityGroupId(SecurityGroupIdT&& value) {
    m_securityGroupIdHasBeenSet = true;
    m_securityGroupId = std::forward<SecurityGroupIdT>(value);
  }
  template <typename SecurityGroupIdT = Aws::String>
  VpcPropertiesOutput& WithSecurityGroupId(SecurityGroupIdT&& value) {
    SetSecurityGroupId(std::forward<SecurityGroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Glue connection names associated with the VPC
   * connection.</p>
   */
  inline const Aws::Vector<Aws::String>& GetGlueConnectionNames() const { return m_glueConnectionNames; }
  inline bool GlueConnectionNamesHasBeenSet() const { return m_glueConnectionNamesHasBeenSet; }
  template <typename GlueConnectionNamesT = Aws::Vector<Aws::String>>
  void SetGlueConnectionNames(GlueConnectionNamesT&& value) {
    m_glueConnectionNamesHasBeenSet = true;
    m_glueConnectionNames = std::forward<GlueConnectionNamesT>(value);
  }
  template <typename GlueConnectionNamesT = Aws::Vector<Aws::String>>
  VpcPropertiesOutput& WithGlueConnectionNames(GlueConnectionNamesT&& value) {
    SetGlueConnectionNames(std::forward<GlueConnectionNamesT>(value));
    return *this;
  }
  template <typename GlueConnectionNamesT = Aws::String>
  VpcPropertiesOutput& AddGlueConnectionNames(GlueConnectionNamesT&& value) {
    m_glueConnectionNamesHasBeenSet = true;
    m_glueConnectionNames.emplace_back(std::forward<GlueConnectionNamesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_vpcId;

  Aws::Vector<Aws::String> m_subnetIds;

  ConnectionStatus m_status{ConnectionStatus::NOT_SET};

  Aws::String m_securityGroupId;

  Aws::Vector<Aws::String> m_glueConnectionNames;
  bool m_vpcIdHasBeenSet = false;
  bool m_subnetIdsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_securityGroupIdHasBeenSet = false;
  bool m_glueConnectionNamesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
