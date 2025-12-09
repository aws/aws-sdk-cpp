/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Describes whether StackSets automatically deploys to Organizations accounts
 * that are added to a target organization or organizational unit (OU). For more
 * information, see <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-manage-auto-deployment.html">Enable
 * or disable automatic deployments for StackSets in Organizations</a> in the
 * <i>CloudFormation User Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/AutoDeployment">AWS
 * API Reference</a></p>
 */
class AutoDeployment {
 public:
  AWS_CLOUDFORMATION_API AutoDeployment() = default;
  AWS_CLOUDFORMATION_API AutoDeployment(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFORMATION_API AutoDeployment& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>If set to <code>true</code>, StackSets automatically deploys additional stack
   * instances to Organizations accounts that are added to a target organization or
   * organizational unit (OU) in the specified Regions. If an account is removed from
   * a target organization or OU, StackSets deletes stack instances from the account
   * in the specified Regions.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline AutoDeployment& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If set to <code>true</code>, stack resources are retained when an account is
   * removed from a target organization or OU. If set to <code>false</code>, stack
   * resources are deleted. Specify only if <code>Enabled</code> is set to
   * <code>True</code>.</p>
   */
  inline bool GetRetainStacksOnAccountRemoval() const { return m_retainStacksOnAccountRemoval; }
  inline bool RetainStacksOnAccountRemovalHasBeenSet() const { return m_retainStacksOnAccountRemovalHasBeenSet; }
  inline void SetRetainStacksOnAccountRemoval(bool value) {
    m_retainStacksOnAccountRemovalHasBeenSet = true;
    m_retainStacksOnAccountRemoval = value;
  }
  inline AutoDeployment& WithRetainStacksOnAccountRemoval(bool value) {
    SetRetainStacksOnAccountRemoval(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of StackSet ARNs that this StackSet depends on for auto-deployment
   * operations. When auto-deployment is triggered, operations will be sequenced to
   * ensure all dependencies complete successfully before this StackSet's operation
   * begins.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDependsOn() const { return m_dependsOn; }
  inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }
  template <typename DependsOnT = Aws::Vector<Aws::String>>
  void SetDependsOn(DependsOnT&& value) {
    m_dependsOnHasBeenSet = true;
    m_dependsOn = std::forward<DependsOnT>(value);
  }
  template <typename DependsOnT = Aws::Vector<Aws::String>>
  AutoDeployment& WithDependsOn(DependsOnT&& value) {
    SetDependsOn(std::forward<DependsOnT>(value));
    return *this;
  }
  template <typename DependsOnT = Aws::String>
  AutoDeployment& AddDependsOn(DependsOnT&& value) {
    m_dependsOnHasBeenSet = true;
    m_dependsOn.emplace_back(std::forward<DependsOnT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  bool m_retainStacksOnAccountRemoval{false};

  Aws::Vector<Aws::String> m_dependsOn;
  bool m_enabledHasBeenSet = false;
  bool m_retainStacksOnAccountRemovalHasBeenSet = false;
  bool m_dependsOnHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
