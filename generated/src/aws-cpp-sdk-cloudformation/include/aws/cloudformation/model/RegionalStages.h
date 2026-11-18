/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/RegionalStackInstancesDeployment.h>
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
 * <p>Contains the progress information for the individual stages of a StackSet
 * operation in a single Region. Currently reports the stack instances deployment
 * stage for the Region.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RegionalStages">AWS
 * API Reference</a></p>
 */
class RegionalStages {
 public:
  AWS_CLOUDFORMATION_API RegionalStages() = default;
  AWS_CLOUDFORMATION_API RegionalStages(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFORMATION_API RegionalStages& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The progress detail for the stack instances deployment stage in this
   * Region.</p>
   */
  inline const RegionalStackInstancesDeployment& GetRegionalStackInstancesDeployment() const { return m_regionalStackInstancesDeployment; }
  inline bool RegionalStackInstancesDeploymentHasBeenSet() const { return m_regionalStackInstancesDeploymentHasBeenSet; }
  template <typename RegionalStackInstancesDeploymentT = RegionalStackInstancesDeployment>
  void SetRegionalStackInstancesDeployment(RegionalStackInstancesDeploymentT&& value) {
    m_regionalStackInstancesDeploymentHasBeenSet = true;
    m_regionalStackInstancesDeployment = std::forward<RegionalStackInstancesDeploymentT>(value);
  }
  template <typename RegionalStackInstancesDeploymentT = RegionalStackInstancesDeployment>
  RegionalStages& WithRegionalStackInstancesDeployment(RegionalStackInstancesDeploymentT&& value) {
    SetRegionalStackInstancesDeployment(std::forward<RegionalStackInstancesDeploymentT>(value));
    return *this;
  }
  ///@}
 private:
  RegionalStackInstancesDeployment m_regionalStackInstancesDeployment;
  bool m_regionalStackInstancesDeploymentHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
