/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/Annotation.h>
#include <aws/cloudformation/model/HookFailureMode.h>
#include <aws/cloudformation/model/HookInvocationPoint.h>
#include <aws/cloudformation/model/HookStatus.h>
#include <aws/cloudformation/model/HookTarget.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace CloudFormation {
namespace Model {
class GetHookResultResult {
 public:
  AWS_CLOUDFORMATION_API GetHookResultResult() = default;
  AWS_CLOUDFORMATION_API GetHookResultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_CLOUDFORMATION_API GetHookResultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The unique identifier of the Hook result.</p>
   */
  inline const Aws::String& GetHookResultId() const { return m_hookResultId; }
  template <typename HookResultIdT = Aws::String>
  void SetHookResultId(HookResultIdT&& value) {
    m_hookResultIdHasBeenSet = true;
    m_hookResultId = std::forward<HookResultIdT>(value);
  }
  template <typename HookResultIdT = Aws::String>
  GetHookResultResult& WithHookResultId(HookResultIdT&& value) {
    SetHookResultId(std::forward<HookResultIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific point in the provisioning process where the Hook is invoked.</p>
   */
  inline HookInvocationPoint GetInvocationPoint() const { return m_invocationPoint; }
  inline void SetInvocationPoint(HookInvocationPoint value) {
    m_invocationPointHasBeenSet = true;
    m_invocationPoint = value;
  }
  inline GetHookResultResult& WithInvocationPoint(HookInvocationPoint value) {
    SetInvocationPoint(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The failure mode of the invocation.</p>
   */
  inline HookFailureMode GetFailureMode() const { return m_failureMode; }
  inline void SetFailureMode(HookFailureMode value) {
    m_failureModeHasBeenSet = true;
    m_failureMode = value;
  }
  inline GetHookResultResult& WithFailureMode(HookFailureMode value) {
    SetFailureMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Hook that was invoked.</p>
   */
  inline const Aws::String& GetTypeName() const { return m_typeName; }
  template <typename TypeNameT = Aws::String>
  void SetTypeName(TypeNameT&& value) {
    m_typeNameHasBeenSet = true;
    m_typeName = std::forward<TypeNameT>(value);
  }
  template <typename TypeNameT = Aws::String>
  GetHookResultResult& WithTypeName(TypeNameT&& value) {
    SetTypeName(std::forward<TypeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The original public type name of the Hook when an alias is used.</p> <p>For
   * example, if you activate <code>AWS::Hooks::GuardHook</code> with alias
   * <code>MyCompany::Custom::GuardHook</code>, then <code>TypeName</code> will be
   * <code>MyCompany::Custom::GuardHook</code> and <code>OriginalTypeName</code> will
   * be <code>AWS::Hooks::GuardHook</code>. </p>
   */
  inline const Aws::String& GetOriginalTypeName() const { return m_originalTypeName; }
  template <typename OriginalTypeNameT = Aws::String>
  void SetOriginalTypeName(OriginalTypeNameT&& value) {
    m_originalTypeNameHasBeenSet = true;
    m_originalTypeName = std::forward<OriginalTypeNameT>(value);
  }
  template <typename OriginalTypeNameT = Aws::String>
  GetHookResultResult& WithOriginalTypeName(OriginalTypeNameT&& value) {
    SetOriginalTypeName(std::forward<OriginalTypeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version identifier of the Hook that was invoked.</p>
   */
  inline const Aws::String& GetTypeVersionId() const { return m_typeVersionId; }
  template <typename TypeVersionIdT = Aws::String>
  void SetTypeVersionId(TypeVersionIdT&& value) {
    m_typeVersionIdHasBeenSet = true;
    m_typeVersionId = std::forward<TypeVersionIdT>(value);
  }
  template <typename TypeVersionIdT = Aws::String>
  GetHookResultResult& WithTypeVersionId(TypeVersionIdT&& value) {
    SetTypeVersionId(std::forward<TypeVersionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version identifier of the Hook configuration data that was used during
   * invocation.</p>
   */
  inline const Aws::String& GetTypeConfigurationVersionId() const { return m_typeConfigurationVersionId; }
  template <typename TypeConfigurationVersionIdT = Aws::String>
  void SetTypeConfigurationVersionId(TypeConfigurationVersionIdT&& value) {
    m_typeConfigurationVersionIdHasBeenSet = true;
    m_typeConfigurationVersionId = std::forward<TypeConfigurationVersionIdT>(value);
  }
  template <typename TypeConfigurationVersionIdT = Aws::String>
  GetHookResultResult& WithTypeConfigurationVersionId(TypeConfigurationVersionIdT&& value) {
    SetTypeConfigurationVersionId(std::forward<TypeConfigurationVersionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Hook.</p>
   */
  inline const Aws::String& GetTypeArn() const { return m_typeArn; }
  template <typename TypeArnT = Aws::String>
  void SetTypeArn(TypeArnT&& value) {
    m_typeArnHasBeenSet = true;
    m_typeArn = std::forward<TypeArnT>(value);
  }
  template <typename TypeArnT = Aws::String>
  GetHookResultResult& WithTypeArn(TypeArnT&& value) {
    SetTypeArn(std::forward<TypeArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the Hook invocation. The following statuses are possible:</p>
   * <ul> <li> <p> <code>HOOK_IN_PROGRESS</code>: The Hook is currently running.</p>
   * </li> <li> <p> <code>HOOK_COMPLETE_SUCCEEDED</code>: The Hook completed
   * successfully.</p> </li> <li> <p> <code>HOOK_COMPLETE_FAILED</code>: The Hook
   * completed but failed validation.</p> </li> <li> <p> <code>HOOK_FAILED</code>:
   * The Hook encountered an error during execution.</p> </li> </ul>
   */
  inline HookStatus GetStatus() const { return m_status; }
  inline void SetStatus(HookStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetHookResultResult& WithStatus(HookStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message that provides additional details about the Hook invocation
   * status.</p>
   */
  inline const Aws::String& GetHookStatusReason() const { return m_hookStatusReason; }
  template <typename HookStatusReasonT = Aws::String>
  void SetHookStatusReason(HookStatusReasonT&& value) {
    m_hookStatusReasonHasBeenSet = true;
    m_hookStatusReason = std::forward<HookStatusReasonT>(value);
  }
  template <typename HookStatusReasonT = Aws::String>
  GetHookResultResult& WithHookStatusReason(HookStatusReasonT&& value) {
    SetHookStatusReason(std::forward<HookStatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the Hook was invoked.</p>
   */
  inline const Aws::Utils::DateTime& GetInvokedAt() const { return m_invokedAt; }
  template <typename InvokedAtT = Aws::Utils::DateTime>
  void SetInvokedAt(InvokedAtT&& value) {
    m_invokedAtHasBeenSet = true;
    m_invokedAt = std::forward<InvokedAtT>(value);
  }
  template <typename InvokedAtT = Aws::Utils::DateTime>
  GetHookResultResult& WithInvokedAt(InvokedAtT&& value) {
    SetInvokedAt(std::forward<InvokedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the target of the Hook invocation.</p>
   */
  inline const HookTarget& GetTarget() const { return m_target; }
  template <typename TargetT = HookTarget>
  void SetTarget(TargetT&& value) {
    m_targetHasBeenSet = true;
    m_target = std::forward<TargetT>(value);
  }
  template <typename TargetT = HookTarget>
  GetHookResultResult& WithTarget(TargetT&& value) {
    SetTarget(std::forward<TargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of objects with additional information and guidance that can help you
   * resolve a failed Hook invocation.</p>
   */
  inline const Aws::Vector<Annotation>& GetAnnotations() const { return m_annotations; }
  template <typename AnnotationsT = Aws::Vector<Annotation>>
  void SetAnnotations(AnnotationsT&& value) {
    m_annotationsHasBeenSet = true;
    m_annotations = std::forward<AnnotationsT>(value);
  }
  template <typename AnnotationsT = Aws::Vector<Annotation>>
  GetHookResultResult& WithAnnotations(AnnotationsT&& value) {
    SetAnnotations(std::forward<AnnotationsT>(value));
    return *this;
  }
  template <typename AnnotationsT = Annotation>
  GetHookResultResult& AddAnnotations(AnnotationsT&& value) {
    m_annotationsHasBeenSet = true;
    m_annotations.emplace_back(std::forward<AnnotationsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  GetHookResultResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_hookResultId;
  bool m_hookResultIdHasBeenSet = false;

  HookInvocationPoint m_invocationPoint{HookInvocationPoint::NOT_SET};
  bool m_invocationPointHasBeenSet = false;

  HookFailureMode m_failureMode{HookFailureMode::NOT_SET};
  bool m_failureModeHasBeenSet = false;

  Aws::String m_typeName;
  bool m_typeNameHasBeenSet = false;

  Aws::String m_originalTypeName;
  bool m_originalTypeNameHasBeenSet = false;

  Aws::String m_typeVersionId;
  bool m_typeVersionIdHasBeenSet = false;

  Aws::String m_typeConfigurationVersionId;
  bool m_typeConfigurationVersionIdHasBeenSet = false;

  Aws::String m_typeArn;
  bool m_typeArnHasBeenSet = false;

  HookStatus m_status{HookStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_hookStatusReason;
  bool m_hookStatusReasonHasBeenSet = false;

  Aws::Utils::DateTime m_invokedAt{};
  bool m_invokedAtHasBeenSet = false;

  HookTarget m_target;
  bool m_targetHasBeenSet = false;

  Aws::Vector<Annotation> m_annotations;
  bool m_annotationsHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
