/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/MaximumSeverityLabel.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace imagebuilder {
namespace Model {

/**
 * <p>A condition that sets which findings from an on-demand AMI scan fail the
 * image. Image Builder checks the output AMI's findings against this condition
 * during the test phase.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ScanResultCondition">AWS
 * API Reference</a></p>
 */
class ScanResultCondition {
 public:
  AWS_IMAGEBUILDER_API ScanResultCondition() = default;
  AWS_IMAGEBUILDER_API ScanResultCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API ScanResultCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum severity allowed for findings on the output AMI. A finding above
   * this severity fails the image, unless <code>fixAvailable</code> excludes it.
   * Valid values are <code>INFORMATIONAL</code>, <code>LOW</code>,
   * <code>MEDIUM</code>, and <code>HIGH</code>. A <code>CRITICAL</code> finding that
   * counts always fails the image.</p>
   */
  inline MaximumSeverityLabel GetMaximumSeverityLabel() const { return m_maximumSeverityLabel; }
  inline bool MaximumSeverityLabelHasBeenSet() const { return m_maximumSeverityLabelHasBeenSet; }
  inline void SetMaximumSeverityLabel(MaximumSeverityLabel value) {
    m_maximumSeverityLabelHasBeenSet = true;
    m_maximumSeverityLabel = value;
  }
  inline ScanResultCondition& WithMaximumSeverityLabel(MaximumSeverityLabel value) {
    SetMaximumSeverityLabel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether only findings that have a fix available count toward
   * <code>maximumSeverityLabel</code>. When <code>false</code>, Image Builder counts
   * every finding. The default is <code>true</code>.</p>
   */
  inline bool GetFixAvailable() const { return m_fixAvailable; }
  inline bool FixAvailableHasBeenSet() const { return m_fixAvailableHasBeenSet; }
  inline void SetFixAvailable(bool value) {
    m_fixAvailableHasBeenSet = true;
    m_fixAvailable = value;
  }
  inline ScanResultCondition& WithFixAvailable(bool value) {
    SetFixAvailable(value);
    return *this;
  }
  ///@}
 private:
  MaximumSeverityLabel m_maximumSeverityLabel{MaximumSeverityLabel::NOT_SET};

  bool m_fixAvailable{false};
  bool m_maximumSeverityLabelHasBeenSet = false;
  bool m_fixAvailableHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
