/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/DeploymentConfigMode.h>
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
 * <p>The deployment configuration for a stack operation, including the deployment
 * mode.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/DeploymentConfig">AWS
 * API Reference</a></p>
 */
class DeploymentConfig {
 public:
  AWS_CLOUDFORMATION_API DeploymentConfig() = default;
  AWS_CLOUDFORMATION_API DeploymentConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFORMATION_API DeploymentConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>Specifies the deployment mode for the stack operation. Possible values
   * are:</p> <ul> <li> <p> <code>STANDARD</code> - Use the standard deployment
   * behavior, ensuring resources are ready to serve traffic before completing the
   * operation. This is the default. You do not need to specify this value
   * explicitly.</p> </li> <li> <p> <code>EXPRESS</code> - Complete the stack
   * operation when resource configuration is applied, without waiting for resources
   * to become ready to serve traffic. Resources continue becoming ready in the
   * background.</p> </li> </ul>
   */
  inline DeploymentConfigMode GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  inline void SetMode(DeploymentConfigMode value) {
    m_modeHasBeenSet = true;
    m_mode = value;
  }
  inline DeploymentConfig& WithMode(DeploymentConfigMode value) {
    SetMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to disable rollback of the stack if the stack operation
   * fails.</p> <p>Default: <code>false</code> </p>
   */
  inline bool GetDisableRollback() const { return m_disableRollback; }
  inline bool DisableRollbackHasBeenSet() const { return m_disableRollbackHasBeenSet; }
  inline void SetDisableRollback(bool value) {
    m_disableRollbackHasBeenSet = true;
    m_disableRollback = value;
  }
  inline DeploymentConfig& WithDisableRollback(bool value) {
    SetDisableRollback(value);
    return *this;
  }
  ///@}
 private:
  DeploymentConfigMode m_mode{DeploymentConfigMode::NOT_SET};

  bool m_disableRollback{false};
  bool m_modeHasBeenSet = false;
  bool m_disableRollbackHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
