/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/RoleProvisioning.h>
#include <aws/cloudformation/model/StackInstancesDeployment.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace CloudFormation {
namespace Model {

/**
 * <p>Contains detailed progress information for the individual stages of a
 * StackSet operation: the role provisioning stage and the stack instances
 * deployment stage.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/Stages">AWS
 * API Reference</a></p>
 */
class Stages {
 public:
  AWS_CLOUDFORMATION_API Stages() = default;
  AWS_CLOUDFORMATION_API Stages(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFORMATION_API Stages& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The progress detail for the role provisioning stage. For operations that do
   * not provision roles, this stage is present with a <code>Status</code> of
   * <code>NOT_APPLICABLE</code>.</p>
   */
  inline const RoleProvisioning& GetRoleProvisioning() const { return m_roleProvisioning; }
  inline bool RoleProvisioningHasBeenSet() const { return m_roleProvisioningHasBeenSet; }
  template <typename RoleProvisioningT = RoleProvisioning>
  void SetRoleProvisioning(RoleProvisioningT&& value) {
    m_roleProvisioningHasBeenSet = true;
    m_roleProvisioning = std::forward<RoleProvisioningT>(value);
  }
  template <typename RoleProvisioningT = RoleProvisioning>
  Stages& WithRoleProvisioning(RoleProvisioningT&& value) {
    SetRoleProvisioning(std::forward<RoleProvisioningT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The progress detail for the stack instances deployment stage. This stage
   * reports the deployment of stack instances to the target accounts and Amazon Web
   * Services Regions, after any role provisioning has finished.</p>
   */
  inline const StackInstancesDeployment& GetStackInstancesDeployment() const { return m_stackInstancesDeployment; }
  inline bool StackInstancesDeploymentHasBeenSet() const { return m_stackInstancesDeploymentHasBeenSet; }
  template <typename StackInstancesDeploymentT = StackInstancesDeployment>
  void SetStackInstancesDeployment(StackInstancesDeploymentT&& value) {
    m_stackInstancesDeploymentHasBeenSet = true;
    m_stackInstancesDeployment = std::forward<StackInstancesDeploymentT>(value);
  }
  template <typename StackInstancesDeploymentT = StackInstancesDeployment>
  Stages& WithStackInstancesDeployment(StackInstancesDeploymentT&& value) {
    SetStackInstancesDeployment(std::forward<StackInstancesDeploymentT>(value));
    return *this;
  }
  ///@}
 private:
  RoleProvisioning m_roleProvisioning;

  StackInstancesDeployment m_stackInstancesDeployment;
  bool m_roleProvisioningHasBeenSet = false;
  bool m_stackInstancesDeploymentHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
