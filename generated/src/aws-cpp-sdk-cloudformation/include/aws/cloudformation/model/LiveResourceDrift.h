/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Contains drift information for a resource property, including actual value,
 * previous deployment value, and drift detection timestamp.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/LiveResourceDrift">AWS
 * API Reference</a></p>
 */
class LiveResourceDrift {
 public:
  AWS_CLOUDFORMATION_API LiveResourceDrift() = default;
  AWS_CLOUDFORMATION_API LiveResourceDrift(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFORMATION_API LiveResourceDrift& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The configuration value from the previous CloudFormation deployment.</p>
   */
  inline const Aws::String& GetPreviousValue() const { return m_previousValue; }
  inline bool PreviousValueHasBeenSet() const { return m_previousValueHasBeenSet; }
  template <typename PreviousValueT = Aws::String>
  void SetPreviousValue(PreviousValueT&& value) {
    m_previousValueHasBeenSet = true;
    m_previousValue = std::forward<PreviousValueT>(value);
  }
  template <typename PreviousValueT = Aws::String>
  LiveResourceDrift& WithPreviousValue(PreviousValueT&& value) {
    SetPreviousValue(std::forward<PreviousValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current live configuration value of the resource property.</p>
   */
  inline const Aws::String& GetActualValue() const { return m_actualValue; }
  inline bool ActualValueHasBeenSet() const { return m_actualValueHasBeenSet; }
  template <typename ActualValueT = Aws::String>
  void SetActualValue(ActualValueT&& value) {
    m_actualValueHasBeenSet = true;
    m_actualValue = std::forward<ActualValueT>(value);
  }
  template <typename ActualValueT = Aws::String>
  LiveResourceDrift& WithActualValue(ActualValueT&& value) {
    SetActualValue(std::forward<ActualValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when drift was detected for this resource property.</p>
   */
  inline const Aws::Utils::DateTime& GetDriftDetectionTimestamp() const { return m_driftDetectionTimestamp; }
  inline bool DriftDetectionTimestampHasBeenSet() const { return m_driftDetectionTimestampHasBeenSet; }
  template <typename DriftDetectionTimestampT = Aws::Utils::DateTime>
  void SetDriftDetectionTimestamp(DriftDetectionTimestampT&& value) {
    m_driftDetectionTimestampHasBeenSet = true;
    m_driftDetectionTimestamp = std::forward<DriftDetectionTimestampT>(value);
  }
  template <typename DriftDetectionTimestampT = Aws::Utils::DateTime>
  LiveResourceDrift& WithDriftDetectionTimestamp(DriftDetectionTimestampT&& value) {
    SetDriftDetectionTimestamp(std::forward<DriftDetectionTimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_previousValue;

  Aws::String m_actualValue;

  Aws::Utils::DateTime m_driftDetectionTimestamp{};
  bool m_previousValueHasBeenSet = false;
  bool m_actualValueHasBeenSet = false;
  bool m_driftDetectionTimestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
