/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZone_EXPORTS.h>

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
 * <p>The VPC connection properties used when updating a connection.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/VpcPropertiesPatch">AWS
 * API Reference</a></p>
 */
class VpcPropertiesPatch {
 public:
  AWS_DATAZONE_API VpcPropertiesPatch() = default;
  AWS_DATAZONE_API VpcPropertiesPatch(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API VpcPropertiesPatch& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  VpcPropertiesPatch& WithVpcId(VpcIdT&& value) {
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
  VpcPropertiesPatch& WithSubnetIds(SubnetIdsT&& value) {
    SetSubnetIds(std::forward<SubnetIdsT>(value));
    return *this;
  }
  template <typename SubnetIdsT = Aws::String>
  VpcPropertiesPatch& AddSubnetIds(SubnetIdsT&& value) {
    m_subnetIdsHasBeenSet = true;
    m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value));
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
  VpcPropertiesPatch& WithSecurityGroupId(SecurityGroupIdT&& value) {
    SetSecurityGroupId(std::forward<SecurityGroupIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_vpcId;

  Aws::Vector<Aws::String> m_subnetIds;

  Aws::String m_securityGroupId;
  bool m_vpcIdHasBeenSet = false;
  bool m_subnetIdsHasBeenSet = false;
  bool m_securityGroupIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
