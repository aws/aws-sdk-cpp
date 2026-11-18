/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/RegionalStages.h>
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
 * <p>Contains the progress detail for a single Region of a StackSet operation.
 * This information is returned only by
 * <a>DescribeStackSetOperation</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RegionalStatusDetail">AWS
 * API Reference</a></p>
 */
class RegionalStatusDetail {
 public:
  AWS_CLOUDFORMATION_API RegionalStatusDetail() = default;
  AWS_CLOUDFORMATION_API RegionalStatusDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFORMATION_API RegionalStatusDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The progress information for the individual stages of the operation in this
   * Region.</p>
   */
  inline const RegionalStages& GetStages() const { return m_stages; }
  inline bool StagesHasBeenSet() const { return m_stagesHasBeenSet; }
  template <typename StagesT = RegionalStages>
  void SetStages(StagesT&& value) {
    m_stagesHasBeenSet = true;
    m_stages = std::forward<StagesT>(value);
  }
  template <typename StagesT = RegionalStages>
  RegionalStatusDetail& WithStages(StagesT&& value) {
    SetStages(std::forward<StagesT>(value));
    return *this;
  }
  ///@}
 private:
  RegionalStages m_stages;
  bool m_stagesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
