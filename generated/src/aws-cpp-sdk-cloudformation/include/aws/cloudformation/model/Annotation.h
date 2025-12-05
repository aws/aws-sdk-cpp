/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/AnnotationSeverityLevel.h>
#include <aws/cloudformation/model/AnnotationStatus.h>
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
 * <p>The <code>Annotation</code> data type.</p> <p>A <code>GetHookResult</code>
 * call returns detailed information and remediation guidance from Control Tower,
 * Guard, Lambda, or custom Hooks for a Hook invocation result.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/Annotation">AWS
 * API Reference</a></p>
 */
class Annotation {
 public:
  AWS_CLOUDFORMATION_API Annotation() = default;
  AWS_CLOUDFORMATION_API Annotation(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFORMATION_API Annotation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>An identifier for the evaluation logic that was used when invoking the Hook.
   * For Control Tower, this is the control ID. For Guard, this is the rule ID. For
   * Lambda and custom Hooks, this is a user-defined identifier.</p>
   */
  inline const Aws::String& GetAnnotationName() const { return m_annotationName; }
  inline bool AnnotationNameHasBeenSet() const { return m_annotationNameHasBeenSet; }
  template <typename AnnotationNameT = Aws::String>
  void SetAnnotationName(AnnotationNameT&& value) {
    m_annotationNameHasBeenSet = true;
    m_annotationName = std::forward<AnnotationNameT>(value);
  }
  template <typename AnnotationNameT = Aws::String>
  Annotation& WithAnnotationName(AnnotationNameT&& value) {
    SetAnnotationName(std::forward<AnnotationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the Hook invocation from the downstream service.</p>
   */
  inline AnnotationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AnnotationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Annotation& WithStatus(AnnotationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The explanation for the specific status assigned to this Hook invocation. For
   * example, "Bucket does not block public access".</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  Annotation& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Suggests what to change if your Hook returns a <code>FAILED</code> status.
   * For example, "Block public access to the bucket".</p>
   */
  inline const Aws::String& GetRemediationMessage() const { return m_remediationMessage; }
  inline bool RemediationMessageHasBeenSet() const { return m_remediationMessageHasBeenSet; }
  template <typename RemediationMessageT = Aws::String>
  void SetRemediationMessage(RemediationMessageT&& value) {
    m_remediationMessageHasBeenSet = true;
    m_remediationMessage = std::forward<RemediationMessageT>(value);
  }
  template <typename RemediationMessageT = Aws::String>
  Annotation& WithRemediationMessage(RemediationMessageT&& value) {
    SetRemediationMessage(std::forward<RemediationMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A URL that you can access for additional remediation guidance.</p>
   */
  inline const Aws::String& GetRemediationLink() const { return m_remediationLink; }
  inline bool RemediationLinkHasBeenSet() const { return m_remediationLinkHasBeenSet; }
  template <typename RemediationLinkT = Aws::String>
  void SetRemediationLink(RemediationLinkT&& value) {
    m_remediationLinkHasBeenSet = true;
    m_remediationLink = std::forward<RemediationLinkT>(value);
  }
  template <typename RemediationLinkT = Aws::String>
  Annotation& WithRemediationLink(RemediationLinkT&& value) {
    SetRemediationLink(std::forward<RemediationLinkT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The relative risk associated with any violations of this type.</p>
   */
  inline AnnotationSeverityLevel GetSeverityLevel() const { return m_severityLevel; }
  inline bool SeverityLevelHasBeenSet() const { return m_severityLevelHasBeenSet; }
  inline void SetSeverityLevel(AnnotationSeverityLevel value) {
    m_severityLevelHasBeenSet = true;
    m_severityLevel = value;
  }
  inline Annotation& WithSeverityLevel(AnnotationSeverityLevel value) {
    SetSeverityLevel(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_annotationName;

  AnnotationStatus m_status{AnnotationStatus::NOT_SET};

  Aws::String m_statusMessage;

  Aws::String m_remediationMessage;

  Aws::String m_remediationLink;

  AnnotationSeverityLevel m_severityLevel{AnnotationSeverityLevel::NOT_SET};
  bool m_annotationNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_remediationMessageHasBeenSet = false;
  bool m_remediationLinkHasBeenSet = false;
  bool m_severityLevelHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
